<?php
/**
 * @file
 * challenges.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function challenges_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create challenge content'.
  $permissions['create challenge content'] = array(
    'name' => 'create challenge content',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_sro'.
  $permissions['create field_sro'] = array(
    'name' => 'create field_sro',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_status_update'.
  $permissions['create field_status_update'] = array(
    'name' => 'create field_status_update',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any challenge content'.
  $permissions['delete any challenge content'] = array(
    'name' => 'delete any challenge content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own challenge content'.
  $permissions['delete own challenge content'] = array(
    'name' => 'delete own challenge content',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any challenge content'.
  $permissions['edit any challenge content'] = array(
    'name' => 'edit any challenge content',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_sro'.
  $permissions['edit field_sro'] = array(
    'name' => 'edit field_sro',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_status_update'.
  $permissions['edit field_status_update'] = array(
    'name' => 'edit field_status_update',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own challenge content'.
  $permissions['edit own challenge content'] = array(
    'name' => 'edit own challenge content',
    'roles' => array(
      'SRO' => 'SRO',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_sro'.
  $permissions['edit own field_sro'] = array(
    'name' => 'edit own field_sro',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_status_update'.
  $permissions['edit own field_status_update'] = array(
    'name' => 'edit own field_status_update',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_sro'.
  $permissions['view field_sro'] = array(
    'name' => 'view field_sro',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_status_update'.
  $permissions['view field_status_update'] = array(
    'name' => 'view field_status_update',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sro'.
  $permissions['view own field_sro'] = array(
    'name' => 'view own field_sro',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_status_update'.
  $permissions['view own field_status_update'] = array(
    'name' => 'view own field_status_update',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  return $permissions;
}
