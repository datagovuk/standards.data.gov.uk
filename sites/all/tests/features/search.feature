@javascript
Feature: Search
  In order to find challenges and proposals on Standards Hub
  As a Standards Hub visitor
  I need to be able to use Standards Hub search
 
  Scenario: Searching for "open"
    Given I am on the homepage
    When I fill in "search_block_form" with "open"
    And I press "Search"
    Then I should see "results found"
    And I should see "Sort by"
    And I should see "Order"
    And I should see "Filter by content type:"
    And I should see "Filter by current stage:"
    And I should see "Filter by status:"
    And I should see "Filter by category:"
    And I should see "Filter by content type:"

  @api
  Scenario: Presence of "Test challenge" in search results
    Given that the user "test_user" is not registered
    And I am logged in as a user "test_user" with the "authenticated user" role
    And I create "Test challenge" challenge
    And I submit my "Test challenge" challenge for moderation
    And I publish test challenge as editor
    And I run cron
    When I visit "/search"
    And select "Date created" from "Sort by"
    And I wait until the page loads
    And I should see the link "Test challenge"
    When I select "Asc" from "Order"
    And I wait until the page loads
    And I should not see the link "Test challenge"
    When I fill in "search_block_form" with "Test challenge"
    And I press "Search"
    And I should see the link "Test challenge"
