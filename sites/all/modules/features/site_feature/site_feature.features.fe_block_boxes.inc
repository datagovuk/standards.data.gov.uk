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
  $fe_block_boxes->body = '<p class="lede">The Standards Hub is here so that you can get involved in the process for prioritising and helping us to select open standards for Government IT. We aim to choose a small set of core standards that are to be applied consistently across the UK government to make our services better for users and to keep our costs down.</p><h3>Five phases in our approach to implementing open standards in government IT</h3><ol><li><h4>Suggestions phase</h4><p>We’re trying to find out what challenges users of government services face that open standards can help to fix. The first stage of this is asking for suggestions on what they are. We will assess your suggestions as they come in and look at the benefits that these might deliver.</p><p><strong>Where does government need to use open standards and why?</strong> <a href="/challenges/suggested">Suggest a challenge</a></p></li><li><h4>Challenge phase</h4><p>We may then create a challenge. We will appoint a senior owner to act as a champion for the challenge. They will be responsible for leading the development of proposals. We will publish the challenges here on the site for comment, specifically to ask</p><p><strong>Which standards or approaches would help government to address each challenge?</strong> Review the <a href="/challenges">current challenges and make a response</a></p></li><li><h4>Proposal phase</h4><p>The challenge owner will use those comments to create proposals for each challenge. There might be more than one proposal. We will publish these for further comment: Which of these proposals will work best, or is there an alternate proposal we should consider?</p></li><li><h4>Assessment/evaluation/decision phase</h4><p>Once we’ve gone through this process, the challenge owner will select one proposal to submit to the Open Standards Board. The Board will make the final decision on proposals, which we will publish here as adopted standards.</p></li><li><h4>Implementation phase</h4><p>Once standards have been adopted, we will track implementation. We will encourage people to report when adopted standards are not being used or when there are issues with adopted standards here on the Standards Hub.</p></li></ol>';

  $export['home_page_welcome_block'] = $fe_block_boxes;

  return $export;
}
