<?php
  $url = field_get_items($element['#object']->type, $element['#object'], 'featured_item_url');
  dpm($url);
?>

hello
<a href="<?php print $element['#object']->field_featured_item_url['und'][0]['value']; ?>"><?php print render($item); ?></a>
