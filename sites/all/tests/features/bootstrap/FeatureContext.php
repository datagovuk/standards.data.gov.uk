<?php

use Behat\Behat\Context\ClosuredContextInterface,
    Behat\Behat\Context\TranslatedContextInterface,
    Behat\Behat\Context\BehatContext,
    Behat\Behat\Context\Step\When,
    Behat\Behat\Exception\PendingException,
    Behat\Behat\Event\SuiteEvent,
    Behat\Behat\Event\FeatureEvent;

use Behat\Gherkin\Node\PyStringNode,
    Behat\Gherkin\Node\TableNode;

/*
Should editor be able to edit any proposal assessment form?
*/
//
// Require 3rd-party libraries here:
//
//   require_once 'PHPUnit/Autoload.php';
//   require_once 'PHPUnit/Framework/Assert/Functions.php';
//

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
    // Initialize your context here
  }

  /**
  * @BeforeFeature
  */
  public static function prepare(FeatureEvent $event)
  {
    $cmd = 'drush ev \'$query = new EntityFieldQuery(); $result = $query->entityCondition("entity_type", "node")->propertyCondition("title", "Test ", "STARTS_WITH")->execute(); if (isset($result["node"])) {$nids = array_keys($result["node"]); foreach ($nids as $nid) {node_delete($nid);}}\'';
    shell_exec($cmd);
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
   * @Given /^I am logged in as user "([^"]*)"$/
   */
  public function iAmLoggedInAsUser($userName) {
    return array(
      new When('I am not logged in'),
      new When('I am on "/user/login"'),
      new When('I fill in "Username" with "' . $userName . '"'),
      new When('I fill in "Password" with "pass"'),
      new When('I press "Log in"'),
    );
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
      new When('I am logged in as user "editor"'),
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
      new When('I am logged in as user "editor"'),
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


//  /**
//   * Presses button with specified id|name|title|alt|value.
//   *
//   * @When /^(?:|I )press the "(?P<button>[^"]*)" button$/
//   */
//  public function pressButton($button) {
//    // Wait for any open autocomplete boxes to finish closing.  They block
//    // form-submission if they are still open.
//    // Use a step 'I press the "Esc" key in the "LABEL" field' to close
//    // autocomplete suggestion boxes with Mink.  "Click" events on the
//    // autocomplete suggestion do not work.
//    try {
//      $this->getSession()->wait(1000, 'jQuery("#autocomplete").length === 0');
//    }
//    catch (UnsupportedDriverActionException $e) {
//      // The jQuery probably failed because the driver does not support
//      // javascript.  That is okay, because if the driver does not support
//      // javascript, it does not support autocomplete boxes either.
//    }
//
//    // Use the Mink Extension step definition.
//    return parent::pressButton($button);
//  }

}

/*
And I check the box "Featured"
And I select "-3" from "Weight"
And I select the radio button "On" with the id "edit-field-close-comments-und-0"

Then the ".field-name-field-challenge-status .field-item" element should contain "Current"
And the ".field-name-field-response-close-date .field-item" element should contain "20/10/2030"
And the ".field-name-field-sro .field-item" element should contain "sro"
And I should see "Challenge open for responses. Submit your response by 20/10/2030"
And I should see "Respond to challenge"
And I should see "Responses (0)"
And I should see "Proposals (0)"
And I should see "Standard Profiles (0)"








 */