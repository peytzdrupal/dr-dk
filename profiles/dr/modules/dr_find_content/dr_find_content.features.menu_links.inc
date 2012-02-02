<?php
/**
 * @file
 * dr_find_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dr_find_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/dr-content
  $menu_links['management:admin/dr-content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/dr-content',
    'router_path' => 'admin/dr-content',
    'link_title' => 'Videos and series',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Videos and series');


  return $menu_links;
}
