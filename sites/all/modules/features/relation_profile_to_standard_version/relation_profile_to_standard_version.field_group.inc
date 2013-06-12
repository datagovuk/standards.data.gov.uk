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
      1 => 'field_ass_requirements',
      2 => 'field_ass_area_of_application2',
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
  $field_group->identifier = 'group_maturity|relation|profile_version|form';
  $field_group->group_name = 'group_maturity';
  $field_group->entity_type = 'relation';
  $field_group->bundle = 'profile_version';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Maturity',
    'weight' => '4',
    'children' => array(
      0 => 'field_ass_development_status',
      1 => 'field_ass_quality',
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

  return $export;
}
