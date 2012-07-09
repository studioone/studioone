<?php
/**
 * @file
 * studio_team.features.inc
 */

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
