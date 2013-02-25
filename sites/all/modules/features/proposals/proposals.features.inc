<?php
/**
 * @file
 * proposals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function proposals_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function proposals_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function proposals_node_info() {
  $items = array(
    'proposal' => array(
      'name' => t('Proposal'),
      'base' => 'node_content',
      'description' => t('Proposal description'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
