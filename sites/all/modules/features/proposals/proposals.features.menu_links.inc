<?php
/**
 * @file
 * proposals.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function proposals_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:proposals
  $menu_links['main-menu:proposals'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'proposals',
    'router_path' => 'proposals',
    'link_title' => 'Proposals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: menu-footer-menu:proposals
  $menu_links['menu-footer-menu:proposals'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'proposals',
    'router_path' => 'proposals',
    'link_title' => 'View all proposals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Proposals');
  t('View all proposals');


  return $menu_links;
}
