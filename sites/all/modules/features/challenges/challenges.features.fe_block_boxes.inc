<?php
/**
 * @file
 * challenges.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function challenges_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges text on challenges page';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'challenges_landing_page_text';
  $fe_block_boxes->body = '<p class="p1">We publish challenges and invite you to respond with ideas about how these could be solved with open standards.&nbsp;</p><p class="p1">Suggested challenges - these are ideas that our users have put forward for issues we should focus on. You can comment on these and help us to decide whether or not to take them forward.<br /><br /><span style="font-size: 10px;">Current challenges - we\'re currently working on these challenges. We\'d like to hear your ideas about which open standards we could use and your thoughts on the proposals we\'re developing.<br /><br /></span><span style="font-size: 10px;">Under evaluation - these are challenges that we\'re close to resolving. We have developed proposals for them and are currently evaluating whether or not these will be adopted for use in government.<br /><br /></span><span class="s1" style="font-size: 10px;">Completed challenges - these have been resolved and we\'ve published </span><span style="font-size: 10px;">standards profiles as a result.</span></p>';

  $export['challenges_landing_page_text'] = $fe_block_boxes;

  return $export;
}
