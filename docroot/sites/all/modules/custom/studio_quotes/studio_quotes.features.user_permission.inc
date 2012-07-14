<?php
/**
 * @file
 * studio_quotes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function studio_quotes_user_default_permissions() {
  $permissions = array();

  // Exported permission: create quote content.
  $permissions['create quote content'] = array(
    'name' => 'create quote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any quote content.
  $permissions['delete any quote content'] = array(
    'name' => 'delete any quote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own quote content.
  $permissions['delete own quote content'] = array(
    'name' => 'delete own quote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any quote content.
  $permissions['edit any quote content'] = array(
    'name' => 'edit any quote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own quote content.
  $permissions['edit own quote content'] = array(
    'name' => 'edit own quote content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
