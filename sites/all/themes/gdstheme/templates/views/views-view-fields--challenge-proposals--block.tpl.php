<?php

/**
 * @file
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

  $status = $row->field_field_proposal_status[0]['raw']['value'];
  if ($status == 5) {

    $query = db_select('field_data_field_proposal_ref', 'pr');
    $query->join('field_data_field_proposal_phase', 'pp', 'pr.entity_id = pp.entity_id');
    $query->fields('pp', array('field_proposal_phase_value'))
          ->condition('pr.field_proposal_ref_nid', $row->nid);

    $result = $query->execute()->fetchCol();
    $max = max($result);
    $phases = array('response', 'proposal', 'standards profile');
    $phase = $phases[$max];
    $message = "[Incorporated in a $phase]";
  }
  elseif ($status == 4 ) {
    $message = '[Archived]';
  }

?>
<div class="proposal-status-<?php print $status; ?>">
  <?php foreach ($fields as $id => $field): ?>
    <?php if (!empty($field->separator)): ?>
      <?php print $field->separator; ?>
    <?php endif; ?>

    <?php print $field->wrapper_prefix; ?>
      <?php print $field->label_html; ?>
      <?php print $field->content; ?>
    <?php print $field->wrapper_suffix; ?>
  <?php endforeach; ?>
  <?php if ($status == 4 || $status == 5): ?>
    <div class="archived"><?php print $message; ?></div>
  <?php endif; ?>
</div>