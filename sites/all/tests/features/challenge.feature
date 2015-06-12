@javascript
Feature: Challenge
  In order to contribute to Standards Hub
  As a Standards Hub user
  I need to be able to suggest new challenge

  @api
  Scenario: Login to suggest new challenge link
    Given I am not logged in
    And I go to "/challenges"
    And I click on the element with css selector "#block-site-suggest-challenge a"
    And I wait until the page loads
    And I fill in "Username" with "user"
    And I fill in "Password" with "pass"
    And I press "Log in"
    Then I should be on "/node/add/challenge"

  @api
  Scenario: Suggest new challenge link
    Given that the user "test_user" is not registered
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/challenges"
    And I wait until the page loads
    And I click "Suggest new challenge"
    Then I should be on "/node/add/challenge"


  @api
  Scenario: Challenge creation and moderation
    Given that the user "test_user" is not registered
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I create "Test challenge" challenge
    Then I should see the success message "Please note that you can come back to do more work on your contribution later, draft versions are listed"
    # Presence on "My draft challenges" list
    When I go to "/monitor-progress"
    Then the "#block-views-my-challenges-block-1" element should contain "Test challenge"
    # Viewing draft challenge
    And I click "Test challenge"
    And I wait until the page loads
    Then I should see "Unpublished"
    And I should see "Test challenge"
    And I should see "Description here"
    And I should not see "User need here"
    And I should not see "Expected benefits here"
    And I should not see "Functional needs here"
    When I click on the element with css selector ".field-name-field-user-need a"
    And I wait 2 seconds
    Then I should see "User need here"
    When I click on the element with css selector ".field-name-field-expected-benefits a"
    And I wait 2 seconds
    Then I should see "Expected benefits here"
    And I wait 2 seconds
    When I click on the element with css selector ".field-name-field-functional-needs a"
    Then I should see "Functional needs here"
    # Submitting a challenge
    When I go to "/monitor-progress"
    And I wait until the page loads
    And I click "Test challenge"
    And I wait until the page loads
    And I click "Edit draft"
    When I press "Submit"
    Then I should see "Many thanks for your contribution. It will appear on the site very shortly, just as soon as we have confirmed that it meets the"
    # Challenge moderation
    Given I am not logged in
    And that the user "test_editor" is not registered
    And I am logged in as a user "test_editor" with the "editor" role
    And I go to "/admin/workbench/needs-review"
    And I wait until the page loads
    And I click "Test challenge"
    And I wait until the page loads
    And I click "Moderate"
    And I wait until the page loads
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
    And the "#block-system-main .views-row-1" element should contain "Submitted by"
    And the "#block-system-main .views-row-1" element should contain "Challenge open for comments."
    And the "#block-system-main .views-row-1" element should contain "0 comments"
    # Viewing published challenge
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/monitor-progress"
    And I wait until the page loads
    And I click "Test challenge"
    Then I should not see "Unpublished"
    # Creating new draft
    And I go to "/monitor-progress"
    And I click "Test challenge"
    And I wait until the page loads
    And I click "New draft"
    And I wait until the page loads
    And I fill in "Title" with "Test challenge"
    And I check the box "Data"
    And I type "Amended description here" in the "edit-field-short-description-und-0-value" WYSIWYG editor
    And I type "Amended user need here" in the "edit-field-user-need-und-0-value" WYSIWYG editor
    And I type "Amended expected benefits here" in the "edit-field-expected-benefits-und-0-value" WYSIWYG editor
    And I type "Amended functional needs here" in the "edit-field-functional-needs-und-0-value" WYSIWYG editor
    When I press "Submit"
    Then I should see "Many thanks for your contribution. It will appear on the site very shortly, just as soon as we have confirmed that it meets the"
    # Challenge moderation
    Given I am not logged in
    And I am logged in as a user "test_editor" with the "editor" role
    And I go to "/admin/workbench/needs-review"
    And I wait until the page loads
    And I click "Test challenge"
    And I wait until the page loads
    And I click "Moderate"
    And I wait until the page loads
    When I press "Apply"
    Then I should see "This is the published revision."
    # Viewing published amended challenge
    Given I am not logged in
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/monitor-progress"
    And I click "Test challenge"
    Then I should not see "Unpublished"
    And I should see "Test challenge"
    And I should see "Description here"
    And I should not see "User need here"
    And I should not see "Expected benefits here"
    And I should not see "Functional needs here"
    When I click on the element with css selector ".field-name-field-user-need a"
    And I wait 2 seconds
    Then I should see "Amended user need here"
    When I click on the element with css selector ".field-name-field-expected-benefits a"
    And I wait 2 seconds
    Then I should see "Amended expected benefits here"
    When I click on the element with css selector ".field-name-field-functional-needs a"
    And I wait 2 seconds
    Then I should see "Amended functional needs here"

  @api
  Scenario: Commenting on suggested challenge
    Given that the user "test_editor" is not registered
    And I am logged in as a user "test_editor" with the "editor" role
    And I create "Test challenge" challenge
    # Commenting on suggested challenge
    Given I am not logged in
    Given that the user "test_commenter" is not registered
    And I am logged in as a user "test_commenter" with the "authenticated user" role
    And I go to "/challenges/suggested"
    And I click "Test challenge"
    And I wait until the page loads
    And I should see "Add new comment"
    And I type "Test comment here" in the "edit-comment-body-und-0-value" WYSIWYG editor
    And I press "Submit"
    Then I should see "Many thanks for your contribution. It will appear on the site very shortly, just as soon as we have confirmed that it meets the"
    And I should see "You can find and edit your comments in"
    # Comment awaiting approval
    And I should not see the link "Test comment here"
    Given I am not logged in
    And I am logged in as a user "test_editor" with the "editor" role
    # Comment approval
    And I go to "/admin/content/comment/approval"
    And I click "Test comment here"
    And I wait until the page loads
    And I click "approve"
    Then I should see the success message "Comment approved."
    And I should see "1 Comment"
    # Test comment visibility as test_user
    Given I am not logged in
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/challenges/suggested"
    And I click "Test challenge"
    And I wait until the page loads
    And I should see "test_commenter commented on"
    And I should not see the link "Download comments"
    And I should see "Test comment here"

  @api
  Scenario: Challenge administration
    Given that the user "test_user" is not registered
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I create "Test challenge" challenge
    And I submit my "Test challenge" challenge for moderation
    And I publish test challenge as editor
    Given I am not logged in
    And I am logged in as a user "test_editor" with the "editor" role
    When I go to "/challenges/suggested"
    And I click "Test challenge"
    And I wait until the page loads
    And I click "Edit"
    And I should not see "RESPONSE CLOSE DATE"
    And I select the radio button "Response"
    And I should see "RESPONSE CLOSE DATE"
    And I select "sro" from "Challenge owner"
    And I fill in "field_response_close_date[und][0][value][date]" with "20/10/2030"
    And I fill in "field_response_close_date[und][0][value][time]" with "12:00"
    And I press the "Esc" key in the "field_response_close_date[und][0][value][time]" field
    And I press "Save"
    And I wait until the page loads
    Then the ".field-name-field-challenge-status .field-item" element should contain "Response"
    And the ".field-name-field-sro .field-item" element should contain "sro"
    And the ".field-name-field-category .field-item" element should contain "Data"
    And I should see "0 Comments, 0 Responses"
    And I should see "Challenge open for responses"
    And I should see "Submit your response by 20/10/2030"
    And I should not see "Proposals in development"
    And I should not see "Respond to challenge"
    And I should see "Create proposal"
    When I click "3. Proposal"
    And I should not see "Respond to challenge"
    And I should see "Create proposal"
    # Presence on "Response stage" list
    When I am on "/challenges"
    Then I should see "Test challenge"
    Then the ".views-row-1 .submitted" element should contain "Submitted by"
    And I should see the link "test_user"
    And the ".views-row-1" element should contain "Challenge open for responses"
    And the ".views-row-1" element should not contain "comment"
    And the ".views-row-1" element should contain "Submit your response by 20/10/2030"
    # Change challenge status to "Proposal"
    Given I am logged in as a user "test_editor" with the "editor" role
    And I go to "/challenges"
    And I change test challenge status to "Proposal"
    And I click "Edit"
    And I fill in "field_response_close_date[und][0][value][date]" with "20/10/2010"
    And I press the "Esc" key in the "field_response_close_date[und][0][value][date]" field
    And I press "Save"
    And I wait until the page loads
    Then the ".field-name-field-challenge-status .field-item" element should contain "Proposal"
    # Presence on "Proposal phase" list
    Given I am not logged in
    And I am on "/challenges/evaluation"
    Then I should see "Test challenge"
    Then the ".views-row-1 .submitted" element should contain "Submitted by"
    And I should see the link "test_user"
    And the ".views-row-1" element should contain "Challenge closed for responses"
    And the ".views-row-1" element should not contain "Submit your response by"
    And the ".views-row-1" element should contain "Proposals in development"
    # Change challenge status to "Solution"
    Given I am logged in as a user "test_editor" with the "editor" role
    And I go to "/challenges/evaluation"
    And I change test challenge status to "Solution"
    Then the ".field-name-field-challenge-status .field-item" element should contain "Solution"
    # Presence on "Solution phase" list
    Given I am not logged in
    And I am on "/challenges/adopted"
    # Test challenge is not visible on this list because it doesn't have any solution
    Then I should not see "Test challenge"
