<?php
/**
 * @file
 * site_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function site_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/91
  $menu_links['main-menu_about:node/91'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/91',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:node/91',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
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
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_how-we-select-standards:node/267
  $menu_links['main-menu_how-we-select-standards:node/267'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/267',
    'router_path' => 'node/%',
    'link_title' => 'How we select standards',
    'options' => array(
      'identifier' => 'main-menu_how-we-select-standards:node/267',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_my-dashboard:node/132
  $menu_links['main-menu_my-dashboard:node/132'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/132',
    'router_path' => 'node/%',
    'link_title' => 'My Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_my-dashboard:node/132',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_our-meetings:meetings 
  $menu_links['main-menu_our-meetings:meetings '] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'meetings ',
    'router_path' => 'meetings ',
    'link_title' => 'Our meetings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_our-meetings:meetings ',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_proposals:proposals
  $menu_links['main-menu_proposals:proposals'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'proposals',
    'router_path' => 'proposals',
    'link_title' => 'Proposals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_proposals:proposals',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
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
  // Exported menu link: menu-footer-menu_accessibility-statement:node/100
  $menu_links['menu-footer-menu_accessibility-statement:node/100'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/100',
    'router_path' => 'node/%',
    'link_title' => 'Accessibility statement',
    'options' => array(
      'identifier' => 'menu-footer-menu_accessibility-statement:node/100',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact:contact
  $menu_links['menu-footer-menu_contact:contact'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_how-we-select-standards:node/267
  $menu_links['menu-footer-menu_how-we-select-standards:node/267'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/267',
    'router_path' => 'node/%',
    'link_title' => 'How we select standards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_how-we-select-standards:node/267',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_our-meetings:meetings
  $menu_links['menu-footer-menu_our-meetings:meetings'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'meetings',
    'router_path' => 'meetings ',
    'link_title' => 'Our meetings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_our-meetings:meetings',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_privacy-policy:node/90
  $menu_links['menu-footer-menu_privacy-policy:node/90'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/90',
    'router_path' => 'node/%',
    'link_title' => 'Privacy policy',
    'options' => array(
      'identifier' => 'menu-footer-menu_privacy-policy:node/90',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_resources-for-challenge-owners:node/318
  $menu_links['menu-footer-menu_resources-for-challenge-owners:node/318'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/318',
    'router_path' => 'node/%',
    'link_title' => 'Resources for challenge owners',
    'options' => array(
      'identifier' => 'menu-footer-menu_resources-for-challenge-owners:node/318',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_terms-and-conditions:node/89
  $menu_links['menu-footer-menu_terms-and-conditions:node/89'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/89',
    'router_path' => 'node/%',
    'link_title' => 'Terms and conditions',
    'options' => array(
      'identifier' => 'menu-footer-menu_terms-and-conditions:node/89',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_view-all-proposals:proposals
  $menu_links['menu-footer-menu_view-all-proposals:proposals'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'proposals',
    'router_path' => 'proposals',
    'link_title' => 'View all proposals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_view-all-proposals:proposals',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Accessibility statement');
  t('Adopted Standards');
  t('Challenges');
  t('Contact');
  t('Home');
  t('How we select standards');
  t('My Dashboard');
  t('Our meetings');
  t('Privacy policy');
  t('Proposals');
  t('Resources for challenge owners');
  t('Standards');
  t('Terms and conditions');
  t('View all proposals');


  return $menu_links;
}
