<?php
/**
 * @file
 * studio.field_group.inc
 */

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
    'weight' => '5',
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