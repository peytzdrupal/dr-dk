<?php
/**
 * @file
 * dr_nu_feeds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dr_nu_feeds_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
