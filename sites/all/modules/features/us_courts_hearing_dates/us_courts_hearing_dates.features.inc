<?php
/**
 * @file
 * us_courts_hearing_dates.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function us_courts_hearing_dates_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function us_courts_hearing_dates_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function us_courts_hearing_dates_node_info() {
  $items = array(
    'hearing_date' => array(
      'name' => t('Hearing Date'),
      'base' => 'node_content',
      'description' => t('Hearing date pages for Judges'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
