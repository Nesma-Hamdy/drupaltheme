<?php
/**
 * @file
 * us_courts_local_rules.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function us_courts_local_rules_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'local-rules-listing';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'local_rules' => 'local_rules',
        'local_rules:page' => 'local_rules:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'custom_search_blocks-3' => array(
          'module' => 'custom_search_blocks',
          'delta' => 3,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['local-rules-listing'] = $context;

  return $export;
}
