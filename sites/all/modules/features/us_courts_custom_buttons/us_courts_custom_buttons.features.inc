<?php
/**
 * @file
 * us_courts_custom_buttons.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function us_courts_custom_buttons_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function us_courts_custom_buttons_node_info() {
  $items = array(
    'custom_button' => array(
      'name' => t('Custom Button'),
      'base' => 'node_content',
      'description' => t('Add custom US Courts Buttons for use on the sidebar and or homepage'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
