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
  $view->name = 'certifications';
  $view->description = 'Display a list of all nodes in queue \'Marketers Certifications\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Certifications';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'certifications';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'nodequeue_nodes|position';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'marketers_certifications' => 'marketers_certifications',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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

  /* Display: Marketers Certifications */
  $handler = $view->new_display('block', 'Marketers Certifications', 'marketers_certifications');
  $handler->display->display_options['block_description'] = 'Marketers Certifications';

  /* Display: Publishers Certifications */
  $handler = $view->new_display('block', 'Publishers Certifications', 'publishers_certifications');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'publishers_certifications' => 'publishers_certifications',
    'featured_items' => 0,
    'featured_project_examples' => 0,
    'marketers_project_examples' => 0,
    'publishers_project_examples' => 0,
    'marketers_client_logos' => 0,
    'publishers_partner_logos' => 0,
    'marketers_certifications' => 0,
    'team_members' => 0,
    'marketers_quotes' => 0,
    'publishers_quotes' => 0,
  );
  $handler->display->display_options['block_description'] = 'Publishers Certifications';
  $export['certifications'] = $view;

  $view = new view;
  $view->name = 'client_partner_logos';
  $view->description = 'Display a list of all nodes in queue \'Marketers Client Logos\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Client/Partner Logos';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'client-partner-logos';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
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
    'marketers_client_logos' => 'marketers_client_logos',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_logo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_logo']['field_api_classes'] = 0;
  /* Field: Content: Live Program URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['text'] = 'Live Program';
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['path'] = '[field_url-value]';
  $handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
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

  /* Display: Client Logos */
  $handler = $view->new_display('block', 'Client Logos', 'client_logos');
  $handler->display->display_options['block_description'] = 'Client Logos';

  /* Display: Partner Logos */
  $handler = $view->new_display('block', 'Partner Logos', 'partner_logos');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'publishers_partner_logos' => 'publishers_partner_logos',
    'featured_items' => 0,
    'featured_project_examples' => 0,
    'marketers_project_examples' => 0,
    'publishers_project_examples' => 0,
    'marketers_client_logos' => 0,
    'marketers_certifications' => 0,
    'publishers_certifications' => 0,
    'team_members' => 0,
    'marketers_quotes' => 0,
    'publishers_quotes' => 0,
  );
  $handler->display->display_options['block_description'] = 'Partner Logos';
  $export['client_partner_logos'] = $view;

  $view = new view;
  $view->name = 'program_examples';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Program Examples';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Program Examples';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<?php
// Content build in studio_programs.module, hook_init(). 
global $program_examples_header_content;
echo $program_examples_header_content;
?>';
  $handler->display->display_options['header']['area']['format'] = 'ds_code';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '0';
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
  $handler->display->display_options['fields']['field_screenshot']['element_class'] = 'program-examples-view-field-screenshot';
  $handler->display->display_options['fields']['field_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_screenshot']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_screenshot']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot']['settings'] = array(
    'image_style' => 'program_example_view',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_screenshot']['field_api_classes'] = 0;
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_screenshot_1']['id'] = 'field_screenshot_1';
  $handler->display->display_options['fields']['field_screenshot_1']['table'] = 'field_data_field_screenshot';
  $handler->display->display_options['fields']['field_screenshot_1']['field'] = 'field_screenshot';
  $handler->display->display_options['fields']['field_screenshot_1']['label'] = '';
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['element_class'] = 'program-examples-view-preview-field-screenshot';
  $handler->display->display_options['fields']['field_screenshot_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_screenshot_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_screenshot_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_screenshot_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot_1']['settings'] = array(
    'image_style' => 'program_example_view',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_screenshot_1']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_class'] = 'program-examples-view-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_class'] = 'program-examples-view-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Live Program URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url']['element_class'] = 'program-examples-view-field-url';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Live Program Example';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'program-examples-view-live-program-url-link';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_class'] = 'program-examples-view-live-program-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project_example' => 'project_example',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['program_examples'] = $view;

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
  $handler->display->display_options['css_class'] = 'projects-examples';
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
