<?php
 /**
  * This template is used to print a single field in a view. It is not
  * actually used in default Views, as this is registered as a theme
  * function which has better performance. For single overrides, the
  * template is perfectly okay.
  *
  * Variables available:
  * - $view: The view object
  * - $field: The field handler object that can process the input
  * - $row: The raw SQL result that can be used
  * - $output: The processed output that will normally be used.
  *
  * When fetching output from the $row, this construct should be used:
  * $data = $row->{$field->field_alias}
  *
  * The above will guarantee that you'll always get the correct data,
  * regardless of any changes in the aliasing that might happen if
  * the view is modified.
  */


$search = array(
  '/(\b(https?|ftp):\/\/[-A-Z0-9+&@#\/%?=~_|!:,.;]*[-A-Z0-9+&@#\/%=~_|])\b/i',
  '/(?<=^|\s)@([a-z0-9_]+)/i',
  '/(?<=^|\s)#([a-z0-9_]+)/i',
);
$replace = array(
  '<a href="$1" target="_blank">$1</a>&nbsp;',
  '<a href="http://twitter.com/$1" target="_blank">@$1</a>',
  '<a href="http://search.twitter.com/search?q=%23$1" target="_blank">#$1</a>',
);
$output = preg_replace($search, $replace, $output);

?>
<?php print $output; ?>
