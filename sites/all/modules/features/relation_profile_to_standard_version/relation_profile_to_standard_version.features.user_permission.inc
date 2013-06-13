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

  // Exported permission: create field_ass_area_of_application.
  $permissions['create field_ass_area_of_application'] = array(
    'name' => 'create field_ass_area_of_application',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ass_area_of_application2.
  $permissions['create field_ass_area_of_application2'] = array(
    'name' => 'create field_ass_area_of_application2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ass_development_status.
  $permissions['create field_ass_development_status'] = array(
    'name' => 'create field_ass_development_status',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ass_other.
  $permissions['create field_ass_other'] = array(
    'name' => 'create field_ass_other',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ass_quality.
  $permissions['create field_ass_quality'] = array(
    'name' => 'create field_ass_quality',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ass_question.
  $permissions['create field_ass_question'] = array(
    'name' => 'create field_ass_question',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ass_requirements.
  $permissions['create field_ass_requirements'] = array(
    'name' => 'create field_ass_requirements',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_knock_out.
  $permissions['create field_knock_out'] = array(
    'name' => 'create field_knock_out',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ass_area_of_application.
  $permissions['edit field_ass_area_of_application'] = array(
    'name' => 'edit field_ass_area_of_application',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ass_area_of_application2.
  $permissions['edit field_ass_area_of_application2'] = array(
    'name' => 'edit field_ass_area_of_application2',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ass_development_status.
  $permissions['edit field_ass_development_status'] = array(
    'name' => 'edit field_ass_development_status',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ass_other.
  $permissions['edit field_ass_other'] = array(
    'name' => 'edit field_ass_other',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ass_quality.
  $permissions['edit field_ass_quality'] = array(
    'name' => 'edit field_ass_quality',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ass_question.
  $permissions['edit field_ass_question'] = array(
    'name' => 'edit field_ass_question',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ass_requirements.
  $permissions['edit field_ass_requirements'] = array(
    'name' => 'edit field_ass_requirements',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_knock_out.
  $permissions['edit field_knock_out'] = array(
    'name' => 'edit field_knock_out',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ass_area_of_application.
  $permissions['edit own field_ass_area_of_application'] = array(
    'name' => 'edit own field_ass_area_of_application',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ass_area_of_application2.
  $permissions['edit own field_ass_area_of_application2'] = array(
    'name' => 'edit own field_ass_area_of_application2',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ass_development_status.
  $permissions['edit own field_ass_development_status'] = array(
    'name' => 'edit own field_ass_development_status',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ass_other.
  $permissions['edit own field_ass_other'] = array(
    'name' => 'edit own field_ass_other',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ass_quality.
  $permissions['edit own field_ass_quality'] = array(
    'name' => 'edit own field_ass_quality',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ass_question.
  $permissions['edit own field_ass_question'] = array(
    'name' => 'edit own field_ass_question',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ass_requirements.
  $permissions['edit own field_ass_requirements'] = array(
    'name' => 'edit own field_ass_requirements',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_knock_out.
  $permissions['edit own field_knock_out'] = array(
    'name' => 'edit own field_knock_out',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ass_area_of_application.
  $permissions['view field_ass_area_of_application'] = array(
    'name' => 'view field_ass_area_of_application',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ass_area_of_application2.
  $permissions['view field_ass_area_of_application2'] = array(
    'name' => 'view field_ass_area_of_application2',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ass_development_status.
  $permissions['view field_ass_development_status'] = array(
    'name' => 'view field_ass_development_status',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ass_other.
  $permissions['view field_ass_other'] = array(
    'name' => 'view field_ass_other',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ass_quality.
  $permissions['view field_ass_quality'] = array(
    'name' => 'view field_ass_quality',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ass_question.
  $permissions['view field_ass_question'] = array(
    'name' => 'view field_ass_question',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ass_requirements.
  $permissions['view field_ass_requirements'] = array(
    'name' => 'view field_ass_requirements',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_knock_out.
  $permissions['view field_knock_out'] = array(
    'name' => 'view field_knock_out',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ass_area_of_application.
  $permissions['view own field_ass_area_of_application'] = array(
    'name' => 'view own field_ass_area_of_application',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ass_area_of_application2.
  $permissions['view own field_ass_area_of_application2'] = array(
    'name' => 'view own field_ass_area_of_application2',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ass_development_status.
  $permissions['view own field_ass_development_status'] = array(
    'name' => 'view own field_ass_development_status',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ass_other.
  $permissions['view own field_ass_other'] = array(
    'name' => 'view own field_ass_other',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ass_quality.
  $permissions['view own field_ass_quality'] = array(
    'name' => 'view own field_ass_quality',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ass_question.
  $permissions['view own field_ass_question'] = array(
    'name' => 'view own field_ass_question',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ass_requirements.
  $permissions['view own field_ass_requirements'] = array(
    'name' => 'view own field_ass_requirements',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_knock_out.
  $permissions['view own field_knock_out'] = array(
    'name' => 'view own field_knock_out',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
