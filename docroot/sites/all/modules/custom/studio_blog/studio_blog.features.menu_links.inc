<?php
/**
 * @file
 * studio_blog.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function studio_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<firstchild>
  $menu_links['main-menu:<firstchild>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<firstchild>',
    'router_path' => '<firstchild>',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => '0',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:blog
  $menu_links['main-menu:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Recent Posts',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<firstchild>',
  );
  // Exported menu link: main-menu:blog/archive
  $menu_links['main-menu:blog/archive'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog/archive',
    'router_path' => 'blog/archive',
    'link_title' => 'Archive',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<firstchild>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Archive');
  t('News');
  t('Recent Posts');


  return $menu_links;
}
