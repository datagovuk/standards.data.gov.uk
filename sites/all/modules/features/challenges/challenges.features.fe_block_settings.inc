<?php
/**
 * @file
 * challenges.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function challenges_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-challenges_landing_page_text'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'challenges_landing_page_text',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'challenges*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_subtheme',
        'weight' => '0',
      ),
      'at_commerce' => array(
        'region' => 'highlighted',
        'status' => '1',
        'theme' => 'at_commerce',
        'weight' => '-26',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Challenges',
    'visibility' => '1',
  );

  $export['quicktabs-test'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'test',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => 'challenge/*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_subtheme',
        'weight' => '0',
      ),
      'at_commerce' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'at_commerce',
        'weight' => '-16',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '1',
  );

  $export['site-suggest_challenge'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'suggest_challenge',
    'module' => 'site',
    'node_types' => array(),
    'pages' => 'challenges*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_subtheme',
        'weight' => '0',
      ),
      'at_commerce' => array(
        'region' => 'highlighted',
        'status' => '1',
        'theme' => 'at_commerce',
        'weight' => '-25',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-my_challenges-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'my_challenges-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_subtheme',
        'weight' => '0',
      ),
      'at_commerce' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'at_commerce',
        'weight' => '-23',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-my_challenges-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'my_challenges-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_subtheme',
        'weight' => '0',
      ),
      'at_commerce' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'at_commerce',
        'weight' => '-24',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
