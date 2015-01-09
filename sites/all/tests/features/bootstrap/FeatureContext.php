<?php

use Behat\Behat\Context\ClosuredContextInterface,
    Behat\Behat\Context\TranslatedContextInterface,
    Behat\Behat\Context\BehatContext;

use Behat\Behat\Event\SuiteEvent,
    Behat\Behat\Event\FeatureEvent,
    Behat\Behat\Event\ScenarioEvent,
    Behat\Behat\Event\StepEvent;

use Behat\Behat\Context\Step\Given,
    Behat\Behat\Context\Step\When,
    Behat\Behat\Context\Step\Then;

use Behat\Behat\Exception\PendingException;

use Behat\Mink\Exception\ElementException,
    Behat\Mink\Exception\ElementNotFoundException;

use Behat\Gherkin\Node\PyStringNode,
    Behat\Gherkin\Node\TableNode;

use Drupal\Component\Utility\Random;

/**
 * Features context.
 */
// class FeatureContext extends BehatContext
class FeatureContext extends Drupal\DrupalExtension\Context\DrupalContext
{
  /**
   * Initializes context.
   * Every scenario gets its own context object.
   *
   * @param array $parameters context parameters (set them up through behat.yml)
   */
  public function __construct(array $parameters)
  {
    //$this->dataRegistry = new LocalDataRegistry();
    $this->random = new Random();

    if (isset($parameters['drupal_users'])) {
      $this->drupal_users = $parameters['drupal_users'];
    }
    if (isset($parameters['email'])) {
      $this->email = $parameters['email'];
    }
    $this->mailAddresses = array();
    $this->mailMessages = array();
  }

  /**
   * Determine if the a user is already logged in.
   * Override DrupalContext::loggedIn() because we display logout link in the dropdown.
   */
  public function loggedIn() {
    $session = $this->getSession();
    $session->visit($this->locatePath('/'));
    // If a logout link is found, we are logged in. While not perfect, this is
    // how Drupal SimpleTests currently work as well.
    $element = $session->getPage();
    sleep(1);
    return $element->findLink($this->getDrupalText('log_out'));
  }

  /**
   * Authenticates a user with password from configuration.
   *
   * @Given /^I am logged in as (?:|the )"([^"]*)"(?:| user)$/
   * @Given /^I log in as (?:|the )"([^"]*)"(?:| user)$/
   */
  public function iAmLoggedInAs($username) {
    $password = $this->drupal_users[$username];
    return $this->iAmLoggedInAsTheWithThePassword($username, $password);
  }

  /**
   * @Given /^I am logged in as the "([^"]*)" with the password "([^"]*)"$/
   * @Given /^I log in as the "([^"]*)" with the password "([^"]*)"$/
   */
  public function iAmLoggedInAsTheWithThePassword($username, $password) {
    return array (
      new Given("I fill in \"Username or e-mail address\" with \"$username\""),
      new Given("I fill in \"Password\" with \"$password\""),
      new Given("I press \"Log in\""),
    );
  }

  /**
   * @Given /^that the user "([^"]*)" is not registered$/
   */
  public function thatTheUserIsNotRegistered($user_name) {
    try {
      $this->getDriver()->drush('user-cancel', array($user_name), array('yes' => NULL, 'delete-content' => NULL));
    }
    catch (Exception $e) {
      if(strpos($e->getMessage(), "Could not find a user account with the name") !== 0){
        // Print exception message if exception is different than expected
        print $e->getMessage();
      }
    }
  }

  /**
   * @Given /^I am logged in as a user "([^"]*)" with the "([^"]*)" role$/
   */
  public function iAmLoggedInAsAUserWithTheRole($user_name, $role) {
    if (isset($user_name)) {

      // Check if a user with this user name and role is already logged in.
      if ($this->loggedIn() && $this->user && isset($this->user->role) && $this->user->role == $role && isset($this->user->name) && $this->user->name == $user_name) {
        return TRUE;
      }
      elseif (isset($this->users[$user_name])) {
        // Set previously used credentials as current.
        $this->user = $this->users[$user_name];
        // Login.
        $this->login();
        return TRUE;
      }
      // Create user.
      $user = (object) array(
        'name' => $user_name,
        'pass' => $this->random->name(16),
        'role' => $role,
      );
      $user->mail = $this->getMailAddress($user_name);

      // Create a new user.
      $this->getDriver()->userCreate($user);

      $this->users[$user_name] = $this->user = $user;

      if ($role == 'authenticated user') {
        // Nothing to do.
      }
      else {
        $this->getDriver()->userAddRole($user, $role);
      }

      // Login.
      $this->login();

      return TRUE;
    }
  }

  /**
   * Return email address for given user role.
   */
  protected function getMailAddress($user) {

    if(empty($this->mailAddresses[$user])) {
      $this->mailAddresses[$user] = $this->email['username'] . '+' . str_replace('_', '.', $user) . '.'  . $this->random->name(8) . '@'. $this->email['host'];
    }

    return $this->mailAddresses[$user];
  }



  /**
   * @Given /^I wait (\d+) seconds$/
   */
  public function iWaitSeconds($arg1) {
    sleep($arg1);
  }

  /**
   * Click on the element with the provided CSS Selector
   *
   * @When /^I click on the element with css selector "([^"]*)"$/
   */
  public function iClickOnTheElementWithCSSSelector($cssSelector)
  {
    $session = $this->getSession();
    $element = $session->getPage()->find(
      'xpath',
      $session->getSelectorsHandler()->selectorToXpath('css', $cssSelector) // just changed xpath to css
    );
    if (null === $element) {
      throw new \InvalidArgumentException(sprintf('Could not evaluate CSS Selector: "%s"', $cssSelector));
    }
    $element->click();
  }

  /* Fills in WYSIWYG editor with specified id.
  *
  * @Given /^(?:|I )fill in "(?P<text>[^"]*)" in WYSIWYG editor "(?P<iframe>[^"]*)"$/
  */
  public function iFillInInWYSIWYGEditor($text, $iframe) {
    try {
      $this->getSession()->switchToIFrame($iframe);
    }
    catch (Exception $e) {
      throw new \Exception(sprintf("No iframe with id '%s' found on the page '%s'.", $iframe, $this->getSession()->getCurrentUrl()));
    }
    $this->getSession()->executeScript("document.body.innerHTML = '<p>".$text."</p>'");
    $this->getSession()->switchToIFrame();
  }

  /**
   * @Given /^I fill in "([^"]*)" in WYSIWYG editor "([^"]*)"$/
   */
  public function iFillInInWysiwygEditor2($text, $iframe) {
    try {
      $this->getSession()->switchToIFrame($iframe);
    }
    catch (Exception $e) {
      throw new \Exception(sprintf("No iframe with id '%s' found on the page '%s'.", $iframe, $this->getSession()->getCurrentUrl()));
    }
    $this->getSession()->executeScript("document.body.innerHTML = '<p>".$text."</p>'");
    $this->getSession()->switchToIFrame();
  }



  /**
   * @Given /^I create test challenge as user$/
   */
  public function iCreateTestChallengeAsUser() {
    return array(
      new When('I go to "/node/add/challenge"'),
      new When('I wait 1 seconds'),
      new When('I fill in "Title" with "Test challenge"'),
      new When('I check the box "Data"'),
      new When('I fill in "Description here" in WYSIWYG editor "edit-field-short-description-und-0-value_ifr"'),
      new When('I fill in "User need here" in WYSIWYG editor "edit-field-user-need-und-0-value_ifr"'),
      new When('I fill in "Expected benefits here" in WYSIWYG editor "edit-field-expected-benefits-und-0-value_ifr"'),
      new When('I fill in "Functional needs here" in WYSIWYG editor "edit-field-functional-needs-und-0-value_ifr"'),
      new When('I press "Submit"'),
    );
  }

  /**
   * @Given /^I create "([^"]*)" response$/
   */
  public function iCreateTestResponse($title) {
    return array(
      new When('I wait 1 seconds'),
      new When('I click "Respond to challenge"'),
      new When('I wait 1 seconds'),
      new When('I fill in "Title" with "' . $title . '"'),
      new When('I fill in "Description here" in WYSIWYG editor "edit-field-short-description-und-0-value_ifr"'),
      new When('I fill in "User need approach here" in WYSIWYG editor "edit-field-user-need-approach-und-0-value_ifr"'),
      new When('I fill in "Achieving the expected benefits here" in WYSIWYG editor "edit-field-achieving-benefits-und-0-value_ifr"'),
      new When('I fill in "Functional needs here" in WYSIWYG editor "edit-field-functional-needs-und-0-value_ifr"'),
      new When('I fill in "Other steps to achieving interoperability here" in WYSIWYG editor "edit-field-achieving-interoperability-und-0-value_ifr"'),
      new When('I fill in "Other standards to be used here" in WYSIWYG editor "edit-field-standards-to-be-used-und-0-value_ifr"'),
      new When('I press "Submit"'),
    );
  }

  /**
   * @Given /^I publish test challenge as editor$/
   */
  public function iPublishTestChallengeAsEditor() {
    return array(
      new When('I am not logged in'),
      new When('I am logged in as a user "test_editor" with the "editor" role'),
      new When('I go to "/admin/workbench/needs-review"'),
      new When('I click "Test challenge"'),
      new When('I wait 1 seconds'),
      new When('I click "Moderate"'),
      new When('I wait 1 seconds'),
      new When('I press "Apply"'),
    );
  }

  /**
   * @Given /^I publish "([^"]*)" as editor$/
   */
  public function iPublishContentAsEditor($title) {
    return array(
      new When('I am not logged in'),
      new When('I am logged in as a user "test_editor" with the "editor" role'),
      new When('I go to "/admin/workbench/needs-review"'),
      new When('I click "' . $title . '"'),
      new When('I click "Moderate"'),
      new When('I press "Apply"'),
    );
  }

  /**
   * @Given /^I change test challenge status to "([^"]*)"$/
   */
  public function iChangeTestChallengeStatusTo($status) {
    return array(
      new When('I click "Test challenge"'),
      new When('I wait 1 seconds'),
      new When('I click "Moderate"'),
      new When('I wait 1 seconds'),
      new When('I click "Edit"'),
      new When('I select the radio button "' . $status . '"'),
      new When('I fill in "field_response_close_date[und][0][value][date]" with "20/10/2030"'),
      new When('I fill in "field_response_close_date[und][0][value][time]" with "12:00"'),
      new When('I press the "Esc" key in the "field_response_close_date[und][0][value][time]" field'),
      new When('I press "Save"'),
    );
  }

  /**
   * @Given /^I change test challenge owner to "([^"]*)"$/
   */
  public function iChangeTestChallengeOwnerTo($owner) {
    return array(
      new When('I click "Test challenge"'),
      new When('I wait 1 seconds'),
      new When('I click "Moderate"'),
      new When('I wait 1 seconds'),
      new When('I click "Edit"'),
      new When('I select "' . $owner . '" from "Challenge owner"'),
      new When('I fill in "field_response_close_date[und][0][value][date]" with "20/10/2030"'),
      new When('I fill in "field_response_close_date[und][0][value][time]" with "12:00"'),
      new When('I press the "Esc" key in the "field_response_close_date[und][0][value][time]" field'),
      new When('I press "Save"'),
    );
  }


  /**
   * @Given /^I change test response status to "([^"]*)"$/
   */
  public function iChangeTestResponseStatusTo($status) {
    return array(
      new When('I click "Test response"'),
      new When('I wait 1 seconds'),
      new When('I click "Moderate"'),
      new When('I wait 1 seconds'),
      new When('I click "Edit"'),
      new When('I select the radio button "' . $status . '"'),
//      new When('I fill in "field_archive_date[und][0][value][date]" with "20/20/2020"'),
//      new When('I fill in "field_archive_date[und][0][value][time]" with "13:00"'),
//      new When('I fill in "Archive Reason here" in WYSIWYG editor "edit-field-archive-reason-und-0-value_ifr"'),
      new When('I press "Save"'),
    );
  }

  /**
   * @When /^I create relation with "([^"]*)"$/
   */
  public function iCreateRelationWith($standard_version) {

    $session = $this->getSession();
    //$current_url = $session->getCurrentUrl();

    $session->visit($this->getMinkParameter('base_url') . '/relation_add/autocomplete/profile_version/target/none/' . $standard_version);
    $content = $session->getPage()->getContent();
    preg_match("/<body[^>]*>(.*?)<\/body>/is", $content, $matches);
    $response = json_decode($matches[1], TRUE);

    $session->back();
    $session->reload();

    $field = $this->fixStepArgument('Standard Version');
    $value = $this->fixStepArgument(array_shift($response));
    $this->getSession()->getPage()->fillField($field, $value);
  }

}
