<?php
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

$rows_output = '';
foreach ($rows as $id => $row) {
  $rows_output .= '<div class="'. $classes_array[$id] .'" style="background: #'. (int)$id . (int)$id . (int)$id .';">'. $row .'</div>';
}
// Double to have something to start with for the circular carousel.
$rows_output .= $rows_output;
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php echo $rows_output; ?>