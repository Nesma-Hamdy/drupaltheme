<?php
/**
 * @file
 * us_courts_forms.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function us_courts_forms_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'all_forms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Forms';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Forms';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Meta Data */
  $handler->display->display_options['fields']['field_meta_data']['id'] = 'field_meta_data';
  $handler->display->display_options['fields']['field_meta_data']['table'] = 'field_data_field_meta_data';
  $handler->display->display_options['fields']['field_meta_data']['field'] = 'field_meta_data';
  $handler->display->display_options['fields']['field_meta_data']['label'] = '';
  $handler->display->display_options['fields']['field_meta_data']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meta_data']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meta_data']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meta_data']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meta_data']['field_api_classes'] = 0;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_form_cat']['id'] = 'field_form_cat';
  $handler->display->display_options['fields']['field_form_cat']['table'] = 'field_data_field_form_cat';
  $handler->display->display_options['fields']['field_form_cat']['field'] = 'field_form_cat';
  $handler->display->display_options['fields']['field_form_cat']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_form_cat']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_form_cat']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_form_cat']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_form_cat']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_form_cat']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_form_cat']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_form_cat']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_form_cat']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_form_cat']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_form_cat']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_form_cat']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_form_cat']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_form_cat']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_form_cat']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_form_cat']['field_api_classes'] = 0;
  /* Field: Content: Revision Date */
  $handler->display->display_options['fields']['field_form_rev_date']['id'] = 'field_form_rev_date';
  $handler->display->display_options['fields']['field_form_rev_date']['table'] = 'field_data_field_form_rev_date';
  $handler->display->display_options['fields']['field_form_rev_date']['field'] = 'field_form_rev_date';
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_form_rev_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_form_rev_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_form_rev_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_form_rev_date']['field_api_classes'] = 0;
  /* Field: Content: Form */
  $handler->display->display_options['fields']['field_form_file']['id'] = 'field_form_file';
  $handler->display->display_options['fields']['field_form_file']['table'] = 'field_data_field_form_file';
  $handler->display->display_options['fields']['field_form_file']['field'] = 'field_form_file';
  $handler->display->display_options['fields']['field_form_file']['label'] = '';
  $handler->display->display_options['fields']['field_form_file']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_form_file']['alter']['text'] = '<a href="[field_form_file]">Download Form &raquo;</a>';
  $handler->display->display_options['fields']['field_form_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_form_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_form_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_form_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_form_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_form_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_form_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_form_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_form_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_form_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_form_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_form_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_form_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_form_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_form_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_form_file']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_form_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_form_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_form_file']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'Related Forms and Guidance &raquo;';
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
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Category (field_form_cat) */
  $handler->display->display_options['arguments']['field_form_cat_value']['id'] = 'field_form_cat_value';
  $handler->display->display_options['arguments']['field_form_cat_value']['table'] = 'field_data_field_form_cat';
  $handler->display->display_options['arguments']['field_form_cat_value']['field'] = 'field_form_cat_value';
  $handler->display->display_options['arguments']['field_form_cat_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_form_cat_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_form_cat_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_form_cat_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_form_cat_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_form_cat_value']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_form_cat_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_form_cat_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_form_cat_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_form_cat_value']['break_phrase'] = 0;
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
    'form' => 'form',
  );

  /* Display: All Forms */
  $handler = $view->new_display('page', 'All Forms', 'all_forms');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'file-listing';
  $handler->display->display_options['display_description'] = 'All Forms listed alphabetically';
  $handler->display->display_options['path'] = 'forms/all-forms';

  /* Display: All Forms Summary Navigation */
  $handler = $view->new_display('block', 'All Forms Summary Navigation', 'all_forms_filters');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Category (field_form_cat) */
  $handler->display->display_options['arguments']['field_form_cat_value']['id'] = 'field_form_cat_value';
  $handler->display->display_options['arguments']['field_form_cat_value']['table'] = 'field_data_field_form_cat';
  $handler->display->display_options['arguments']['field_form_cat_value']['field'] = 'field_form_cat_value';
  $handler->display->display_options['arguments']['field_form_cat_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_form_cat_value']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_form_cat_value']['title'] = 'Forms: %1';
  $handler->display->display_options['arguments']['field_form_cat_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_form_cat_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_form_cat_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_form_cat_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_form_cat_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_form_cat_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_form_cat_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_form_cat_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_form_cat_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_form_cat_value']['break_phrase'] = 0;
  $export['all_forms'] = $view;

  return $export;
}
