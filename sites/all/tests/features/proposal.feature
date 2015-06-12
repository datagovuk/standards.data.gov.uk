@javascript
Feature: Proposals
  In order to create Standards profiles
  As a challenge owner
  I need to be able to create and edit proposals

  @api
  Scenario: Create a challenge and two draft responses
    Given that the user "test_user" is not registered
    And that the user "test_editor" is not registered
    And that the user "test_sro" is not registered
    # create test_sro user to be able to set is as a challenge owner and log this user out
    And I am logged in as a user "test_sro" with the "SRO" role
    Given I am not logged in
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I create "Test challenge" challenge
    And I submit my "Test challenge" challenge for moderation
    And I publish test challenge as editor
    And I go to "/challenges/suggested"
    And I change test challenge status to "Response"
    And I go to "/challenges"
    And I change test challenge owner to "test_sro"
    Given I am not logged in
    And I am logged in as a user "test_user" with the "authenticated user" role
    When I go to "/challenges"
    And I click "Test challenge"
    And I wait until the page loads
    And I create "Test response" response
    And I publish "Test response" as editor
    And I am not logged in
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I go to "/challenges"
    And I click "Test challenge"
    And I create "Test response 2" response
    And I publish "Test response 2" as editor
    When I go to "/challenges"
    And I click "Test challenge"
    And I wait until the page loads
    Then I should see the link "Test response"
    And I should see the link "Test response 2"
    # Create a proposal which incorporates a response
    Given I am not logged in
    And I am logged in as a user "test_sro" with the "sro" role
    And I go to "/challenges"
    And I click "Test challenge"
    And I wait until the page loads
    And I click "Edit"
    #test if SRO can create proposals for challenges closed for responses
    And I fill in "field_response_close_date[und][0][value][date]" with "11/11/2011"
    And I fill in "field_response_close_date[und][0][value][time]" with "12:00"
    And I press the "Esc" key in the "field_response_close_date[und][0][value][time]" field
    And I press "Save"
    And I wait until the page loads
    And I click "Create proposal"
    And I wait until the page loads
    Then I should be on "/node/add/proposal"
    And I fill in "field_proposal_ref[und][0][nid]" with "Test response"
    And I press the "Esc" key in the "field_proposal_ref[und][0][nid]" field
    And I fill in "Title" with "Test proposal"
    And I type "Description here" in the "edit-field-short-description-und-0-value" WYSIWYG editor
    And I type "User need approach here" in the "edit-field-user-need-approach-und-0-value" WYSIWYG editor
    And I type "Achieving the expected benefits here" in the "edit-field-achieving-benefits-und-0-value" WYSIWYG editor
    And I type "Functional needs here" in the "edit-field-functional-needs-und-0-value" WYSIWYG editor
    And I type "Other steps to achieving interoperability here" in the "edit-field-achieving-interoperability-und-0-value" WYSIWYG editor
    And I type "Other standards to be used  here" in the "edit-field-standards-to-be-used-und-0-value" WYSIWYG editor
    And I select the radio button "Proposal"
    And I click on the element with css selector "body"
    When I press "Save"
    Then I should see the link "Test challenge"
    And I should see the link "Test response"
    And I should see the link "Data"
    And I should not see "Unpublished"
    #make that don't require refreshing "Test response" to see "Incorporated in ..." message
    And I click "Test response"
    And I wait until the page loads
    And I click "Test challenge"
    And I wait until the page loads
    And I should see "[Incorporated in a proposal]"
    And I should see "Create proposal"
    # Incorporate another one response
    When I go to "/admin/content"
    And I click "Test proposal"
    And I wait until the page loads
    And I click "Edit"
    And I fill in "field_proposal_ref[und][1][nid]" with "Test response 2"
    And I press the "Esc" key in the "field_proposal_ref[und][1][nid]" field
    When I press "Save"
    Then I should see the link "Test response 2"
    # Presence on "Proposals" tab at the bottom of the challenge
    Given I am not logged in
    And I go to "/challenges"
    And I wait until the page loads
    And I click "Test challenge"
    And I wait until the page loads
    And I click "3. Proposal"
    And I wait 1 second
    And I should not see "Test response"
    And I should not see "Test response 2"
    And I should not see "[Incorporated in a proposal]"
    And I should see "Test proposal"
    And I should see "Submitted by"
    And I should see "0 Comments"
    And I should not see "Create proposal"
    # Presence of proposal comment and assessment forms
    Given I am not logged in
    And I am logged in as a user "test_sro" with the "sro" role
    And I go to "/challenges"
    And I wait until the page loads
    And I click "Test challenge"
    And I wait until the page loads
    And I click "Edit"
    And I fill in "field_response_close_date[und][0][value][date]" with "20/10/2010"
    And I fill in "field_response_close_date[und][0][value][time]" with "12:00"
    And I press the "Esc" key in the "field_response_close_date[und][0][value][time]" field
    And I fill in "field_proposal_close_date[und][0][value][date]" with "20/10/2030"
    And I fill in "field_proposal_close_date[und][0][value][time]" with "12:00"
    And I press the "Esc" key in the "field_proposal_close_date[und][0][value][time]" field
    And I press "Save"
    Then I should see "Challenge closed for responses"
    And I should see "Proposal open for comment by 20/10/2030 - 12:00"
    And I go to "/monitor-progress"
    And I click "Test proposal"
    And I should see "Add new comment"
    And I should see "Comment"
    And I should see an "#comment-form #edit-submit" element
    And I should see "Link to Standard Version"
    And I should see "Standard Version"
    And I should see "Standard Usage"
    And I should see "Under consideration"
    And I should see "Recommended"
    And I should see "Adopted"
    And I should see "Rejected"
    And I should see "Under review"
    And I should see "Deprecated"
    And I should see "Applicability"
    And I should see "Maturity"
    And I should see "Openness"
    And I should see "Intellectual property rights"
    And I should see "Market support"
    And I should see "Potential"
    And I should see "Coherence"
    And I should see "Other"
    And I should see "Area of application"
    And I should see "Does the formal specification address and facilitate interoperability between public administrations?"
    And I should see "Is this question being considered for the standards associated with this proposal?"
    And I should see "Knock-Out?"
    And I should see "Note that a \"No\" response to a knock-out question means that this standard is not suitable for use in this context and will not be considered further."
    And I should see "Response"
    And I should see "Quantification "
    And I should see "Cost in £"
    And I should see "Justification "
    And I should see an "#relation-add-block-form #edit-save" element
    # Block all further comments on proposals
    Given I am logged in as a user "test_sro" with the "sro" role
    And I go to "/challenges"
    And I click "Test challenge"
    And I wait until the page loads
    And I click "Edit"
    And I wait until the page loads
    And I select the radio button "Proposal"
    And I fill in "field_response_close_date[und][0][value][date]" with "20/10/2010"
    And I fill in "field_response_close_date[und][0][value][time]" with "12:00"
    And I press the "Esc" key in the "field_response_close_date[und][0][value][time]" field
    And I fill in "field_proposal_close_date[und][0][value][date]" with "20/10/2010"
    And I fill in "field_proposal_close_date[und][0][value][time]" with "12:00"
    And I press the "Esc" key in the "field_proposal_close_date[und][0][value][time]" field
    When I press "Save"
    And I click "Test proposal"
    Then I should not see "Add new comment"
    And I should not see an "#comment-form #edit-submit" element
    # Proposal evaluation
    Given I am logged in as a user "test_sro" with the "sro" role
    And I go to "/admin/content"
    And I click "Test proposal"
    And I wait until the page loads
    And I follow "Edit"
    And I wait 2 seconds
    And I click "Proposal evaluation"
    And I wait 2 seconds
    And I fill in "field_eval_meeting_minutes[und][0][nid]" with "Open Standards Board Terms of Reference"
    And I press the "Esc" key in the "field_eval_meeting_minutes[und][0][nid]" field
    And I type "Needs the Standards Profile meet here" in the "edit-field-eval-needs-to-meet-und-0-value" WYSIWYG editor
    And I type "Organisations or functional areas here" in the "edit-field-eval-which-organisations-und-0-value" WYSIWYG editor
    # Investigate why 'Assessment summary' visibility depends in weird way on field_eval_recommendation
    And I select the radio button "Recommended for use" with the id "edit-field-eval-recommendation-und-1"
    And I type "Why its the most effective course of action" in the "edit-field-eval-why-most-effective-und-0-value" WYSIWYG editor
    #And I type "Summary of the assessment here" in the "edit-field-eval-assessment-summary-und-0-value" WYSIWYG editor
    #And I type "Alternatives considered here" in the "edit-field-eval-alternatives-und-0-value" WYSIWYG editor
    And I type "Effect on service delivery here" in the "edit-field-eval-service-delivery-und-0-value" WYSIWYG editor
    And I type "Backwards compatibility issues here" in the "edit-field-eval-back-compatibility-und-0-value" WYSIWYG editor
    And I type "What might be on the horizon here" in the "edit-field-eval-horizon-und-0-value" WYSIWYG editor
    And I type "Benefits or opportunities here" in the "edit-field-eval-benefits-und-0-value" WYSIWYG editor
    And I type "When will begin and when will be completed here" in the "edit-field-eval-begin-completed-und-0-value" WYSIWYG editor
    And I type "Non-technical barriers here" in the "edit-field-eval-barriers-und-0-value" WYSIWYG editor
    And I type "Trials here" in the "edit-field-eval-trials-und-0-value" WYSIWYG editor
    And I fill in "field_eval_people_involved[und][0][uid]" with "user"
    And I press the "Esc" key in the "field_eval_people_involved[und][0][uid]" field
    And I fill in "field_eval_sp_members_involved[und][0][uid]" with "user"
    And I press the "Esc" key in the "field_eval_sp_members_involved[und][0][uid]" field
    And I fill in "field_eval_review_date[und][0][value][date]" with "01/01/2020"
    And I fill in "field_eval_review_date[und][0][value][time]" with "14:00"
    And I type "Notify the European Commission here" in the "edit-field-eval-notify-ec-und-0-value" WYSIWYG editor
    And I select the radio button "Compulsory" with the id "edit-field-eval-osb-decission-und-2"
    When I press "Save"
    And I wait until the page loads
    Then I should see "has been updated."
    And I should see "Needs the Standards Profile meet here"
    And I should see "Organisations or functional areas here"
    And I should see "Compulsory"
    And I should see "Why its the most effective course of action"
    #And I should see "Summary of the assessment here"
    #And I should see "Alternatives considered here"
    And I should see "Effect on service delivery here"
    And I should see "Backwards compatibility issues here"
    And I should see "What might be on the horizon here"
    And I should see "Benefits or opportunities here"
    And I should see "When will begin and when will be completed here"
    And I should see "Non-technical barriers here"
    And I should see "Trials here"
    And I should see "Wednesday, 1 January 2020 - 2:00pm"
    And I should see "Notify the European Commission here"
    And I should see "Compulsory"
    And I should see the link "Open Standards Board Terms of Reference"
    And I should see the link "user"

    #Test this:
    #And I click "Edit"
    #And I wait until the page loads
    #And I fill in "field_proposal_ref[und][0][nid]" with "Test response"
    #And I press the "Esc" key in the "field_proposal_ref[und][0][nid]" field
    #When I press "Save"
    #And I should see "[Incorporated in a solution]"



# Make this scenario:
#I created a proposal for the Describing and sharing our metadata challenge and saved it as a draft.
#It has not yet been published.
#The notification about the phase of the challenge reads "Challenge closed for responses. Proposal(s) open for comment."
#This notification should not be displayed until the proposal is published.