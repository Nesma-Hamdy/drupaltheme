<?php
/**
 * @file
 * us_courts_judges.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function us_courts_judges_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_node_info().
 */
function us_courts_judges_node_info() {
  $items = array(
    'judge' => array(
      'name' => t('Judge'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
