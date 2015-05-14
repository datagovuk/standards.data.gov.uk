<?php
// TODO move logic to preprocess function

$open = $node->field_challenge_status[LANGUAGE_NONE][0]['value'] == 1 && (empty($node->field_response_close_date[LANGUAGE_NONE][0]['value']) || $node->field_response_close_date[LANGUAGE_NONE][0]['value'] > time());

// Get node author for rendering "Submitted by".
$node_author = user_load($node->uid);

// Get node author for rendering "Challenge owner".
$challenge_owner = isset($node->field_sro[LANGUAGE_NONE][0]['user'])? $node->field_sro[LANGUAGE_NONE][0]['user'] : FALSE;

$unverified_role = variable_get('logintoboggan_pre_auth_role');

$counts = array();
if ($node->field_challenge_status[LANGUAGE_NONE][0]['value'] < 3) {
  if ($comment_count == 0) {
    $counts[] = '0 Comments';
  }
  elseif ($comment_count == 1) {
    $counts[] = '1 Comment';
  } else {
    $counts[] = "$comment_count Comments";
  }
}

if ($node->field_challenge_status[LANGUAGE_NONE][0]['value'] > 0) {
  if ($response_count == 0) {
    $counts[] = '0 Responses';
  }
  elseif ($response_count == 1) {
    $counts[] = '1 Response';
  } else {
    $counts[] = "$response_count Responses";
  }
}

if ($node->field_challenge_status[LANGUAGE_NONE][0]['value'] > 1 && $node->field_challenge_status[LANGUAGE_NONE][0]['value'] < 3) {
  if ($proposal_count == 0) {
    $counts[] = '0 Proposals';
  }
  elseif ($proposal_count == 1) {
    $counts[] = '1 Proposal';
  } else {
    $counts[] = "$proposal_count Proposals";
  }
}

?>

<article id="article-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print $unpublished; ?>

  <div id="proposal-subscribe">
    <?php print render($content['subscriptions_ui']); ?>
  </div>

  <div id="challenge-metadata">

    <div class="submitted-by">Submitted by <?php print render($node_author->name); ?> on <?php print format_date($node->created, 'article'); ?></div>
    <div class="col1">
      <!-- Challenge owner -->
      <?php if ($node->field_challenge_status): ?>
        <?php // if ($node->field_challenge_status[LANGUAGE_NONE][0]['value'] > 0): ?>
        <div class="field field-label-inline clearfix view-mode-full">
          <div class="field-label">Challenge owner:</div>
          <div class="field-items">
            <div class="field-item even"><?php print isset($challenge_owner->name) ? render($challenge_owner->name) : 'Not assigned'; ?></div>
          </div>
        </div>
        <?php // endif; ?>
      <?php endif; ?>
      <!-- Category -->
      <?php print render($content['field_category']); ?>
    </div>
    <div class="col2">
      <!-- Stage -->
      <?php print render($content['field_challenge_status']); ?>
      <div class="field field-label-inline clearfix view-mode-full">
        <div class="field-label">Activity:</div>
        <div class="field-items">
          <div class="field-item even"><?php print implode(', ', $counts); ?></div>
        </div>
      </div>
    </div>
  </div>

  <div id="challenge-challenge">
    <?php print render($content['field_short_description']); ?>
    <?php print render($content['field_user_need']); ?>
    <?php print render($content['field_expected_benefits']); ?>
    <?php print render($content['field_functional_needs']); ?>
  </div>

  <div id="challenge-update" class="challenge-section">
    <h2>Update</h2>
    <?php if ($status_summary || $status_update = render($content['field_status_update'])): ?>
      <?php if ($status_summary): ?>
        <p><?php print $status_summary; ?></p>
      <?php endif; ?>
      <?php if ($status_update): ?>
        <p><?php print $status_update; ?></p>
      <?php endif; ?>
    <?php else: ?>
      <p>There are no updates for this challenge.</p>
    <?php endif; ?>
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

  </div>

  <div id="challenge-stages" class="challenge-section">
    <h2>Challenge activity</h2>
    <h3>Stages</h3>
    <ul class="tabs tabs-challenge">
      <li class="vertical-tab first"><a href="#suggestion-stage">1. Suggestion</a></li>
      <li ><a class="vertical-tab" href="#response-stage">2. Response</a></li>
      <li><a class="vertical-tab" href="#proposal-stage">3. Proposal</a></li>
      <li class="vertical-tab last"><a href="#solution-stage">4. Solution</a></li>
    </ul>
    <div class="container">
      <div id="suggestion-stage" class="stage-container">
        <div class="view-header">
          <h3>Comments</h3>
          <?php if (empty($content['comments']['comments'])): ?>
            <?php if (!$challenge_status): // == 0 suggestion stage?>
              <div class="view-empty"><p>There are no comments on this suggestion yet.</p></div>
            <?php else: ?>
              <div class="view-empty"><p>This challenge is closed for comments.</p></div>
            <?php endif; ?>
          <?php endif; ?>

          <div class="view-content"><?php print render($content['comments']); ?></div>
          <?php if (user_access('edit any challenge content') && $comment_count): ?>
            <div id="download-button-wrapper"><a class="button" href="/comment/download/<?php print $node->nid . '/' . $node->title; ?>">Download comments</a></div>
          <?php endif; ?>
        </div>
      </div>
      <div id="response-stage" class="stage-container">
        <?php print $responses; ?>

        <?php if ($open): ?>
          <div class="article-inner clearfix response-actions">
            <?php if (user_is_anonymous()): ?>
              <a class="button" href="/user/login?destination=/node/add/proposal?chid=<?php print $node->nid;?>">Login</a> to respond to this challenge
            <?php elseif (in_array($unverified_role, array_keys($user->roles))): ?>
              <h4>Confirm your email address to respond to this challenge</h4>
            <?php else: ?>
              <h4><a class="respond-to-challenge button" href="/node/add/proposal?chid=<?php print $node->nid;?>">Respond to challenge</a></h4>
            <?php endif; ?>
          </div>
        <?php endif; ?>

      </div>
      <div id="proposal-stage" class="stage-container">
        <?php print $proposals; ?>

        <?php if ($open && challenge_owner_or_admin($node)): ?>
          <div class="article-inner clearfix proposal-actions">
            <h4><a class="respond-to-challenge button" href="/node/add/proposal?chid=<?php print $node->nid;?>">Create proposal</a></h4>
          </div>
        <?php endif; ?>

      </div>
      <div id="solution-stage" class="stage-container">
        <?php print $solutions; ?>
      </div>
    </div>
  </div>

</article>
