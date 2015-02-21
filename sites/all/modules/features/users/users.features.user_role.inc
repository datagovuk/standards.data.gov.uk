<?php
/**
 * @file
 * users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function users_user_default_roles() {
  $roles = array();

  // Exported role: SRO.
  $roles['SRO'] = array(
    'name' => 'SRO',
    'weight' => 5,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: trusted user.
  $roles['trusted user'] = array(
    'name' => 'trusted user',
    'weight' => 2,
  );

  // Exported role: unverified user.
  $roles['unverified user'] = array(
    'name' => 'unverified user',
    'weight' => 6,
  );

  return $roles;
}
