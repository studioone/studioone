<?php
/**
 * @file
 * studio_team.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function studio_team_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'photo_block';
  $bean_type->label = 'Photo Block';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['photo_block'] = $bean_type;

  return $export;
}
