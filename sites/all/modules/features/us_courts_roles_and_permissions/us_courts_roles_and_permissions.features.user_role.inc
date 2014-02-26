<?php
/**
 * @file
 * us_courts_roles_and_permissions.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function us_courts_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '5',
  );

  // Exported role: content creator
  $roles['content creator'] = array(
    'name' => 'content creator',
    'weight' => '2',
  );

  // Exported role: court administrator
  $roles['court administrator'] = array(
    'name' => 'court administrator',
    'weight' => '4',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '3',
  );

  return $roles;
}
