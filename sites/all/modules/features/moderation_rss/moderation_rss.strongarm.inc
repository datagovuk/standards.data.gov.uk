<?php
/**
 * @file
 * moderation_rss.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function moderation_rss_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_challenge';
  $strongarm->value = 'published';
  $export['workbench_moderation_default_state_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_further_information';
  $strongarm->value = 'published';
  $export['workbench_moderation_default_state_further_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_proposal';
  $strongarm->value = 'published';
  $export['workbench_moderation_default_state_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_standard';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_standard'] = $strongarm;

  return $export;
}
