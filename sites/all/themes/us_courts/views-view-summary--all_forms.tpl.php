<?php
/**
 * @file views-view-summary.tpl.php
 * Default simple view template to display a list of summary lines
 *
 * @ingroup views_templates
 */
?>

<?php 
  //The view summary is outputting the machine name of the field instead of the pretty name
  //Here we are manually correcting that
  $field_form_cat_info = field_info_field('field_form_cat');
  
  foreach ($rows as $id => $row) {
    if (isset($field_form_cat_info['settings']['allowed_values'][$row->link])) {
      $row->link = $field_form_cat_info['settings']['allowed_values'][$row->link];
    }
  }
?>

<div class="item-list">
  <ul class="views-summary">
  <?php foreach ($rows as $id => $row): ?>
    <li><a href="<?php print $row->url; ?>"<?php print !empty($row_classes[$id]) ? ' class="'. $row_classes[$id] .'"' : ''; ?>><?php print $row->link; ?></a>
      <?php if (!empty($options['count'])): ?>
        (<?php print $row->count?>)
      <?php endif; ?>
    </li>
  <?php endforeach; ?>
  </ul>
</div>
