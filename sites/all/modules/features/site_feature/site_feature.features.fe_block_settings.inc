<?php
/**
 * @file
 * site_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function site_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-b190b30c5f6501694bad002f81446925'] = array(
    'cache' => -1,
    'delta' => 'b190b30c5f6501694bad002f81446925',
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
        'region' => 'five_third',
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
  );

  $export['views-comments_recent-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'comments_recent-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'track-progress',
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
        'weight' => -3,
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

  $export['views-comments_recent-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'comments_recent-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
track-progress',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
