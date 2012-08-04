<?php


dpm('template file!');

global $test;

if (!$test) {
  
  dpm(get_defined_vars());
  $test = TRUE;
}

/**
 * @file
 * Display Suite 2 column template (customized).
 */
?>
<div class="ds-2col <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if ($left): ?>
    <div class="group-left<?php print $left_classes; ?>">
      <?php #print $left; ?>
      <?php // Customized title ?>
      <h2><a href="<?php echo $field_featured_item_url[ $language ][0]['safe_value']; ?>"><?php echo check_plain($title) ?></a></h2>
      <?php echo $content['body'][0]['#markup']; ?>
    </div>
  <?php endif; ?>

  <?php if ($right): ?>
    <div class="group-right<?php print $right_classes; ?>">
      <?php #print $right; ?>
      <?php
        // Customized featured image.
        $custom_image_options = array(
          'style_name' => $content['field_featured_item_image'][0]['#image_style'],
          'path' => $content['field_featured_item_image'][0]['#item']['uri'],
          'alt' => $content['field_featured_item_image'][0]['#item']['alt'],
          'title' => $content['field_featured_item_image'][0]['#item']['title'],
          'width' => $content['field_featured_item_image'][0]['#item']['image_dimensions']['width'],
          'height' => $content['field_featured_item_image'][0]['#item']['image_dimensions']['height'],
        );
      ?>
      <a href="<?php echo $field_featured_item_url[ $language ][0]['safe_value']; ?>"><?php echo theme('image_style', $custom_image_options); ?></a>
    </div>
  <?php endif; ?>

</div>


