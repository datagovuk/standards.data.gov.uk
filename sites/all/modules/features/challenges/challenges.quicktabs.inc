<?php
/**
 * @file
 * challenges.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function challenges_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'test';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Challenge proposals';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'challenge_comments',
      'display' => 'block',
      'args' => '%1',
      'title' => 'Suggestion stage',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'challenge_proposals',
      'display' => 'block',
      'args' => '%1',
      'title' => 'Response stage',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'challenge_proposals',
      'display' => 'block_1',
      'args' => '%1',
      'title' => 'Proposal stage',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'challenge_proposals',
      'display' => 'block_2',
      'args' => '%1',
      'title' => 'Standards profile stage',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Navlist';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Challenge proposals');
  t('Proposal stage');
  t('Response stage');
  t('Standards profile stage');
  t('Suggestion stage');

  $export['test'] = $quicktabs;

  return $export;
}
