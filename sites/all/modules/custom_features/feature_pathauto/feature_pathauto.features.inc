<?php
/**
 * @file
 * feature_pathauto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_pathauto_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
