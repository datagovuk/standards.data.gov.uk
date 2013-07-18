<?php
/**
 * @file
 * standards.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function standards_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'standard_profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Standard profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Standard profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Relation: Proposal to Standard Version  (node → node) */
  $handler->display->display_options['relationships']['relation_profile_version_node']['id'] = 'relation_profile_version_node';
  $handler->display->display_options['relationships']['relation_profile_version_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_profile_version_node']['field'] = 'relation_profile_version_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposal' => 'proposal',
  );
  /* Filter criterion: Content: Phase (field_proposal_phase) */
  $handler->display->display_options['filters']['field_proposal_phase_value']['id'] = 'field_proposal_phase_value';
  $handler->display->display_options['filters']['field_proposal_phase_value']['table'] = 'field_data_field_proposal_phase';
  $handler->display->display_options['filters']['field_proposal_phase_value']['field'] = 'field_proposal_phase_value';
  $handler->display->display_options['filters']['field_proposal_phase_value']['value'] = array(
    2 => '2',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: Proposal to Standard Version  (node → node) */
  $handler->display->display_options['relationships']['relation_profile_version_node']['id'] = 'relation_profile_version_node';
  $handler->display->display_options['relationships']['relation_profile_version_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_profile_version_node']['field'] = 'relation_profile_version_node';
  $handler->display->display_options['relationships']['relation_profile_version_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_profile_version_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_profile_version_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_profile_version_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Standard (field_standard_ref) */
  $handler->display->display_options['arguments']['field_standard_ref_nid']['id'] = 'field_standard_ref_nid';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['table'] = 'field_data_field_standard_ref';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['field'] = 'field_standard_ref_nid';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['relationship'] = 'relation_profile_version_node';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Standard profiles related to standard';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_2');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: Proposal to Standard Version  (node → node) */
  $handler->display->display_options['relationships']['relation_profile_version_node']['id'] = 'relation_profile_version_node';
  $handler->display->display_options['relationships']['relation_profile_version_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_profile_version_node']['field'] = 'relation_profile_version_node';
  $handler->display->display_options['relationships']['relation_profile_version_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_profile_version_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_profile_version_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_profile_version_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Standard (field_standard_ref) */
  $handler->display->display_options['arguments']['field_standard_ref_nid']['id'] = 'field_standard_ref_nid';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['table'] = 'field_data_field_standard_ref';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['field'] = 'field_standard_ref_nid';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['relationship'] = 'relation_profile_version_node';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_standard_ref_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposal' => 'proposal',
  );
  /* Filter criterion: Content: Phase (field_proposal_phase) */
  $handler->display->display_options['filters']['field_proposal_phase_value']['id'] = 'field_proposal_phase_value';
  $handler->display->display_options['filters']['field_proposal_phase_value']['table'] = 'field_data_field_proposal_phase';
  $handler->display->display_options['filters']['field_proposal_phase_value']['field'] = 'field_proposal_phase_value';
  $handler->display->display_options['filters']['field_proposal_phase_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Standard profiles related to standard';
  $export['standard_profiles'] = $view;

  $view = new view();
  $view->name = 'standard_versions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Standard versions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Standard versions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Standard (field_standard_ref) */
  $handler->display->display_options['relationships']['field_standard_ref_nid']['id'] = 'field_standard_ref_nid';
  $handler->display->display_options['relationships']['field_standard_ref_nid']['table'] = 'field_data_field_standard_ref';
  $handler->display->display_options['relationships']['field_standard_ref_nid']['field'] = 'field_standard_ref_nid';
  $handler->display->display_options['relationships']['field_standard_ref_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_standard_ref_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Current version */
  $handler->display->display_options['fields']['field_current_version']['id'] = 'field_current_version';
  $handler->display->display_options['fields']['field_current_version']['table'] = 'field_data_field_current_version';
  $handler->display->display_options['fields']['field_current_version']['field'] = 'field_current_version';
  $handler->display->display_options['fields']['field_current_version']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_standard_ref_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'standard_version' => 'standard_version',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Standard versions';
  $export['standard_versions'] = $view;

  return $export;
}
