<?php
/**
 * @file
 * studio_featured_items.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function studio_featured_items_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|featured_item|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'featured_item';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_featured_item_image' => array(
      'ft' => array(
        'func' => 'theme_field',
      ),
    ),
  );
  $export['node|featured_item|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function studio_featured_items_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|featured_item|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'featured_item';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'classes' => array(),
    'regions' => array(
      'ds_content' => array(
        0 => 'field_featured_item_image',
      ),
    ),
    'fields' => array(
      'field_featured_item_image' => 'ds_content',
    ),
  );
  $export['node|featured_item|teaser'] = $ds_layout;

  return $export;
}
