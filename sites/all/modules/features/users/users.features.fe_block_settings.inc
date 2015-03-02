<?php
/**
 * @file
 * users.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function users_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['logintoboggan-logintoboggan_logged_in'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'logintoboggan_logged_in',
    'module' => 'logintoboggan',
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
      'gdstheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gdstheme',
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

  $export['users-users_email_validation'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'users_email_validation',
    'module' => 'users',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'unverified user' => 7,
    ),
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
      'gdstheme' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'gdstheme',
        'weight' => -37,
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
