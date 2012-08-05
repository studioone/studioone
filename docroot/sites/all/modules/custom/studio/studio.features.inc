<?php
/**
 * @file
 * studio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function studio_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function studio_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Use <em>page</em> to create a page that appears in the main menu. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
