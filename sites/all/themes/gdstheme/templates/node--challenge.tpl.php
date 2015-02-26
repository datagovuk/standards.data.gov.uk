<?php
  // TODO move logic to preprocess function

  $open = $node->field_challenge_status[LANGUAGE_NONE][0]['value'] == 1 && (empty($node->field_response_close_date[LANGUAGE_NONE][0]['value']) || $node->field_response_close_date[LANGUAGE_NONE][0]['value'] > time());

?>

<article id="article-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="challenge-metadata">

    <?php if (!empty($challenge_statistics)): ?>
    <?php print $challenge_statistics; ?>
    <?php endif; ?>

    <?php if (!empty($status_summary)): ?>
      <?php print $status_summary; ?>
    <?php endif; ?>

    <div class="col1">
      <dl>
        <dt>Author</dt>
        <dd><?php print $node_author->field_firstname[LANGUAGE_NONE][0]['safe_value']; ?> <?php print $node_author->field_surname[LANGUAGE_NONE][0]['safe_value']; ?></dd>
        <dt>Submitted</dt>
        <dd><?php print format_date($created, 'medium'); ?></dd>
      </dl>
    </div>
    <div class="col2">
      <dl>
        <dt>Stage</dt>
        <dd><?php print $content['field_challenge_status'][0]['#markup']; ?></dd>
        <dt>Categories</dt>
        <dd><?php print render($content['field_category']); ?></dd>
        <!--<dt>Closes</dt>
        <dd><?php print format_date($node->field_response_close_date[LANGUAGE_NONE][0]['value'], 'medium'); ?></dd>-->
      </dl>
    </div>
  </div>
  <div class="challenge-challenge">
    <?php print render($content['field_short_description']); ?>
    <?php print render($content['field_user_need']); ?>
    <?php print render($content['field_expected_benefits']); ?>
    <?php print render($content['field_functional_needs']); ?>
  </div>

  <div class="article-inner clearfix">

    <?php print $unpublished; ?>

    <?php if (!empty($submitted) && $display_submitted): ?>
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
      // moved to section above
      hide($content['field_challenge_status']);
      print render($content);
    ?>
    </div>

    <?php if ($links = render($content['links'])): ?>
      <nav class="clearfix"><?php print $links; ?></nav>
    <?php endif; ?>

  </div>
  <?php if (false && user_access('edit any challenge content') && $comment_count): ?>
    <a href="/comment/download/<?php print $node->nid . '/' . str_replace('challenge/','', drupal_get_path_alias('node/' . $node->nid)); ?>">Download comments</a>
  <?php endif; ?>

  <?php if (user_access('edit any challenge content') && $comment_count): ?>
    <a href="/comment/download/<?php print $node->nid . '/' . $node->title; ?>">Download comments</a>
  <?php endif; ?>

  <?php if ($open): ?>
    <div class="article-inner clearfix">
      <?php if (user_is_anonymous()): ?>
        <a href="/user/login?destination=/node/add/proposal?chid=<?php print $node->nid;?>">Login</a> to respond to this challenge
      <?php elseif(challenge_owner_or_admin($node)): ?>
        <h4><a class="respond-to-challenge" href="/node/add/proposal?chid=<?php print $node->nid;?>">Create proposal</a></h4>
      <?php else:?>
        <?php $unverified_role = variable_get('logintoboggan_pre_auth_role'); ?>
        <?php if (in_array($unverified_role, array_keys($user->roles))): ?>
          <h4>Confirm your email address to respond to this challenge</h4>
        <?php else:?>
          <h4><a class="respond-to-challenge" href="/node/add/proposal?chid=<?php print $node->nid;?>">Respond to challenge</a></h4>
        <?php endif; ?>
      <?php endif; ?>
    </div>
  <?php elseif(!$teaser && challenge_owner_or_admin($node)): ?>
    <div class="article-inner clearfix">
        <h4><a class="respond-to-challenge" href="/node/add/proposal?chid=<?php print $node->nid;?>">Create proposal</a></h4>
    </div>
  <?php endif; ?>

  <div class="challenge-stages">
    <ul class="vertical-tabs">
      <li class="vertical-tab first"><a href="#suggestion-stage">Suggestion stage</a></li>
      <li ><a class="vertical-tab" href="#response-stage">Response stage</a></li>
      <li><a class="vertical-tab" href="#proposal-stage">Proposal stage</a></li>
      <li class="vertical-tab last"><a href="#solution-stage">Solution stage</a></li>
    </ul>
    <div class="container">
      <div id="suggestion-stage">
        <h2 class="js-hide">Suggestion stage</h2>
        <?php print render($content['comments']); ?>
      </div>
      <div id="response-stage">
        <h2 class="js-hide">Response stage</h2>
        <?php print $responses; ?>
      </div>
      <div id="proposal-stage">
        <h2 class="js-hide">Proposal stage</h2>
        <?php print $proposals; ?>
      </div>
      <div id="solution-stage">
        <h2 class="js-hide">Solution stage</h2>
        <?php print $solutions; ?>
      </div>
    </div>
  </div>

</article>
