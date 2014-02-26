<?php
/**
 * @file
 * us_courts_checklist.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function us_courts_checklist_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_checklist_items';
  $strongarm->value = 0;
  $export['comment_anonymous_checklist_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_checklist_items';
  $strongarm->value = '0';
  $export['comment_checklist_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_checklist_items';
  $strongarm->value = 0;
  $export['comment_default_mode_checklist_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_checklist_items';
  $strongarm->value = '50';
  $export['comment_default_per_page_checklist_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_checklist_items';
  $strongarm->value = 0;
  $export['comment_form_location_checklist_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_checklist_items';
  $strongarm->value = '0';
  $export['comment_preview_checklist_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_checklist_items';
  $strongarm->value = 0;
  $export['comment_subject_field_checklist_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_checklist_items';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_checklist_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_checklist_items';
  $strongarm->value = 0;
  $export['node_submitted_checklist_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_checklist_items_pattern';
  $strongarm->value = '';
  $export['pathauto_node_checklist_items_pattern'] = $strongarm;

  return $export;
}
