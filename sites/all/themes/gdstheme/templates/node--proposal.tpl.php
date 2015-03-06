<article id="article-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print $unpublished; ?>

  <div id="proposal-subscribe">
    <?php print render($content['subscriptions_ui']); ?>
  </div>
  <div id="proposal-metadata">
    <?php print render($content['field_challenge_ref']); ?>

    <div class="col1">
      <!-- Submitted -->
      <div class="field field-label-inline clearfix view-mode-full">
        <div class="field-label">Date submitted:</div>
        <div class="field-items">
          <div class="field-item even"><?php print format_date($node->created, 'article'); ?></div>
        </div>
      </div>
      <!-- Submitted by -->
      <div class="field field-label-inline clearfix view-mode-full">
        <div class="field-label">Submitted by:</div>
        <div class="field-items">
          <div class="field-item even"><?php print render($node->name); ?></div>
        </div>
      </div>
      <!-- Phase -->
      <?php print render($content['field_active_date']); ?>
      <!-- Related challenge -->
    </div>
    <div class="col2">
      <!-- Profile status -->
      <?php print render($content['field_specification_status']); ?>
      <!-- Category -->
      <?php print render($content['field_category']); ?>
    </div>
  </div>

  <div id="proposal-challenge">
    <?php print render($content['field_short_description']); ?>
    <?php print render($content['field_user_need_approach']); ?>
    <?php print render($content['field_achieving_benefits']); ?>
    <?php print render($content['field_functional_needs']); ?>
    <?php print render($content['field_achieving_interoperability']); ?>
    <?php print render($content['field_standards_to_be_used']); ?>
  </div>

  <div class="article-inner clearfix">

    <div<?php print $content_attributes; ?>>
    <?php
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
    </div>

    <?php if ($links = render($content['links'])): ?>
      <nav class="clearfix"><?php print $links; ?></nav>
    <?php endif; ?>

    <?php if (user_access('edit any proposal content') && $comment_count): ?>
      <a href="/comment/download/<?php print $node->nid . '/' . $node->title; ?>">Download comments</a>
    <?php endif; ?>

    <?php print render($content['comments']); ?>

  </div>
</article>
