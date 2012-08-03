<?php
/**
 * @file
 * studio_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function studio_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create article content.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: create press_release content.
  $permissions['create press_release content'] = array(
    'name' => 'create press_release content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any article content.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any press_release content.
  $permissions['delete any press_release content'] = array(
    'name' => 'delete any press_release content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own article content.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own press_release content.
  $permissions['delete own press_release content'] = array(
    'name' => 'delete own press_release content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any article content.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any press_release content.
  $permissions['edit any press_release content'] = array(
    'name' => 'edit any press_release content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own article content.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own press_release content.
  $permissions['edit own press_release content'] = array(
    'name' => 'edit own press_release content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
