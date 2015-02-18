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
  $fe_block_boxes->body = '<p class="lede">We need your help to set <a href="https://www.gov.uk/government/publications/open-standards-principles/open-standards-principles">open standards</a> for software interoperability, data and document formats in government IT that follow <a href="https://www.gov.uk/government/publications/open-standards-principles/open-standards-principles#open-standards-principles">open standards principles</a>. These open standards will be applied across government to make services better for users and cheaper to run.</p><h3>Five ways to help set open standards in government IT</h3><ol class="standard"><li id="criterion-1"><div class="point"><h4><a href="/challenges/suggested">Suggest a challenge</a></h4><p>We need your help to identify challenges - areas where users of government services face problems that might be solved by open standards. We‘ll assess your suggestions as they come in and look at their possible benefits.</p></div><div class="guidance">&nbsp;</div></li><li id="criterion-2"><div class="point"><h4><a href="/challenges">Comment on a challenge</a></h4><p>We’ll evaluate suggestions and select some to be made into challenges. We’ll publish those here so you can review them, read others’ feedback and suggest standards or approaches that might help solve them. We’ll appoint a challenge owner to act as a champion for each.</p></div><div class="guidance">&nbsp;</div></li><li id="criterion-3"><div class="point"><h4><a href="/challenges/evaluation">Comment on a proposed solution</a></h4><p>The challenge owner will use comments received to create one or more proposals for solving each challenge. You can comment on these to help us identify which will work best, or if there’s another proposal that might work better.</p></div><div class="guidance">&nbsp;</div></li><li id="criterion-4"><div class="point"><h4><a href="/challenges/adopted">Learn about adopted standards</a></h4><p>The challenge owner will select 1 proposed solution to submit to the Open Standards Board for their review. The board will decide whether to it will be adopted as an open standard, which you can view here.</p></div><div class="guidance">&nbsp;</div></li><li id="criterion-5"><div class="point"><h4>Report implementation issues</h4><p>You should let us know when adopted standards aren’t being used or if there are problems with them.</p></div><div class="guidance">&nbsp;</div></li></ol>';

  $export['home_page_welcome_block'] = $fe_block_boxes;

  return $export;
}
