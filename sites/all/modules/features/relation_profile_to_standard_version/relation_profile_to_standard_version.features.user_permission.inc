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

  // Exported permission: 'create field_quantification'.
  $permissions['create field_quantification'] = array(
    'name' => 'create field_quantification',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
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

  // Exported permission: 'edit field_quantification'.
  $permissions['edit field_quantification'] = array(
    'name' => 'edit field_quantification',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
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

  // Exported permission: 'edit own field_quantification'.
  $permissions['edit own field_quantification'] = array(
    'name' => 'edit own field_quantification',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
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
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ass_requirements'.
  $permissions['view field_ass_requirements'] = array(
    'name' => 'view field_ass_requirements',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_quantification'.
  $permissions['view field_quantification'] = array(
    'name' => 'view field_quantification',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_area_of_application'.
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

  // Exported permission: 'view own field_ass_area_of_application2'.
  $permissions['view own field_ass_area_of_application2'] = array(
    'name' => 'view own field_ass_area_of_application2',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_development_status'.
  $permissions['view own field_ass_development_status'] = array(
    'name' => 'view own field_ass_development_status',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_other'.
  $permissions['view own field_ass_other'] = array(
    'name' => 'view own field_ass_other',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_quality'.
  $permissions['view own field_ass_quality'] = array(
    'name' => 'view own field_ass_quality',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_question'.
  $permissions['view own field_ass_question'] = array(
    'name' => 'view own field_ass_question',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ass_requirements'.
  $permissions['view own field_ass_requirements'] = array(
    'name' => 'view own field_ass_requirements',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
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

  // Exported permission: 'view own field_quantification'.
  $permissions['view own field_quantification'] = array(
    'name' => 'view own field_quantification',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
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
