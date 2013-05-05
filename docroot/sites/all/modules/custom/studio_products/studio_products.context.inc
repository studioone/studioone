<?php
/**
 * @file
 * studio_products.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function studio_products_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marketers_solutions';
  $context->description = '';
  $context->tag = 'marketers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/231' => 'node/231',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/231' => 'node/231',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-products-block' => array(
          'module' => 'views',
          'delta' => 'products-block',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('marketers');
  $export['marketers_solutions'] = $context;

  return $export;
}
