<?php
/**
 * @file
 * us_courts_defaults.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function us_courts_defaults_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cm_ecf-case-info';
  $context->description = 'CM/ECF Case Info Page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'case-info/cm-ecf-case-info' => 'case-info/cm-ecf-case-info',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-nb_how_to_access_pacer' => array(
          'module' => 'nodeblock',
          'delta' => 'nb_how_to_access_pacer',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('CM/ECF Case Info Page');
  $export['cm_ecf-case-info'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'Global';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'us_courts_stock-font_resizer' => array(
          'module' => 'us_courts_stock',
          'delta' => 'font_resizer',
          'region' => 'header',
          'weight' => '-9',
        ),
        'menu_block-us_courts_menu_blocks_main_nav' => array(
          'module' => 'menu_block',
          'delta' => 'us_courts_menu_blocks_main_nav',
          'region' => 'header',
          'weight' => '-8',
        ),
        'menu_block-us_courts_menu_blocks_side_nav' => array(
          'module' => 'menu_block',
          'delta' => 'us_courts_menu_blocks_side_nav',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'nodeblock-nb_footer_coptright' => array(
          'module' => 'nodeblock',
          'delta' => 'nb_footer_coptright',
          'region' => 'footer',
          'weight' => '-13',
        ),
        'nodeblock-nb_footer_quick_links' => array(
          'module' => 'nodeblock',
          'delta' => 'nb_footer_quick_links',
          'region' => 'footer',
          'weight' => '-12',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global');
  $export['global'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-staff_directory-home_court_list' => array(
        'module' => 'views',
        'delta' => 'staff_directory-home_court_list',
        'region' => 'sub_content_left',
        'weight' => '-10',
      ),
	  'nodeblock-nb_quick_links_other_resources' => array(
        'module' => 'nodeblock',
        'delta' => 'nb_quick_links_other_resources',
        'region' => 'sub_content_left',
        'weight' => '-9',
      ),
      'us_courts_buttons-docket' => array(
        'module' => 'us_courts_buttons',
        'delta' => 'docket',
        'region' => 'sub_content_center',
        'weight' => '-24',
      ),
      'us_courts_buttons-lcl_rules_gen_ordrs' => array(
        'module' => 'us_courts_buttons',
        'delta' => 'lcl_rules_gen_ordrs',
        'region' => 'sub_content_center',
        'weight' => '-23',
      ),
      'us_courts_buttons-opinions' => array(
        'module' => 'us_courts_buttons',
        'delta' => 'opinions',
        'region' => 'sub_content_center',
        'weight' => '-22',
      ),
      'us_courts_buttons-form' => array(
        'module' => 'us_courts_buttons',
        'delta' => 'form',
        'region' => 'sub_content_center',
        'weight' => '-21',
      ),
	  'nodeblock-nb_quick_links_home' => array(
        'module' => 'nodeblock',
        'delta' => 'nb_quick_links_home',
        'region' => 'sub_content_center',
        'weight' => '-20',
      ),
      'views-news-fp_news_feed' => array(
        'module' => 'views',
        'delta' => 'news-fp_news_feed',
        'region' => 'sub_content_right',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;
  $export['homepage'] = $context;

  return $export;
}
