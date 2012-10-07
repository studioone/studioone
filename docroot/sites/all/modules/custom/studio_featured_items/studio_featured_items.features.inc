<?php
/**
 * @file
 * studio_featured_items.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function studio_featured_items_ctools_plugin_api() {
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
function studio_featured_items_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function studio_featured_items_image_default_styles() {
  $styles = array();

  // Exported image style: featured_image.
  $styles['featured_image'] = array(
    'name' => 'featured_image',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '750',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
      2 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '750',
          'height' => '350',
          'anchor' => 'center-center',
        ),
        'weight' => '2',
      ),
      3 => array(
        'label' => 'Change Quality',
        'help' => 'Define the image quality for JPEG manipulations. Ranges from 0 to 100. Higher values mean better image quality but bigger files.',
        'effect callback' => '_image_style_quality_apply',
        'form callback' => 'image_style_quality_style_form',
        'dimensions passthrough' => TRUE,
        'module' => 'image_style_quality',
        'name' => 'image_style_quality',
        'data' => array(
          'quality' => '90',
        ),
        'weight' => '3',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function studio_featured_items_node_info() {
  $items = array(
    'featured_item' => array(
      'name' => t('Featured Item'),
      'base' => 'node_content',
      'description' => t('<em>Featured items</em> are displayed in the "dynamic lead" on the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
