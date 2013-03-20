<?php
/**
 * @file
 * proposals.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function proposals_user_default_permissions() {
  $permissions = array();

  // Exported permission: create proposal content.
  $permissions['create proposal content'] = array(
    'name' => 'create proposal content',
    'roles' => array(
      'SRO' => 'SRO',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any proposal content.
  $permissions['delete any proposal content'] = array(
    'name' => 'delete any proposal content',
    'roles' => array(
      'SRO' => 'SRO',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own proposal content.
  $permissions['delete own proposal content'] = array(
    'name' => 'delete own proposal content',
    'roles' => array(
      'SRO' => 'SRO',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any proposal content.
  $permissions['edit any proposal content'] = array(
    'name' => 'edit any proposal content',
    'roles' => array(
      'SRO' => 'SRO',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own proposal content.
  $permissions['edit own proposal content'] = array(
    'name' => 'edit own proposal content',
    'roles' => array(
      'SRO' => 'SRO',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
