<?php

/**
 * This drushrc file is included for all drush commands by all Publisher 7
 * sites.
 */

# Increase the memory limit during the execution of drush commands.
ini_set('memory_limit',          '128M');

# Define environment-specific settings.
$dev_settings = array(
  // The list of modules to enable (1) or disable (0).
  'modules' => array(
    'devel' => 1,
    'environment_indicator' => 1,
    'update' => 1,
  ),
  // The list of variables to configure.
  'settings' => array(
    'preprocess_css' => '0',
    'preprocess_js' => '0',
  ),
  // The list of roles to grant (0) and revoke (0).
  'permissions' => array(
    'authenticated user' => array(
      'grant' => array('access environment indicator'),
      'revoke' => array(),
    ),
  ),
);

$stage_settings = array(
  // The list of modules to enable (1) or disable (0).
  'modules' => array(
    'devel' => 0,
    'environment_indicator' => 0,
    'update' => 0,
  ),
  // The list of variable to configure
  'settings' => array(
    'preprocess_css' => '1',
    'preprocess_js' => '1',
  ),
  // The list of roles to grant and revoke.
  'permissions' => array(
    'authenticated user' => array(
      'grant' => array(),
      'revoke' => array('access devel information', 'execute php code', 'display source code', 'access environment indicator'),
    ),
  ),
);

$prod_settings = array(
  // The list of modules to enable (1) or disable (0).
  'modules' => array(
    'devel' => 0,
    'environment_indicator' => 0,
    'update' => 0,
  ),
  // The list of variable to configure
  'settings' => array(
    'preprocess_css' => '1',
    'preprocess_js' => '1',
  ),
  // The list of roles to grant and revoke.
  'permissions' => array(
    'authenticated user' => array(
      'grant' => array(),
      'revoke' => array('access devel information', 'execute php code', 'display source code', 'access environment indicator'),
    ),
  ),
);

$options['environments'] = array(
  'local' => $dev_settings,
  'dev'   => $dev_settings,
  'qa'    => $dev_settings,
  'stage' => $stage_settings,
  'prod'  => $prod_settings,
);
