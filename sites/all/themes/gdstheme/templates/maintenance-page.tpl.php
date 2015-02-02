<!DOCTYPE html>
<?php ?>
<!--[if IEMobile 7]><html class="iem7" <?php print $html_attributes; ?>><![endif]-->
<!--[if (lte IE 6)&(!IEMobile)]><html class="ie6 ie6-7 ie6-8" <?php print $html_attributes; ?>><![endif]-->
<!--[if (IE 7)&(!IEMobile)]><html class="ie7 ie6-7 ie6-8" <?php print $html_attributes; ?>><![endif]-->
<!--[if (IE 8)&(!IEMobile)]><html class="ie8 ie6-8" <?php print $html_attributes; ?>><![endif]-->
<!--[if (gte IE 9)|(gt IEMobile 7)]><!--><html <?php print $html_attributes . $rdf_namespaces; ?>><!--<![endif]-->
<head>
<?php print $head; ?>
<meta name="viewport" content="width=device-width, initial-scale=1">
<meta name="MobileOptimized" content="width">
<meta name="HandheldFriendly" content="true">
<meta name="apple-mobile-web-app-capable" content="yes">
<meta http-equiv="cleartype" content="on">
<meta http-equiv="X-UA-Compatible" content="IE=edge, chrome=1">
<link type="image/x-icon" href="/sites/all/themes/at-commerce/favicon.ico" rel="shortcut icon">
<title><?php print $head_title; ?></title>
<?php print $styles; ?>
<?php print $scripts; ?>
<!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <div id="page" class="container">
    <header id="banner" class="clearfix">
      <div id="branding" class="clearfix<?php print $branding_classes ? ' ' . $branding_classes : ''; ?>">

        <?php if ($site_name || $site_slogan): ?>
        <div id="logo">
          <img alt="Cabinet Office logo" src="/sites/all/themes/at-commerce/css/images/co_logo250x33.png" />
        </div>

        <hgroup<?php if (!$site_slogan && $hide_site_name): ?> class="<?php print $visibility; ?>"<?php endif; ?>>
            <?php if ($site_name): ?>
              <h1 id="site-name"<?php if ($hide_site_name): ?> class="<?php print $visibility; ?>"<?php endif; ?>><?php print $site_name; ?></h1>
            <?php endif; ?>
            <?php if ($site_slogan): ?>
              <h2 id="site-slogan"><?php print $site_slogan; ?></h2>
            <?php endif; ?>
          </hgroup>
        <?php endif; ?>

      </div>
    </header>
    <div id="main-content">
      <?php if ($title): ?>
        <h1 id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print $messages; ?>
      <div id="content">
        <?php print $content; ?>
      </div>
    </div>
  </div>
  <?php print $page_bottom ?>
</body>
</html>