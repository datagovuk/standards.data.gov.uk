Feature: Challenge suggestion
  In order to contribute to Standards Hub
  As a Standards Hub user
  I need to be able to suggest new challenge

  @javascript
  Scenario: Login to suggest new challenge link
    Given I am not logged in
    And I go to "/challenges"
    And I click on the element with css selector "#block-site-suggest-challenge a"
    And I fill in "Username" with "user"
    And I fill in "Password" with "pass"
    And I press "Log in"
    Then I should be on "/node/add/challenge"

  @javascript
  Scenario: Creating draft challenge
    Given I am logged in as user "user"
    And I go to "/challenges"
    And I click "Suggest new challenge"
    And I wait 2 seconds
    And I fill in "Title" with "Test challenge"
    And I check the box "Data"
    And I fill in "Description here" in WYSIWYG editor "edit-field-short-description-und-0-value_ifr"
    And I fill in "User need here" in WYSIWYG editor "edit-field-user-need-und-0-value_ifr"
    And I fill in "Expected benefits here" in WYSIWYG editor "edit-field-expected-benefits-und-0-value_ifr"
    And I fill in "Functional needs here" in WYSIWYG editor "edit-field-functional-needs-und-0-value_ifr"
    When I press "Save draft"
    Then I should be on "/challenges/suggested"
    And I should see "Please note that you can come back to do more work on your contribution later, draft versions are listed"

  @javascript
  Scenario: Presence on "My draft challenges" list
    Given I am logged in as user "user"
    And I go to "/monitor-progress"
    Then the "#block-views-my-challenges-block-1" element should contain "Test challenge"

  @javascript
  Scenario: Viewing draft challenge
    Given I am logged in as user "user"
    And I go to "/monitor-progress"
    And I click "Test challenge"
    Then I should see "Unpublished"
    And I should see "Challenge: Test challenge"
    And I should see "Description here"
    And I should see "User need here"
    And I should see "Expected benefits here"
    And I should see "Functional needs here"
    And I should see "Suggested"

  @javascript
  Scenario: Submitting a challenge
    Given I am logged in as user "user"
    And I go to "/monitor-progress"
    And I click "Test challenge"
    And I click "Edit draft"
    When I press "Submit"
    Then I should see "Many thanks for your contribution. It will appear on the site very shortly, just as soon as we have confirmed that it meets the"

  @javascript
  Scenario: Challenge moderation
    Given I am logged in as user "editor"
    And I go to "/admin/workbench/needs-review"
    And I click "Test challenge"
    And I click "Moderate"
    When I press "Apply"
    Then I should see "This is the published revision."

  @javascript
  Scenario: Presence on "My challenges" list
    Given I am logged in as user "user"
    And I go to "/monitor-progress"
    Then the "#block-views-my-challenges-block-1" element should contain "You haven't got any draft challenges."
    And the "#block-views-my-challenges-block" element should contain "Test challenge"

  @javascript
  Scenario: Presence on "Suggested" list
    Given I am on "/challenges/suggested"
    Then the "#block-system-main .views-row-1" element should contain "Test challenge"
    And the "#block-system-main .views-row-1" element should contain "Description here"

  @javascript
  Scenario: Viewing published challenge
    Given I am logged in as user "user"
    And I go to "/monitor-progress"
    And I click "Test challenge"
    Then I should not see "Unpublished"
    And I should see "Challenge: Test challenge"
    And I should see "Description here"
    And I should see "User need here"
    And I should see "Expected benefits here"
    And I should see "Functional needs here"
    And I should see "Suggested"

  @javascript
  Scenario: Creating new draft
    Given I am logged in as user "user"
    And I go to "/monitor-progress"
    And I click "Test challenge"
    And I click "New draft"
    And I wait 2 seconds
    And I fill in "Title" with "Test challenge"
    And I check the box "Data"
    And I fill in "Amended description here" in WYSIWYG editor "edit-field-short-description-und-0-value_ifr"
    And I fill in "Amended user need here" in WYSIWYG editor "edit-field-user-need-und-0-value_ifr"
    And I fill in "Amended expected benefits here" in WYSIWYG editor "edit-field-expected-benefits-und-0-value_ifr"
    And I fill in "Amended functional needs here" in WYSIWYG editor "edit-field-functional-needs-und-0-value_ifr"
    When I press "Submit"
    Then I should see "Many thanks for your contribution. It will appear on the site very shortly, just as soon as we have confirmed that it meets the"

  @javascript
  Scenario: Challenge moderation
    Given I am logged in as user "editor"
    And I go to "/admin/workbench/needs-review"
    And I wait 2 seconds
    And I click "Test challenge"
    And I click "Moderate"
    When I press "Apply"
    Then I should see "This is the published revision."

  @javascript
  Scenario: Viewing published amended challenge
    Given I am logged in as user "user"
    And I go to "/monitor-progress"
    And I click "Test challenge"
    Then I should not see "Unpublished"
    And I should see "Challenge: Test challenge"
    And I should see "Amended description here"
    And I should see "Amended user need here"
    And I should see "Amended expected benefits here"
    And I should see "Amended functional needs here"
    And I should see "Suggested"

  @javascript
  Scenario: Challenge deletion
    Given I am logged in as user "editor"
    And I go to "/admin/content"
    And I click "Test challenge"
    And I click "Moderate"
    And I click "Edit"
    And I fill in "field_response_close_date[und][0][value][date]" with "20/10/2030"
    And I fill in "field_response_close_date[und][0][value][time]" with "12:00"
    When I press "Delete"
    And I press "Delete"
    Then I should see "has been deleted."