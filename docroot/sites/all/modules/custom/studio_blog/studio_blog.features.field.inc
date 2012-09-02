<?php
/**
 * @file
 * studio_blog.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function studio_blog_field_default_fields() {
  $fields = array();

  // Exported field: 'node-blog_post-body'.
  $fields['node-blog_post-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'blog_post',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 31,
      ),
    ),
  );

  // Exported field: 'node-blog_post-field_addthis'.
  $fields['node-blog_post-field_addthis'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_addthis',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addthis',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => '0',
      'type' => 'addthis',
    ),
    'field_instance' => array(
      'bundle' => 'blog_post',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'addthis_displays',
          'settings' => array(
            'buttons_size' => 'addthis_16x16_style',
            'counter_orientation' => 'horizontal',
            'extra_css' => '',
            'share_services' => 'facebook_like, tweet, stumbleupon_badge',
          ),
          'type' => 'addthis_basic_toolbox',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'addthis_displays',
          'settings' => array(
            'buttons_size' => 'addthis_16x16_style',
            'counter_orientation' => 'horizontal',
            'extra_css' => '',
            'share_services' => 'facebook_like, tweet, stumbleupon_badge',
          ),
          'type' => 'addthis_basic_toolbox',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'addthis_displays',
          'settings' => array(
            'buttons_size' => 'addthis_16x16_style',
            'counter_orientation' => 'horizontal',
            'extra_css' => '',
            'share_services' => 'facebook_like, tweet, stumbleupon_badge',
          ),
          'type' => 'addthis_basic_toolbox',
          'weight' => '1',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_addthis',
      'label' => 'AddThis',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'addthis',
        'settings' => array(),
        'type' => 'addthis_button_widget',
        'weight' => '41',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AddThis');
  t('Body');

  return $fields;
}
