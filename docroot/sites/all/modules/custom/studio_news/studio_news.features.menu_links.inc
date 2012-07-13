<?php
/**
 * @file
 * studio_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function studio_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:news
  $menu_links['main-menu:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'Recent Articles & Press Releases',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<firstchild>',
  );
  // Exported menu link: main-menu:news/archive
  $menu_links['main-menu:news/archive'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news/archive',
    'router_path' => 'news/archive',
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
  t('Recent Articles & Press Releases');


  return $menu_links;
}
