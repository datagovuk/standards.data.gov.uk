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
  $fe_block_boxes->body = '<p class="lede">The following challenges have been adopted to have open standards used to solve a problem or otherwise improve services.</p>';

  $export['challenges_completed'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges - current';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'challenges_landing_page_text';
  $fe_block_boxes->body = '<p class="lede">We’re looking at how the following challenges in government services might be solved by open standards for IT. We want your comments or other input to help us develop proposed solutions. If you think we’re missing something, <a href="/challenges/suggested">suggest a new challenge</a>.';

  $export['challenges_landing_page_text'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges - suggested';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'challenges_suggested';
  $fe_block_boxes->body = '<p class="lede">We need your help to identify challenges - areas where users of government services face problems that might be solved by open standards. You can comment on the challenges others have suggested below - or make a new suggestion for a challenge.</p>';

  $export['challenges_suggested'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges - under evaluation';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'challenges_under_evaluation';
  $fe_block_boxes->body = '<p class="lede">Your comments will help us develop a solution for each of the following challenges. We’ll submit proposed solutions to the Open Standards Board for review and they’ll decide which will be <a href="http://standards.co-prod2.dh.bytemark.co.uk/challenges/adopted">adopted as open standards</a>.</p>';

  $export['challenges_under_evaluation'] = $fe_block_boxes;

  return $export;
}
