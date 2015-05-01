<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h3 class="title field-content"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <?php if ($challenge_statistics): ?>
    <div class="challenge-statistics">
      <?php print $challenge_statistics; ?>
    </div>
  <?php endif; ?>

  <?php if ($status_summary): ?>
    <div class="status-summary">
      <?php print $status_summary; ?>

      <?php if (isset($field_challenge_status[LANGUAGE_NONE][0]['value']) && $field_challenge_status[LANGUAGE_NONE][0]['value'] == 0): // suggestion ?>
        <div class="comment-count">
          <?php print $comment_count . format_plural($comment_count, ' comment', ' comments') ?>
        </div>
      <?php endif; ?>

      <?php if (!empty($proposals)): ?>
        <div class="challenge-proposals">
          <?php foreach ($proposals as $proposal): ?>
            Proposal: <?php print $proposal; ?>
          <?php endforeach; ?>
        </div>
      <?php endif; ?>

    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    ?>
  </div>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</div>