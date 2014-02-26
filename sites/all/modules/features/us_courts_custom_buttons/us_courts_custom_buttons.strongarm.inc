<?php
/**
 * @file
 * us_courts_custom_buttons.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function us_courts_custom_buttons_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_custom_button';
  $strongarm->value = 0;
  $export['comment_anonymous_custom_button'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_custom_button';
  $strongarm->value = '0';
  $export['comment_custom_button'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_custom_button';
  $strongarm->value = 1;
  $export['comment_default_mode_custom_button'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_custom_button';
  $strongarm->value = '50';
  $export['comment_default_per_page_custom_button'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_custom_button';
  $strongarm->value = 1;
  $export['comment_form_location_custom_button'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_custom_button';
  $strongarm->value = '1';
  $export['comment_preview_custom_button'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_custom_button';
  $strongarm->value = 1;
  $export['comment_subject_field_custom_button'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_custom_button';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_custom_button'] = $strongarm;

  return $export;
}
