Feature: Standards
  In order to create standard profiles
  As a Standards Hub editor
  I need to be able to create and edit standards


  @javascript
  Scenario: Create new standard
#should be sro not editor???
    Given I am logged in as user "editor"
    And I go to "/node/add/standard"
    And I wait 1 seconds
    And I fill in "Keywords" with "test keyword"
    And I fill in "title" with "Test standard"
    And I fill in "Description and Purpose here" in WYSIWYG editor "edit-field-standard-description-und-0-value_ifr"
    And I fill in "Ownership and Licensing here" in WYSIWYG editor "edit-field-standard-ownership-und-0-value_ifr"
    And I fill in "Scope and Jurisdiction here" in WYSIWYG editor "edit-field-standard-scope-und-0-value_ifr"
    And I fill in "Management and Updates here" in WYSIWYG editor "edit-field-standard-management-und-0-value_ifr"
    When I press "Save"
    Then I should see "has been created."
    And I should see "Test standard"
    And I should see "Description and Purpose here"
    And I should see "Ownership and Licensing here"
    And I should see "Scope and Jurisdiction here"
    And I should see "Management and Updates here"
    And I should see the link "test keyword"
    And I should see "Add new comment"

  @javascript
  Scenario: Create new standard version
#should be sro not editor???
    Given I am logged in as user "editor"
    And I go to "/node/add/standard-version"
    And I wait 1 seconds
    And I fill in "title" with "Test standard version"
    And I fill in "field_standard_ref[und][0][nid]" with "Test standard"
    And I fill in "Description and Purpose here" in WYSIWYG editor "edit-field-standard-version-desc-und-0-value_ifr"
    And I fill in "Takeup and Product Support here" in WYSIWYG editor "edit-field-standard-version-takeup-und-0-value_ifr"
    And I fill in "field_standard_version_date[und][0][value][date]" with "01/01/2000"
    When I press "Save"
    Then I should see "has been created."
    And I should see "Test standard version"
    And I should see "Saturday, 1 January 2000"
    And I should see the link "Test standard"
    And I should see "Description and Purpose here"
    And I should see "Takeup and Product Support here"
    And I should not see "Add new comment"

  @javascript
  Scenario: Create a challenge, proposal and relation to standard version
    Given I am logged in as user "user"
    And I create test challenge as user
    And I publish test challenge as editor
    And I go to "/challenges/suggested"
    And I change test challenge status to "Current"
    And I go to "/challenges"
    And I change test challenge owner to "sro"
    And I am logged in as user "sro"
    And I go to "/challenges"
    And I click "Test challenge"
    And I click "Respond to challenge"
    And I wait 1 seconds
    And I fill in "Title" with "Test proposal"
    And I fill in "Description here" in WYSIWYG editor "edit-field-short-description-und-0-value_ifr"
    And I select the radio button "Proposal"
    And I press "Save"
#---moderation shouldn't be required---
    And I am logged in as user "editor"
    And I go to "/admin/content"
    And I click "Test proposal"
    And I click "Moderate"
    When I press "Apply"
    And I press "Apply"
#--------------------------------------

  @javascript
  Scenario: Create a challenge, proposal and relation to standard version
    Given I am logged in as user "sro"
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

  @javascript
  Scenario: See draft standard assessment
    Given I am logged in as user "sro"
    And I go to "/monitor-progress"
    And I click "Test proposal"
    When I click "See assessment"
    Then I should see "Standard assessment (draft)"
    And I should see the link "Test proposal"
    And I should see the link "Test standard version"
    And I should see "Under consideration"

  @javascript
  Scenario: Update profiles status to "compulsory" and see standard assessment
    Given I am logged in as user "sro"
    And I go to "/monitor-progress"
    And I click "Test proposal"
    And I click "Edit"
    And I wait 1 seconds
    And I select the radio button "Standard Profile"
    And I fill in "field_review_date[und][0][value][date]" with "10/10/2010"
    And I fill in "field_review_date[und][0][value][time]" with "10:10"
    And I fill in "field_active_date[und][0][value][date]" with "11/11/2011"
    And I fill in "field_active_date[und][0][value][time]" with "11:11"
    And I press the "Esc" key in the "field_active_date[und][0][value][time]" field
    And I select the radio button "Compulsory"
    And I press "Save"
#---moderation shouldn't be required---
    And I am logged in as user "editor"
    And I go to "/admin/content"
    And I click "Test proposal"
    And I click "Moderate"
    And I press "Apply"
    And I press "Apply"
#--------------------------------------
    And I go to "/challenges"
    And I click "Test challenge"
    And I click "Test proposal"
    When I click "See assessment"
    Then I should see "Standard assessment"
    And I should not see "(draft)"
