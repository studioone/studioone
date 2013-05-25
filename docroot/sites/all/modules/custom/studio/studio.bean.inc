<?php
/**
 * @file
 * studio.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function studio_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'video_playlist';
  $bean_type->label = 'Video Playlist';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['video_playlist'] = $bean_type;

  return $export;
}
