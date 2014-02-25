Feature: Login
  In order to create comments, challenges and proposals on Standards Hub
  As a Standards Hub user
  I need to be able to login

  @javascript
  Scenario: Homepage login link
    Given I am not logged in
    And I am on the homepage
    When I click "Login"
    Then I should be on "/user/login"

  @javascript
  Scenario: Comment login link
    Given I am not logged in
    And I am on "/standard/txt"
    And I click "Log in"
    Then I should be on "/user/login"

  @javascript
  Scenario: Logging in and out
    Given I am on "/user/login"
    And I fill in the following:
      | Username | admin |
      | Password | pass |
    When I press "Log in"
    Then I should see the link "Logout"

  @javascript
  Scenario: Logging out
    Given I am on "/user/login"
    And I fill in the following:
      | Username | admin |
      | Password | pass |
    When I press "Log in"
    And I click "Logout"
    Then I should not see the link "Logout"

  @javascript
  Scenario: Error messages
   Given I am on "/user"
   When I press "Log in"
   Then I should see the error message "Password field is required"
   And I should not see the error message "Sorry, unrecognized username or password"
   And I should see the following <error messages>
   | error messages             |
   | Username field is required |
   | Password field is required |
   And I should not see the following <error messages>
   | error messages                                                                |
   | Sorry, unrecognized username or password                                      |
   | Unable to send e-mail. Contact the site administrator if the problem persists |