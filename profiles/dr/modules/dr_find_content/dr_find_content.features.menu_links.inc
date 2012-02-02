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
    'link_title' => 'DR NU indhold',
    'options' => array(
      'attributes' => array(
        'title' => 'Her er alt videoindhold fra DR NU',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: management:http://dr.dev/admin/dr-content?type=videos
  $menu_links['management:http://dr.dev/admin/dr-content?type=videos'] = array(
    'menu_name' => 'management',
    'link_path' => 'http://dr.dev/admin/dr-content?type=videos',
    'router_path' => '',
    'link_title' => 'DR NU episoder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/dr-content',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('DR NU episoder');
  t('DR NU indhold');


  return $menu_links;
}
