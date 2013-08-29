<?php
/**
 * @file
 * proposals.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function proposals_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-challenge_proposals-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'challenge_proposals-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'challenge/*',
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
        'weight' => -17,
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

  $export['views-challenge_proposals-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'challenge_proposals-block_1',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ideas-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ideas-block',
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
        'region' => 'five_second',
        'status' => 1,
        'theme' => 'at_commerce',
        'weight' => -20,
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

  $export['views-ideas-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ideas-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
    'visibility' => 0,
  );

  $export['views-my_proposals-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'my_proposals-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'track-progress
monitor-progress',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_subtheme',
        'weight' => 0,
      ),
      'at_commerce' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'at_commerce',
        'weight' => -23,
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

  $export['views-my_proposals-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'my_proposals-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'monitor-progress',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_subtheme',
        'weight' => 0,
      ),
      'at_commerce' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'at_commerce',
        'weight' => -24,
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
