<?php
/**
 * @file
 * challenges.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function challenges_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'challenge_adopted';
  $path_breadcrumb->name = 'Challenge node - adopted';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:field-challenge-status stage',
    ),
    'paths' => array(
      0 => 'challenges/adopted',
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
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:challenge:field_challenge_status',
          'settings' => array(
            'field_challenge_status' => array(
              'und' => array(
                0 => array(
                  'value' => '3',
                ),
              ),
            ),
            'field_challenge_status_value' => '3',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'challenge' => 'challenge',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['challenge_adopted'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'challenge_current';
  $path_breadcrumb->name = 'Challenge node - current';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:field-challenge-status stage',
    ),
    'paths' => array(
      0 => 'challenges',
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
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:challenge:field_challenge_status',
          'settings' => array(
            'field_challenge_status' => array(
              'und' => array(
                0 => array(
                  'value' => '1',
                ),
              ),
            ),
            'field_challenge_status_value' => '1',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'challenge' => 'challenge',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['challenge_current'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'challenge_evaluation';
  $path_breadcrumb->name = 'Challenge node - evaluation';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:field-challenge-status stage',
    ),
    'paths' => array(
      0 => 'challenges/evaluation',
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
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:challenge:field_challenge_status',
          'settings' => array(
            'field_challenge_status' => array(
              'und' => array(
                0 => array(
                  'value' => '2',
                ),
              ),
            ),
            'field_challenge_status_value' => '2',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'challenge' => 'challenge',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['challenge_evaluation'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'challenge_suggested';
  $path_breadcrumb->name = 'Challenge node - suggested';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:field-challenge-status stage',
    ),
    'paths' => array(
      0 => 'challenges/suggested',
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
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:challenge:field_challenge_status',
          'settings' => array(
            'field_challenge_status' => array(
              'und' => array(
                0 => array(
                  'value' => '0',
                ),
              ),
            ),
            'field_challenge_status_value' => '0',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'challenge' => 'challenge',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['challenge_suggested'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'challenges_adopted';
  $path_breadcrumb->name = 'Challenges - adopted';
  $path_breadcrumb->path = 'challenges/adopted';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Home',
    ),
    'paths' => array(
      0 => '<front>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['challenges_adopted'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'challenges_evaluation';
  $path_breadcrumb->name = 'Challenges - evaluation';
  $path_breadcrumb->path = 'challenges/evaluation';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Home',
    ),
    'paths' => array(
      0 => '<front>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['challenges_evaluation'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'challenges_suggested';
  $path_breadcrumb->name = 'Challenges - suggested';
  $path_breadcrumb->path = 'challenges/suggested';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Home',
    ),
    'paths' => array(
      0 => '<front>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['challenges_suggested'] = $path_breadcrumb;

  return $export;
}
