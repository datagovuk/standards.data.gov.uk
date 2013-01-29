<?php
/**
 * @file
 * standard_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function standard_profiles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function standard_profiles_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Standard Profile'),
      'base' => 'node_content',
      'description' => t('Standard Profile description'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
