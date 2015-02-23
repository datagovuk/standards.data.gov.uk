<?php
/**
 * @file
 * Copied from system/page.tpl.php and adapted.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['header']: Large blue block, second item on page.
 * - $page['links']: Used only on front page.
 * - $page['content']: The content.
 * - $page['highlighted']: Three columns for showcased items.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div id="topbar-wrapper-front">
  <header id="topbar">
    <div id="global-header-logo">
      <a href="<?php print $front_page; ?>" title="<?php print t('Go to the Standards Hub homepage'); ?>" id="logo" class="content"><img src="<?php print $logo; ?>" width="35" height="31" alt="">Standards Hub</a>
    </div>
    <?php if ($page['topbar']): ?>
      <?php print render($page['topbar']); ?>
    <?php endif; ?>
  </header>
</div>

<div id="main-wrapper">
  <main>
    <div id="main-header-wrapper">
      <header id="main-header">
        <div id="main-header-welcome">
          <?php print render($title_prefix); ?>
          <?php if ($title): ?><h1><?php print $title; ?></h1><?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php if ($site_slogan): ?>
            <p><?php print $site_slogan; ?></p>
          <?php endif; ?>
          <?php if ($page['header']): ?>
            <?php print render($page['header']); ?>
          <?php endif; ?>
        </div>
        <?php if ($page['headerright']): ?>
          <div id="main-header-right-wrapper">
            <div id="main-header-right">
              <?php print render($page['headerright']); ?>
            </div>
          </div>
        <?php endif; ?>
      </header>
    </div>
    <div class="phase-banner">
      <strong class="phase-tag">BETA</strong><span>This is a new service – your <a href="/contact">feedback</a> will help us to improve it.</span>
    </div>

    <?php if ($page['links']): ?>
      <div id="links-wrapper">
        <?php print render($page['links']); ?>
      </div>
    <?php endif; ?>
    
    <div id="messages-wrapper">
      <div id="messages-content"><?php print $messages; ?></div>
    </div>

    <div id="content-wrapper">
      <div id="content">
        <?php print render($page['content']); ?>
      </div>
    </div>

    <?php if ($page['bottompanel']): ?>
      <div id="bottompanel-hr-wrapper">
        <div class="hr-wrapper">
          <hr id="bottompanel-hr">
        </div>  
      </div>
      <div id="bottompanel-wrapper">
        <?php print render($page['bottompanel']); ?>
      </div>
    <?php endif; ?>
  </main>
</div>

<div id="footer-wrapper">
  <footer>
    <?php print render($page['footer']); ?>
  </footer>
</div>
