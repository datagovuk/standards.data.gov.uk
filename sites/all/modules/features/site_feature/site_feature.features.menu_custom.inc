<?php
/**
 * @file
 * site_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function site_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-second-column.
  $menus['menu-footer-menu-second-column'] = array(
    'menu_name' => 'menu-footer-menu-second-column',
    'title' => 'Footer menu second column',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-third-column.
  $menus['menu-footer-menu-third-column'] = array(
    'menu_name' => 'menu-footer-menu-third-column',
    'title' => 'Footer menu third column',
    'description' => 'Third column in the footer menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Footer menu second column');
  t('Footer menu third column');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Third column in the footer menu');


  return $menus;
}
