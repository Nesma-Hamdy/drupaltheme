<?php
/**
 * @file
 * naturalization_ceremony.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function naturalization_ceremony_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function naturalization_ceremony_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function naturalization_ceremony_node_info() {
  $items = array(
    'naturalization_ceremony' => array(
      'name' => t('Naturalization Ceremony'),
      'base' => 'node_content',
      'description' => t('Default content type for Jury Department to schedule Naturalization Ceremonies throughout the year.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
