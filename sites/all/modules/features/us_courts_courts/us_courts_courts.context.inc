<?php
/**
 * @file
 * us_courts_courts.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function us_courts_courts_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Court Detail Page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'court' => 'court',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'court-info/court-locations',
    'menu' => 'court-info/court-locations',
  );
  $context->condition_mode = 0;
  $export['Court Detail Page'] = $context;

  return $export;
}
