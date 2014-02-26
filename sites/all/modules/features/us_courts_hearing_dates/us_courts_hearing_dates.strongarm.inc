<?php
/**
 * @file
 * us_courts_hearing_dates.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function us_courts_hearing_dates_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_hearing_date';
  $strongarm->value = 0;
  $export['comment_anonymous_hearing_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_hearing_date';
  $strongarm->value = 1;
  $export['comment_default_mode_hearing_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_hearing_date';
  $strongarm->value = '50';
  $export['comment_default_per_page_hearing_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_hearing_date';
  $strongarm->value = 1;
  $export['comment_form_location_hearing_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_hearing_date';
  $strongarm->value = '0';
  $export['comment_hearing_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_hearing_date';
  $strongarm->value = '1';
  $export['comment_preview_hearing_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_hearing_date';
  $strongarm->value = 1;
  $export['comment_subject_field_hearing_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_hearing_date';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_hearing_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_hearing_date';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_hearing_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_hearing_date';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_hearing_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_hearing_date';
  $strongarm->value = 0;
  $export['node_submitted_hearing_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_hearing_date_pattern';
  $strongarm->value = 'judges-info/hearing-dates/[node:title]';
  $export['pathauto_node_hearing_date_pattern'] = $strongarm;

  return $export;
}
