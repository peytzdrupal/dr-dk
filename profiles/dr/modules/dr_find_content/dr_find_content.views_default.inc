<?php
/**
 * @file
 * dr_find_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dr_find_content_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'find_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Find Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Find Content';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Broadcast Time */
  $handler->display->display_options['fields']['field_broadcast_time']['id'] = 'field_broadcast_time';
  $handler->display->display_options['fields']['field_broadcast_time']['table'] = 'field_data_field_broadcast_time';
  $handler->display->display_options['fields']['field_broadcast_time']['field'] = 'field_broadcast_time';
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_broadcast_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_broadcast_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_broadcast_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_broadcast_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_broadcast_time']['field_api_classes'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: DR NU ID */
  $handler->display->display_options['fields']['field_dr_nu_id']['id'] = 'field_dr_nu_id';
  $handler->display->display_options['fields']['field_dr_nu_id']['table'] = 'field_data_field_dr_nu_id';
  $handler->display->display_options['fields']['field_dr_nu_id']['field'] = 'field_dr_nu_id';
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dr_nu_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dr_nu_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_nu_id']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dr_nu_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dr_nu_id']['field_api_classes'] = 0;
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Broadcast Channel (field_broadcast_channel) */
  $handler->display->display_options['filters']['field_broadcast_channel_value']['id'] = 'field_broadcast_channel_value';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['table'] = 'field_data_field_broadcast_channel';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['field'] = 'field_broadcast_channel_value';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['group'] = 1;
  $handler->display->display_options['filters']['field_broadcast_channel_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['operator_id'] = 'field_broadcast_channel_value_op';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['label'] = 'Broadcast Channel';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['operator'] = 'field_broadcast_channel_value_op';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['identifier'] = 'field_broadcast_channel_value';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: DR NU ID (field_dr_nu_id) */
  $handler->display->display_options['filters']['field_dr_nu_id_value']['id'] = 'field_dr_nu_id_value';
  $handler->display->display_options['filters']['field_dr_nu_id_value']['table'] = 'field_data_field_dr_nu_id';
  $handler->display->display_options['filters']['field_dr_nu_id_value']['field'] = 'field_dr_nu_id_value';
  $handler->display->display_options['filters']['field_dr_nu_id_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dr_nu_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dr_nu_id_value']['expose']['operator_id'] = 'field_dr_nu_id_value_op';
  $handler->display->display_options['filters']['field_dr_nu_id_value']['expose']['label'] = 'DR NU ID';
  $handler->display->display_options['filters']['field_dr_nu_id_value']['expose']['operator'] = 'field_dr_nu_id_value_op';
  $handler->display->display_options['filters']['field_dr_nu_id_value']['expose']['identifier'] = 'field_dr_nu_id_value';
  $handler->display->display_options['filters']['field_dr_nu_id_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'review' => 'review',
    'series' => 'series',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
  /* Filter criterion: Content: Broadcast Time (field_broadcast_time) */
  $handler->display->display_options['filters']['field_broadcast_time_value']['id'] = 'field_broadcast_time_value';
  $handler->display->display_options['filters']['field_broadcast_time_value']['table'] = 'field_data_field_broadcast_time';
  $handler->display->display_options['filters']['field_broadcast_time_value']['field'] = 'field_broadcast_time_value';
  $handler->display->display_options['filters']['field_broadcast_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_broadcast_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_broadcast_time_value']['expose']['operator_id'] = 'field_broadcast_time_value_op';
  $handler->display->display_options['filters']['field_broadcast_time_value']['expose']['label'] = 'Broadcast Time';
  $handler->display->display_options['filters']['field_broadcast_time_value']['expose']['operator'] = 'field_broadcast_time_value_op';
  $handler->display->display_options['filters']['field_broadcast_time_value']['expose']['identifier'] = 'field_broadcast_time_value';
  $handler->display->display_options['filters']['field_broadcast_time_value']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'find-content';
  $translatables['find_content'] = array(
    t('Master'),
    t('Find Content'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Body'),
    t('Broadcast Time'),
    t('Type'),
    t('DR NU ID'),
    t('Title'),
    t('Broadcast Channel'),
    t('Page'),
  );
  $export['find_content'] = $view;

  return $export;
}
