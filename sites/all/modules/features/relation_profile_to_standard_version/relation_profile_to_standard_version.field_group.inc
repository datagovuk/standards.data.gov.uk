<?php
/**
 * @file
 * relation_profile_to_standard_version.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function relation_profile_to_standard_version_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_applicability|relation|profile_version|form';
  $field_group->group_name = 'group_applicability';
  $field_group->entity_type = 'relation';
  $field_group->bundle = 'profile_version';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicability',
    'weight' => '2',
    'children' => array(
      0 => 'field_ass_area_of_application',
      1 => 'field_ass_area_of_application2',
      2 => 'field_ass_requirements',
      3 => 'field_ass_reusability',
      4 => 'field_ass_dependencies',
      5 => 'field_ass_dependencies2',
      6 => 'field_ass_dependencies3',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_applicability|relation|profile_version|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coherence|relation|profile_version|form';
  $field_group->group_name = 'group_coherence';
  $field_group->entity_type = 'relation';
  $field_group->bundle = 'profile_version';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Coherence',
    'weight' => '11',
    'children' => array(
      0 => 'field_ass_existing_eur_standard',
      1 => 'field_ass_spec_under_consid',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_coherence|relation|profile_version|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intellectual_property|relation|profile_version|form';
  $field_group->group_name = 'group_intellectual_property';
  $field_group->entity_type = 'relation';
  $field_group->bundle = 'profile_version';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Intellectual property rights',
    'weight' => '5',
    'children' => array(
      0 => 'field_ass_ipr_documentation',
      1 => 'field_ass_ipr_documentation2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_intellectual_property|relation|profile_version|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_market_support|relation|profile_version|form';
  $field_group->group_name = 'group_market_support';
  $field_group->entity_type = 'relation';
  $field_group->bundle = 'profile_version';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Market support',
    'weight' => '6',
    'children' => array(
      0 => 'field_ass_implementations',
      1 => 'field_ass_implementations2',
      2 => 'field_ass_implementations3',
      3 => 'field_ass_market_demand',
      4 => 'field_ass_users',
      5 => 'field_ass_interest_groups',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_market_support|relation|profile_version|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_maturity|relation|profile_version|form';
  $field_group->group_name = 'group_maturity';
  $field_group->entity_type = 'relation';
  $field_group->bundle = 'profile_version';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Maturity',
    'weight' => '3',
    'children' => array(
      0 => 'field_ass_development_status',
      1 => 'field_ass_quality',
      2 => 'field_ass_quality2',
      3 => 'field_ass_guidelines',
      4 => 'field_ass_guidelines2',
      5 => 'field_ass_stability',
      6 => 'field_ass_stability2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_maturity|relation|profile_version|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_openness|relation|profile_version|form';
  $field_group->group_name = 'group_openness';
  $field_group->entity_type = 'relation';
  $field_group->bundle = 'profile_version';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Openness',
    'weight' => '4',
    'children' => array(
      0 => 'field_ass_organisation',
      1 => 'field_ass_organisation2',
      2 => 'field_ass_process',
      3 => 'field_ass_process2',
      4 => 'field_ass_process3',
      5 => 'field_ass_process4',
      6 => 'field_ass_process5',
      7 => 'field_ass_documentation',
      8 => 'field_ass_documentation2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_openness|relation|profile_version|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other|relation|profile_version|form';
  $field_group->group_name = 'group_other';
  $field_group->entity_type = 'relation';
  $field_group->bundle = 'profile_version';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '12',
    'children' => array(
      0 => 'field_ass_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_other|relation|profile_version|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_potential|relation|profile_version|form';
  $field_group->group_name = 'group_potential';
  $field_group->entity_type = 'relation';
  $field_group->bundle = 'profile_version';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Potential',
    'weight' => '7',
    'children' => array(
      0 => 'field_ass_impact',
      1 => 'field_ass_impact2',
      2 => 'field_ass_impact3',
      3 => 'field_ass_impact4',
      4 => 'field_ass_impact5',
      5 => 'field_ass_impact6',
      6 => 'field_ass_impact7',
      7 => 'field_ass_compatibility',
      8 => 'field_ass_compatibility2',
      9 => 'field_ass_maintenance_devel',
      10 => 'field_ass_maintenance_devel2',
      11 => 'field_ass_maintenance_devel3',
      12 => 'field_ass_maintenance_devel4',
      13 => 'field_ass_maintenance_devel5',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_potential|relation|profile_version|form'] = $field_group;

  return $export;
}
