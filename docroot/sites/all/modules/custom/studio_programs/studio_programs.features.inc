<?php
/**
 * @file
 * studio_programs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function studio_programs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function studio_programs_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function studio_programs_image_default_styles() {
  $styles = array();

  // Exported image style: logo.
  $styles['logo'] = array(
    'name' => 'logo',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => '65',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: project_example_large.
  $styles['project_example_large'] = array(
    'name' => 'project_example_large',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '180',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
      4 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '180',
          'height' => '205',
          'anchor' => 'center-center',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

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
