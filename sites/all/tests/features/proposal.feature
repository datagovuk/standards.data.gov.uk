Feature: Proposals
  In order to create Standard profiles
  As a challenge owner
  I need to be able to create and edit proposals

  @javascript
  Scenario: Create a challenge and two draft responses
    Given I am logged in as user "user"
    And I create test challenge as user
    And I publish test challenge as editor
    And I go to "/challenges/suggested"
    And I change test challenge status to "Current"
    And I go to "/challenges"
    And I change test challenge owner to "sro"
    And I am logged in as user "user"
    And I go to "/challenges"
    And I click "Test challenge"
    And I create "Test response" response
    And I publish "Test response" as editor
    And I am logged in as user "user"
    And I go to "/challenges"
    And I click "Test challenge"
    And I create "Test response 2" response
    And I publish "Test response 2" as editor
    When I go to "/challenges"
    And I click "Test challenge"
    Then I should see the link "Test response"
    And I should see the link "Test response 2"

  @javascript
  Scenario: Create a proposal which incorporates a response
    Given I am logged in as user "sro"
    And I go to "/challenges"
    And I click "Test challenge"
    And I click "Respond to challenge"
    And I wait 1 seconds
    And I fill in "field_proposal_ref[und][0][nid]" with "Test response"
    And I press the "Esc" key in the "field_proposal_ref[und][0][nid]" field
    And I fill in "Title" with "Test proposal"
    And I fill in "Description here" in WYSIWYG editor "edit-field-short-description-und-0-value_ifr"
    And I fill in "User need approach here" in WYSIWYG editor "edit-field-user-need-approach-und-0-value_ifr"
    And I fill in "Achieving the expected benefits here" in WYSIWYG editor "edit-field-achieving-benefits-und-0-value_ifr"
    And I fill in "Functional needs here" in WYSIWYG editor "edit-field-functional-needs-und-0-value_ifr"
    And I fill in "Other steps to achieving interoperability here" in WYSIWYG editor "edit-field-achieving-interoperability-und-0-value_ifr"
    And I fill in "Other standards to be used here" in WYSIWYG editor "edit-field-standards-to-be-used-und-0-value_ifr"
    And I select the radio button "Proposal"
    And I click on the element with css selector "body"
    When I press "Save"
    #Then I should be on "/proposal/test-proposal"
    Then I should see the link "Test challenge"
    And I should see the link "Test response"
    And I should see the link "Data"
#TODO - make SRO role skip moderation
#    And I should not see "Unpublished"

  @javascript
  Scenario: Incorporate another one response
    Given I am logged in as user "sro"
    And I go to "/admin/content"
    And I click "Test proposal"
#TODO - should be just "Edit"
    And I wait 1 seconds
    And I click "Edit draft"
    And I fill in "field_proposal_ref[und][1][nid]" with "Test response 2"
    And I press the "Esc" key in the "field_proposal_ref[und][1][nid]" field
    When I press "Save"
    Then I should see the link "Test response 2"

  @javascript
  Scenario: Moderate test proposal - this is temporary and shouldn't be required
    Given I am logged in as user "editor"
    And I go to "/admin/content"
    And I click "Test proposal"
    And I wait 1 seconds
    And I click "Moderate"
    And I wait 1 seconds
    When I press "Apply"
    And I wait 1 seconds
    And I press "Apply"
    Then I should see "This is the published revision."

  @javascript
  Scenario: Presence on "Proposals" tab at the bottom of the challenge
    Given I am not logged in
    And I go to "/challenges"
    And I click "Test challenge"
    Then I should see "Responses (2)"
    Then I should see "Proposals (1)"
    Then I should see "Standard Profiles (0)"
    And I should see "Test proposal"
    And I should see "Description here"

  @javascript
  Scenario: Presence of proposal comment and assessment forms
    Given I am logged in as user "sro"
    And I go to "/monitor-progress"
    And I click "Test proposal"
    Then I should see "Add new comment"
    And I should see "Comment"
    And I should see an "#comment-form #edit-submit" element
    And I should see "Link to Standard Version"
    And I should see "Standard Version"
    And I should see "Standard Usage"
    And I should see "Under consideration"
    And I should see "Recommended"
    And I should see "Compulsory"
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

  @javascript
  Scenario: Block all further comments on proposals
#TODO should be SRO not editor
    Given I am logged in as user "editor"
    And I go to "/challenges"
    And I click "Test challenge"
    And I wait 1 seconds
    And I click "Moderate"
    And I wait 1 seconds
    And I click "Edit"
    And I select the radio button "On" with the id "edit-field-close-comments-und-0"
    When I press "Save"
    And I click "Test proposal"
    Then I should not see "Add new comment"
    And I should not see an "#comment-form #edit-submit" element

  @javascript
  Scenario: Proposal evaluation
#should be sro not editor???
    Given I am logged in as user "editor"
    And I go to "/admin/content"
    And I click "Test proposal"
    And I wait 1 seconds
    And I click "Moderate"
    And I wait 1 seconds
    And I click "Edit"
    And I click "Proposal evaluation"
    And I wait 1 seconds
    And I fill in "field_eval_meeting_minutes[und][0][nid]" with "Open Standards Board Terms of Reference"
    And I press the "Esc" key in the "field_eval_meeting_minutes[und][0][nid]" field
    And I fill in "field_eval_needs_to_meet[und][0][value]" with "Needs the Standard Profile meet here"
    And I fill in "field_eval_which_organisations[und][0][value]" with "Organisations or functional areas here"
    And I select the radio button "Recommended for use" with the id "edit-field-eval-recommendation-und-1"
    And I fill in "field_eval_why_most_effective[und][0][value]" with "Why it's the most effective course of action"
    And I fill in "Summary of the assessment here" in WYSIWYG editor "edit-field-eval-assessment-summary-und-0-value_ifr"
    And I fill in "Alternatives considered here" in WYSIWYG editor "edit-field-eval-alternatives-und-0-value_ifr"
    And I fill in "field_eval_service_delivery[und][0][value]" with "Effect on service delivery here"
    And I fill in "field_eval_back_compatibility[und][0][value]" with "Backwards compatibility issues here"
    And I fill in "field_eval_horizon[und][0][value]" with "What might be on the horizon here"
    And I fill in "field_eval_benefits[und][0][value]" with "Benefits or opportunities here"
    And I fill in "field_eval_begin_completed[und][0][value]" with "When will begin and when will be completed here"
    And I fill in "field_eval_barriers[und][0][value]" with "Non-technical barriers here"
    And I fill in "field_eval_trials[und][0][value]" with "Trials here"
    And I fill in "field_eval_people_involved[und][0][uid]" with "user"
    And I press the "Esc" key in the "field_eval_people_involved[und][0][uid]" field
    And I fill in "field_eval_sp_members_involved[und][0][uid]" with "user"
    And I press the "Esc" key in the "field_eval_sp_members_involved[und][0][uid]" field
    And I fill in "field_eval_review_date[und][0][value][date]" with "01/01/2020"
    And I fill in "field_eval_review_date[und][0][value][time]" with "14:00"
    And I fill in "field_eval_notify_ec[und][0][value]" with "Notify the European Commission here"
    And I select the radio button "Compulsory" with the id "edit-field-eval-osb-decission-und-2"
    When I press "Save"
    Then I should see "has been updated."
    And I should see "Needs the Standard Profile meet here"
    And I should see "Organisations or functional areas here"
    And I should see "Recommended for use"
    And I should see "Why it's the most effective course of action"
    And I should see "Summary of the assessment here"
    And I should see "Alternatives considered here"
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
