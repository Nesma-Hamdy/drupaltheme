<?php
/**
 * @file
 * us_courts_local_rules.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function us_courts_local_rules_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_local_rule';
  $strongarm->value = 0;
  $export['comment_anonymous_local_rule'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_local_rule';
  $strongarm->value = 1;
  $export['comment_default_mode_local_rule'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_local_rule';
  $strongarm->value = '50';
  $export['comment_default_per_page_local_rule'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_local_rule';
  $strongarm->value = 1;
  $export['comment_form_location_local_rule'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_local_rule';
  $strongarm->value = '0';
  $export['comment_local_rule'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_local_rule';
  $strongarm->value = '1';
  $export['comment_preview_local_rule'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_local_rule';
  $strongarm->value = 1;
  $export['comment_subject_field_local_rule'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_any_force';
  $strongarm->value = 0;
  $export['custom_search_blocks_3_any_force'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_any_restricts';
  $strongarm->value = 0;
  $export['custom_search_blocks_3_any_restricts'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_criteria_negative_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_3_criteria_negative_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_criteria_negative_weight';
  $strongarm->value = '8';
  $export['custom_search_blocks_3_criteria_negative_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_criteria_or_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_3_criteria_or_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_criteria_or_weight';
  $strongarm->value = '6';
  $export['custom_search_blocks_3_criteria_or_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_criteria_phrase_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_3_criteria_phrase_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_criteria_phrase_weight';
  $strongarm->value = '7';
  $export['custom_search_blocks_3_criteria_phrase_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_custom_paths_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_3_custom_paths_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_custom_paths_weight';
  $strongarm->value = '9';
  $export['custom_search_blocks_3_custom_paths_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_label';
  $strongarm->value = 'Search this site';
  $export['custom_search_blocks_3_label'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_label_visibility';
  $strongarm->value = 0;
  $export['custom_search_blocks_3_label_visibility'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_node_types';
  $strongarm->value = array(
    'local_rule' => 'local_rule',
    'page' => 0,
    'court' => 0,
    'faq' => 0,
    'form' => 0,
    'general_order' => 0,
    'judge' => 0,
    'news_announcements' => 0,
    'opinion' => 0,
  );
  $export['custom_search_blocks_3_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_node_types_excluded';
  $strongarm->value = array(
    'page' => 0,
    'court' => 0,
    'faq' => 0,
    'form' => 0,
    'general_order' => 0,
    'judge' => 0,
    'local_rule' => 0,
    'news_announcements' => 0,
    'opinion' => 0,
  );
  $export['custom_search_blocks_3_node_types_excluded'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_order';
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
  $export['custom_search_blocks_3_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_other';
  $strongarm->value = array(
    'advanced_help' => 0,
    'user' => 0,
  );
  $export['custom_search_blocks_3_other'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_paths';
  $strongarm->value = '';
  $export['custom_search_blocks_3_paths'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_paths_selector';
  $strongarm->value = 'select';
  $export['custom_search_blocks_3_paths_selector'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_paths_selector_label';
  $strongarm->value = 'Customize your search';
  $export['custom_search_blocks_3_paths_selector_label'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_paths_selector_label_visibility';
  $strongarm->value = 1;
  $export['custom_search_blocks_3_paths_selector_label_visibility'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_search_box_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_3_search_box_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_search_box_weight';
  $strongarm->value = '-1';
  $export['custom_search_blocks_3_search_box_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_submit_button_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_3_submit_button_region'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_submit_button_weight';
  $strongarm->value = '10';
  $export['custom_search_blocks_3_submit_button_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_text';
  $strongarm->value = '';
  $export['custom_search_blocks_3_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_type_selector';
  $strongarm->value = 'select';
  $export['custom_search_blocks_3_type_selector'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_type_selector_all';
  $strongarm->value = '-Any-';
  $export['custom_search_blocks_3_type_selector_all'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_type_selector_label';
  $strongarm->value = 'Search for';
  $export['custom_search_blocks_3_type_selector_label'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_3_type_selector_label_visibility';
  $strongarm->value = 1;
  $export['custom_search_blocks_3_type_selector_label_visibility'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_local_rule';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_local_rule'] = $strongarm;

  return $export;
}
