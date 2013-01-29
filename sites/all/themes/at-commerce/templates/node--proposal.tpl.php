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
              <?php print $title; ?>
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




      if($view_mode == 'full'){

//        $status = $node->field_status['und'][0]['value'];
//
//        hide($content['field_files_propose']);
//        hide($content['field_files_define']);
//        hide($content['field_files_build']);
//        hide($content['field_files_trial']);
//        hide($content['field_files_adopt']);
//        hide($content['field_files_review']);
//
//        switch ($status) {
//          case 'filtered':
//            show($content['field_files_propose']);
//            $content['field_files_propose']['#title'] = 'Files';
//            break;
//
//          case 'defined':
//            show($content['field_files_define']);
//            $content['field_files_define']['#title'] = 'Files';
//            break;
//
//          case 'build':
//            show($content['field_files_build']);
//            $content['field_files_build']['#title'] = 'Files';
//            break;
//
//          case 'trial':
//            show($content['field_files_trial']);
//            $content['field_files_trial']['#title'] = 'Files';
//            break;
//
//          case 'adopted':
//            show($content['field_files_adopt']);
//            $content['field_files_adopt']['#title'] = 'Files';
//            break;
//
//          case 'reviewed':
//          case 'retired':
//            show($content['field_files_review']);
//            $content['field_files_review']['#title'] = 'Files';
//            break;
//
//          case 'dropped':
//            show($content['field_files_propose']);
//            show($content['field_files_define']);
//            show($content['field_files_build']);
//            show($content['field_files_trial']);
//            show($content['field_files_adopt']);
//            show($content['field_files_review']);
//            break;
//
//        }


//        $proposal = array('initial','filtered','dropped');
//        if(!in_array($status, $proposal)){
//          //standard
//          hide($content['body']);
//          hide($content['field_why']);
//          hide($content['field_how']);
//
//
//        }
//        elseif($status != 'dropped'){
//          //proposal
//          hide($content['field_definition']);
//
//        }
      }

      print render($content);

    ?>
    </div>

    <?php if ($links = render($content['links'])): ?>
      <nav class="clearfix"><?php print $links; ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>

  </div>
</article>
