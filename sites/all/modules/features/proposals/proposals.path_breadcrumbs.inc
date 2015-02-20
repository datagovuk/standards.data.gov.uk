<?php
/**
 * @file
 * proposals.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function proposals_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'proposal';
  $path_breadcrumb->name = 'Response, proposal, profile';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'altered in proposals_path_breadcrumbs_view_alter()',
      1 => '%node:field-challenge-ref',
    ),
    'paths' => array(
      0 => '<front>',
      1 => '%node:field-challenge-ref:0:url',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['proposal'] = $path_breadcrumb;

  return $export;
}
