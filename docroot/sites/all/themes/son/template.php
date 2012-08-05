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

  // Set a "bug" for publisher and marketers pages.
  $active_trail = menu_get_active_trail();
  if (!empty($active_trail[1]['link_title'])) {
    switch ($active_trail[1]['link_title']) {
      case "Marketers":
        $variables['bug'] = 'marketers';
        break;
      case "Publishers":
        $variables['bug'] = 'publishers';
        break;
      default:
        $variables['bug'] = '';
    }
  }
}



function son_css_alter(&$css) {

  // Remove CSS files added by contrib modules.
  unset($css['sites/all/modules/contrib/ctools/css/modal.css']);
}





