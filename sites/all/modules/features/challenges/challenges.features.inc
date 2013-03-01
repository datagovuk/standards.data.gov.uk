<?php
/**
 * @file
 * challenges.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function challenges_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function challenges_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function challenges_node_info() {
  $items = array(
    'challenge' => array(
      'name' => t('Challenge'),
      'base' => 'node_content',
      'description' => t('The Open Standards Board can issue a number of challenges or themes against which standards proposals are invited.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
