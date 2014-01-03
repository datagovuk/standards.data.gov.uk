Feature: Challenge administration
  In order to administer challenges Standards Hub
  As a Standards Hub editor
  I need to be able to moderate and edit challenges

# Challenge creation

  @javascript
  Scenario: Suggesting new challenge
    Given I am logged in as user "user"
    And I go to "/challenges"
    And I click "Suggest new challenge"
    And I fill in the following:
      | Title | Test challenge |
    And I check the box "Data"
    And I fill in "Description here" in WYSIWYG editor "edit-field-short-description-und-0-value_ifr"
    And I fill in "User need here" in WYSIWYG editor "edit-field-user-need-und-0-value_ifr"
    And I fill in "Expected benefits here" in WYSIWYG editor "edit-field-expected-benefits-und-0-value_ifr"
    And I fill in "Functional needs here" in WYSIWYG editor "edit-field-functional-needs-und-0-value_ifr"
    When I press "Submit"
    Then I should be on "/challenges/suggested"
    And I should see "Many thanks for your contribution. It will appear on the site very shortly, just as soon as we have confirmed that it meets the"

  @javascript
  Scenario: Challenge moderation
    Given I am logged in as user "editor"
    And I go to "/admin/workbench/needs-review"
    And I click "Test challenge"
    And I click "Moderate"
    When I press "Apply"
    Then I should see "This is the published revision."

# Challenge administration

  @javascript
  Scenario: Change challenge status to "Current"
    Given I am logged in as user "editor"
    And I go to "/challenges/suggested"
    And I click "Test challenge"
    And I click "Moderate"
    And I click "Edit"
    And I select the radio button "Current"

    And I select "sro" from "Challenge owner"
    And I check the box "Featured"
    And I select "-3" from "Weight"
    And I select the radio button "On" with the id "edit-field-close-comments-und-0"

    And I fill in "field_response_close_date[und][0][value][date]" with "20/10/2030"
    And I fill in "field_response_close_date[und][0][value][time]" with "12:00"
    And I press "Save"
    Then the ".field-name-field-challenge-status .field-item" element should contain "Current"
    And the ".field-name-field-response-close-date .field-item" element should contain "20/10/2030"
    And the ".field-name-field-sro .field-item" element should contain "sro"
    And I should see "Challenge open for responses. Submit your response by 20/10/2030"
    And I should see "Respond to challenge"
    And I should see "Responses (0)"
    And I should see "Proposals (0)"
    And I should see "Standard Profiles (0)"

 @javascript
  Scenario: Presence on "Current" list
    Given I am on "/challenges"
    Then I should see "Test challenge"
    And I should see "Description here"
    And I should see "Challenge open for responses. Submit your response by 20/10/2030"

  @javascript
  Scenario: Change challenge status to "Under evaluation"
    Given I am logged in as user "editor"
    And I go to "/challenges"
    And I change test challenge status to "Under evaluation"
    Then the ".field-name-field-challenge-status .field-item" element should contain "Under evaluation"

  @javascript
  Scenario: Presence on "Under evaluation" list
    Given I am on "/challenges/evaluation"
    Then I should see "Test challenge"
    And I should see "Description here"
    And I should not see "Challenge open for responses. Submit your response by 20/10/2030"

   @javascript
  Scenario: Change challenge status to "Completed"
    Given I am logged in as user "editor"
    And I go to "/challenges/evaluation"
    And I change test challenge status to "Completed"
    Then the ".field-name-field-challenge-status .field-item" element should contain "Completed"

  @javascript
  Scenario: Presence on "Completed" list
    Given I am on "/challenges/completed"
    Then I should see "Test challenge"
    And I should see "Description here"
    And I should not see "Challenge open for responses. Submit your response by 20/10/2030"

  @javascript
  Scenario: Change challenge status to "Archived"
    Given I am logged in as user "editor"
    And I go to "/challenges/completed"
    And I change test challenge status to "Archived"
    Then the ".field-name-field-challenge-status .field-item" element should contain "Archived"

  @javascript
  Scenario: Presence on "Archived" list
    Given I am on "/challenges/archived"
    Then I should see "Test challenge"
    And I should see "Description here"
    And I should not see "Challenge open for responses. Submit your response by 20/10/2030"

# Challenge deletion

  @javascript
  Scenario: Challenge deletion
    Given I am logged in as user "editor"
    And I go to "/admin/content"
    And I wait 2 seconds
    And I click "Test challenge"
    And I click "Moderate"
    And I click "Edit"
    And I fill in "field_response_close_date[und][0][value][date]" with "20/10/2030"
    And I fill in "field_response_close_date[und][0][value][time]" with "12:00"
    When I press "Delete"
    And I press "Delete"
    Then I should see "has been deleted."