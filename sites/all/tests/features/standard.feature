@javascript
Feature: Standards
  In order to create standards profiles
  As a SRO
  I need to be able to create and edit standards

  @api
  Scenario: Create new standard
    Given that the user "test_editor" is not registered
    Given that the user "test_sro" is not registered
    And I am logged in as a user "test_sro" with the "SRO" role
    And I go to "/node/add/standard"
    And I wait until the page loads
    And I fill in "Keywords" with "test keyword"
    And I press the "Esc" key in the "Keywords" field
    And I fill in "title" with "Test standard"
    And I type "Description and Purpose here" in the "edit-field-standard-description-und-0-value" WYSIWYG editor
    And I type "Ownership and Licensing here" in the "edit-field-standard-ownership-und-0-value" WYSIWYG editor
    And I type "Scope and Jurisdiction here" in the "edit-field-standard-scope-und-0-value" WYSIWYG editor
    And I type "Management and Updates here" in the "edit-field-standard-management-und-0-value" WYSIWYG editor
    When I press "Save"
    Then I should see "has been created."
    And I should see "Test standard"
    And I should see "Description and Purpose here"
    And I should see "Ownership and Licensing here"
    And I should see "Scope and Jurisdiction here"
    And I should see "Management and Updates here"
    And I should see the link "test keyword"
    And I should see "Add new comment"
    # Create new standard version
    Given I go to "/node/add/standard-version"
    And I wait until the page loads
    And I fill in "title" with "Test standard version"
    And I fill in "field_standard_ref[und][0][nid]" with "Test standard"
    And I press the "Esc" key in the "field_standard_ref[und][0][nid]" field
    And I fill in "field_standard_version_date[und][0][value][date]" with "2000-10"
    And I select "20" from "field_standard_version_date_day[und]"
    And I type "Description and Purpose here" in the "edit-field-standard-version-desc-und-0-value" WYSIWYG editor
    And I type "Takeup and Product Support here" in the "edit-field-standard-version-takeup-und-0-value" WYSIWYG editor
    When I press "Save"
    Then I should see "has been created."
    And I should see "Test standard version"
    #And I should see "20 October 2000"
    #And I should see the link "Test standard"
    And I should see "Description and Purpose here"
    And I should see "Takeup and Product Support here"
    And I should not see "Add new comment"
    # Create a challenge, proposal and relation to standard version
    Given that the user "test_user" is not registered
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I create "Test challenge" challenge
    And I submit my "Test challenge" challenge for moderation
    And I publish test challenge as editor
    And I go to "/challenges/suggested"
    And I change test challenge status to "Response"
    And I go to "/challenges"
    And I change test challenge owner to "test_sro"
    And I am logged in as a user "test_sro" with the "sro" role
    And I go to "/challenges"
    And I wait until the page loads
    And I click "Test challenge"
    And I wait until the page loads
    And I click "Create proposal"
    And I wait until the page loads
    And I fill in "Title" with "Test proposal"
    And I type "Description here" in the "edit-field-short-description-und-0-value" WYSIWYG editor
    And I select the radio button "Proposal"
    And I press "Save"
    And I go to "/monitor-progress"
    And I click "Test proposal"
    When I create relation with "Test standard version"
    And I select the radio button "Under review" with the id "edit-field-standard-usage-und-4"
    And I press "Create relation"
    Then I should see "Created new"
    And I should see "Test proposal"
    And I should see "Test standard version"
    And I should see the link "profile_version"
    And I should see the link "Test standard version"
    And I should see the link "See assessment"
    # See draft standard assessment
    And I go to "/monitor-progress"
    And I click "Test proposal"
    And I wait until the page loads
    When I click "See assessment"
    And I wait until the page loads
    Then I should see "Standard assessment (draft)"
    And I should see the link "Test proposal"
    And I should see the link "Test standard version"
    And I should see "Under consideration"
    # Update profiles status to "compulsory" and see standard assessment
    And I go to "/monitor-progress"
    And I click "Test proposal"
    And I wait until the page loads
    And I click "Edit"
    And I wait until the page loads
    And I select the radio button "Solution"
    And I fill in "field_review_date[und][0][value][date]" with "10/10/2010"
    And I fill in "field_review_date[und][0][value][time]" with "10:10"
    And I fill in "field_active_date[und][0][value][date]" with "11/11/2011"
    And I fill in "field_active_date[und][0][value][time]" with "11:11"
    And I press the "Esc" key in the "field_active_date[und][0][value][time]" field
    And I select the radio button "Compulsory"
    And I press "Save"
    And I go to "/challenges"
    And I wait until the page loads
    And I change test challenge status to "Solution"
    And I click "Test proposal"
    And I wait until the page loads
    When I click "See assessment"
    And I wait until the page loads
    Then I should see "Standard assessment"
    And I should not see "(draft)"
