<?php

function gdstheme_preprocess_page(&$variables) {
  $variables['layout'] = 'full';

  // challenges pages are left-sidebar
  if (arg(0) == 'challenges') {
    $variables['layout'] = 'leftbar';
  }

  // if we're displaying a full node, allow us to theme the entire page.
  if ($variables['node']) {
    $variables['theme_hook_suggestions'][] = 'page__node__' . $variables['node']->type;
  }
}

function gdstheme_preprocess_node(&$vars) {
  if ($vars['view_mode'] == 'teaser') {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__teaser';
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->nid . '__teaser';
  }
}