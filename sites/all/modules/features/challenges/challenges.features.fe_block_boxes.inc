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
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'challenges_archived';
  $fe_block_boxes->body = '<p class="lede">We publish challenges and invite you to respond with ideas about how these could be solved with open standards. However, it is possible that a challenge may not reach a conclusion. Here we list all of the challenges that were stopped before they completed the process, along with the reasons why.</p>';

  $export['challenges_archived'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges - completed';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'challenges_completed';
  $fe_block_boxes->body = '<p class="lede">The following challenges have been adopted to have open standards used to solve a problem or otherwise improve services.</p>
';

  $export['challenges_completed'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges - current';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'challenges_landing_page_text';
  $fe_block_boxes->body = '<p class="lede">We want responses to the following challenges in government services, with users’ ideas on how open standards for IT might be used to solve them. Your comments and other input will help us develop proposed solutions. If you think we’re missing something, <a href="/challenges/suggested">make a new suggestion</a>.</p>
';

  $export['challenges_landing_page_text'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges - suggested';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'challenges_suggested';
  $fe_block_boxes->body = '<p class="lede">We want you to suggest areas where users of government services face problems that might be solved by open standards. You can comment on others’ suggestions below - or make a new suggestion.</p>
';

  $export['challenges_suggested'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges - under evaluation';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'challenges_under_evaluation';
  $fe_block_boxes->body = '<p class="lede">The challenge owner will select 1 proposed solution for the challenge and create a standards profile to submit to the Open Standards Board. The board will review the profile and decide whether to it will be adopted as an open standard.</p>
';

  $export['challenges_under_evaluation'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Stages of the selection Process block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'stages_selection_process';
  $fe_block_boxes->body = '<h2>Stages of the selection Process</h2>
';

  $export['stages_selection_process'] = $fe_block_boxes;

  return $export;
}
