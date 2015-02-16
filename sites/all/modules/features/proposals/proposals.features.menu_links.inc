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

  // Exported menu link: main-menu_adopted-standards:standards
  $menu_links['main-menu_adopted-standards:standards'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'standards',
    'router_path' => 'standards',
    'link_title' => 'Adopted Standards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'keys' => '',
        'field_challenge_ref_nid' => 'All',
        'field_category_tid' => 'All',
      ),
      'identifier' => 'main-menu_adopted-standards:standards',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_challenges:challenges
  $menu_links['main-menu_challenges:challenges'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'challenges',
    'router_path' => 'challenges',
    'link_title' => 'Challenges',
    'options' => array(
      'identifier' => 'main-menu_challenges:challenges',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_standards:standards
  $menu_links['main-menu_standards:standards'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'standards',
    'router_path' => 'standards',
    'link_title' => 'Standards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_standards:standards',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Adopted Standards');
  t('Challenges');
  t('Standards');


  return $menu_links;
}
