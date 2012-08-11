<?php
/**
 * @file
 * studio_team.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function studio_team_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'team_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Team Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Team Members';
  $handler->display->display_options['css_class'] = 'team-members';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
    'team_member' => 'team_member',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Team Member Type (field_team_member_type) */
  $handler->display->display_options['filters']['field_team_member_type_tid']['id'] = 'field_team_member_type_tid';
  $handler->display->display_options['filters']['field_team_member_type_tid']['table'] = 'field_data_field_team_member_type';
  $handler->display->display_options['filters']['field_team_member_type_tid']['field'] = 'field_team_member_type_tid';
  $handler->display->display_options['filters']['field_team_member_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_team_member_type_tid']['expose']['operator_id'] = 'field_team_member_type_tid_op';
  $handler->display->display_options['filters']['field_team_member_type_tid']['expose']['label'] = 'Team Member Type (field_team_member_type)';
  $handler->display->display_options['filters']['field_team_member_type_tid']['expose']['operator'] = 'field_team_member_type_tid_op';
  $handler->display->display_options['filters']['field_team_member_type_tid']['expose']['identifier'] = 'field_team_member_type_tid';
  $handler->display->display_options['filters']['field_team_member_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_team_member_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_team_member_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_team_member_type_tid']['vocabulary'] = 'team_member_types';
  $handler->display->display_options['filters']['field_team_member_type_tid']['error_message'] = 1;

  /* Display: Team Members */
  $handler = $view->new_display('block', 'Team Members', 'team_members');
  $handler->display->display_options['block_description'] = 'Team Members';
  $export['team_members'] = $view;

  return $export;
}
