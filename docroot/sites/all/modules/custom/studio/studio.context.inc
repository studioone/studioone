<?php
/**
 * @file
 * studio.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function studio_context_default_contexts() {
  $export = array();

  $context = new stdClass();
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
        'views-featured_items-block' => array(
          'module' => 'views',
          'delta' => 'featured_items-block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'content',
          'weight' => '-21',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'content',
          'weight' => '-20',
        ),
        'views-9ea00ebd045a03cfd62f9a1c33472221' => array(
          'module' => 'views',
          'delta' => '9ea00ebd045a03cfd62f9a1c33472221',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-newsroom-newsroom' => array(
          'module' => 'views',
          'delta' => 'newsroom-newsroom',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'published_comments';
  $context->description = '';
  $context->tag = 'admin';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/content/comment' => 'admin/content/comment',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'studio-comment_admin_notify_form' => array(
          'module' => 'studio',
          'delta' => 'comment_admin_notify_form',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('admin');
  $export['published_comments'] = $context;

  return $export;
}
