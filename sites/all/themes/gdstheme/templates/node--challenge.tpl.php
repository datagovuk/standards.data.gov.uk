<?php
  // TODO move logic to preprocess function

  $open = $node->field_challenge_status[LANGUAGE_NONE][0]['value'] == 1 && (empty($node->field_response_close_date[LANGUAGE_NONE][0]['value']) || $node->field_response_close_date[LANGUAGE_NONE][0]['value'] > time());

// Get node author for rendering "Submitted by".
$node_author = user_load($node->uid);

// Get node author for rendering "Challenge owner".
$challenge_owner = $node->field_sro[LANGUAGE_NONE][0]['user'];

// Lookup published comments count.
$sql = "SELECT comment_count
            FROM {node_comment_statistics}
            WHERE nid = $nid";
$result = db_query($sql);

?>

<article id="article-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div id="challenge-metadata">

    <?php if (!empty($challenge_statistics)): ?>
    <?php print $challenge_statistics; ?>
    <?php endif; ?>

    <?php if (!empty($status_summary)): ?>
      <?php print $status_summary; ?>
    <?php endif; ?>

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
          <div class="field-item even"><?php print render($node_author->name); ?></div>
        </div>
      </div>
      <!-- Challenge owner -->
      <?php if ($node->field_challenge_status): ?>
        <?php if ($node->field_challenge_status[LANGUAGE_NONE][0]['value'] > 0): ?>
          <div class="field field-label-inline clearfix view-mode-full">
            <div class="field-label">Challenge owner:</div>
            <div class="field-items">
              <div class="field-item even"><?php print render($challenge_owner->name); ?></div>
            </div>
          </div>
        <?php endif; ?>
      <?php endif; ?>
    </div>
    <div class="col2">
      <!-- Stage -->
      <?php print render($content['field_challenge_status']); ?>
      <!-- Category -->
      <?php print render($content['field_category']); ?>
      <!-- No. of comments -->
      <div class="field field-label-inline clearfix view-mode-full">
        <div class="field-label">Comments:</div>
        <div class="field-items">
          <div class="field-item even"><?php print $comment_count; ?></div>
        </div>
      </div>
      <?php if ($node->field_challenge_status[LANGUAGE_NONE][0]['value'] > 0): ?>
        <!-- No. of responses -->
        <div class="field field-label-inline clearfix view-mode-full">
          <div class="field-label">Responses:</div>
          <div class="field-items">
            <div class="field-item even"><?php print $response_count; ?></div>
          </div>
        </div>
      <?php endif; ?>
      <?php if ($node->field_challenge_status[LANGUAGE_NONE][0]['value'] > 0): ?>
        <!-- No. of proposals -->
        <div class="field field-label-inline clearfix view-mode-full">
          <div class="field-label">Proposals:</div>
          <div class="field-items">
            <div class="field-item even"><?php print $proposal_count; ?></div>
          </div>
        </div>
      <?php endif; ?>
    </div>
  </div>

  <div id="challenge-challenge">
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

  <div id="challenge-stages">
    <h2>Stages</h2>
    <ul class="tabs tabs-challenge">
      <li class="vertical-tab first"><a href="#suggestion-stage">Suggestion</a></li>
      <li ><a class="vertical-tab" href="#response-stage">Response</a></li>
      <li><a class="vertical-tab" href="#proposal-stage">Proposal</a></li>
      <li class="vertical-tab last"><a href="#solution-stage">Solution</a></li>
    </ul>
    <div class="container">
      <div id="suggestion-stage" class="stage-container">
        <h2 class="js-hide">Suggestion</h2>
        <div class="view-header"><p>Suggestion stage description here.</p></div>
        <?php if (isset($content['comments']['comments'])): ?>
          <?php print render($content['comments']); ?>
        <?php else: ?>
          No comments text here.
        <?php endif; ?>
      </div>
      <div id="response-stage" class="stage-container">
        <h2 class="js-hide">Response</h2>
        <?php print $responses; ?>
      </div>
      <div id="proposal-stage" class="stage-container">
        <h2 class="js-hide">Proposal</h2>
        <?php print $proposals; ?>
      </div>
      <div id="solution-stage" class="stage-container">
        <h2 class="js-hide">Solution</h2>
        <?php print $solutions; ?>
      </div>
    </div>
  </div>

</article>
