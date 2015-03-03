<?php
/**
* @file
* Default simple view template to display a list of rows.
*
* @ingroup views_templates
*/


?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
  <span class="submitted">Submitted by <?php print $view->field['name']->original_value; ?> on <?php print $view->field['created']->original_value; ?></span>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>