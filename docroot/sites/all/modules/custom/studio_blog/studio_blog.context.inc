<?php
/**
 * @file
 * studio_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function studio_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_archive';
  $context->description = '';
  $context->tag = 'blog';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'blog/archive' => 'blog/archive',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'studio_blog-blogroll' => array(
          'module' => 'studio_blog',
          'delta' => 'blogroll',
          'region' => 'sidebar_second',
          'weight' => '-31',
        ),
        'views-social_media_feeds-block' => array(
          'module' => 'views',
          'delta' => 'social_media_feeds-block',
          'region' => 'sidebar_second',
          'weight' => '-30',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog');
  $export['blog_archive'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_recent';
  $context->description = '';
  $context->tag = 'blog';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'studio_blog-blogroll' => array(
          'module' => 'studio_blog',
          'delta' => 'blogroll',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-social_media_feeds-block' => array(
          'module' => 'views',
          'delta' => 'social_media_feeds-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog');
  $export['blog_recent'] = $context;

  return $export;
}
