@javascript
Feature: Challenge suggestion
  In order to contribute to Standards Hub
  As a Standards Hub user
  I need to be able to suggest new challenge

  @api
  Scenario: Login to suggest new challenge link
    Given I am not logged in
    And I go to "/challenges"
    And I click on the element with css selector "#block-site-suggest-challenge a"
    And I wait 1 seconds
    And I fill in "Username" with "user"
    And I fill in "Password" with "pass"
    And I press "Log in"
    Then I should be on "/node/add/challenge"

  @api
  Scenario: Create draft challenge
    Given that the user "test_user" is not registered
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/challenges"
    And I wait 1 seconds
    And I click "Suggest new challenge"
    And I wait 1 seconds
    And I fill in "Title" with "Test challenge"
    And I check the box "Data"
    And I fill in "Description here" in WYSIWYG editor "edit-field-short-description-und-0-value_ifr"
    And I fill in "User need here" in WYSIWYG editor "edit-field-user-need-und-0-value_ifr"
    And I fill in "Expected benefits here" in WYSIWYG editor "edit-field-expected-benefits-und-0-value_ifr"
    And I fill in "Functional needs here" in WYSIWYG editor "edit-field-functional-needs-und-0-value_ifr"
    When I press "Save draft"
    Then I should be on "/challenges/suggested"
    And I should see "Please note that you can come back to do more work on your contribution later, draft versions are listed"
    # Presence on "My draft challenges" list
    When I go to "/monitor-progress"
    Then the "#block-views-my-challenges-block-1" element should contain "Test challenge"
    # Viewing draft challenge
    And I click "Test challenge"
    And I wait 1 seconds
    Then I should see "Unpublished"
    And I should see "Challenge: Test challenge"
    And I should see "Description here"
    And I should see "User need here"
    And I should see "Expected benefits here"
    And I should see "Functional needs here"
    And I should see "Suggested"
    # Submitting a challenge
    When I go to "/monitor-progress"
    And I wait 1 seconds
    And I click "Test challenge"
    And I wait 1 seconds
    And I click "Edit draft"
    When I press "Submit"
    Then I should see "Many thanks for your contribution. It will appear on the site very shortly, just as soon as we have confirmed that it meets the"
    # Challenge moderation
    Given I am not logged in
    And that the user "test_editor" is not registered
    And I am logged in as a user "test_editor" with the "editor" role
    And I go to "/admin/workbench/needs-review"
    And I wait 1 seconds
    And I click "Test challenge"
    And I wait 1 seconds
    And I click "Moderate"
    And I wait 1 seconds
    When I press "Apply"
    Then I should see "This is the published revision."
    # Presence on "My challenges" list
    Given I am not logged in
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/monitor-progress"
    Then the "#block-views-my-challenges-block-1" element should contain "You haven't got any draft challenges."
    And the "#block-views-my-challenges-block" element should contain "Test challenge"
    # Presence on "Suggested" list
    Given I am not logged in
    Given I am on "/challenges/suggested"
    Then the "#block-system-main .views-row-1" element should contain "Test challenge"
    And the "#block-system-main .views-row-1" element should contain "Description here"
    # Viewing published challenge
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/monitor-progress"
    And I wait 1 seconds
    And I click "Test challenge"
    Then I should not see "Unpublished"
    And I should see "Challenge: Test challenge"
    And I should see "Description here"
    And I should see "User need here"
    And I should see "Expected benefits here"
    And I should see "Functional needs here"
    And I should see "Suggested"
    # Creating new draft
    And I go to "/monitor-progress"
    And I click "Test challenge"
    And I wait 1 seconds
    And I click "New draft"
    And I wait 1 seconds
    And I fill in "Title" with "Test challenge"
    And I check the box "Data"
    And I fill in "Amended description here" in WYSIWYG editor "edit-field-short-description-und-0-value_ifr"
    And I fill in "Amended user need here" in WYSIWYG editor "edit-field-user-need-und-0-value_ifr"
    And I fill in "Amended expected benefits here" in WYSIWYG editor "edit-field-expected-benefits-und-0-value_ifr"
    And I fill in "Amended functional needs here" in WYSIWYG editor "edit-field-functional-needs-und-0-value_ifr"
    When I press "Submit"
    Then I should see "Many thanks for your contribution. It will appear on the site very shortly, just as soon as we have confirmed that it meets the"
    # Challenge moderation
    Given I am not logged in
    And I am logged in as a user "test_editor" with the "editor" role
    And I go to "/admin/workbench/needs-review"
    And I wait 1 seconds
    And I click "Test challenge"
    And I wait 1 seconds
    And I click "Moderate"
    And I wait 1 seconds
    When I press "Apply"
    Then I should see "This is the published revision."
    # Viewing published amended challenge
    Given I am not logged in
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/monitor-progress"
    And I click "Test challenge"
    Then I should not see "Unpublished"
    And I should see "Challenge: Test challenge"
    And I should see "Amended description here"
    And I should see "Amended user need here"
    And I should see "Amended expected benefits here"
    And I should see "Amended functional needs here"
    And I should see "Suggested"
    # Commenting on suggested challenge
    Given I am not logged in
    And I am logged in as a user "test_editor" with the "editor" role
    And I go to "/challenges/suggested"
    And I click "Test challenge"
    And I wait 1 seconds
    And I should see "Add new comment"
    When I fill in "Test comment here" in WYSIWYG editor "edit-comment-body-und-0-value_ifr"
    And I press "Save"
    Then I should see the success message "Your comment has been posted."
    And I should see the link "Test comment here"
    And I should see "Submitted by test_editor on"
    And I should see the link "Download comments"
    #When I follow "Download comments" - add test for downloading csv
