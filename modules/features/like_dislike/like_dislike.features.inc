<?php
/**
 * @file
 * like_dislike.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function like_dislike_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
