<?php
/**
 * @file
 * studio_programs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function studio_programs_user_default_permissions() {
  $permissions = array();

  // Exported permission: create certification content.
  $permissions['create certification content'] = array(
    'name' => 'create certification content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: create client_partner_logo content.
  $permissions['create client_partner_logo content'] = array(
    'name' => 'create client_partner_logo content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: create project_example content.
  $permissions['create project_example content'] = array(
    'name' => 'create project_example content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any certification content.
  $permissions['delete any certification content'] = array(
    'name' => 'delete any certification content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any client_partner_logo content.
  $permissions['delete any client_partner_logo content'] = array(
    'name' => 'delete any client_partner_logo content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any project_example content.
  $permissions['delete any project_example content'] = array(
    'name' => 'delete any project_example content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own certification content.
  $permissions['delete own certification content'] = array(
    'name' => 'delete own certification content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own client_partner_logo content.
  $permissions['delete own client_partner_logo content'] = array(
    'name' => 'delete own client_partner_logo content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own project_example content.
  $permissions['delete own project_example content'] = array(
    'name' => 'delete own project_example content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 6.
  $permissions['delete terms in 6'] = array(
    'name' => 'delete terms in 6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any certification content.
  $permissions['edit any certification content'] = array(
    'name' => 'edit any certification content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any client_partner_logo content.
  $permissions['edit any client_partner_logo content'] = array(
    'name' => 'edit any client_partner_logo content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any project_example content.
  $permissions['edit any project_example content'] = array(
    'name' => 'edit any project_example content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own certification content.
  $permissions['edit own certification content'] = array(
    'name' => 'edit own certification content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own client_partner_logo content.
  $permissions['edit own client_partner_logo content'] = array(
    'name' => 'edit own client_partner_logo content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own project_example content.
  $permissions['edit own project_example content'] = array(
    'name' => 'edit own project_example content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 6.
  $permissions['edit terms in 6'] = array(
    'name' => 'edit terms in 6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
