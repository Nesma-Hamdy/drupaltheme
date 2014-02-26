<?php
/**
 * @file
 * us_courts_node_block.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function us_courts_node_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function us_courts_node_block_node_info() {
  $items = array(
    'node_block' => array(
      'name' => t('Node Block'),
      'base' => 'node_content',
      'description' => t('Content that will only be available as blocks across the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
