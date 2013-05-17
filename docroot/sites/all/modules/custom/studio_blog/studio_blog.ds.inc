<?php
/**
 * @file
 * studio_blog.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function studio_blog_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_post|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => 'span',
        'class' => 'read-more',
      ),
    ),
  );
  $export['node|blog_post|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function studio_blog_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_blog_image',
      ),
      'right' => array(
        0 => 'title',
        1 => 'body',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_blog_image' => 'left',
      'title' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|blog_post|teaser'] = $ds_layout;

  return $export;
}
