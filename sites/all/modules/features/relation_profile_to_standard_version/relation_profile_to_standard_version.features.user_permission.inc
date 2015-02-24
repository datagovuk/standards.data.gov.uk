<?php
/**
 * @file
 * relation_profile_to_standard_version.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function relation_profile_to_standard_version_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access relations'.
  $permissions['access relations'] = array(
    'name' => 'access relations',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'administer relation types'.
  $permissions['administer relation types'] = array(
    'name' => 'administer relation types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'administer relations'.
  $permissions['administer relations'] = array(
    'name' => 'administer relations',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'create field_ass_area_of_application'.
  $permissions['create field_ass_area_of_application'] = array(
    'name' => 'create field_ass_area_of_application',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_area_of_application2'.
  $permissions['create field_ass_area_of_application2'] = array(
    'name' => 'create field_ass_area_of_application2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_compatibility'.
  $permissions['create field_ass_compatibility'] = array(
    'name' => 'create field_ass_compatibility',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_compatibility2'.
  $permissions['create field_ass_compatibility2'] = array(
    'name' => 'create field_ass_compatibility2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_dependencies'.
  $permissions['create field_ass_dependencies'] = array(
    'name' => 'create field_ass_dependencies',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_dependencies2'.
  $permissions['create field_ass_dependencies2'] = array(
    'name' => 'create field_ass_dependencies2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_dependencies3'.
  $permissions['create field_ass_dependencies3'] = array(
    'name' => 'create field_ass_dependencies3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_development_status'.
  $permissions['create field_ass_development_status'] = array(
    'name' => 'create field_ass_development_status',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_documentation'.
  $permissions['create field_ass_documentation'] = array(
    'name' => 'create field_ass_documentation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_documentation2'.
  $permissions['create field_ass_documentation2'] = array(
    'name' => 'create field_ass_documentation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_existing_eur_standard'.
  $permissions['create field_ass_existing_eur_standard'] = array(
    'name' => 'create field_ass_existing_eur_standard',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_guidelines'.
  $permissions['create field_ass_guidelines'] = array(
    'name' => 'create field_ass_guidelines',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_guidelines2'.
  $permissions['create field_ass_guidelines2'] = array(
    'name' => 'create field_ass_guidelines2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_impact'.
  $permissions['create field_ass_impact'] = array(
    'name' => 'create field_ass_impact',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_impact2'.
  $permissions['create field_ass_impact2'] = array(
    'name' => 'create field_ass_impact2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_impact3'.
  $permissions['create field_ass_impact3'] = array(
    'name' => 'create field_ass_impact3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_impact4'.
  $permissions['create field_ass_impact4'] = array(
    'name' => 'create field_ass_impact4',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_impact5'.
  $permissions['create field_ass_impact5'] = array(
    'name' => 'create field_ass_impact5',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_impact6'.
  $permissions['create field_ass_impact6'] = array(
    'name' => 'create field_ass_impact6',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_impact7'.
  $permissions['create field_ass_impact7'] = array(
    'name' => 'create field_ass_impact7',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_implementations'.
  $permissions['create field_ass_implementations'] = array(
    'name' => 'create field_ass_implementations',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_implementations2'.
  $permissions['create field_ass_implementations2'] = array(
    'name' => 'create field_ass_implementations2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_implementations3'.
  $permissions['create field_ass_implementations3'] = array(
    'name' => 'create field_ass_implementations3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_interest_groups'.
  $permissions['create field_ass_interest_groups'] = array(
    'name' => 'create field_ass_interest_groups',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_ipr_documentation'.
  $permissions['create field_ass_ipr_documentation'] = array(
    'name' => 'create field_ass_ipr_documentation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_ipr_documentation2'.
  $permissions['create field_ass_ipr_documentation2'] = array(
    'name' => 'create field_ass_ipr_documentation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_maintenance_devel'.
  $permissions['create field_ass_maintenance_devel'] = array(
    'name' => 'create field_ass_maintenance_devel',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_maintenance_devel2'.
  $permissions['create field_ass_maintenance_devel2'] = array(
    'name' => 'create field_ass_maintenance_devel2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_maintenance_devel3'.
  $permissions['create field_ass_maintenance_devel3'] = array(
    'name' => 'create field_ass_maintenance_devel3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_maintenance_devel4'.
  $permissions['create field_ass_maintenance_devel4'] = array(
    'name' => 'create field_ass_maintenance_devel4',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_maintenance_devel5'.
  $permissions['create field_ass_maintenance_devel5'] = array(
    'name' => 'create field_ass_maintenance_devel5',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_market_demand'.
  $permissions['create field_ass_market_demand'] = array(
    'name' => 'create field_ass_market_demand',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_organisation'.
  $permissions['create field_ass_organisation'] = array(
    'name' => 'create field_ass_organisation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_organisation2'.
  $permissions['create field_ass_organisation2'] = array(
    'name' => 'create field_ass_organisation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_other'.
  $permissions['create field_ass_other'] = array(
    'name' => 'create field_ass_other',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_process'.
  $permissions['create field_ass_process'] = array(
    'name' => 'create field_ass_process',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_process2'.
  $permissions['create field_ass_process2'] = array(
    'name' => 'create field_ass_process2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_process3'.
  $permissions['create field_ass_process3'] = array(
    'name' => 'create field_ass_process3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_process4'.
  $permissions['create field_ass_process4'] = array(
    'name' => 'create field_ass_process4',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_process5'.
  $permissions['create field_ass_process5'] = array(
    'name' => 'create field_ass_process5',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_quality'.
  $permissions['create field_ass_quality'] = array(
    'name' => 'create field_ass_quality',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_quality2'.
  $permissions['create field_ass_quality2'] = array(
    'name' => 'create field_ass_quality2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_question'.
  $permissions['create field_ass_question'] = array(
    'name' => 'create field_ass_question',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_requirements'.
  $permissions['create field_ass_requirements'] = array(
    'name' => 'create field_ass_requirements',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_reusability'.
  $permissions['create field_ass_reusability'] = array(
    'name' => 'create field_ass_reusability',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_spec_under_consid'.
  $permissions['create field_ass_spec_under_consid'] = array(
    'name' => 'create field_ass_spec_under_consid',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_stability'.
  $permissions['create field_ass_stability'] = array(
    'name' => 'create field_ass_stability',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_stability2'.
  $permissions['create field_ass_stability2'] = array(
    'name' => 'create field_ass_stability2',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ass_users'.
  $permissions['create field_ass_users'] = array(
    'name' => 'create field_ass_users',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_justification'.
  $permissions['create field_justification'] = array(
    'name' => 'create field_justification',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_knock_out'.
  $permissions['create field_knock_out'] = array(
    'name' => 'create field_knock_out',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_question_considered'.
  $permissions['create field_question_considered'] = array(
    'name' => 'create field_question_considered',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_response'.
  $permissions['create field_response'] = array(
    'name' => 'create field_response',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create relations'.
  $permissions['create relations'] = array(
    'name' => 'create relations',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'delete relations'.
  $permissions['delete relations'] = array(
    'name' => 'delete relations',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'edit field_ass_area_of_application'.
  $permissions['edit field_ass_area_of_application'] = array(
    'name' => 'edit field_ass_area_of_application',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_area_of_application2'.
  $permissions['edit field_ass_area_of_application2'] = array(
    'name' => 'edit field_ass_area_of_application2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_compatibility'.
  $permissions['edit field_ass_compatibility'] = array(
    'name' => 'edit field_ass_compatibility',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_compatibility2'.
  $permissions['edit field_ass_compatibility2'] = array(
    'name' => 'edit field_ass_compatibility2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_dependencies'.
  $permissions['edit field_ass_dependencies'] = array(
    'name' => 'edit field_ass_dependencies',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_dependencies2'.
  $permissions['edit field_ass_dependencies2'] = array(
    'name' => 'edit field_ass_dependencies2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_dependencies3'.
  $permissions['edit field_ass_dependencies3'] = array(
    'name' => 'edit field_ass_dependencies3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_development_status'.
  $permissions['edit field_ass_development_status'] = array(
    'name' => 'edit field_ass_development_status',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_documentation'.
  $permissions['edit field_ass_documentation'] = array(
    'name' => 'edit field_ass_documentation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_documentation2'.
  $permissions['edit field_ass_documentation2'] = array(
    'name' => 'edit field_ass_documentation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_existing_eur_standard'.
  $permissions['edit field_ass_existing_eur_standard'] = array(
    'name' => 'edit field_ass_existing_eur_standard',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_guidelines'.
  $permissions['edit field_ass_guidelines'] = array(
    'name' => 'edit field_ass_guidelines',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_guidelines2'.
  $permissions['edit field_ass_guidelines2'] = array(
    'name' => 'edit field_ass_guidelines2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_impact'.
  $permissions['edit field_ass_impact'] = array(
    'name' => 'edit field_ass_impact',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_impact2'.
  $permissions['edit field_ass_impact2'] = array(
    'name' => 'edit field_ass_impact2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_impact3'.
  $permissions['edit field_ass_impact3'] = array(
    'name' => 'edit field_ass_impact3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_impact4'.
  $permissions['edit field_ass_impact4'] = array(
    'name' => 'edit field_ass_impact4',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_impact5'.
  $permissions['edit field_ass_impact5'] = array(
    'name' => 'edit field_ass_impact5',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_impact6'.
  $permissions['edit field_ass_impact6'] = array(
    'name' => 'edit field_ass_impact6',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_impact7'.
  $permissions['edit field_ass_impact7'] = array(
    'name' => 'edit field_ass_impact7',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_implementations'.
  $permissions['edit field_ass_implementations'] = array(
    'name' => 'edit field_ass_implementations',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_implementations2'.
  $permissions['edit field_ass_implementations2'] = array(
    'name' => 'edit field_ass_implementations2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_implementations3'.
  $permissions['edit field_ass_implementations3'] = array(
    'name' => 'edit field_ass_implementations3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_interest_groups'.
  $permissions['edit field_ass_interest_groups'] = array(
    'name' => 'edit field_ass_interest_groups',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_ipr_documentation'.
  $permissions['edit field_ass_ipr_documentation'] = array(
    'name' => 'edit field_ass_ipr_documentation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_ipr_documentation2'.
  $permissions['edit field_ass_ipr_documentation2'] = array(
    'name' => 'edit field_ass_ipr_documentation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_maintenance_devel'.
  $permissions['edit field_ass_maintenance_devel'] = array(
    'name' => 'edit field_ass_maintenance_devel',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_maintenance_devel2'.
  $permissions['edit field_ass_maintenance_devel2'] = array(
    'name' => 'edit field_ass_maintenance_devel2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_maintenance_devel3'.
  $permissions['edit field_ass_maintenance_devel3'] = array(
    'name' => 'edit field_ass_maintenance_devel3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_maintenance_devel4'.
  $permissions['edit field_ass_maintenance_devel4'] = array(
    'name' => 'edit field_ass_maintenance_devel4',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_maintenance_devel5'.
  $permissions['edit field_ass_maintenance_devel5'] = array(
    'name' => 'edit field_ass_maintenance_devel5',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_market_demand'.
  $permissions['edit field_ass_market_demand'] = array(
    'name' => 'edit field_ass_market_demand',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_organisation'.
  $permissions['edit field_ass_organisation'] = array(
    'name' => 'edit field_ass_organisation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_organisation2'.
  $permissions['edit field_ass_organisation2'] = array(
    'name' => 'edit field_ass_organisation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_other'.
  $permissions['edit field_ass_other'] = array(
    'name' => 'edit field_ass_other',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_process'.
  $permissions['edit field_ass_process'] = array(
    'name' => 'edit field_ass_process',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_process2'.
  $permissions['edit field_ass_process2'] = array(
    'name' => 'edit field_ass_process2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_process3'.
  $permissions['edit field_ass_process3'] = array(
    'name' => 'edit field_ass_process3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_process4'.
  $permissions['edit field_ass_process4'] = array(
    'name' => 'edit field_ass_process4',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_process5'.
  $permissions['edit field_ass_process5'] = array(
    'name' => 'edit field_ass_process5',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_quality'.
  $permissions['edit field_ass_quality'] = array(
    'name' => 'edit field_ass_quality',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_quality2'.
  $permissions['edit field_ass_quality2'] = array(
    'name' => 'edit field_ass_quality2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_question'.
  $permissions['edit field_ass_question'] = array(
    'name' => 'edit field_ass_question',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_requirements'.
  $permissions['edit field_ass_requirements'] = array(
    'name' => 'edit field_ass_requirements',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_reusability'.
  $permissions['edit field_ass_reusability'] = array(
    'name' => 'edit field_ass_reusability',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_spec_under_consid'.
  $permissions['edit field_ass_spec_under_consid'] = array(
    'name' => 'edit field_ass_spec_under_consid',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_stability'.
  $permissions['edit field_ass_stability'] = array(
    'name' => 'edit field_ass_stability',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_stability2'.
  $permissions['edit field_ass_stability2'] = array(
    'name' => 'edit field_ass_stability2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ass_users'.
  $permissions['edit field_ass_users'] = array(
    'name' => 'edit field_ass_users',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_justification'.
  $permissions['edit field_justification'] = array(
    'name' => 'edit field_justification',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_knock_out'.
  $permissions['edit field_knock_out'] = array(
    'name' => 'edit field_knock_out',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_question_considered'.
  $permissions['edit field_question_considered'] = array(
    'name' => 'edit field_question_considered',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_response'.
  $permissions['edit field_response'] = array(
    'name' => 'edit field_response',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_area_of_application'.
  $permissions['edit own field_ass_area_of_application'] = array(
    'name' => 'edit own field_ass_area_of_application',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_area_of_application2'.
  $permissions['edit own field_ass_area_of_application2'] = array(
    'name' => 'edit own field_ass_area_of_application2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_compatibility'.
  $permissions['edit own field_ass_compatibility'] = array(
    'name' => 'edit own field_ass_compatibility',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_compatibility2'.
  $permissions['edit own field_ass_compatibility2'] = array(
    'name' => 'edit own field_ass_compatibility2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_dependencies'.
  $permissions['edit own field_ass_dependencies'] = array(
    'name' => 'edit own field_ass_dependencies',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_dependencies2'.
  $permissions['edit own field_ass_dependencies2'] = array(
    'name' => 'edit own field_ass_dependencies2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_dependencies3'.
  $permissions['edit own field_ass_dependencies3'] = array(
    'name' => 'edit own field_ass_dependencies3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_development_status'.
  $permissions['edit own field_ass_development_status'] = array(
    'name' => 'edit own field_ass_development_status',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_documentation'.
  $permissions['edit own field_ass_documentation'] = array(
    'name' => 'edit own field_ass_documentation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_documentation2'.
  $permissions['edit own field_ass_documentation2'] = array(
    'name' => 'edit own field_ass_documentation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_existing_eur_standard'.
  $permissions['edit own field_ass_existing_eur_standard'] = array(
    'name' => 'edit own field_ass_existing_eur_standard',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_guidelines'.
  $permissions['edit own field_ass_guidelines'] = array(
    'name' => 'edit own field_ass_guidelines',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_guidelines2'.
  $permissions['edit own field_ass_guidelines2'] = array(
    'name' => 'edit own field_ass_guidelines2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_impact'.
  $permissions['edit own field_ass_impact'] = array(
    'name' => 'edit own field_ass_impact',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_impact2'.
  $permissions['edit own field_ass_impact2'] = array(
    'name' => 'edit own field_ass_impact2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_impact3'.
  $permissions['edit own field_ass_impact3'] = array(
    'name' => 'edit own field_ass_impact3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_impact4'.
  $permissions['edit own field_ass_impact4'] = array(
    'name' => 'edit own field_ass_impact4',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_impact5'.
  $permissions['edit own field_ass_impact5'] = array(
    'name' => 'edit own field_ass_impact5',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_impact6'.
  $permissions['edit own field_ass_impact6'] = array(
    'name' => 'edit own field_ass_impact6',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_impact7'.
  $permissions['edit own field_ass_impact7'] = array(
    'name' => 'edit own field_ass_impact7',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_implementations'.
  $permissions['edit own field_ass_implementations'] = array(
    'name' => 'edit own field_ass_implementations',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_implementations2'.
  $permissions['edit own field_ass_implementations2'] = array(
    'name' => 'edit own field_ass_implementations2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_implementations3'.
  $permissions['edit own field_ass_implementations3'] = array(
    'name' => 'edit own field_ass_implementations3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_interest_groups'.
  $permissions['edit own field_ass_interest_groups'] = array(
    'name' => 'edit own field_ass_interest_groups',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_ipr_documentation'.
  $permissions['edit own field_ass_ipr_documentation'] = array(
    'name' => 'edit own field_ass_ipr_documentation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_ipr_documentation2'.
  $permissions['edit own field_ass_ipr_documentation2'] = array(
    'name' => 'edit own field_ass_ipr_documentation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_maintenance_devel'.
  $permissions['edit own field_ass_maintenance_devel'] = array(
    'name' => 'edit own field_ass_maintenance_devel',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_maintenance_devel2'.
  $permissions['edit own field_ass_maintenance_devel2'] = array(
    'name' => 'edit own field_ass_maintenance_devel2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_maintenance_devel3'.
  $permissions['edit own field_ass_maintenance_devel3'] = array(
    'name' => 'edit own field_ass_maintenance_devel3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_maintenance_devel4'.
  $permissions['edit own field_ass_maintenance_devel4'] = array(
    'name' => 'edit own field_ass_maintenance_devel4',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_maintenance_devel5'.
  $permissions['edit own field_ass_maintenance_devel5'] = array(
    'name' => 'edit own field_ass_maintenance_devel5',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_market_demand'.
  $permissions['edit own field_ass_market_demand'] = array(
    'name' => 'edit own field_ass_market_demand',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_organisation'.
  $permissions['edit own field_ass_organisation'] = array(
    'name' => 'edit own field_ass_organisation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_organisation2'.
  $permissions['edit own field_ass_organisation2'] = array(
    'name' => 'edit own field_ass_organisation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_other'.
  $permissions['edit own field_ass_other'] = array(
    'name' => 'edit own field_ass_other',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_process'.
  $permissions['edit own field_ass_process'] = array(
    'name' => 'edit own field_ass_process',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_process2'.
  $permissions['edit own field_ass_process2'] = array(
    'name' => 'edit own field_ass_process2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_process3'.
  $permissions['edit own field_ass_process3'] = array(
    'name' => 'edit own field_ass_process3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_process4'.
  $permissions['edit own field_ass_process4'] = array(
    'name' => 'edit own field_ass_process4',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_process5'.
  $permissions['edit own field_ass_process5'] = array(
    'name' => 'edit own field_ass_process5',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_quality'.
  $permissions['edit own field_ass_quality'] = array(
    'name' => 'edit own field_ass_quality',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_quality2'.
  $permissions['edit own field_ass_quality2'] = array(
    'name' => 'edit own field_ass_quality2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_question'.
  $permissions['edit own field_ass_question'] = array(
    'name' => 'edit own field_ass_question',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_requirements'.
  $permissions['edit own field_ass_requirements'] = array(
    'name' => 'edit own field_ass_requirements',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_reusability'.
  $permissions['edit own field_ass_reusability'] = array(
    'name' => 'edit own field_ass_reusability',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_spec_under_consid'.
  $permissions['edit own field_ass_spec_under_consid'] = array(
    'name' => 'edit own field_ass_spec_under_consid',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_stability'.
  $permissions['edit own field_ass_stability'] = array(
    'name' => 'edit own field_ass_stability',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_stability2'.
  $permissions['edit own field_ass_stability2'] = array(
    'name' => 'edit own field_ass_stability2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ass_users'.
  $permissions['edit own field_ass_users'] = array(
    'name' => 'edit own field_ass_users',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_justification'.
  $permissions['edit own field_justification'] = array(
    'name' => 'edit own field_justification',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_knock_out'.
  $permissions['edit own field_knock_out'] = array(
    'name' => 'edit own field_knock_out',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_question_considered'.
  $permissions['edit own field_question_considered'] = array(
    'name' => 'edit own field_question_considered',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_response'.
  $permissions['edit own field_response'] = array(
    'name' => 'edit own field_response',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit relations'.
  $permissions['edit relations'] = array(
    'name' => 'edit relations',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'export relation types'.
  $permissions['export relation types'] = array(
    'name' => 'export relation types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'relation add endpoint autocomplete access'.
  $permissions['relation add endpoint autocomplete access'] = array(
    'name' => 'relation add endpoint autocomplete access',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'relation_add',
  );

  // Exported permission: 'view field_ass_area_of_application'.
  $permissions['view field_ass_area_of_application'] = array(
    'name' => 'view field_ass_area_of_application',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_area_of_application2'.
  $permissions['view field_ass_area_of_application2'] = array(
    'name' => 'view field_ass_area_of_application2',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_compatibility'.
  $permissions['view field_ass_compatibility'] = array(
    'name' => 'view field_ass_compatibility',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_compatibility2'.
  $permissions['view field_ass_compatibility2'] = array(
    'name' => 'view field_ass_compatibility2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_dependencies'.
  $permissions['view field_ass_dependencies'] = array(
    'name' => 'view field_ass_dependencies',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_dependencies2'.
  $permissions['view field_ass_dependencies2'] = array(
    'name' => 'view field_ass_dependencies2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_dependencies3'.
  $permissions['view field_ass_dependencies3'] = array(
    'name' => 'view field_ass_dependencies3',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_development_status'.
  $permissions['view field_ass_development_status'] = array(
    'name' => 'view field_ass_development_status',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_documentation'.
  $permissions['view field_ass_documentation'] = array(
    'name' => 'view field_ass_documentation',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_documentation2'.
  $permissions['view field_ass_documentation2'] = array(
    'name' => 'view field_ass_documentation2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_existing_eur_standard'.
  $permissions['view field_ass_existing_eur_standard'] = array(
    'name' => 'view field_ass_existing_eur_standard',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_guidelines'.
  $permissions['view field_ass_guidelines'] = array(
    'name' => 'view field_ass_guidelines',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_guidelines2'.
  $permissions['view field_ass_guidelines2'] = array(
    'name' => 'view field_ass_guidelines2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_impact'.
  $permissions['view field_ass_impact'] = array(
    'name' => 'view field_ass_impact',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_impact2'.
  $permissions['view field_ass_impact2'] = array(
    'name' => 'view field_ass_impact2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_impact3'.
  $permissions['view field_ass_impact3'] = array(
    'name' => 'view field_ass_impact3',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_impact4'.
  $permissions['view field_ass_impact4'] = array(
    'name' => 'view field_ass_impact4',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_impact5'.
  $permissions['view field_ass_impact5'] = array(
    'name' => 'view field_ass_impact5',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_impact6'.
  $permissions['view field_ass_impact6'] = array(
    'name' => 'view field_ass_impact6',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_impact7'.
  $permissions['view field_ass_impact7'] = array(
    'name' => 'view field_ass_impact7',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_implementations'.
  $permissions['view field_ass_implementations'] = array(
    'name' => 'view field_ass_implementations',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_implementations2'.
  $permissions['view field_ass_implementations2'] = array(
    'name' => 'view field_ass_implementations2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_implementations3'.
  $permissions['view field_ass_implementations3'] = array(
    'name' => 'view field_ass_implementations3',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_interest_groups'.
  $permissions['view field_ass_interest_groups'] = array(
    'name' => 'view field_ass_interest_groups',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_ipr_documentation'.
  $permissions['view field_ass_ipr_documentation'] = array(
    'name' => 'view field_ass_ipr_documentation',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_ipr_documentation2'.
  $permissions['view field_ass_ipr_documentation2'] = array(
    'name' => 'view field_ass_ipr_documentation2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_maintenance_devel'.
  $permissions['view field_ass_maintenance_devel'] = array(
    'name' => 'view field_ass_maintenance_devel',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_maintenance_devel2'.
  $permissions['view field_ass_maintenance_devel2'] = array(
    'name' => 'view field_ass_maintenance_devel2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_maintenance_devel3'.
  $permissions['view field_ass_maintenance_devel3'] = array(
    'name' => 'view field_ass_maintenance_devel3',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_maintenance_devel4'.
  $permissions['view field_ass_maintenance_devel4'] = array(
    'name' => 'view field_ass_maintenance_devel4',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_maintenance_devel5'.
  $permissions['view field_ass_maintenance_devel5'] = array(
    'name' => 'view field_ass_maintenance_devel5',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_market_demand'.
  $permissions['view field_ass_market_demand'] = array(
    'name' => 'view field_ass_market_demand',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_organisation'.
  $permissions['view field_ass_organisation'] = array(
    'name' => 'view field_ass_organisation',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_organisation2'.
  $permissions['view field_ass_organisation2'] = array(
    'name' => 'view field_ass_organisation2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_other'.
  $permissions['view field_ass_other'] = array(
    'name' => 'view field_ass_other',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_process'.
  $permissions['view field_ass_process'] = array(
    'name' => 'view field_ass_process',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_process2'.
  $permissions['view field_ass_process2'] = array(
    'name' => 'view field_ass_process2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_process3'.
  $permissions['view field_ass_process3'] = array(
    'name' => 'view field_ass_process3',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_process4'.
  $permissions['view field_ass_process4'] = array(
    'name' => 'view field_ass_process4',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_process5'.
  $permissions['view field_ass_process5'] = array(
    'name' => 'view field_ass_process5',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_quality'.
  $permissions['view field_ass_quality'] = array(
    'name' => 'view field_ass_quality',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_quality2'.
  $permissions['view field_ass_quality2'] = array(
    'name' => 'view field_ass_quality2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_question'.
  $permissions['view field_ass_question'] = array(
    'name' => 'view field_ass_question',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_requirements'.
  $permissions['view field_ass_requirements'] = array(
    'name' => 'view field_ass_requirements',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_reusability'.
  $permissions['view field_ass_reusability'] = array(
    'name' => 'view field_ass_reusability',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_spec_under_consid'.
  $permissions['view field_ass_spec_under_consid'] = array(
    'name' => 'view field_ass_spec_under_consid',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_stability'.
  $permissions['view field_ass_stability'] = array(
    'name' => 'view field_ass_stability',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_stability2'.
  $permissions['view field_ass_stability2'] = array(
    'name' => 'view field_ass_stability2',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_users'.
  $permissions['view field_ass_users'] = array(
    'name' => 'view field_ass_users',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_justification'.
  $permissions['view field_justification'] = array(
    'name' => 'view field_justification',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_knock_out'.
  $permissions['view field_knock_out'] = array(
    'name' => 'view field_knock_out',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_question_considered'.
  $permissions['view field_question_considered'] = array(
    'name' => 'view field_question_considered',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_response'.
  $permissions['view field_response'] = array(
    'name' => 'view field_response',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'unverified user' => 'unverified user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_area_of_application'.
  $permissions['view own field_ass_area_of_application'] = array(
    'name' => 'view own field_ass_area_of_application',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_area_of_application2'.
  $permissions['view own field_ass_area_of_application2'] = array(
    'name' => 'view own field_ass_area_of_application2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_compatibility'.
  $permissions['view own field_ass_compatibility'] = array(
    'name' => 'view own field_ass_compatibility',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_compatibility2'.
  $permissions['view own field_ass_compatibility2'] = array(
    'name' => 'view own field_ass_compatibility2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_dependencies'.
  $permissions['view own field_ass_dependencies'] = array(
    'name' => 'view own field_ass_dependencies',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_dependencies2'.
  $permissions['view own field_ass_dependencies2'] = array(
    'name' => 'view own field_ass_dependencies2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_dependencies3'.
  $permissions['view own field_ass_dependencies3'] = array(
    'name' => 'view own field_ass_dependencies3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_development_status'.
  $permissions['view own field_ass_development_status'] = array(
    'name' => 'view own field_ass_development_status',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_documentation'.
  $permissions['view own field_ass_documentation'] = array(
    'name' => 'view own field_ass_documentation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_documentation2'.
  $permissions['view own field_ass_documentation2'] = array(
    'name' => 'view own field_ass_documentation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_existing_eur_standard'.
  $permissions['view own field_ass_existing_eur_standard'] = array(
    'name' => 'view own field_ass_existing_eur_standard',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_guidelines'.
  $permissions['view own field_ass_guidelines'] = array(
    'name' => 'view own field_ass_guidelines',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_guidelines2'.
  $permissions['view own field_ass_guidelines2'] = array(
    'name' => 'view own field_ass_guidelines2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_impact'.
  $permissions['view own field_ass_impact'] = array(
    'name' => 'view own field_ass_impact',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_impact2'.
  $permissions['view own field_ass_impact2'] = array(
    'name' => 'view own field_ass_impact2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_impact3'.
  $permissions['view own field_ass_impact3'] = array(
    'name' => 'view own field_ass_impact3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_impact4'.
  $permissions['view own field_ass_impact4'] = array(
    'name' => 'view own field_ass_impact4',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_impact5'.
  $permissions['view own field_ass_impact5'] = array(
    'name' => 'view own field_ass_impact5',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_impact6'.
  $permissions['view own field_ass_impact6'] = array(
    'name' => 'view own field_ass_impact6',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_impact7'.
  $permissions['view own field_ass_impact7'] = array(
    'name' => 'view own field_ass_impact7',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_implementations'.
  $permissions['view own field_ass_implementations'] = array(
    'name' => 'view own field_ass_implementations',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_implementations2'.
  $permissions['view own field_ass_implementations2'] = array(
    'name' => 'view own field_ass_implementations2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_implementations3'.
  $permissions['view own field_ass_implementations3'] = array(
    'name' => 'view own field_ass_implementations3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_interest_groups'.
  $permissions['view own field_ass_interest_groups'] = array(
    'name' => 'view own field_ass_interest_groups',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_ipr_documentation'.
  $permissions['view own field_ass_ipr_documentation'] = array(
    'name' => 'view own field_ass_ipr_documentation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_ipr_documentation2'.
  $permissions['view own field_ass_ipr_documentation2'] = array(
    'name' => 'view own field_ass_ipr_documentation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_maintenance_devel'.
  $permissions['view own field_ass_maintenance_devel'] = array(
    'name' => 'view own field_ass_maintenance_devel',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_maintenance_devel2'.
  $permissions['view own field_ass_maintenance_devel2'] = array(
    'name' => 'view own field_ass_maintenance_devel2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_maintenance_devel3'.
  $permissions['view own field_ass_maintenance_devel3'] = array(
    'name' => 'view own field_ass_maintenance_devel3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_maintenance_devel4'.
  $permissions['view own field_ass_maintenance_devel4'] = array(
    'name' => 'view own field_ass_maintenance_devel4',
    'roles' => array(
      'SRO' => 'SRO',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_maintenance_devel5'.
  $permissions['view own field_ass_maintenance_devel5'] = array(
    'name' => 'view own field_ass_maintenance_devel5',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_market_demand'.
  $permissions['view own field_ass_market_demand'] = array(
    'name' => 'view own field_ass_market_demand',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_organisation'.
  $permissions['view own field_ass_organisation'] = array(
    'name' => 'view own field_ass_organisation',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_organisation2'.
  $permissions['view own field_ass_organisation2'] = array(
    'name' => 'view own field_ass_organisation2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_other'.
  $permissions['view own field_ass_other'] = array(
    'name' => 'view own field_ass_other',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_process'.
  $permissions['view own field_ass_process'] = array(
    'name' => 'view own field_ass_process',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_process2'.
  $permissions['view own field_ass_process2'] = array(
    'name' => 'view own field_ass_process2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_process3'.
  $permissions['view own field_ass_process3'] = array(
    'name' => 'view own field_ass_process3',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_process4'.
  $permissions['view own field_ass_process4'] = array(
    'name' => 'view own field_ass_process4',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_process5'.
  $permissions['view own field_ass_process5'] = array(
    'name' => 'view own field_ass_process5',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_quality'.
  $permissions['view own field_ass_quality'] = array(
    'name' => 'view own field_ass_quality',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_quality2'.
  $permissions['view own field_ass_quality2'] = array(
    'name' => 'view own field_ass_quality2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_question'.
  $permissions['view own field_ass_question'] = array(
    'name' => 'view own field_ass_question',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_requirements'.
  $permissions['view own field_ass_requirements'] = array(
    'name' => 'view own field_ass_requirements',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_reusability'.
  $permissions['view own field_ass_reusability'] = array(
    'name' => 'view own field_ass_reusability',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_spec_under_consid'.
  $permissions['view own field_ass_spec_under_consid'] = array(
    'name' => 'view own field_ass_spec_under_consid',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_stability'.
  $permissions['view own field_ass_stability'] = array(
    'name' => 'view own field_ass_stability',
    'roles' => array(
      'SRO' => 'SRO',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_stability2'.
  $permissions['view own field_ass_stability2'] = array(
    'name' => 'view own field_ass_stability2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_users'.
  $permissions['view own field_ass_users'] = array(
    'name' => 'view own field_ass_users',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_justification'.
  $permissions['view own field_justification'] = array(
    'name' => 'view own field_justification',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_knock_out'.
  $permissions['view own field_knock_out'] = array(
    'name' => 'view own field_knock_out',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_question_considered'.
  $permissions['view own field_question_considered'] = array(
    'name' => 'view own field_question_considered',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_response'.
  $permissions['view own field_response'] = array(
    'name' => 'view own field_response',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
