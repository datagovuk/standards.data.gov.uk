<?php
/**
 * @file
 * news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:news
  $menu_links['main-menu:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('News');


  return $menu_links;
}
