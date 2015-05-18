@javascript
Feature: Challenge administration
  In order to administer challenges Standards Hub
  As a Standards Hub editor
  I need to be able to moderate and edit challenges

# Challenge creation

  @api
  Scenario: Challenge administration process
    # Suggesting new challenge
    Given that the user "test_user" is not registered
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/challenges"
    And I click "Suggest new challenge"
    And I wait 1 seconds
    And I fill in "Title" with "Test challenge"
    And I check the box "Data"
    And I wait 1 seconds
    And I fill in "Description here" in WYSIWYG editor "edit-field-short-description-und-0-value_ifr"
    And I fill in "User need here" in WYSIWYG editor "edit-field-user-need-und-0-value_ifr"
    And I fill in "Expected benefits here" in WYSIWYG editor "edit-field-expected-benefits-und-0-value_ifr"
    And I fill in "Functional needs here" in WYSIWYG editor "edit-field-functional-needs-und-0-value_ifr"
    When I press "Submit"
    Then I should be on "/challenges/suggested"
    And I should see "Many thanks for your contribution. It will appear on the site very shortly, just as soon as we have confirmed that it meets the"
    # Challenge moderation
    Given I am not logged in
    And that the user "test_editor" is not registered
    And I am logged in as a user "test_editor" with the "editor" role
    And I go to "/admin/workbench/needs-review"
    And I click "Test challenge"
    And I wait 1 seconds
    And I click "Moderate"
    And I wait 1 seconds
    When I press "Apply"
    Then I should see "This is the published revision."
    # Change challenge status to "Current"
    When I go to "/challenges/suggested"
    And I click "Test challenge"
    And I wait 1 seconds
    And I click "Moderate"
    And I wait 1 seconds
    And I click "Edit"
    And I should not see "RESPONSE CLOSE DATE"
    And I select the radio button "Current"
    And I should see "RESPONSE CLOSE DATE"
    And I select "sro" from "Challenge owner"
    And I check the box "Featured"
    And I select "-3" from "Weight"
    And I fill in "field_response_close_date[und][0][value][date]" with "20/10/2030"
    And I fill in "field_response_close_date[und][0][value][time]" with "12:00"
    And I press the "Esc" key in the "field_response_close_date[und][0][value][time]" field
    And I press "Save"
    And I wait 1 seconds
    Then the ".field-name-field-challenge-status .field-item" element should contain "Current"
    And the ".field-name-field-sro .field-item" element should contain "sro"
    And I should see "Challenge open for responses. Submit your response by 20/10/2030"
    And I should see "Create proposal"
    And I should see "Responses (0)"
    And I should see "Proposals (0)"
    And I should see "Standards Profiles (0)"
    # Presence on "Challnges" list on the home page
    Given I am not logged in
    And I am on the homepage
    Then the ".region-five-first" element should contain "Test challenge"
    # Presence on "Current challenges" list
    When I am on "/challenges"
    Then I should see "Test challenge"
    And I should see "Description here"
    And I should see "Challenge open for responses. Submit your response by 20/10/2030"
    # Change challenge status to "Under evaluation"
    Given I am logged in as a user "test_editor" with the "editor" role
    And I go to "/challenges"
    And I change test challenge status to "Under evaluation"
    Then the ".field-name-field-challenge-status .field-item" element should contain "Under evaluation"
    # Presence on "Under evaluation" list
    Given I am not logged in
    And I am on "/challenges/evaluation"
    Then I should see "Test challenge"
    And I should see "Description here"
    And I should not see "Challenge open for responses. Submit your response by 20/10/2030"
    # Change challenge status to "Completed"
    Given I am logged in as a user "test_editor" with the "editor" role
    And I go to "/challenges/evaluation"
    And I change test challenge status to "Completed"
    Then the ".field-name-field-challenge-status .field-item" element should contain "Completed"
    # Presence on "Completed" list
    Given I am not logged in
    And I am on "/challenges/completed"
    Then I should see "Test challenge"
    And I should see "Description here"
    And I should not see "Challenge open for responses. Submit your response by 20/10/2030"
    # Change challenge status to "Archived"
    Given I am logged in as a user "test_editor" with the "editor" role
    And I go to "/challenges/completed"
    And I change test challenge status to "Archived"
    Then the ".field-name-field-challenge-status .field-item" element should contain "Archived"
    # Presence on "Archived" list
    Given I am not logged in
    And I am on "/challenges/archived"
    Then I should see "Test challenge"
    And I should see "Description here"
    And I should not see "Challenge open for responses. Submit your response by 20/10/2030"
