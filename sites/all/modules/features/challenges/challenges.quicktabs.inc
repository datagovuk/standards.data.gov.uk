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
      'vid' => 'challenge_proposals',
      'display' => 'block',
      'args' => '%2',
      'title' => 'Responses',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'challenge_proposals',
      'display' => 'block_1',
      'args' => '%2',
      'title' => 'Proposals',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Challenge proposals');
  t('Proposals');
  t('Responses');

  $export['test'] = $quicktabs;

  return $export;
}
