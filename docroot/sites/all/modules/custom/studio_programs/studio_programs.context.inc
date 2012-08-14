<?php
/**
 * @file
 * studio_programs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function studio_programs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_contact_us';
  $context->description = '';
  $context->tag = 'about';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/25' => 'node/25',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-7' => array(
          'module' => 'webform',
          'delta' => 'client-block-7',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('about');
  $export['about_contact_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marketers_certifications';
  $context->description = '';
  $context->tag = 'marketers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/12' => 'node/12',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fa36ca99c331620bf0607d411f15f84b' => array(
          'module' => 'views',
          'delta' => 'fa36ca99c331620bf0607d411f15f84b',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('marketers');
  $export['marketers_certifications'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marketers_clients';
  $context->description = '';
  $context->tag = 'marketers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/13' => 'node/13',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-918b52c88e5816b4f655677d4f24aa21' => array(
          'module' => 'views',
          'delta' => '918b52c88e5816b4f655677d4f24aa21',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
        'views-quotes-random_quote' => array(
          'module' => 'views',
          'delta' => 'quotes-random_quote',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('marketers');
  $export['marketers_clients'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marketers_how_it_works';
  $context->description = '';
  $context->tag = 'marketers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/10' => 'node/10',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('marketers');
  $export['marketers_how_it_works'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marketers_media_kit';
  $context->description = '';
  $context->tag = 'marketers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/14' => 'node/14',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-media_kit-block_1' => array(
          'module' => 'views',
          'delta' => 'media_kit-block_1',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
        'views-media_kit-block' => array(
          'module' => 'views',
          'delta' => 'media_kit-block',
          'region' => 'sub_content',
          'weight' => '-9',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('marketers');
  $export['marketers_media_kit'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marketers_program_examples';
  $context->description = '';
  $context->tag = 'marketers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/11' => 'node/11',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-bb89006dd0dd8a6af518d3e1c70bd780' => array(
          'module' => 'views',
          'delta' => 'bb89006dd0dd8a6af518d3e1c70bd780',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('marketers');
  $export['marketers_program_examples'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marketers_what_we_do';
  $context->description = '';
  $context->tag = 'marketers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/9' => 'node/9',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/9' => 'node/9',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('marketers');
  $export['marketers_what_we_do'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publishers_certifications';
  $context->description = '';
  $context->tag = 'publishers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/18' => 'node/18',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-f88f00abb293493f00105396d784428d' => array(
          'module' => 'views',
          'delta' => 'f88f00abb293493f00105396d784428d',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('publishers');
  $export['publishers_certifications'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publishers_contact_us';
  $context->description = '';
  $context->tag = 'publishers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/20' => 'node/20',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-7' => array(
          'module' => 'webform',
          'delta' => 'client-block-7',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('publishers');
  $export['publishers_contact_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publishers_integration_examples';
  $context->description = '';
  $context->tag = 'publishers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/17' => 'node/17',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('publishers');
  $export['publishers_integration_examples'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publishers_our_clients';
  $context->description = '';
  $context->tag = 'publishers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/19' => 'node/19',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c69a5d3e8632c9f207d2274079ac6f01' => array(
          'module' => 'views',
          'delta' => 'c69a5d3e8632c9f207d2274079ac6f01',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
        'views-quotes-random_quote' => array(
          'module' => 'views',
          'delta' => 'quotes-random_quote',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('publishers');
  $export['publishers_our_clients'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publishers_program_examples';
  $context->description = '';
  $context->tag = 'publishers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/16' => 'node/16',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-8768d8d9e85e5c0ad2e3d0d8f4b68015' => array(
          'module' => 'views',
          'delta' => '8768d8d9e85e5c0ad2e3d0d8f4b68015',
          'region' => 'sub_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('publishers');
  $export['publishers_program_examples'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publishers_what_we_offer';
  $context->description = '';
  $context->tag = 'publishers';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/15' => 'node/15',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/15' => 'node/15',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('publishers');
  $export['publishers_what_we_offer'] = $context;

  return $export;
}
