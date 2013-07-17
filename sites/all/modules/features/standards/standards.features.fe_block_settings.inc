<?php
/**
 * @file
 * standards.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function standards_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-standard_profiles-block'] = array(
    'cache' => -1,
    'delta' => 'standard_profiles-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_subtheme',
        'weight' => 0,
      ),
      'at_commerce' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'at_commerce',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
  );

  $export['views-standard_profiles-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'standard_profiles-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'standard',
    ),
    'pages' => 'standard/*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_subtheme',
        'weight' => 0,
      ),
      'at_commerce' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'at_commerce',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-standard_versions-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'standard_versions-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'standard',
    ),
    'pages' => 'standard/*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_subtheme',
        'weight' => 0,
      ),
      'at_commerce' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'at_commerce',
        'weight' => -14,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
