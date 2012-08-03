<?php
/**
 * @file
 * studio_featured_items.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function studio_featured_items_user_default_permissions() {
  $permissions = array();

  // Exported permission: create featured_item content.
  $permissions['create featured_item content'] = array(
    'name' => 'create featured_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any featured_item content.
  $permissions['delete any featured_item content'] = array(
    'name' => 'delete any featured_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own featured_item content.
  $permissions['delete own featured_item content'] = array(
    'name' => 'delete own featured_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any featured_item content.
  $permissions['edit any featured_item content'] = array(
    'name' => 'edit any featured_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own featured_item content.
  $permissions['edit own featured_item content'] = array(
    'name' => 'edit own featured_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
