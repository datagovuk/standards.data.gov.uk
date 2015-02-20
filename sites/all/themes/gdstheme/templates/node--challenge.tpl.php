<?php
  // TODO move logic to preprocess function

  $open = $node->field_challenge_status[LANGUAGE_NONE][0]['value'] == 1 && (empty($node->field_response_close_date[LANGUAGE_NONE][0]['value']) || $node->field_response_close_date[LANGUAGE_NONE][0]['value'] > time());

  global $base_url;
  if (user_is_anonymous()) {
    $href = $base_url . '/user/login?destination=/node/add/proposal?chid=' . $node->nid;
  }
  else {
    $href = $base_url . '/node/add/proposal?chid=' . $node->nid;
  }

  $a = isset($node->field_proposal_close_date[LANGUAGE_NONE][0]['value']);

  if ($teaser){
    unset($content['links']);
  }

  if ($node->field_challenge_status[LANGUAGE_NONE][0]['value'] == 1) {
    // Building $challenge_status string only if challenge status == current

    if (isset($node->field_response_close_date[LANGUAGE_NONE][0]['value']) && (int)$node->field_response_close_date[LANGUAGE_NONE][0]['value'] > time()) {
      $challenge_status = 'Challenge open for responses. Submit your response by ' . date('d/m/Y', $node->field_response_close_date[LANGUAGE_NONE][0]['value']) . '.';
    }
    else {
      $challenge_status = 'Challenge closed for responses. ';
    }

    if (isset($node->field_proposal_close_date[LANGUAGE_NONE][0]['value'])) {

      $sql = "SELECT *
              FROM {field_data_field_proposal_phase} pp
              JOIN {field_data_field_challenge_ref} chr ON chr.entity_id = pp.entity_id
              JOIN {node} n ON n.nid = pp.entity_id
              WHERE chr.field_challenge_ref_nid = $nid
              AND pp.field_proposal_phase_value = 1
              AND n.status > 0
              ";

      $result = db_query($sql);


      // if there are prpopsals with phase = 1 (proposal)
      $proposal_count = $result->rowCount();
      if ($proposal_count) {
        $plural = $proposal_count > 1 ? 's' : '';
        if (isset($node->field_proposal_close_date[LANGUAGE_NONE][0]['value']) && (int)$node->field_proposal_close_date[LANGUAGE_NONE][0]['value'] > time()) {
          $challenge_status .= 'Proposal' . $plural . ' open for comment by ' . date('d/m/Y', $node->field_proposal_close_date[LANGUAGE_NONE][0]['value']) . '.';
        }
        elseif (isset($node->field_proposal_close_date[LANGUAGE_NONE][0]['value'])) {
          $challenge_status .= 'Proposal' . $plural . ' closed for comment.';
        }

      }
      else {
        $challenge_status .= 'Proposal' . $plural . ' in development.';
      }
    }
  }
?>

<article id="article-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="article-inner clearfix">

    <?php print $unpublished; ?>

    <?php print render($title_prefix); ?>
    <?php if (!empty($user_picture) || $title || (!empty($submitted) && $display_submitted)): ?>
      <header class="clearfix<?php $user_picture ? print ' with-picture' : ''; ?>">

        <?php print $user_picture; ?>

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
  <?php if (false && user_access('edit any challenge content') && $comment_count): ?>
    <a href="/comment/download/<?php print $node->nid . '/' . str_replace('challenge/','', drupal_get_path_alias('node/' . $node->nid)); ?>">Download comments</a>
  <?php endif; ?>

  <?php if (user_access('edit any challenge content') && $comment_count): ?>
    <a href="/comment/download/<?php print $node->nid . '/' . $node->title; ?>">Download comments</a>
  <?php endif; ?>


  <?php if ($node->field_challenge_status[LANGUAGE_NONE][0]['value'] == 0): ?>
    <?php print render($content['comments']); ?>
  <?php endif; ?>

  <?php if (!$teaser && $open): ?>
    <div class="article-inner clearfix">
      <?php if (user_is_anonymous()): ?>
        <a href="/user/login?destination=/node/add/proposal?chid=<?php print $node->nid;?>">Login</a> to respond to this challenge
      <?php elseif(challenge_owner_or_admin($node)): ?>
        <h4><a class="respond-to-challenge" href="/node/add/proposal?chid=<?php print $node->nid;?>">Create proposal</a></h4>
      <?php else: ?>
        <h4><a class="respond-to-challenge" href="/node/add/proposal?chid=<?php print $node->nid;?>">Respond to challenge</a></h4>
      <?php endif; ?>
    </div>
  <?php elseif(!$teaser && challenge_owner_or_admin($node)): ?>
    <div class="article-inner clearfix">
        <h4><a class="respond-to-challenge" href="/node/add/proposal?chid=<?php print $node->nid;?>">Create proposal</a></h4>
    </div>
  <?php endif; ?>


</article>
