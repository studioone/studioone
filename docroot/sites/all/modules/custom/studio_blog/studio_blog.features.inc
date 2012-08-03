<?php
/**
 * @file
 * studio_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function studio_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function studio_blog_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function studio_blog_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Use <em>bog posts</em> to add a new entry to the site\'s blog section.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
