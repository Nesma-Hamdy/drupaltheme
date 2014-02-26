<?php
/**
 * @file
 * naturalization_ceremony.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function naturalization_ceremony_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'naturalization_ceremonies';
  $view->description = 'A list of ceremonies of naturalization scheduled to take place througout the year';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Naturalization Ceremonies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'table table-bordered table-striped';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nat_date']['id'] = 'field_nat_date';
  $handler->display->display_options['fields']['field_nat_date']['table'] = 'field_data_field_nat_date';
  $handler->display->display_options['fields']['field_nat_date']['field'] = 'field_nat_date';
  $handler->display->display_options['fields']['field_nat_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_nat_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_nat_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_nat_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_nat_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_nat_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_nat_date']['field_api_classes'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_nat_location']['id'] = 'field_nat_location';
  $handler->display->display_options['fields']['field_nat_location']['table'] = 'field_data_field_nat_location';
  $handler->display->display_options['fields']['field_nat_location']['field'] = 'field_nat_location';
  $handler->display->display_options['fields']['field_nat_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_nat_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_nat_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_nat_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_nat_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_nat_location']['field_api_classes'] = 0;
  /* Field: Content: Number of Applicants */
  $handler->display->display_options['fields']['field_nat_applicants']['id'] = 'field_nat_applicants';
  $handler->display->display_options['fields']['field_nat_applicants']['table'] = 'field_data_field_nat_applicants';
  $handler->display->display_options['fields']['field_nat_applicants']['field'] = 'field_nat_applicants';
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_nat_applicants']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_nat_applicants']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_nat_applicants']['field_api_classes'] = 0;
  /* Field: Content: Judge's Arrival Time */
  $handler->display->display_options['fields']['field_nat_judge_arrival']['id'] = 'field_nat_judge_arrival';
  $handler->display->display_options['fields']['field_nat_judge_arrival']['table'] = 'field_data_field_nat_judge_arrival';
  $handler->display->display_options['fields']['field_nat_judge_arrival']['field'] = 'field_nat_judge_arrival';
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_nat_judge_arrival']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_nat_judge_arrival']['field_api_classes'] = 0;
  /* Field: Content: Ceremony Time */
  $handler->display->display_options['fields']['field_nat_ceremony_time']['id'] = 'field_nat_ceremony_time';
  $handler->display->display_options['fields']['field_nat_ceremony_time']['table'] = 'field_data_field_nat_ceremony_time';
  $handler->display->display_options['fields']['field_nat_ceremony_time']['field'] = 'field_nat_ceremony_time';
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_nat_ceremony_time']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_nat_ceremony_time']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date (field_nat_date) */
  $handler->display->display_options['sorts']['field_nat_date_value']['id'] = 'field_nat_date_value';
  $handler->display->display_options['sorts']['field_nat_date_value']['table'] = 'field_data_field_nat_date';
  $handler->display->display_options['sorts']['field_nat_date_value']['field'] = 'field_nat_date_value';
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
    'naturalization_ceremony' => 'naturalization_ceremony',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Naturalization Ceremonies';
  $export['naturalization_ceremonies'] = $view;

  return $export;
}
