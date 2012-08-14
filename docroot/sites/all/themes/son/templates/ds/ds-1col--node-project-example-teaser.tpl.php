<?php

/**
 * @file
 * Display Suite 1 column template.
 */

dpm(get_defined_vars());

?>
<div class="ds-1col <?php print $classes;?> clearfix <?php print $ds_content_classes;?>">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  
  <?php
    $image = drupal_render($elements['field_screenshot'][0]);
    $image_url = '';
    switch (TRUE) {
      case isset($field_editorial_guide[ $language ][0]['target_id']):
        $image_url = url('node/'. $field_editorial_guide[ $language ][0]['target_id'], array('absolute' => TRUE));
        break;
      case isset($field_url[ $language ][0]['safe_value']):
        $image_url = $field_url[ $language ][0]['safe_value'];
        break;
      default:
        $image_url = url('node/'. $nid);
    }
  ?>

  <?php print l($image, $image_url, array('html' => TRUE, 'absolute' => TRUE)); ?>
</div>



