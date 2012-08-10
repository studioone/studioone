<?php
/**
 * @file
 * studio_team.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function studio_team_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_join';
  $context->description = '';
  $context->tag = 'about';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/24' => 'node/24',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-quotes-random_quote' => array(
          'module' => 'views',
          'delta' => 'quotes-random_quote',
          'region' => 'sidebar_second',
          'weight' => '-30',
        ),
        'bean-team-photos' => array(
          'module' => 'bean',
          'delta' => 'team-photos',
          'region' => 'sidebar_second',
          'weight' => '-29',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about');
  $export['about_join'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_overview';
  $context->description = '';
  $context->tag = 'about';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/22' => 'node/22',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about');
  $export['about_overview'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_team';
  $context->description = '';
  $context->tag = 'about';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/23' => 'node/23',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-team_members-team_members' => array(
          'module' => 'views',
          'delta' => 'team_members-team_members',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about');
  $export['about_team'] = $context;

  return $export;
}
