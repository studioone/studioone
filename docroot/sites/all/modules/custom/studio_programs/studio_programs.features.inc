<?php
/**
 * @file
 * studio_programs.features.inc
 */

/**
 * Implements hook_node_info().
 */
function studio_programs_node_info() {
  $items = array(
    'certification' => array(
      'name' => t('Certification'),
      'base' => 'node_content',
      'description' => t('Use <em>certification</em> to add a certification logo to the site.'),
      'has_title' => '1',
      'title_label' => t('Certification Name'),
      'help' => '',
    ),
    'client_partner_logo' => array(
      'name' => t('Client/Partner Logo'),
      'base' => 'node_content',
      'description' => t('Use <em>client/partner logos</em> when adding a corporate logo to the site.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'project_example' => array(
      'name' => t('Project Example'),
      'base' => 'node_content',
      'description' => t('Use <em>project example</em> to add information about projects to the site.'),
      'has_title' => '1',
      'title_label' => t('Project Name'),
      'help' => '',
    ),
  );
  return $items;
}
