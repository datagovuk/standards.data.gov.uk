<?php
  global $user;
  global $base_url;

  $open = (bool)$node->field_challenge_status['und'][0]['value'];

  $href = $user->uid == 0 ?
    $base_url . '/user/login?destination=/node/add/proposal?chid=' . $node->nid :
    $base_url . '/node/add/proposal?chid=' . $node->nid;

  if($teaser && $open){
    $content['links']['proposal'] = array(
      '#links' => array(
         'propose_idea' => array(
            'title' => 'Make proposal',
            'href' => $href,
         ),
      ),
      '#attributes' => array(
          'class' => array('links','inline'),
      ),
    );
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
    <div class="track-progress-div">&nbsp;</div>
    <div class="track-progress-div white-top">&nbsp;</div>
      <?php if ($user->uid == 0): ?>
        <h3 class="align-center"><a href="/proposals?field_category_tid=All&field_challenge_ref_nid=<?php print $node->nid;?>">View</a> existing proposals or <a href="/user/login?destination=/node/add/proposal?chid=<?php print $node->nid;?>">Login</a> / <a href="/user/register">Register</a> to create a new proposal</h3>
      <?php else: ?>
      <h3 class="align-center">You can now <a href="/proposals?field_category_tid=All&field_challenge_ref_nid=<?php print $node->nid;?>">view and comment</a> on existing proposals or <a href="/node/add/proposal?chid=<?php print $node->nid;?>">create</a> a new proposal</h3>
      <?php endif; ?>
    </div>
  <?php endif; ?>

</article>
