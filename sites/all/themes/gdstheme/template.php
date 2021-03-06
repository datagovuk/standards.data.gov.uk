<?php

/**
 * Override or insert variables into the node template.
 */
function gdstheme_preprocess_node(&$vars) {
  // suggest node--[type|nid]--teaser.tpl.php template for node teasers.
  if ($vars['view_mode'] == 'teaser') {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__teaser';
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->nid . '__teaser';
  }

  // Remove the horrid inline class, it does wanky things like display:inline on the UL, whack eh?
  $vars['content']['links']['#attributes']['class'] = 'links';

  // Clearfix node content wrapper
  $vars['content_attributes_array']['class'][] = 'clearfix';

  // Theming for node in block
  if (theme_get_setting('show_slideshow') == TRUE) {
    if (isset($vars['node']->nodesinblock)) {
      $vars['classes_array'][] = 'flexible-slideshow';
      $vars['title_attributes_array']['class'][] = 'element-invisible';
    }
  }

  // Content grids - nuke links off teasers if in a content_display
  if ($vars['view_mode'] == 'teaser') {
    $show_frontpage_grid = theme_get_setting('content_display_grids_frontpage') == 1 ? TRUE : FALSE;
    $show_taxopage_grid = theme_get_setting('content_display_grids_taxonomy_pages') == 1 ? TRUE : FALSE;
    if ($show_frontpage_grid == TRUE || $show_taxopage_grid == TRUE) {
      unset($vars['content']['links']);
    }
  }

  $vars['unpublished'] = '';
  if (!$vars['status']) {
    $vars['unpublished'] = '<div class="unpublished">' . t('Unpublished') . '</div>';
  }

  unset($vars['content']['links']['comment']);

}

function gdstheme_preprocess_page(&$variables) {
  if($variables['is_front']) {
    unset($variables['page']['content']['system_main']['default_message']);
  }


  if (isset($variables['node']) && $variables['node']->type == 'challenge') {
    drupal_add_library ( 'system' , 'ui.tabs' );
  }

  $variables['layout'] = 'full';

  // challenges pages are left-sidebar
  if (arg(0) == 'challenges') {
    $variables['layout'] = 'leftbar';
  }

  // search page is left-sidebar
  if (arg(0) == 'search') {
    $variables['layout'] = 'search';

    // Hack facets, use field_proposal_phase as content type filter.
    $facet_keys = array_keys($variables['page']['highlighted']);
    $key_content_type = $facet_keys[1];
    $key_proposal_phase = $facet_keys[2];
    if (!empty($variables['page']['highlighted'][$key_content_type]['type']['#items'][0]) && strpos($variables['page']['highlighted'][$key_content_type]['type']['#items'][0]['data'], 'Apply Proposal filter') !== FALSE) {
      unset($variables['page']['highlighted'][$key_content_type]['type']['#items'][0]);
      $variables['page']['highlighted'][$key_content_type]['type']['#items'][] = $variables['page']['highlighted'][$key_proposal_phase]['field_proposal_phase']['#items'][0];
      $variables['page']['highlighted'][$key_content_type]['type']['#items'][] = $variables['page']['highlighted'][$key_proposal_phase]['field_proposal_phase']['#items'][1];
      $variables['page']['highlighted'][$key_content_type]['type']['#items'][] = $variables['page']['highlighted'][$key_proposal_phase]['field_proposal_phase']['#items'][2];
      unset($variables['page']['highlighted'][$key_proposal_phase]);
    }
  }


  // lets us theme the entire page, depending on node type.
  // page--node--[type].tpl.php
  if (isset($variables['node'])) {
    $variables['theme_hook_suggestions'][] = 'page__node__' . $variables['node']->type;
  }
}

function gdstheme_field__profile_version(&$vars) {
  $output = '';

  // Use field description as a lable for all proposal assessment fields
  if ($vars['element']['#field_type'] == 'field_collection'){
    $entity_type = $vars['element']['#entity_type'];
    $field_name = $vars['element']['#field_name'];
    $bundle_name = $vars['element']['#bundle'];
    $instance_info = field_info_instance($entity_type, $field_name, $bundle_name);
    $label = $instance_info['description'];

    if ($field_name == 'field_ass_other') {
      foreach ($vars['items'] as $index => $item) {
        $assessment_other_question = array_pop($item['entity']['field_collection_item']);
        if (!isset($assessment_other_question['field_ass_question'])) {
          unset($vars['items'][$index]);
        }
      }
      if (empty($vars['items'])) {
        return ' '; // Hack to don't render 'Other:' label
      }
    }

    $vars['label'] = $label;
  }

  elseif ($vars['element']['#field_type'] == 'relation_endpoint') {
    $link_to_proposal = $vars['items'][0]['#rows'][0][0];
    $link_to_standard_version = $vars['items'][0]['#rows'][1][0];

    $relation = $vars['element']['#object'];

    if (isset($relation->endpoints[LANGUAGE_NONE][0]['entity_id'])) {
      $proposal = node_load($relation->endpoints[LANGUAGE_NONE][0]['entity_id']);
      if ($proposal->type == 'proposal') {
        $phase = $proposal->field_proposal_phase[LANGUAGE_NONE][0]['value'];
      }
    }

    // 0 = response, 1 = proposal, 2 = standards profile
    if ($phase == 1) {
      $draft = ' (draft)';
      $description = 'This is an assessment of a standard identified in a proposal. It is assessed for suitability against a set of criteria agreed by the <a href="/meeting/open-standards-board-terms-reference">Open Standards Board</a>. Note that a "No" response to a knock-out question means that this standard is not suitable for use in this context and will not be considered further.';
    }
    elseif ($phase == 2) {
      $draft = '';
      $description = 'This provides an assessment of a standard against a set of criteria that were agreed by the <a href="/meeting/open-standards-board-terms-reference">Open Standards Board</a>.';
    }

    $output = '<h1 class="article-title">Standard assessment' . $draft . '</h1>';

    $output .= '<p>' . $description . '</p>';

    $output .= '<h3>Standards profile:</h3>' . $link_to_proposal. '<h3>Standard:</h3>' . $link_to_standard_version . '<p></p>';

    return $output;
  }

  // Render the label, if it's not hidden.
  if (!$vars['label_hidden']) {
    $output .= '<h2 class="field-label"' . $vars['title_attributes'] . '>' . $vars['label'] . ':&nbsp;</h2>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $vars['content_attributes'] . '>';
  foreach ($vars['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $vars['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level wrapper element.
  $tag = $vars['label_hidden'] ? 'div' : 'section';
  $output = "<$tag class=\"" . $vars['classes'] . '"' . $vars['attributes'] . '>' . $output . "</$tag>";

  return $output;

}

/**
 * Override or insert variables into the html template.
 */
function gdstheme_preprocess_html(&$vars) {
  global $theme_key;
  $path_to_theme = path_to_theme();

  if (isset($vars['html_attributes'])) {
    $vars['html_attributes'] .= 'id="html-no-iframe"';
  }

  if (drupal_is_front_page()) {
    $vars['head_title'] = 'Welcome to the Standards Hub | Standards Hub';
  }

  // Add class for the active theme
  $vars['classes_array'][] = drupal_html_class($theme_key);

  // Add theme settings classes
  $settings_array = array(
    'font_size',
    'body_background',
    'header_layout',
    'menu_bullets',
    'main_menu_alignment',
    'image_alignment',
    'site_name_case',
    'site_name_weight',
    'site_name_alignment',
    'site_name_shadow',
    'site_slogan_case',
    'site_slogan_weight',
    'site_slogan_alignment',
    'site_slogan_shadow',
    'page_title_case',
    'page_title_weight',
    'page_title_alignment',
    'page_title_shadow',
    'node_title_case',
    'node_title_weight',
    'node_title_alignment',
    'node_title_shadow',
    'comment_title_case',
    'comment_title_weight',
    'comment_title_alignment',
    'comment_title_shadow',
    'block_title_case',
    'block_title_weight',
    'block_title_alignment',
    'block_title_shadow',
    'corner_radius_form_input_text',
    'corner_radius_form_input_submit',
  );
  foreach ($settings_array as $setting) {
    $vars['classes_array'][] = theme_get_setting($setting);
  }

  // Add Noggin module settings extra classes, not all designs can support header images
  if (module_exists('noggin')) {
    if (variable_get('noggin:use_header', FALSE)) {
      $va = theme_get_setting('noggin_image_vertical_alignment');
      $ha = theme_get_setting('noggin_image_horizontal_alignment');
      $vars['classes_array'][] = 'ni-a-' . $va . $ha;
      $vars['classes_array'][] = theme_get_setting('noggin_image_repeat');
      $vars['classes_array'][] = theme_get_setting('noggin_image_width');
    }
  }

  // Special case for PIE htc rounded corners, not all themes include this
  if (theme_get_setting('ie_corners') == 1) {
    drupal_add_css($path_to_theme . '/css/ie-htc.css', array(
        'group' => CSS_THEME,
        'browsers' => array(
          'IE' => 'lte IE 8',
          '!IE' => FALSE,
        ),
        'preprocess' => FALSE,
      )
    );
  }

  // Custom settings for AT Commerce
  // Content displays
  $show_frontpage_grid = theme_get_setting('content_display_grids_frontpage') == 1 ? TRUE : FALSE;
  $show_taxopage_grid = theme_get_setting('content_display_grids_taxonomy_pages') == 1 ? TRUE : FALSE;
  if ($show_frontpage_grid == TRUE || $show_taxopage_grid == TRUE) {drupal_add_js($path_to_theme . '/js/equalheights.js');}
  if ($show_frontpage_grid == TRUE) {
    $cols_fpg = theme_get_setting('content_display_grids_frontpage_colcount');
    $vars['classes_array'][] = $cols_fpg;
    drupal_add_js($path_to_theme . '/js/eq.fp.grid.js');
  }
  if ($show_taxopage_grid == TRUE) {
    $cols_tpg = theme_get_setting('content_display_grids_taxonomy_pages_colcount');
    $vars['classes_array'][] = $cols_tpg;
    drupal_add_js($path_to_theme . '/js/eq.tp.grid.js');
  }

  // Do stuff for the slideshow
  if (theme_get_setting('show_slideshow') == 1) {
    // Add some js and css
    drupal_add_css($path_to_theme . '/css/styles.slideshow.css', array(
        'preprocess' => TRUE,
        'group' => CSS_THEME,
        'media' => 'screen',
        'every_page' => TRUE,
      )
    );
    drupal_add_js($path_to_theme . '/js/jquery.flexslider-min.js');
    drupal_add_js($path_to_theme . '/js/slider.options.js');

    // Add some classes to do evil hiding of elements with CSS...
    if (theme_get_setting('show_slideshow_navigation_controls') == 0) {
      $vars['classes_array'][] = 'hide-ss-nav';
    }
    if (theme_get_setting('show_slideshow_direction_controls') == 0) {
      $vars['classes_array'][] = 'hide-ss-dir';
    }

    // Write some evil inline CSS in the head, oh er..
    $slideshow_width = check_plain(theme_get_setting('slideshow_width'));
    $slideshow_css = '.flexible-slideshow,.flexible-slideshow .article-inner,.flexible-slideshow .article-content,.flexslider {max-width: ' .  $slideshow_width . 'px;}';
    drupal_add_css($slideshow_css, array(
        'group' => CSS_DEFAULT,
        'type' => 'inline',
      )
    );
  }
}

/**
 * Override or insert variables into the page template.
 */
function gdstheme_process_page(&$vars) {
  if (module_exists('color')) {
    _color_page_alter($vars);
  }

  // We some extra classes to support the fancy branding layouts
  $branding_classes = array();
  $branding_classes[] = isset($vars['linked_site_logo']) ? 'with-logo' : 'no-logo';
  $branding_classes[] = !isset($vars['hide_site_name']) ? 'with-site-name' : 'site-name-hidden';
  $branding_classes[] = isset($vars['site_slogan']) ? 'with-site-slogan' : 'no-slogan';
  $vars['branding_classes'] = implode(' ', $branding_classes);

  // Draw toggle text
  $toggle_text = t('Login/register');
  $vars['draw_link'] = '<a class="draw-toggle" href="#">' . check_plain($toggle_text) . '</a>';
}

/**
 * Preprocess variables for region.tpl.php
 *
 * Prepare the values passed to the theme_region function to be passed into a
 * pluggable template engine. Uses the region name to generate a template file
 * suggestions. If none are found, the default region.tpl.php is used.
 *
 * @see drupal_region_class()
 * @see region.tpl.php
 */
function gdstheme_preprocess_region(&$variables) {
  //only on 'Track progress' page
  if($variables['region'] == 'content' && current_path() == 'node/132'){
    $variables['classes_array'][] = 'two-50';
    $variables['classes_array'][] = 'gpanel';
    $variables['classes_array'][] = 'clearfix';
    $variables['classes_array'][] = 'no-padding';
    $variables['classes_array'][] = 'no-margin';
  }
}

/**
 * Override or insert variables into the comment template.
 */
function gdstheme_preprocess_comment(&$vars) {
  // Remove the horrid inline class, again, for gawds sake
  $vars['content']['links']['#attributes']['class'] = 'links';

  if(isset($vars['elements']['last'])) {
    $vars['classes_array'][] = 'last';
  }

}

function gdstheme_preprocess_comment_wrapper(&$vars) {
  $last_id = FALSE;
  foreach ($vars['content']['comments'] as $id => $comment) {
    if (is_numeric($id)) {
      $last_id = $id;
    }
  }
  if($last_id) {
    $vars['content']['comments'][$last_id]['last'] = array();
  }
}

function replace_spaces($match)
{
  return str_replace(" ","&nbsp;",$match[0]);
}

/**
 * Override or insert variables into the block template
 */
function gdstheme_preprocess_block(&$vars) {
  if ($vars['block']->module == 'superfish' || $vars['block']->module == 'nice_menu') {
    $vars['content_attributes_array']['class'][] = 'clearfix';
  }
  if (!$vars['block']->subject) {
    $vars['content_attributes_array']['class'][] = 'no-title';
  }
  if ($vars['block']->region == 'menu_bar' || $vars['block']->region == 'menu_bar_top') {
    $vars['title_attributes_array']['class'][] = 'element-invisible';

    $vars['content'] = preg_replace_callback('/>(.*?)</i', 'replace_spaces' , $vars['content']);
  }

  $track_progress_blocks = array(
    'block-views-workbench-moderation-block-1',
    'block-views-my-comments-block',
    'block-views-my-challenges-block',
    'block-views-my-challenges-block-1',
    'block-views-my-proposals-block',
    'block-views-my-proposals-block-1',
    'block-views-my-bookmarks-block-1',
    'block-views-comments-recent-block',
    'block-views-meeting-minutes-block',
    'block-views-surveys-block-1',
  );
  if(in_array($vars['block_html_id'], $track_progress_blocks)){
    $vars['classes_array'][] = 'region';
  }

  $track_progress_dividers = array(
    'block-block-5',
    'block-block-6',
  );
  if(in_array($vars['block_html_id'], $track_progress_dividers)){
    $vars['classes_array'][] = 'clear';
  }

  // Force an empty <h2> to make the columns line up.
  // Done here because the title gets escaped.
  if ($vars['block_html_id'] == 'block-menu-menu-footer-menu-second-column' || $vars['block_html_id'] == 'block-menu-menu-footer-menu-third-column') {
    $vars['block']->subject = '&nbsp;';
  }
}

/**
 * Override or insert variables into the field template.
 */
function gdstheme_preprocess_field(&$vars) {
  $element = $vars['element'];
  $vars['image_caption_teaser'] = FALSE;
  $vars['image_caption_full'] = FALSE;
  $vars['field_view_mode'] = '';
  $vars['classes_array'][] = 'view-mode-'. $element['#view_mode'];
  if(theme_get_setting('image_caption_teaser') == 1) {
    $vars['image_caption_teaser'] = TRUE;
  }
  if(theme_get_setting('image_caption_full') == 1) {
    $vars['image_caption_full'] = TRUE;
  }
  $vars['field_view_mode'] = $element['#view_mode'];
  // Vars and settings for the slideshow, we theme this directly in the field template
  $vars['show_slideshow_caption'] = FALSE;
  if (theme_get_setting('show_slideshow_caption') == TRUE) {
    $vars['show_slideshow_caption'] = TRUE;
  }

  // Make status on the challenge page link to the challenge browse page
  if ($vars['element']['#field_name'] == 'field_challenge_status') {
    foreach ($vars['items'] as &$item) {
      switch($item['#markup']) {
        case 'Suggestion':
          $item['#markup'] = l($item['#markup'], 'challenges/suggested');
          break;
        case 'Response':
          $item['#markup'] = l($item['#markup'], 'challenges');
          break;
        case 'Proposal':
          $item['#markup'] = l($item['#markup'], 'challenges/evaluation');
          break;
        case 'Solution':
          $item['#markup'] = l($item['#markup'], 'challenges/adopted');
          break;
      }
    }
  }

  // Collapse some fields
  switch ($vars['element']['#field_name']) {
    case 'field_user_need':
    case 'field_expected_benefits':
    case 'field_functional_needs':
    case 'field_user_need_approach':
    case 'field_achieving_benefits':
    case 'field_functional_needs':
    case 'field_achieving_interoperability':
    case 'field_standards_to_be_used':
      $vars['collapsible_item'] = 'collapsed';
      $vars['collapsible'] = TRUE;
      break;
    default:
      $vars['collapsible_item'] = '';
      $vars['collapsible'] = FALSE;
      break;
  }
}

/**
 * Implements hook_css_alter().
 */
function gdstheme_css_alter(&$css) {
  unset($css['misc/ui/jquery.ui.theme.css']);
}

/**
 * Returns HTML for a fieldset.
 */
function gdstheme_fieldset($vars) {
  $element = $vars['element'];
  element_set_attributes($element, array('id'));
  _form_set_class($element, array('form-wrapper'));

  $output = '<fieldset' . drupal_attributes($element['#attributes']) . '>';
  // add a class to the fieldset wrapper if a legend exists, in some instances they do not
  $class = "without-legend";
  if (!empty($element['#title'])) {
    // Always wrap fieldset legends in a SPAN for CSS positioning.
    $output .= '<legend><span class="fieldset-legend">' . $element['#title'] . '</span></legend>';
    // add a class to the fieldset wrapper if a legend exists, in some instances they do not
    $class = 'with-legend';
  }
  $output .= '<div class="fieldset-wrapper ' . $class  . '">';
  if (!empty($element['#description'])) {
    $output .= '<div class="fieldset-description">' . $element['#description'] . '</div>';
  }
  $output .= $element['#children'];
  if (isset($element['#value'])) {
    $output .= $element['#value'];
  }
  $output .= '</div>';
  $output .= "</fieldset>\n";
  return $output;
}

/**
 * Suppress "Read more" link on display of node teasers
 */
function gdstheme_links($variables) {
  if (isset($variables['links']['node-readmore'])) {
    unset ($variables['links']['node-readmore']);
  }

  return theme_links($variables);
}

/**
 * Returns HTML for a "you can't post comments" notice.
 *
 * @param $variables
 *   An associative array containing:
 *   - node: The comment node.
 *
 * @ingroup themeable
 */
function gdstheme_comment_post_forbidden($variables) {
  $node = $variables['node'];
  global $user;

  // Since this is expensive to compute, we cache it so that a page with many
  // comments only has to query the database once for all the links.
  $authenticated_post_comments = &drupal_static(__FUNCTION__, NULL);

  if (!$user->uid) {
    if (!isset($authenticated_post_comments)) {
      // We only output a link if we are certain that users will get permission
      // to post comments by logging in.
      $comment_roles = user_roles(TRUE, 'post comments');
      $authenticated_post_comments = isset($comment_roles[DRUPAL_AUTHENTICATED_RID]);
    }

    if ($authenticated_post_comments) {
      // We cannot use drupal_get_destination() because these links
      // sometimes appear on /node and taxonomy listing pages.
      if (variable_get('comment_form_location_' . $node->type, COMMENT_FORM_BELOW) == COMMENT_FORM_SEPARATE_PAGE) {
        $destination = array('destination' => "comment/reply/$node->nid#comment-form");
      }
      else {
        $destination = array('destination' => "node/$node->nid#comment-form");
      }

      return t('<a href="@login">Log in</a> to post comments', array('@login' => url('user/login', array('query' => $destination)), '@register' => url('user/register', array('query' => $destination))));
    }
  }
  else {
    $unverified_role = variable_get('logintoboggan_pre_auth_role');
    if (in_array($unverified_role, array_keys($user->roles))) {
      return t('Confirm your email address to post comments');
    }
  }
}

/**
 * Theme function for unified login page.
 *
 * @ingroup themable
 */
function gdstheme_lt_unified_login_page($variables) {

  $login_form = $variables['login_form'];
  $register_form = $variables['register_form'];
  $active_form = $variables['active_form'];

  // Registration help block.
  $block = _block_get_renderable_array(_block_render_blocks(array(block_load('block', '9'))));
  $registration_help_block = drupal_render($block);

  $output = '';

  $output .= '<div class="toboggan-unified ' . $active_form . '">';

  // Create the initial message and links that people can click on.
  $output .= '<div id="login-tabs">';
  $output .= l(t('I have an account'), 'user/login');
  $output .= ' ';
  $output .= l(t('I want to create an account'), 'user/register');

  $output .= '</div>';

  // Add the login and registration forms in.
  $output .= '<div id="login-form">' . $login_form . '</div>';
  $output .= '<div id="register-form">' . $registration_help_block . $register_form . '</div>';

  $output .= '</div>';

  return $output;
}
