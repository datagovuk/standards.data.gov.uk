<?php

  $open = $node->field_challenge_status['und'][0]['value'] == 1;

  global $base_url;
  if (user_is_anonymous()) {
    $href = $base_url . '/user/login?destination=/node/add/proposal?chid=' . $node->nid;
  }
  else {
    $href = $base_url . '/node/add/proposal?chid=' . $node->nid;
  }

  if($teaser){
    unset($content['links']);
  }
?>

<article id="article-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="article-inner clearfix">

    <?php print $unpublished; ?>

    <?php print render($title_prefix); ?>
    <?php if(!empty($user_picture) || $title || (!empty($submitted) && $display_submitted)): ?>
      <header class="clearfix<?php $user_picture ? print ' with-picture' : ''; ?>">

        <?php print $user_picture; ?>

        <?php if ($title): ?>
          <h1<?php print $title_attributes; ?>>
            <?php if ($page): ?>
              Challenge: <?php print $title; ?>
            <?php elseif (!$page): ?>
              <a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?></a>
            <?php endif; ?>
          </h1>
        <?php endif; ?>

        <?php if ($display_submitted): ?>
          <div class="submitted"><?php print $submitted; ?></div>
        <?php endif; ?>

      </header>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

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

  </div>

  <?php if (!$teaser && $open): ?>
    <div class="article-inner clearfix">
       <?php if (user_is_anonymous()): ?>
        <a href="/user/login?destination=/node/add/proposal?chid=<?php print $node->nid;?>">Login</a> or <a href="/user/register">Register</a> to create a new response
      <?php else: ?>
        <a class="respond-to-challenge" href="/node/add/proposal?chid=<?php print $node->nid;?>">Respond to challenge</a>
      <?php endif; ?>
    </div>

  <?php endif; ?>

  <?php print render($content['comments']); ?>

</article>
