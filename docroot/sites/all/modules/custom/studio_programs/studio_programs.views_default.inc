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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
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
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'marketers_certifications' => 'marketers_certifications',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
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
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'marketers_client_logos' => 'marketers_client_logos',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'logo',
    'image_link' => '',
  );
  /* Field: Field: Live Program URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['text'] = 'Live Program';
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['path'] = '[field_url-value]';
  $handler->display->display_options['fields']['field_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
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

  $view = new view();
  $view->name = 'media_kit';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media Kit';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Case Studies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'project_categories' => 'project_categories',
    'media_kit_categories' => 0,
    'quote_categories' => 0,
    'sections' => 0,
    'tags' => 0,
    'team_member_types' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_class'] = 'media-kit-group-header';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'media-kit-title-link';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Program Guide */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  /* Field: Content: Document Upload */
  $handler->display->display_options['fields']['field_document']['id'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['table'] = 'field_data_field_document';
  $handler->display->display_options['fields']['field_document']['field'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['label'] = '';
  $handler->display->display_options['fields']['field_document']['alter']['text'] = 'Test';
  $handler->display->display_options['fields']['field_document']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: Document Upload (field_document:fid) */
  $handler->display->display_options['filters']['field_document_fid']['id'] = 'field_document_fid';
  $handler->display->display_options['filters']['field_document_fid']['table'] = 'field_data_field_document';
  $handler->display->display_options['filters']['field_document_fid']['field'] = 'field_document_fid';
  $handler->display->display_options['filters']['field_document_fid']['operator'] = 'not empty';
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['operator'] = '!=';
  $handler->display->display_options['filters']['name']['value'] = 'Overview';

  /* Display: Case Studies */
  $handler = $view->new_display('block', 'Case Studies', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Program development is a collaborative effort between the brand, agency, and Studio One. We will work closely with your brand and agency teams to ensure that a program’s design, content and distribution strategy are aligned to your equity and goals. Programs are continuously optimized based on client feedback and market response.</p>

<p>See how we can develop a program that’s right for you:</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';

  /* Display: Overview */
  $handler = $view->new_display('block', 'Overview', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Overview';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Studio One is the only digital content marketing company that creates, distributes and manages brand-aligned content in all formats, and at scale.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Document Upload (field_document:fid) */
  $handler->display->display_options['filters']['field_document_fid']['id'] = 'field_document_fid';
  $handler->display->display_options['filters']['field_document_fid']['table'] = 'field_data_field_document';
  $handler->display->display_options['filters']['field_document_fid']['field'] = 'field_document_fid';
  $handler->display->display_options['filters']['field_document_fid']['operator'] = 'not empty';
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Overview';
  $export['media_kit'] = $view;

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_project_examples' => 'featured_project_examples',
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '0';
  /* Field: Field: Live Program URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Live Program Examples:';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'program-examples-view-live-program-url-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_screenshot']['id'] = 'field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['table'] = 'field_data_field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['field'] = 'field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot']['settings'] = array(
    'image_style' => 'project_example_large',
    'image_link' => 'content',
  );
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_screenshot_1']['id'] = 'field_screenshot_1';
  $handler->display->display_options['fields']['field_screenshot_1']['table'] = 'field_data_field_screenshot';
  $handler->display->display_options['fields']['field_screenshot_1']['field'] = 'field_screenshot';
  $handler->display->display_options['fields']['field_screenshot_1']['label'] = '';
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['link_class'] = 'program-examples-view-screenshot-link';
  $handler->display->display_options['fields']['field_screenshot_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot_1']['settings'] = array(
    'image_style' => 'project_example_large',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'program-examples-view-title-link';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Program Guide */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Featured Project Examples */
  $handler = $view->new_display('block', 'Featured Project Examples', 'featured_project_examples');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'featured-projects-examples';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'nodequeue_nodes|position';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'Featured Project Examples';

  /* Display: Marketers Project Examples */
  $handler = $view->new_display('block', 'Marketers Project Examples', 'marketers_project_examples');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'marketers_project_examples' => 'marketers_project_examples',
    'featured_items' => 0,
    'featured_project_examples' => 0,
    'publishers_project_examples' => 0,
  );
  $handler->display->display_options['block_description'] = 'Marketers Project Examples';

  /* Display: Publishers Project Examples */
  $handler = $view->new_display('block', 'Publishers Project Examples', 'publishers_project_examples');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'publishers_project_examples' => 'publishers_project_examples',
    'featured_items' => 0,
    'featured_project_examples' => 0,
    'marketers_project_examples' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '0';
  /* Field: Field: Live Program URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Live Program Examples:';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'program-examples-view-live-program-url-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_screenshot']['id'] = 'field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['table'] = 'field_data_field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['field'] = 'field_screenshot';
  $handler->display->display_options['fields']['field_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot']['settings'] = array(
    'image_style' => 'project_example_large',
    'image_link' => 'content',
  );
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_screenshot_1']['id'] = 'field_screenshot_1';
  $handler->display->display_options['fields']['field_screenshot_1']['table'] = 'field_data_field_screenshot';
  $handler->display->display_options['fields']['field_screenshot_1']['field'] = 'field_screenshot';
  $handler->display->display_options['fields']['field_screenshot_1']['label'] = '';
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot_1']['alter']['link_class'] = 'program-examples-view-screenshot-link';
  $handler->display->display_options['fields']['field_screenshot_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot_1']['settings'] = array(
    'image_style' => 'project_example_large',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'program-examples-view-title-link';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Editorial Guide */
  $handler->display->display_options['fields']['field_editorial_guide']['id'] = 'field_editorial_guide';
  $handler->display->display_options['fields']['field_editorial_guide']['table'] = 'field_data_field_editorial_guide';
  $handler->display->display_options['fields']['field_editorial_guide']['field'] = 'field_editorial_guide';
  $handler->display->display_options['fields']['field_editorial_guide']['label'] = '';
  $handler->display->display_options['fields']['field_editorial_guide']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_editorial_guide']['alter']['text'] = 'Program Guide/Editorial Team';
  $handler->display->display_options['fields']['field_editorial_guide']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_editorial_guide']['alter']['path'] = 'node/[field_editorial_guide-target_id]';
  $handler->display->display_options['fields']['field_editorial_guide']['alter']['link_class'] = 'project-examples-view-editorial-guide-link';
  $handler->display->display_options['fields']['field_editorial_guide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_editorial_guide']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Program Guide */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  /* Field: Content: Live Program URL by Country */
  $handler->display->display_options['fields']['field_country_url']['id'] = 'field_country_url';
  $handler->display->display_options['fields']['field_country_url']['table'] = 'field_data_field_country_url';
  $handler->display->display_options['fields']['field_country_url']['field'] = 'field_country_url';
  $handler->display->display_options['fields']['field_country_url']['label'] = '';
  $handler->display->display_options['fields']['field_country_url']['alter']['path'] = '[field_country_url-value]';
  $handler->display->display_options['fields']['field_country_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_country_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_country_url']['alter']['link_class'] = 'project-examples-country-url-link';
  $handler->display->display_options['fields']['field_country_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_url']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_country_url']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_country_url']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_country_url']['separator'] = '';
  $handler->display->display_options['block_description'] = 'Marketers Project Examples';
  $export['project_examples'] = $view;

  return $export;
}
