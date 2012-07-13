<?php
/**
 * @file
 * studio_team.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function studio_team_user_default_permissions() {
  $permissions = array();

  // Exported permission: create team_member content.
  $permissions['create team_member content'] = array(
    'name' => 'create team_member content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any team_member content.
  $permissions['delete any team_member content'] = array(
    'name' => 'delete any team_member content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own team_member content.
  $permissions['delete own team_member content'] = array(
    'name' => 'delete own team_member content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any team_member content.
  $permissions['edit any team_member content'] = array(
    'name' => 'edit any team_member content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own team_member content.
  $permissions['edit own team_member content'] = array(
    'name' => 'edit own team_member content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
