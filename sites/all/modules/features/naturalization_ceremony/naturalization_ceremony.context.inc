<?php
/**
 * @file
 * naturalization_ceremony.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function naturalization_ceremony_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'naturalization_ceremonies';
  $context->description = 'Naturalization Ceremonies';
  $context->tag = 'Naturalization Ceremonies';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'clerk-services/naturalization-ceremony-locations-and-schedule' => 'clerk-services/naturalization-ceremony-locations-and-schedule',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-naturalization_ceremonies-block' => array(
          'module' => 'views',
          'delta' => 'naturalization_ceremonies-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'nodeblock-587' => array(
          'module' => 'nodeblock',
          'delta' => 587,
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Naturalization Ceremonies');
  $export['naturalization_ceremonies'] = $context;

  return $export;
}
