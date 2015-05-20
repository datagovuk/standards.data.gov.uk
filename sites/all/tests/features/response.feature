@javascript
Feature: Response to Challenge
  In order to contribute to Standards Hub
  As a Standards Hub user
  I need to be able to respond to challenge

  @api
  Scenario: Suggesting new challenge and testing "My response" form
    Given that the user "test_user" is not registered
    And that the user "test_editor" is not registered
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I create test challenge as user
    And I publish test challenge as editor
    And I go to "/challenges/suggested"
    And I change test challenge status to "Current"
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/challenges"
    And I click "Test challenge"
    And I wait 1 seconds
    And I click "Respond to challenge"
    Then I should see "My response"
    And I should see "Challenge: Test challenge"
    And I should see "View challenge"
    And I should see "Title"
    And I should see "A short title that describes how your response addresses the challenge. Avoid acronyms or jargon."
    And I should see "Short description"
    And I should see "A short summary of how this approach would address the challenge."
    And I should see "User need approach"
    And I should see "How this approach would address the user need(s) described in the challenge."
    And I should see "Achieving the expected benefits"
    And I should see "How this approach would aim to realise the benefits for users, and the operational, social or environmental benefits that the challenge describes."
    And I should see "Functional needs"
    And I should see "How this approach addresses the functional needs that the challenge describes."
    And I should see "Other steps to achieving interoperability"
    And I should see "A summary of any additional legal, semantic or operational issues that you think we need to address."
    And I should see "Standards to be used"
    And I should see "Select the standards that you believe should or must be used. Hold down the control key to select more than one from this list. If the standard that you think we should use doesn't appear here, suggest one below."
    And I should see "Other standards to be used"
    And I should see "If the standard you'd like to suggest doesn't appear in the list above, suggest a new one here."
    And I should see "Keywords"
    And I should see "Please provide any comma separated keywords that may assist with searches."
    # Creating draft response
    Given I go to "/challenges"
    And I click "Test challenge"
    And I wait 1 seconds
    And I click "Respond to challenge"
    And I wait 1 seconds
    And I fill in "Keywords" with "test keyword"
    And I press the "Esc" key in the "Keywords" field
    And I fill in "Title" with "Test response"
    And I fill in "Description here" in WYSIWYG editor "edit-field-short-description-und-0-value_ifr"
    And I fill in "User need approach here" in WYSIWYG editor "edit-field-user-need-approach-und-0-value_ifr"
    And I fill in "Achieving the expected benefits here" in WYSIWYG editor "edit-field-achieving-benefits-und-0-value_ifr"
    And I fill in "Functional needs here" in WYSIWYG editor "edit-field-functional-needs-und-0-value_ifr"
    And I fill in "Other steps to achieving interoperability here" in WYSIWYG editor "edit-field-achieving-interoperability-und-0-value_ifr"
    And I fill in "Other standards to be used  here" in WYSIWYG editor "edit-field-standards-to-be-used-und-0-value_ifr"
    And I select "HTTP 1.1" from "Standards to be used"
    When I press "Save draft"
    Then I should see "Please note that you can come back to do more work on your contribution later, draft versions are listed in"
    And I should see "Unpublished"
    And I should see "Test response"
    And I should see the link "Test challenge"
    And I should see the link "Data"
    And I should see the link "test keyword"
    And I should see "Description here"
    And I should see "User need approach here"
    And I should see "Achieving the expected benefits here"
    And I should see "Functional needs here"
    And I should see "Other steps to achieving interoperability here"
    And I should see the link "HTTP 1.1"
    And I should see "Other standards to be used here"
    And I should see "Response"
    # Presence on "My draft responses" list
    And I go to "/monitor-progress"
    Then the "#block-views-my-proposals-block-1" element should contain "Test response"
    # Submitting response
    And I go to "/monitor-progress"
    And I click "Test response"
    And I wait 1 seconds
    And I click "Edit draft"
    When I press "Submit"
    Then I should see "Many thanks for your contribution. It will appear on the site very shortly, just as soon as we have confirmed that it meets the"
    # Response moderation
    Given I am logged in as a user "test_editor" with the "editor" role
    And I go to "/admin/workbench/needs-review"
    And I click "Test response"
    And I wait 1 seconds
    And I click "Moderate"
    And I wait 1 seconds
    When I press "Apply"
    Then I should see "This is the published revision."
    # Presence on "My responses" list
    Given I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/monitor-progress"
    Then the "#block-views-my-proposals-block" element should contain "Test response"
    # Presence on "Responses" list
    Given I am not logged in
    And I am on "/challenges"
    And I click "Test challenge"
    And I wait 1 seconds
    Then the "#quicktabs-tabpage-test-0 .views-row-1" element should contain "Test response"
    And the "#quicktabs-tabpage-test-0 .views-row-1" element should contain "Description here"
    #  Commenting on Responses
    Given I am logged in as a user "test_user" with the "authenticated user" role
    And I am on "/challenges"
    And I click "Test challenge"
    And I wait 1 seconds
    And I click "Test response"
    And I wait 1 seconds
    And I fill in "My comment" in WYSIWYG editor "edit-comment-body-und-0-value_ifr"
    When I press "Save"
    Then I should see "Many thanks for your contribution. It will appear on the site very shortly, just as soon as we have confirmed that it meets the"
    # Publishing Comments
    Given I am logged in as a user "test_editor" with the "editor" role
    And I am on "/admin/content/comment/approval"
    And I click "My comment"
    And I wait 1 seconds
    When I click "approve"
    And I wait 1 seconds
    Then I should see the message "Comment approved."
    # Approved comment visibility for anonymous user
    Given I am not logged in
    And I am on "/challenges"
    And I click "Test challenge"
    And I wait 1 seconds
    And I click "Test response"
    And I wait 1 seconds
    Then I should see "My comment"
    # Change status to "Archived"
    Given I am logged in as a user "test_editor" with the "editor" role
    And I go to "/admin/content"
    And I click "Test response"
    And I wait 1 seconds
    And I click "Moderate"
    And I wait 1 seconds
    And I click "Edit"
    And I change test response status to "Archived"
    And I go to "/challenges"
    And I click "Test challenge"
    And I wait 1 seconds
    Then the "#quicktabs-tabpage-test-0 .views-row-1" element should contain "Test response"
    And the "#quicktabs-tabpage-test-0 .views-row-1" element should contain "Description here"
    And the "#quicktabs-tabpage-test-0 .views-row-1" element should contain "[Archived]"
