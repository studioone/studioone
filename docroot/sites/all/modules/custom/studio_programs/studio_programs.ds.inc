<?php
/**
 * @file
 * studio_programs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function studio_programs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|certification|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'certification';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|certification|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function studio_programs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|certification|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'certification';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_logo',
      ),
      'right' => array(
        0 => 'title',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_logo' => 'left',
      'title' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|certification|teaser'] = $ds_layout;

  return $export;
}
