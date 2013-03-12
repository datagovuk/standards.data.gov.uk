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
  $fe_block_boxes->body = '<p>We publish challenges and invite you to respond with ideas about how these could be solved with open standards. Here we list the challenges that we are currently working on. If you have registered you can submit a response or comment to help us develop a proposal. If you think we\'re missing something, suggest a new challenge.</p>';

  $export['challenges_landing_page_text'] = $fe_block_boxes;

  return $export;
}
