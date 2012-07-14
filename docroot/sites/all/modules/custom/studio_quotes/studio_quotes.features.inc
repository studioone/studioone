<?php
/**
 * @file
 * studio_quotes.features.inc
 */

/**
 * Implements hook_views_api().
 */
function studio_quotes_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function studio_quotes_node_info() {
  $items = array(
    'quote' => array(
      'name' => t('Quote'),
      'base' => 'node_content',
      'description' => t('Use <em>quote</em> to add to the site\'s archive of quotes to be displayed on various pages.'),
      'has_title' => '1',
      'title_label' => t('Quote Title'),
      'help' => '',
    ),
  );
  return $items;
}
