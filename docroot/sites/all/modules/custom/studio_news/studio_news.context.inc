<?php
/**
 * @file
 * studio_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function studio_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news';
  $context->description = '';
  $context->tag = 'news';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        '<firstchild>' => '<firstchild>',
        'news' => 'news',
        'news/archive' => 'news/archive',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('news');
  $export['news'] = $context;

  return $export;
}
