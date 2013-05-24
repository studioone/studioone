<?php
/**
 * @file
 * studio_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function studio_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer disqus.
  $permissions['administer disqus'] = array(
    'name' => 'administer disqus',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: create blog_post content.
  $permissions['create blog_post content'] = array(
    'name' => 'create blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'blogger' => 'blogger',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blog_post content.
  $permissions['delete any blog_post content'] = array(
    'name' => 'delete any blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'blogger' => 'blogger',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blog_post content.
  $permissions['delete own blog_post content'] = array(
    'name' => 'delete own blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'blogger' => 'blogger',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: display disqus comments on profile.
  $permissions['display disqus comments on profile'] = array(
    'name' => 'display disqus comments on profile',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: edit any blog_post content.
  $permissions['edit any blog_post content'] = array(
    'name' => 'edit any blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'blogger' => 'blogger',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blog_post content.
  $permissions['edit own blog_post content'] = array(
    'name' => 'edit own blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'blogger' => 'blogger',
      'content creator' => 'content creator',
    ),
    'module' => 'node',
  );

  // Exported permission: toggle disqus comments.
  $permissions['toggle disqus comments'] = array(
    'name' => 'toggle disqus comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: view disqus comments.
  $permissions['view disqus comments'] = array(
    'name' => 'view disqus comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'disqus',
  );

  return $permissions;
}
