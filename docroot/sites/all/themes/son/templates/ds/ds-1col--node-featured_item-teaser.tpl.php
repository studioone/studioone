<?php

/**
 * @file
 * Display Suite 2 column template (customized).
 */
?>
<div class="ds-1col <?php print $classes;?> clearfix">
  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php
    // Customized featured image.
    $custom_image_options = array(
      'style_name' => $content['field_featured_item_image'][0]['#image_style'],
      'path' => $content['field_featured_item_image'][0]['#item']['uri'],
      'alt' => $content['field_featured_item_image'][0]['#item']['alt'],
      'title' => $content['field_featured_item_image'][0]['#item']['title'],
      //'width' => $content['field_featured_item_image'][0]['#item']['image_dimensions']['width'],
     // 'height' => $content['field_featured_item_image'][0]['#item']['image_dimensions']['height'],
    );
  ?>
  <a href="<?php echo $field_featured_item_url[ $language ][0]['safe_value']; ?>"><?php echo theme('image_style', $custom_image_options); ?></a>

</div>


