<?php
/**
 * @file
 * standards.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function standards_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_standard_back_ref'
  $field_bases['field_standard_back_ref'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_standard_back_ref',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'nodereferrer',
    'settings' => array(
      'multiple' => 0,
      'referrer_fields' => array(
        'field_challenge_ref' => 0,
        'field_proposal_ref' => 0,
        'field_standard_ref' => 'field_standard_ref',
        'field_standard_version_ref' => 0,
      ),
      'referrer_nodes_per_page' => 0,
      'referrer_order' => 'TITLE_ASC',
      'referrer_pager_element' => 0,
      'referrer_translations' => 0,
      'referrer_types' => array(
        'article' => 0,
        'challenge' => 0,
        'further_information' => 0,
        'meeting_minute' => 'meeting_minute',
        'page' => 0,
        'profile' => 0,
        'proposal' => 0,
        'standard' => 0,
        'standard_version' => 0,
        'webform' => 0,
      ),
      'required' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'nodereferrer',
  );

  // Exported field_base: 'field_standard_description'
  $field_bases['field_standard_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_standard_description',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_standard_management'
  $field_bases['field_standard_management'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_standard_management',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_standard_ownership'
  $field_bases['field_standard_ownership'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_standard_ownership',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_standard_scope'
  $field_bases['field_standard_scope'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_standard_scope',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
