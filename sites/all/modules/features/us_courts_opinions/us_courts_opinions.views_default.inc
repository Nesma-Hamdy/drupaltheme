<?php
/**
 * @file
 * us_courts_opinions.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function us_courts_opinions_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'opinions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Opinions';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Opinions';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_judge';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'The District of XXXXX offers a database of opinions for the years 19XX to 2011, listed by year and judge. For a more detailed search, enter the keyword or case number in the search box above.';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_opinion_date']['id'] = 'field_opinion_date';
  $handler->display->display_options['fields']['field_opinion_date']['table'] = 'field_data_field_opinion_date';
  $handler->display->display_options['fields']['field_opinion_date']['field'] = 'field_opinion_date';
  $handler->display->display_options['fields']['field_opinion_date']['label'] = '';
  $handler->display->display_options['fields']['field_opinion_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opinion_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_opinion_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_opinion_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_opinion_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_opinion_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_opinion_date']['field_api_classes'] = 0;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_opinion_file']['id'] = 'field_opinion_file';
  $handler->display->display_options['fields']['field_opinion_file']['table'] = 'field_data_field_opinion_file';
  $handler->display->display_options['fields']['field_opinion_file']['field'] = 'field_opinion_file';
  $handler->display->display_options['fields']['field_opinion_file']['label'] = '';
  $handler->display->display_options['fields']['field_opinion_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opinion_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['alter']['text'] = '<a target="_blank" href="[field_opinion_file]">[title] [field_opinion_date]</a>';
  $handler->display->display_options['fields']['field_opinion_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_opinion_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_opinion_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_opinion_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_opinion_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_opinion_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_opinion_file']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a target="_blank" href="[field_opinion_file]">[title] [field_opinion_date]</a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Judge */
  $handler->display->display_options['fields']['field_judge']['id'] = 'field_judge';
  $handler->display->display_options['fields']['field_judge']['table'] = 'field_data_field_judge';
  $handler->display->display_options['fields']['field_judge']['field'] = 'field_judge';
  $handler->display->display_options['fields']['field_judge']['label'] = '';
  $handler->display->display_options['fields']['field_judge']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_judge']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_judge']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_judge']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_judge']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_judge']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_judge']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_judge']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_judge']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_judge']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_judge']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_judge']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_judge']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_judge']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_judge']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_judge']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_judge']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_judge']['field_api_classes'] = 0;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date (field_opinion_date) */
  $handler->display->display_options['sorts']['field_opinion_date_value']['id'] = 'field_opinion_date_value';
  $handler->display->display_options['sorts']['field_opinion_date_value']['table'] = 'field_data_field_opinion_date';
  $handler->display->display_options['sorts']['field_opinion_date_value']['field'] = 'field_opinion_date_value';
  /* Contextual filter: Content: Judge (field_judge) */
  $handler->display->display_options['arguments']['field_judge_nid']['id'] = 'field_judge_nid';
  $handler->display->display_options['arguments']['field_judge_nid']['table'] = 'field_data_field_judge';
  $handler->display->display_options['arguments']['field_judge_nid']['field'] = 'field_judge_nid';
  $handler->display->display_options['arguments']['field_judge_nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_judge_nid']['title'] = 'Opinions: %1';
  $handler->display->display_options['arguments']['field_judge_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_judge_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_judge_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_judge_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_judge_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_judge_nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_judge_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_judge_nid']['validate_options']['types'] = array(
    'judge' => 'judge',
  );
  $handler->display->display_options['arguments']['field_judge_nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['field_judge_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_judge_nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'opinion' => 'opinion',
  );
  /* Filter criterion: Content: Date (field_opinion_date) */
  $handler->display->display_options['filters']['field_opinion_date_value']['id'] = 'field_opinion_date_value';
  $handler->display->display_options['filters']['field_opinion_date_value']['table'] = 'field_data_field_opinion_date';
  $handler->display->display_options['filters']['field_opinion_date_value']['field'] = 'field_opinion_date_value';
  $handler->display->display_options['filters']['field_opinion_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_opinion_date_value']['expose']['operator_id'] = 'field_opinion_date_value_op';
  $handler->display->display_options['filters']['field_opinion_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_opinion_date_value']['expose']['operator'] = 'field_opinion_date_value_op';
  $handler->display->display_options['filters']['field_opinion_date_value']['expose']['identifier'] = 'field_opinion_date_value';
  $handler->display->display_options['filters']['field_opinion_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_opinion_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_opinion_date_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_opinion_date_value']['default_date'] = '';
  $handler->display->display_options['filters']['field_opinion_date_value']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_opinion_date_value']['year_range'] = '-20:+0';
  /* Filter criterion: Content: Judge (field_judge) */
  $handler->display->display_options['filters']['field_judge_nid']['id'] = 'field_judge_nid';
  $handler->display->display_options['filters']['field_judge_nid']['table'] = 'field_data_field_judge';
  $handler->display->display_options['filters']['field_judge_nid']['field'] = 'field_judge_nid';
  $handler->display->display_options['filters']['field_judge_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_judge_nid']['expose']['operator_id'] = 'field_judge_nid_op';
  $handler->display->display_options['filters']['field_judge_nid']['expose']['label'] = 'Judge';
  $handler->display->display_options['filters']['field_judge_nid']['expose']['operator'] = 'field_judge_nid_op';
  $handler->display->display_options['filters']['field_judge_nid']['expose']['identifier'] = 'field_judge_nid';
  $handler->display->display_options['filters']['field_judge_nid']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'file-listing';
  $handler->display->display_options['path'] = 'judges-info/opinions';
  $export['opinions'] = $view;

  return $export;
}
