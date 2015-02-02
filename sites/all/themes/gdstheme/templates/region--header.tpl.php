<?php
/**
 * @file
 * Header of site. Black bar, and blue bar on front page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div id="main-header-form">
  <?php if ($content): ?>
    <div class="<?php print $classes; ?>">
      <?php print $content; ?>
    </div>
  <?php endif; ?>
</div>
