<?php
/**
 * @file
 * standard_versions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function standard_versions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function standard_versions_node_info() {
  $items = array(
    'standard_version' => array(
      'name' => t('Standard Version'),
      'base' => 'node_content',
      'description' => t('Standard Version description'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
