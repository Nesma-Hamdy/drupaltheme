<?php
/**
 * @file
 * us_courts_news.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function us_courts_news_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news-detail-page';
  $context->description = 'News detail page';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news_announcements' => 'news_announcements',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-archive_block' => array(
          'module' => 'views',
          'delta' => 'news-archive_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News detail page');
  $export['news-detail-page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_listing';
  $context->description = 'Listing page for news and announcements';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'news:page' => 'news:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-archive_block' => array(
          'module' => 'views',
          'delta' => 'news-archive_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'nodeblock-nb_quick_links' => array(
          'module' => 'nodeblock',
          'delta' => 'nb_quick_links',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'us_courts_buttons-form' => array(
          'module' => 'us_courts_buttons',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Listing page for news and announcements');
  $export['news_listing'] = $context;

  return $export;
}
