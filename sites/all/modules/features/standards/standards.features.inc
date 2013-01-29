<?php
/**
 * @file
 * standards.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function standards_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function standards_node_info() {
  $items = array(
    'standard' => array(
      'name' => t('Standard'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}