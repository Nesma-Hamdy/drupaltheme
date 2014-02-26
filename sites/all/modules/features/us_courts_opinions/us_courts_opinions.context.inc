<?php
/**
 * @file
 * us_courts_opinions.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function us_courts_opinions_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'opinions-listing';
  $context->description = 'Opinions Listing';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'opinions' => 'opinions',
        'opinions:page' => 'opinions:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'custom_search_blocks-2' => array(
          'module' => 'custom_search_blocks',
          'delta' => 2,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Opinions Listing');
  $export['opinions-listing'] = $context;

  return $export;
}
