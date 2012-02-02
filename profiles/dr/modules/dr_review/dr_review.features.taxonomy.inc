<?php
/**
 * @file
 * dr_review.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dr_review_taxonomy_default_vocabularies() {
  return array(
    'review_critics' => array(
      'name' => 'Review critics',
      'machine_name' => 'review_critics',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'review_sources' => array(
      'name' => 'Review sources',
      'machine_name' => 'review_sources',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
