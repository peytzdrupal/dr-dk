<?php
/**
 * @file
 * dr_series.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dr_series_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dr_series_node_info() {
  $items = array(
    'series' => array(
      'name' => t('Series'),
      'base' => 'node_content',
      'description' => t('Contains all the different series'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
