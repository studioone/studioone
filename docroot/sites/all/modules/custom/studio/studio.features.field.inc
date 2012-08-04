<?php
/**
 * @file
 * studio.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function studio_field_default_fields() {
  $fields = array();

  // Exported field: 'node-page-body'.
  $fields['node-page-body'] = array(
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
      'bundle' => 'page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
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
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-page-field_page_block'.
  $fields['node-page-field_page_block'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_page_block',
      'foreign keys' => array(
        'bid' => array(
          'columns' => array(
            'bid' => 'bid',
          ),
          'table' => 'block',
        ),
      ),
      'indexes' => array(
        'bid' => array(
          0 => 'bid',
        ),
      ),
      'locked' => '0',
      'module' => 'blockreference',
      'settings' => array(
        'referenceable_modules' => array(
          'bean' => 0,
          'block' => 0,
          'comment' => 0,
          'context_ui' => 0,
          'devel' => 0,
          'diff' => 0,
          'menu' => 0,
          'menu_block' => 0,
          'node' => 0,
          'search' => 0,
          'shortcut' => 0,
          'studio_blog' => 0,
          'studio_team' => 0,
          'superfish' => 0,
          'system' => 0,
          'user' => 0,
          'views' => 0,
          'webform' => 0,
          'workbench' => 0,
        ),
        'referenceable_operator' => 'AND',
        'referenceable_regions' => array(
          '' => 0,
          'bottom' => 0,
          'content' => 0,
          'dashboard_inactive' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'eyebrow' => 0,
          'footer' => 0,
          'header' => 0,
          'help' => 0,
          'highlighted' => 0,
          'navigation' => 0,
          'page_bottom' => 0,
          'page_top' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
        ),
        'referenceable_theme' => 'default',
        'respect_visibility' => 0,
      ),
      'translatable' => '0',
      'type' => 'blockreference',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'blockreference',
          'settings' => array(),
          'type' => 'blockreference_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => 'theme_ds_field_reset',
      'entity_type' => 'node',
      'field_name' => 'field_page_block',
      'label' => 'Page block',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'blockreference',
        'settings' => array(),
        'type' => 'blockreference_select_sort',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-page-field_page_view'.
  $fields['node-page-field_page_view'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_page_view',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'viewfield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'viewfield',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'viewfield',
          'settings' => array(),
          'type' => 'viewfield_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => 'theme_ds_field_reset',
      'entity_type' => 'node',
      'field_name' => 'field_page_view',
      'label' => 'Page View',
      'required' => 0,
      'settings' => array(
        'allowed_views' => array(
          'blog' => 0,
          'certifications' => 0,
          'client_partner_logos' => 0,
          'featured_items' => 0,
          'media_default' => 0,
          'news' => 0,
          'program_examples' => 0,
          'project_examples' => 0,
          'quotes' => 0,
          'team_members' => 0,
          'workbench_current_user' => 0,
          'workbench_edited' => 0,
          'workbench_recent_content' => 0,
        ),
        'force_default' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_select',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-page-field_see_more_link'.
  $fields['node-page-field_see_more_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_see_more_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => 'theme_ds_field_reset',
      'entity_type' => 'node',
      'field_name' => 'field_see_more_link',
      'label' => 'See More Link',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => 'see-more',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'user',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 0,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'html5_tools',
        'settings' => array(),
        'type' => 'urlwidget',
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Page View');
  t('Page block');
  t('See More Link');

  return $fields;
}
