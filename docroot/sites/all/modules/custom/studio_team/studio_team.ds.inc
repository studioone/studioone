<?php
/**
 * @file
 * studio_team.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function studio_team_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|team_member|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'team_member';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_square_thumbnail',
    ),
  );
  $export['node|team_member|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function studio_team_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|team_member|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'team_member';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'ds_user_picture',
      ),
      'right' => array(
        0 => 'title',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'title' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|team_member|teaser'] = $ds_layout;

  return $export;
}
