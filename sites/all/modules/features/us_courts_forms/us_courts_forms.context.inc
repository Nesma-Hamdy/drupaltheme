<?php
/**
 * @file
 * us_courts_forms.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function us_courts_forms_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Forms Landing Page';
  $context->description = 'Forms Landing Page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'forms' => 'forms',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-all_forms-all_forms_filters' => array(
          'module' => 'views',
          'delta' => 'all_forms-all_forms_filters',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'custom_search_blocks-1' => array(
          'module' => 'custom_search_blocks',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'nodeblock-nb_form_overview' => array(
          'module' => 'nodeblock',
          'delta' => 'nb_form_overview',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'nodeblock-nb_working_with_pdf_forms' => array(
          'module' => 'nodeblock',
          'delta' => 'nb_working_with_pdf_forms',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'nodeblock-nb_programs_services' => array(
          'module' => 'nodeblock',
          'delta' => 'nb_programs_services',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forms Landing Page');
  $export['Forms Landing Page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all-forms';
  $context->description = 'All forms listing pages';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'forms/*' => 'forms/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'all_forms' => 'all_forms',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-all_forms-all_forms_filters' => array(
          'module' => 'views',
          'delta' => 'all_forms-all_forms_filters',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'custom_search_blocks-1' => array(
          'module' => 'custom_search_blocks',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All forms listing pages');
  $export['all-forms'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'form-detail-page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'form' => 'form',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'forms/all-forms',
  );
  $context->condition_mode = 0;
  $export['form-detail-page'] = $context;

  return $export;
}
