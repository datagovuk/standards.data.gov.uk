<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="comment-inner">

    <?php print $unpublished; ?>

    <header class="clearfix<?php $picture ? print ' with-picture' : ''; ?>">
      <?php print $picture; ?>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h3<?php print $title_attributes; ?>><?php print $title ?></h3>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if ($new): ?>
        <em class="new"><?php print $new ?></em>
      <?php endif; ?>
      <p class="submitted"><?php print $submitted; ?></p>
    </header>

    <div<?php print $content_attributes; ?>>
      <?php
        hide($content['links']);
        print render($content);
      ?>
      <?php if ($signature): ?>
        <aside class="user-signature clearfix">
          <?php print $signature;  ?>
        </aside>
      <?php endif; ?>
    </div>

    <?php if ($links = render($content['links'])): ?>
      <nav class="clearfix"><?php print $links; ?></nav>
    <?php endif; ?>

  </div>
</article>
