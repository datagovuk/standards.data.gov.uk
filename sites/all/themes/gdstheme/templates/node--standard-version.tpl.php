<article id="article-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="article-inner clearfix">

    <?php print $unpublished; ?>

    <?php if(!empty($submitted) && $display_submitted): ?>
      <header class="clearfix">
        <?php if ($display_submitted): ?>
          <div class="submitted"><?php print $submitted; ?></div>
        <?php endif; ?>
      </header>
    <?php endif; ?>

    <div<?php print $content_attributes; ?>>
    <?php
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_standard_version_date']);
      hide($content['field_standard_version_date_day']);
    ?>
      <section class="field field-name-field-standard-version-date field-label-above view-mode-full">
        <h2 class="field-label">Date of issue:</h2>
        <div>
          <?php
            if (!empty($node->field_standard_version_date_day)) {
              print $node->field_standard_version_date_day[LANGUAGE_NONE][0]['value'] . ' ';
            }

            print date("F Y", strtotime($node->field_standard_version_date[LANGUAGE_NONE][0]['value']));
          ?>
        </div>
      </section>
    <?php
      print render($content);
    ?>
    </div>

    <?php if ($links = render($content['links'])): ?>
      <nav class="clearfix"><?php print $links; ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>

  </div>
</article>
