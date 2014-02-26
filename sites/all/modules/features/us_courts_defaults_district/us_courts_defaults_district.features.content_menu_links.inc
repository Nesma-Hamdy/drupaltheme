<?php
/**
 * @file
 * us_courts_defaults_district.features.content_menu_links.inc
 */

/**
 * Implementation of hook_content_menu_links_defaults().
 */
function us_courts_defaults_district_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:node/41
  $menu_links['main-menu:node-name/alternative_dispute_resolution'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/alternative_dispute_resolution',
    'router_path' => 'node/%',
    'link_title' => 'Alternative Dispute Resolution',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node-name/programs_and_services',
  );
  // Exported menu link: main-menu:node/40
  $menu_links['main-menu:node-name/criminal_justice_act_info'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/criminal_justice_act_info',
    'router_path' => 'node/%',
    'link_title' => 'Criminal Justice Act',
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
  // Exported menu link: main-menu:node/39
  $menu_links['main-menu:node-name/jury_info'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/jury_info',
    'router_path' => 'node/%',
    'link_title' => 'Jury Info',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alternative Dispute Resolution');
  t('Criminal Justice Act');
  t('Jury Info');


  return $menu_links;
}
