<?php
/**
 * @file
 * site_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function site_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home page welcome block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_page_welcome_block';
  $fe_block_boxes->body = '<p class="lede">The Standards Hub lets you get involved in helping us set <a href="https://www.gov.uk/government/publications/open-standards-principles/open-standards-principles">open standards</a> for government IT. We want to choose a small set of core standards that will be applied consistently across the UK government to make services better for users and keep costs down.</p><h3>Implementing open standards in government IT: 5 steps</h3><ol><li><h4>Suggestions</h4><p>We first need you to <a href="/challenges/suggested">suggest a challenge</a> - to identify an area where users of government services face problems that might be solved by open stanrads. We’ll assess your suggestions as they come in and look at their possible benefits.</p></li><li><h4>Challenges</h4><p>We’ll evaluate suggestions and may then create challenges from some of these. We’ll appoint a senior owner to act as a champion for each new challenge and lead the development of proposals. We’ll publish the challenges so you can <a href="/challenges">review them and suggest standards or approaches</a> that might help solve them.</li><li><h4>Proposals</h4><p>The challenge owner will use those comments to create one or more proposals for solving each challenge. We’ll publish these for further comment, to identify which proposals will work best, or if there is an alternate proposal we should consider.</p></li><li><h4>Evaluation and decision</h4><p>Once we’ve gone through this process, the challenge owner will select one proposal to submit to the Open Standards Board. The board will make the final decision on proposals, which we will publish here as adopted standards.</p></li><li><h4>Implementation</h4><p>Once standards have been adopted, we’ll track implementation. We’ll encourage people to report when adopted standards are not being used or when there are issues with adopted standards here on the Standards Hub.</p></li></ol>';

  $export['home_page_welcome_block'] = $fe_block_boxes;

  return $export;
}
