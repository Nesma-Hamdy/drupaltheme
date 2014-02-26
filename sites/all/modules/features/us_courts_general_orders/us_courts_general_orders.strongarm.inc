<?php
/**
 * @file
 * us_courts_general_orders.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function us_courts_general_orders_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_general_order';
  $strongarm->value = 0;
  $export['comment_anonymous_general_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_general_order';
  $strongarm->value = 1;
  $export['comment_default_mode_general_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_general_order';
  $strongarm->value = '50';
  $export['comment_default_per_page_general_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_general_order';
  $strongarm->value = 1;
  $export['comment_form_location_general_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_general_order';
  $strongarm->value = '0';
  $export['comment_general_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_general_order';
  $strongarm->value = '1';
  $export['comment_preview_general_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_general_order';
  $strongarm->value = 1;
  $export['comment_subject_field_general_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_any_force';
  $strongarm->value = 0;
  $export['custom_search_blocks_4_any_force'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_any_restricts';
  $strongarm->value = 0;
  $export['custom_search_blocks_4_any_restricts'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_criteria_negative_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_4_criteria_negative_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_criteria_negative_weight';
  $strongarm->value = '8';
  $export['custom_search_blocks_4_criteria_negative_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_criteria_or_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_4_criteria_or_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_criteria_or_weight';
  $strongarm->value = '6';
  $export['custom_search_blocks_4_criteria_or_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_criteria_phrase_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_4_criteria_phrase_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_criteria_phrase_weight';
  $strongarm->value = '7';
  $export['custom_search_blocks_4_criteria_phrase_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_custom_paths_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_4_custom_paths_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_custom_paths_weight';
  $strongarm->value = '9';
  $export['custom_search_blocks_4_custom_paths_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_label';
  $strongarm->value = 'Search this site';
  $export['custom_search_blocks_4_label'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_label_visibility';
  $strongarm->value = 0;
  $export['custom_search_blocks_4_label_visibility'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_node_types';
  $strongarm->value = array(
    'general_order' => 'general_order',
    'page' => 0,
    'court' => 0,
    'faq' => 0,
    'form' => 0,
    'judge' => 0,
    'local_rule' => 0,
    'news_announcements' => 0,
    'node_block' => 0,
    'opinion' => 0,
  );
  $export['custom_search_blocks_4_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_node_types_excluded';
  $strongarm->value = array(
    'page' => 0,
    'court' => 0,
    'faq' => 0,
    'form' => 0,
    'general_order' => 0,
    'judge' => 0,
    'local_rule' => 0,
    'news_announcements' => 0,
    'node_block' => 0,
    'opinion' => 0,
  );
  $export['custom_search_blocks_4_node_types_excluded'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_order';
  $strongarm->value = array(
    'search_box' => array(
      'sort' => '-1',
      'region' => 'block',
    ),
    'criteria_or' => array(
      'sort' => '6',
      'region' => 'block',
    ),
    'criteria_phrase' => array(
      'sort' => '7',
      'region' => 'block',
    ),
    'criteria_negative' => array(
      'sort' => '8',
      'region' => 'block',
    ),
    'custom_paths' => array(
      'sort' => '9',
      'region' => 'block',
    ),
    'submit_button' => array(
      'sort' => '10',
      'region' => 'block',
    ),
  );
  $export['custom_search_blocks_4_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_other';
  $strongarm->value = array(
    'advanced_help' => 0,
    'user' => 0,
  );
  $export['custom_search_blocks_4_other'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_paths';
  $strongarm->value = '';
  $export['custom_search_blocks_4_paths'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_paths_selector';
  $strongarm->value = 'select';
  $export['custom_search_blocks_4_paths_selector'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_paths_selector_label';
  $strongarm->value = 'Customize your search';
  $export['custom_search_blocks_4_paths_selector_label'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_paths_selector_label_visibility';
  $strongarm->value = 1;
  $export['custom_search_blocks_4_paths_selector_label_visibility'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_search_box_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_4_search_box_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_search_box_weight';
  $strongarm->value = '-1';
  $export['custom_search_blocks_4_search_box_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_submit_button_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_4_submit_button_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_submit_button_weight';
  $strongarm->value = '10';
  $export['custom_search_blocks_4_submit_button_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_text';
  $strongarm->value = '';
  $export['custom_search_blocks_4_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_type_selector';
  $strongarm->value = 'select';
  $export['custom_search_blocks_4_type_selector'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_type_selector_all';
  $strongarm->value = '-Any-';
  $export['custom_search_blocks_4_type_selector_all'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_type_selector_label';
  $strongarm->value = 'Search for';
  $export['custom_search_blocks_4_type_selector_label'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_4_type_selector_label_visibility';
  $strongarm->value = 1;
  $export['custom_search_blocks_4_type_selector_label_visibility'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_general_order';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_general_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_general_order';
  $strongarm->value = 0;
  $export['node_submitted_general_order'] = $strongarm;

  return $export;
}
