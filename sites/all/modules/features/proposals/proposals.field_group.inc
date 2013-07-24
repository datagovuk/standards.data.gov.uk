<?php
/**
 * @file
 * proposals.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function proposals_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_assessment_overview|node|proposal|form';
  $field_group->group_name = 'group_assessment_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_evaluation';
  $field_group->data = array(
    'label' => 'Assessment overview',
    'weight' => '32',
    'children' => array(
      0 => 'field_eval_assessment_summary',
      1 => 'field_eval_alternatives',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Assessment overview',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_assessment_overview|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_context|node|proposal|form';
  $field_group->group_name = 'group_context';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_evaluation';
  $field_group->data = array(
    'label' => 'Context',
    'weight' => '30',
    'children' => array(
      0 => 'field_eval_needs_to_meet',
      1 => 'field_eval_which_organisations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Context',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_context|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_implementation|node|proposal|form';
  $field_group->group_name = 'group_implementation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_evaluation';
  $field_group->data = array(
    'label' => 'Implementation',
    'weight' => '33',
    'children' => array(
      0 => 'field_eval_service_delivery',
      1 => 'field_eval_back_compatibility',
      2 => 'field_eval_horizon',
      3 => 'field_eval_benefits',
      4 => 'field_eval_begin_completed',
      5 => 'field_eval_barriers',
      6 => 'field_eval_trials',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_implementation|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outcome|node|proposal|form';
  $field_group->group_name = 'group_outcome';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_evaluation';
  $field_group->data = array(
    'label' => 'Outcome',
    'weight' => '35',
    'children' => array(
      0 => 'field_eval_osb_decission',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_outcome|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_process|node|proposal|form';
  $field_group->group_name = 'group_process';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_evaluation';
  $field_group->data = array(
    'label' => 'Process',
    'weight' => '34',
    'children' => array(
      0 => 'field_eval_review_date',
      1 => 'field_eval_notify_ec',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_process|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal_evaluation|node|proposal|form';
  $field_group->group_name = 'group_proposal_evaluation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Proposal evaluation',
    'weight' => '27',
    'children' => array(
      0 => 'group_context',
      1 => 'group_recommendation',
      2 => 'group_assessment_overview',
      3 => 'group_implementation',
      4 => 'group_process',
      5 => 'group_outcome',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Proposal evaluation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_proposal_evaluation|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recommendation|node|proposal|form';
  $field_group->group_name = 'group_recommendation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_proposal_evaluation';
  $field_group->data = array(
    'label' => 'Recommendation',
    'weight' => '31',
    'children' => array(
      0 => 'field_eval_recommendation',
      1 => 'field_eval_why_most_effective',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Recommendation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_recommendation|node|proposal|form'] = $field_group;

  return $export;
}
