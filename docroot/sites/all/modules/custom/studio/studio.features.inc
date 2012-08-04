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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_group_info().
 */
function studio_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced_options|node|page|form';
  $field_group->group_name = 'group_advanced_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced options',
    'weight' => '4',
    'children' => array(
      0 => 'field_page_block',
      1 => 'field_page_view',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced options',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_advanced_options|node|page|form'] = $field_group;

  return $export;
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
