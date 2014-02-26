<?php
/**
 * @file
 * us_courts_defaults_bankruptcy.features.content_menu_links.inc
 */

/**
 * Implementation of hook_content_menu_links_defaults().
 */
function us_courts_defaults_bankruptcy_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:node/38
  $menu_links['main-menu:node-name/office_of_the_us_trustee'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/office_of_the_us_trustee',
    'router_path' => 'node/%',
    'link_title' => 'Office of the US Trustee',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: main-menu:node/37
  $menu_links['main-menu:node-name/understanding_bankruptcy'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/understanding_bankruptcy',
    'router_path' => 'node/%',
    'link_title' => 'Understanding Bankruptcy',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Office of the US Trustee');
  t('Understanding Bankruptcy');


  return $menu_links;
}
