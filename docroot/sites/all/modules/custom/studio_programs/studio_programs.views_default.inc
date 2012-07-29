<?php
/**
 * @file
 * studio_programs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function studio_programs_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'project_examples';
  $view->description = 'Display a list of all nodes in queue \'Featured Project Examples\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Project Examples';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_project_examples' => 'featured_project_examples',
  );
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_screenshot']['id'] = 'field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['table'] = 'field_data_field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['field'] = 'field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_screenshot']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_screenshot']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_screenshot']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_screenshot']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot']['settings'] = array(
    'image_style' => 'project_example_large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_screenshot']['field_api_classes'] = 0;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Featured Project Examples */
  $handler = $view->new_display('block', 'Featured Project Examples', 'featured_project_examples');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Featured Project Examples';

  /* Display: Marketers Project Examples */
  $handler = $view->new_display('block', 'Marketers Project Examples', 'marketers_project_examples');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'marketers_project_examples' => 'marketers_project_examples',
    'featured_items' => 0,
    'featured_project_examples' => 0,
    'publishers_project_examples' => 0,
  );

  /* Display: Publishers Project Examples */
  $handler = $view->new_display('block', 'Publishers Project Examples', 'publishers_project_examples');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'publishers_project_examples' => 'publishers_project_examples',
    'featured_items' => 0,
    'featured_project_examples' => 0,
    'marketers_project_examples' => 0,
  );
  $export['project_examples'] = $view;

  return $export;
}
