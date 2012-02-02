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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_broadcast_time' => 'field_broadcast_time',
    'type' => 'type',
    'field_dr_nu_id' => 'field_dr_nu_id',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_broadcast_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dr_nu_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_video_reference_node']['id'] = 'reverse_field_video_reference_node';
  $handler->display->display_options['relationships']['reverse_field_video_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_video_reference_node']['field'] = 'reverse_field_video_reference_node';
  $handler->display->display_options['relationships']['reverse_field_video_reference_node']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titel';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Beskrivelse';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<strong>[title]</strong><br/>
[body]';
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
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
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
    'all' => 'all',
    'series' => 'series',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Søg';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Broadcast Channel (field_broadcast_channel) */
  $handler->display->display_options['filters']['field_broadcast_channel_value']['id'] = 'field_broadcast_channel_value';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['table'] = 'field_data_field_broadcast_channel';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['field'] = 'field_broadcast_channel_value';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['operator_id'] = 'field_broadcast_channel_value_op';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['label'] = 'Broadcast Channel';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['operator'] = 'field_broadcast_channel_value_op';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['identifier'] = 'field_broadcast_channel_value';
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_broadcast_channel_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Broadcast Time (field_broadcast_time) */
  $handler->display->display_options['filters']['field_broadcast_time_value']['id'] = 'field_broadcast_time_value';
  $handler->display->display_options['filters']['field_broadcast_time_value']['table'] = 'field_data_field_broadcast_time';
  $handler->display->display_options['filters']['field_broadcast_time_value']['field'] = 'field_broadcast_time_value';
  $handler->display->display_options['filters']['field_broadcast_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_broadcast_time_value']['expose']['operator_id'] = 'field_broadcast_time_value_op';
  $handler->display->display_options['filters']['field_broadcast_time_value']['expose']['label'] = 'Broadcast Time';
  $handler->display->display_options['filters']['field_broadcast_time_value']['expose']['operator'] = 'field_broadcast_time_value_op';
  $handler->display->display_options['filters']['field_broadcast_time_value']['expose']['identifier'] = 'field_broadcast_time_value';
  $handler->display->display_options['filters']['field_broadcast_time_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Review critic (field_review_critic) */
  $handler->display->display_options['filters']['field_review_critic_tid']['id'] = 'field_review_critic_tid';
  $handler->display->display_options['filters']['field_review_critic_tid']['table'] = 'field_data_field_review_critic';
  $handler->display->display_options['filters']['field_review_critic_tid']['field'] = 'field_review_critic_tid';
  $handler->display->display_options['filters']['field_review_critic_tid']['relationship'] = 'reverse_field_video_reference_node';
  $handler->display->display_options['filters']['field_review_critic_tid']['value'] = '';
  $handler->display->display_options['filters']['field_review_critic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_review_critic_tid']['expose']['operator_id'] = 'field_review_critic_tid_op';
  $handler->display->display_options['filters']['field_review_critic_tid']['expose']['label'] = 'Review critic';
  $handler->display->display_options['filters']['field_review_critic_tid']['expose']['operator'] = 'field_review_critic_tid_op';
  $handler->display->display_options['filters']['field_review_critic_tid']['expose']['identifier'] = 'field_review_critic_tid';
  $handler->display->display_options['filters']['field_review_critic_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_review_critic_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_review_critic_tid']['vocabulary'] = 'review_critics';
  $handler->display->display_options['filters']['field_review_critic_tid']['error_message'] = 1;
  /* Filter criterion: Content: Review source (field_review_source) */
  $handler->display->display_options['filters']['field_review_source_tid']['id'] = 'field_review_source_tid';
  $handler->display->display_options['filters']['field_review_source_tid']['table'] = 'field_data_field_review_source';
  $handler->display->display_options['filters']['field_review_source_tid']['field'] = 'field_review_source_tid';
  $handler->display->display_options['filters']['field_review_source_tid']['relationship'] = 'reverse_field_video_reference_node';
  $handler->display->display_options['filters']['field_review_source_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_review_source_tid']['expose']['operator_id'] = 'field_review_source_tid_op';
  $handler->display->display_options['filters']['field_review_source_tid']['expose']['label'] = 'Review source';
  $handler->display->display_options['filters']['field_review_source_tid']['expose']['operator'] = 'field_review_source_tid_op';
  $handler->display->display_options['filters']['field_review_source_tid']['expose']['identifier'] = 'field_review_source_tid';
  $handler->display->display_options['filters']['field_review_source_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_review_source_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_review_source_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_review_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_review_source_tid']['vocabulary'] = 'review_sources';
  $handler->display->display_options['filters']['field_review_source_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/dr-content';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Videos and series';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
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
    t('Content referencing Content from field_video_reference'),
    t('Titel'),
    t('Beskrivelse'),
    t('<strong>[title]</strong><br/>
[body]'),
    t('Type'),
    t('Søg'),
    t('Broadcast Channel'),
    t('Broadcast Time'),
    t('Review critic'),
    t('Review source'),
    t('Page'),
  );
  $export['find_content'] = $view;

  return $export;
}
