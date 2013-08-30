<?php
/**
 * @file
 * relation_profile_to_standard_version.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function relation_profile_to_standard_version_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
