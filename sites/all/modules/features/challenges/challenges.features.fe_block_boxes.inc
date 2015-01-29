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
  $fe_block_boxes->info = 'Challenges - archived';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'challenges_archived';
  $fe_block_boxes->body = '<p class="lede">We publish challenges and invite you to respond with ideas about how these could be solved with open standards. However, it is possible that a challenge may not reach a conclusion. Here we list all of the challenges that were stopped before they completed the process, along with the reasons why.</p>';

  $export['challenges_archived'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges - completed';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'challenges_completed';
  $fe_block_boxes->body = '<p class="lede">We publish challenges and invite you to respond with ideas about how these could be solved with open standards. The Open Standards Board will reach a decision on proposals that we develop in response to these challenges. Here we list all of the challenges that have progressed through the Standards Hub process that the Open Standards Board has reached a decision upon.</p>';

  $export['challenges_completed'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges - current';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'challenges_landing_page_text';
  $fe_block_boxes->body = '<p class="lede">We publish challenges and invite you to respond with ideas about how these could be solved with open standards. Here we list the challenges that we are currently working on. If you have registered you can submit a response or comment to help us develop a proposal. If you think we\'re missing something, suggest a new challenge.</p>';

  $export['challenges_landing_page_text'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges - suggested';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'challenges_suggested';
  $fe_block_boxes->body = '<p class="lede">We’re trying to find out what challenges users of government services face that open standards can help to fix. The first stage of this is asking you for suggestions on what these challenges are. We will assess your suggestions and look at the benefits that these might deliver: Where does government need to use open standards and why? Suggest a challenge or comment on the ideas that have already been put forward.</p>';

  $export['challenges_suggested'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges - under evaluation';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'challenges_under_evaluation';
  $fe_block_boxes->body = '<p class="lede">Once we’ve developed proposals that address a challenge that open standards can help to fix, expert panels will carry out an evaluation and submit a draft standards profile to the Open Standards Board. The Board will make the final decision on which open standards will be adopted for use in government IT. Challenges that are under evaluation have proposals that are currently being considered by an expert panel or the Open Standards Board.</p>';

  $export['challenges_under_evaluation'] = $fe_block_boxes;

  return $export;
}
