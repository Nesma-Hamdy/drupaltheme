<?php
/**
 * @file
 * us_courts_courts.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function us_courts_courts_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_court_address|node|court|default';
  $field_group->group_name = 'group_court_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'court';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Court Addresses',
    'weight' => '1',
    'children' => array(
      0 => 'field_court_mail_add',
      1 => 'field_court_st_add',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Court Addresses',
      'instance_settings' => array(
        'classes' => 'court-address-wrap clearfix',
        'description' => '',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_court_address|node|court|default'] = $field_group;

  return $export;
}
