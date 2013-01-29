<?php
/**
 * @file
 * moderation_rss.features.inc
 */

/**
 * Implements hook_views_api().
 */
function moderation_rss_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
