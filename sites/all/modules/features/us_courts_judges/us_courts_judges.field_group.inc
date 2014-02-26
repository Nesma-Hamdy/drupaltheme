<?php
/**
 * @file
 * us_courts_judges.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function us_courts_judges_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_judge_tab_1|node|judge|default';
  $field_group->group_name = 'group_judge_tab_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'judge';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_judge_tabs';
  $field_group->data = array(
    'label' => 'Communication',
    'weight' => '11',
    'children' => array(
      0 => 'field_j_comm',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_judge_tab_1|node|judge|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_judge_tab_2|node|judge|default';
  $field_group->group_name = 'group_judge_tab_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'judge';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_judge_tabs';
  $field_group->data = array(
    'label' => 'Copies of Papers',
    'weight' => '12',
    'children' => array(
      0 => 'field_j_copies',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_judge_tab_2|node|judge|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_judge_tab_3|node|judge|default';
  $field_group->group_name = 'group_judge_tab_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'judge';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_judge_tabs';
  $field_group->data = array(
    'label' => 'Motions',
    'weight' => '13',
    'children' => array(
      0 => 'field_j_motions',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_judge_tab_3|node|judge|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_judge_tab_4|node|judge|default';
  $field_group->group_name = 'group_judge_tab_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'judge';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_judge_tabs';
  $field_group->data = array(
    'label' => 'Trial',
    'weight' => '14',
    'children' => array(
      0 => 'field_j_trial',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_judge_tab_4|node|judge|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_judge_tab_5|node|judge|default';
  $field_group->group_name = 'group_judge_tab_5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'judge';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_judge_tabs';
  $field_group->data = array(
    'label' => 'Fee Applications',
    'weight' => '15',
    'children' => array(
      0 => 'field_j_fee_apps',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_judge_tab_5|node|judge|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_judge_tab_6|node|judge|default';
  $field_group->group_name = 'group_judge_tab_6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'judge';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_judge_tabs';
  $field_group->data = array(
    'label' => 'Reaffirmation Agreements',
    'weight' => '16',
    'children' => array(
      0 => 'field_j_reaf_agr',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_judge_tab_6|node|judge|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_judge_tabs|node|judge|default';
  $field_group->group_name = 'group_judge_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'judge';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Judge Tabs',
    'weight' => '4',
    'children' => array(
      0 => 'group_judge_tab_1',
      1 => 'group_judge_tab_2',
      2 => 'group_judge_tab_3',
      3 => 'group_judge_tab_4',
      4 => 'group_judge_tab_5',
      5 => 'group_judge_tab_6',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_judge_tabs|node|judge|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff_info|node|judge|default';
  $field_group->group_name = 'group_staff_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'judge';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_j_staff_first',
      1 => 'field_j_staff_second',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Staff Information',
      'instance_settings' => array(
        'classes' => 'staff-info-wrap clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_staff_info|node|judge|default'] = $field_group;

  return $export;
}
