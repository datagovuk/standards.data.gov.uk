Feature: Search
  In order to find challenges and proposals on Standards Hub
  As a Standards Hub visitor
  I need to be able to use Standards Hub search
 
  @javascript
  Scenario: Searching for "open"
    Given I am on the homepage
    When I fill in "search_block_form" with "open"
    And I press "Search"
    Then I should see "Frequently Asked Questions"
