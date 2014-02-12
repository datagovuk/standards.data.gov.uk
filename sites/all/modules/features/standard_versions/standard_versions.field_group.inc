<?php
/**
 * @file
 * standard_versions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function standard_versions_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_of_issue|node|standard_version|form';
  $field_group->group_name = 'group_date_of_issue';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'standard_version';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date of Issue',
    'weight' => '5',
    'children' => array(
      0 => 'field_standard_version_date',
      1 => 'field_standard_version_date_day',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-date-of-issue field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_date_of_issue|node|standard_version|form'] = $field_group;

  return $export;
}
