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
  $context->name = 'blog';
  $context->description = '';
  $context->tag = 'blog';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
        'blog/*' => 'blog/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
        'bean-whitepaper' => array(
          'module' => 'bean',
          'delta' => 'whitepaper',
          'region' => 'sidebar_second',
          'weight' => '-38',
        ),
        'bean-newsletter' => array(
          'module' => 'bean',
          'delta' => 'newsletter',
          'region' => 'sidebar_second',
          'weight' => '-37',
        ),
        'views-social_media_feeds-block' => array(
          'module' => 'views',
          'delta' => 'social_media_feeds-block',
          'region' => 'sidebar_second',
          'weight' => '-36',
        ),
      ),
    ),
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
        ),
      ),
      'son' => array(
        'disable' => array(
          'highlighted' => 'highlighted',
          'sidebar_first' => 'sidebar_first',
          'eyebrow' => 0,
          'header' => 0,
          'navigation' => 0,
          'help' => 0,
          'content' => 0,
          'sub_content' => 0,
          'sidebar_second' => 0,
          'footer' => 0,
          'bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'blog',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog');
  $export['blog'] = $context;

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
