<?php
/**
 * @file
 * relation_profile_to_standard_version.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function relation_profile_to_standard_version_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}
