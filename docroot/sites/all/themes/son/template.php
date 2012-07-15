<?php

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function son_preprocess_page(&$variables, $hook) {
  dpm($hook, 'hook');

  // Set the logo as a link.
  if (!empty($variables['logo'])) {
    $image = theme('image', array('path' => $variables['logo'], 'alt' => t('Studio One')));
    $variables['logo'] = l($image, '<front>', array('html' => TRUE, 'attributes' => array('id' => 'logo', 'rel' => 'home', 'title' => t('Home'))));
  }

  // Create a nav for the secondary menu.
  if ($variables['secondary_menu']) {
    $variables['secondary_menu'] = theme('links__system_secondary_menu', array(
      'links' => $variables['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'inline', 'clearfix'),
      ),
      'heading' => array(
        'text' => $variables['secondary_menu_heading'],
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    ));
  }
}

