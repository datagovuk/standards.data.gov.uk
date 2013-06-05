<?php
  // TODO move logic to preprocess function
  $open = $node->field_challenge_status['und'][0]['value'] == 1 && $node->field_response_close_date['und'][0]['value'] > time();

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
    if ($field_challenge_status['und'][0]['value'] == 1 || $field_challenge_status[0]['value'] == 1) {
      // Building $challenge_status string only if challenge status == current
      if (isset($field_response_close_date['und'][0]['value']) && $field_response_close_date['und'][0]['value'] > time()) {
        $challenge_status = 'Challenge open for responses. Submit your response by ' . date('d/m/Y', $field_response_close_date['und'][0]['value']) ;
      }
      elseif (isset($field_close_comments['und'][0]['value'])) {
        $challenge_status = 'Challenge closed for responses. ';

        $sql = "SELECT *
                FROM {field_data_field_proposal_phase} pp
                JOIN {field_data_field_challenge_ref} chr
                ON chr.entity_id = pp.entity_id
                WHERE chr.field_challenge_ref_nid = $nid
                AND pp.field_proposal_phase_value > 0
                ";

        $result = db_query($sql);


        // if there are prpopsals with phase > 0 (not responses)
        if ($result->rowCount()) {
          if (isset($field_close_comments['und'][0]['value']) && $field_close_comments['und'][0]['value'] == 1) {
            $challenge_status .= 'Proposal(s) open for comment.';
          }
          elseif (isset($field_close_comments['und'][0]['value'])) {
            $challenge_status .= 'Proposal(s) closed for comment.';
          }

        }
        else {
          $challenge_status .= 'Proposal(s) in development.';
        }

      }
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
              Challenge: <?php print $title; ?><p></p><p class="challenge-status"><?php print $challenge_status; ?></p>
            <?php elseif (!$page): ?>
              <a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?></a><p class="challenge-status"><?php print $challenge_status; ?></p>
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

  <?php print render($content['comments']); ?>

  <?php if (!$teaser && $open): ?>
    <div class="article-inner clearfix">
       <?php if (user_is_anonymous()): ?>
        <a href="/user/login?destination=/node/add/proposal?chid=<?php print $node->nid;?>">Login</a> or <a href="/user/register">Register</a> to respond
      <?php else: ?>
        <h4><a class="respond-to-challenge" href="/node/add/proposal?chid=<?php print $node->nid;?>">Respond to challenge</a></h4>
      <?php endif; ?>
    </div>

  <?php endif; ?>


</article>
