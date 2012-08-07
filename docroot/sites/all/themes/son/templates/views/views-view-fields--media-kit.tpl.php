<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */


$node = isset($row->_field_data['nid']['entity']) ? $row->_field_data['nid']['entity'] : NULL;
$field_document_file_data = array_shift(field_get_items('node', $node, 'field_document'));

?>
<div class="media-kit-item-container">
  <?php echo $fields['title']->content; ?>
  <div class="media-kit-body"><?php echo $fields['field_body']->content; ?></div>
  <?php
    $file_href = file_create_url($field_document_file_data['uri']);
    $file_simple_mime = str_replace('application/', '', $field_document_file_data['filemime']);
    $file_icon_src = drupal_get_path('theme', 'son') .'/images/FineFiles/'. $file_simple_mime .'.ico';
  ?>
  <div class="media-kit-file-container">
    <img src="<?php echo $file_icon_src; ?>" class="media-kit-file-icon" /><a href="<?php echo $file_href; ?>" class="media-kit-file-link">Download <?php echo strtoupper($file_simple_mime); ?></a>
  </div>
</div>


















