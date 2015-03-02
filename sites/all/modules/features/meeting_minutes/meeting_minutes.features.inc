<?php
/**
 * @file
 * meeting_minutes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function meeting_minutes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function meeting_minutes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function meeting_minutes_node_info() {
  $items = array(
    'meeting_minute' => array(
      'name' => t('Meeting minute'),
      'base' => 'node_content',
      'description' => t('Meeting minute description'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
