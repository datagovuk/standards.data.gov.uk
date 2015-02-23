<?php
/**
 * @file
 * meeting_minutes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function meeting_minutes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create meeting_minute content'.
  $permissions['create meeting_minute content'] = array(
    'name' => 'create meeting_minute content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any meeting_minute content'.
  $permissions['delete any meeting_minute content'] = array(
    'name' => 'delete any meeting_minute content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own meeting_minute content'.
  $permissions['delete own meeting_minute content'] = array(
    'name' => 'delete own meeting_minute content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any meeting_minute content'.
  $permissions['edit any meeting_minute content'] = array(
    'name' => 'edit any meeting_minute content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own meeting_minute content'.
  $permissions['edit own meeting_minute content'] = array(
    'name' => 'edit own meeting_minute content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
