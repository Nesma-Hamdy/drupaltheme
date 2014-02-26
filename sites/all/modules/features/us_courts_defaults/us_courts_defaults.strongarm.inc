<?php
/**
 * @file
 * us_courts_defaults.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function us_courts_defaults_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blocktheme';
  $strongarm->value = array(
    'nodeblock-nb_how_to_access_pacer' => 'border_white',
    'nodeblock-nb_form_overview' => 'border_white',
    'nodeblock-nb_working_with_pdf_forms' => 'border_white',
    'nodeblock-nb_programs_services' => 'gradient',
    'nodeblock-nb_quick_links' => 'gradient',
	'nodeblock-nb_quick_links_home' => 'border_white',
	'nodeblock-nb_quick_links_other_resources' => 'gradient',
    'views-news-archive_block' => 'border_white',
    'views-news-fp_news_feed' => 'gradient',
    'views-staff_directory-home_court_list' => 'gradient',
  );
  $export['blocktheme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blocktheme_themes';
  $strongarm->value = 'border_white|Bordered White
gradient|Gradient';
  $export['blocktheme_themes'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_number';
  $strongarm->value = '4';
  $export['custom_search_blocks_number'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_accesskey_enable';
  $strongarm->value = 0;
  $export['menu_attributes_accesskey_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_class_enable';
  $strongarm->value = 1;
  $export['menu_attributes_class_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_id_enable';
  $strongarm->value = 0;
  $export['menu_attributes_id_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_name_enable';
  $strongarm->value = 0;
  $export['menu_attributes_name_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_rel_enable';
  $strongarm->value = 0;
  $export['menu_attributes_rel_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_style_enable';
  $strongarm->value = 0;
  $export['menu_attributes_style_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_target_enable';
  $strongarm->value = 1;
  $export['menu_attributes_target_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_attributes_title_enable';
  $strongarm->value = 0;
  $export['menu_attributes_title_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_custom_button';
  $strongarm->value = '1';
  $export['nodeblock_custom_button'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_node_block';
  $strongarm->value = '1';
  $export['nodeblock_node_block'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_basic';
  $strongarm->value = array(
    'all_forms' => array(
      0 => 'all_forms',
    ),
    'checklist' => array(
      0 => 'page',
    ),
    'faqs' => array(
      0 => 'page',
    ),
    'general_orders' => array(
      0 => 'page',
    ),
    'hearing_dates' => array(
      0 => 'page',
    ),
    'local_rules' => array(
      0 => 'page',
    ),
    'news' => array(
      0 => 'page',
    ),
    'opinions' => array(
      0 => 'page',
    ),
    'staff_directory' => array(
      0 => 'page',
    ),
  );
  $export['views_ui_basic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_basic_fields';
  $strongarm->value = array(
    'header' => 'header',
    'footer' => 'footer',
    'title' => 'title',
    'empty' => 'empty',
  );
  $export['views_ui_basic_fields'] = $strongarm;

  return $export;
}
