<?php
/**
 * @file
 * studio_team.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function studio_team_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function studio_team_node_info() {
  $items = array(
    'team_member' => array(
      'name' => t('Team Member'),
      'base' => 'node_content',
      'description' => t('Use <em>team members</em> to add information about an employee to the site.'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
  );
  return $items;
}
