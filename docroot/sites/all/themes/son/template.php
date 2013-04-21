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
  $context = context_get();
dpm($variables, 'variables');

  // Set the logo as a link.
  $logo_href = "<front>";
  if (isset($context['context']['blog'])) {
    $variables['logo'] = '/' . drupal_get_path('theme', 'son') . '/images/content-pulse.png';
    $logo_href = "/blog";
  }
  if (!empty($variables['logo'])) {
    $image = theme('image', array('path' => $variables['logo'], 'alt' => t('Studio One')));
    $variables['logo'] = l($image, $logo_href, array('html' => TRUE, 'attributes' => array('id' => 'logo', 'rel' => 'home', 'title' => t('Home'))));
  }

  // Main menu
  $variables['main_menu'] = theme('links__system_main_menu', array(
    'links' => $variables['main_menu'],
    'attributes' => array(
      'class' => array('links', 'inline', 'clearfix'),
    )
  ));

  if (isset($variables['node']->type) && $variables['node']->type == 'blog_post') {
    $variables['theme_hook_suggestions'][] = 'page__blog';
  }
}

function son_page_alter(&$page) {
  dpm($page, 'page');

  $context = context_get();
  if (isset($context['context']['blog'])) {
    $page['content']['#attached']['css'][] = drupal_get_path('theme', 'son') . '/css/blog.css';
  }
}

function son_css_alter(&$css) {
  // Remove CSS files added by contrib modules.
  unset($css['sites/all/modules/contrib/ctools/css/modal.css']);
}





