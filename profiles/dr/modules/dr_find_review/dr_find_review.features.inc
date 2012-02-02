<?php
/**
 * @file
 * dr_find_review.features.inc
 */

/**
 * Implements hook_views_api().
 */
function dr_find_review_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
