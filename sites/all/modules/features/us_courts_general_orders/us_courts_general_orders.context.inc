<?php
/**
 * @file
 * us_courts_general_orders.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function us_courts_general_orders_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'general-orders-listing';
  $context->description = 'General Orders Listing';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'general_orders' => 'general_orders',
        'general_orders:page' => 'general_orders:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'custom_search_blocks-4' => array(
          'module' => 'custom_search_blocks',
          'delta' => 4,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('General Orders Listing');
  $export['general-orders-listing'] = $context;

  return $export;
}
