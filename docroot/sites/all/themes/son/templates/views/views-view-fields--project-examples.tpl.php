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
$section_tid = isset($node->field_sections[ $node->language ][0]['tid']) ? $node->field_sections[ $node->language ][0]['tid'] : 0;
$counter = isset($fields['counter']->content) ? $fields['counter']->content : 0;

?>
<div class="program-examples-view-item-container program-examples-view-item-<?php echo $counter; ?> program-examples-view-section-<?php echo $section_tid; ?>-item">
  <div class="program-examples-view-item-screenshot"><?php echo $fields['field_screenshot']->content; ?></div>
  <div class="program-examples-view-item-preview program-examples-view-item-preview-<?php echo $counter; ?>">
    <div class="program-examples-view-preview-close program-examples-view-preview-close-<?php echo $counter; ?>">X</div>
    <?php echo $fields['field_screenshot_1']->content; ?>   
    <div class="program-examples-view-item-preview-right">
      <?php echo $fields['title']->content; ?>
      <div class="program-examples-view-body"><?php echo $fields['field_body']->content; ?></div>
      <?php echo isset($fields['field_editorial_guide']->content) ? $fields['field_editorial_guide']->content : ''; ?>
      <?php echo $fields['nothing']->content; ?>
  </div>
</div>