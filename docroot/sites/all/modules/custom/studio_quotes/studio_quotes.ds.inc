<?php
/**
 * @file
 * studio_quotes.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function studio_quotes_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|quote|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'quote';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'quote_mark_left_' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_attribution' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
  );
  $export['node|quote|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function studio_quotes_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'quote_mark_left_';
  $ds_field->label = 'Quote Mark (left)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<span class="quote">&ldquo;</span>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['quote_mark_left_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'quote_mark_right_';
  $ds_field->label = 'Quote Mark (right)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<span class="quote">&rdquo;</span>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['quote_mark_right_'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function studio_quotes_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|quote|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'quote';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'quote_mark_left_',
        1 => 'body',
        2 => 'field_attribution',
      ),
    ),
    'fields' => array(
      'quote_mark_left_' => 'ds_content',
      'body' => 'ds_content',
      'field_attribution' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|quote|teaser'] = $ds_layout;

  return $export;
}
