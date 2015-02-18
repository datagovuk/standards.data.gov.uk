<?php

/**
This template is a temporary hack to allow user testing and avoid access error in views.
 */

unset($fields['link']);

?>
<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
  <?php print $field->label_html; ?>
  <?php print $field->content; ?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>
<span class="field-content"><a href="/relation/19">See assessment</a></span>