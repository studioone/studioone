<?php
/**
 * @file
 * studio_news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function studio_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function studio_news_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'press_release' => array(
      'name' => t('Press Release'),
      'base' => 'node_content',
      'description' => t('Use <em>press releases</em> for company communications intended for the press.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
