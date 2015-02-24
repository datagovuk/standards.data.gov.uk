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

$node_author = user_load($node->uid);
$categories = array();
foreach ($node->field_category[LANGUAGE_NONE] as $field_category) {
  $categories[] = $field_category['taxonomy_term']->name;
}

?>

<article id="article-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="challenge-metadata">
    <div class="col1">
      <dl>
        <dt>Author</dt>
        <dd><?php print $node_author->field_firstname[LANGUAGE_NONE][0]['safe_value']; ?> <?php print $node_author->field_surname[LANGUAGE_NONE][0]['safe_value']; ?></dd>
        <dt>Submitted</dt>
        <dd><?php print format_date($node->revision_timestamp, 'medium'); ?></dd>
      </dl>
    </div>
    <div class="col2">
      <dl>
        <dt>Stage</dt>
        <dd><?php print $content['field_challenge_status'][0]['#markup']; ?></dd>
        <dt>Categories</dt>
        <dd><?php print implode($categories, ', '); ?></dd>
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


  <?php if ($node->field_challenge_status[LANGUAGE_NONE][0]['value'] == 0): ?>
    <?php print render($content['comments']); ?>
  <?php endif; ?>

  <?php if (!$teaser && $open): ?>
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


</article>
