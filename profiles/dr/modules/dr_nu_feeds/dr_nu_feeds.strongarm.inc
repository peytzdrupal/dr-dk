<?php
/**
 * @file
 * dr_nu_feeds.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dr_nu_feeds_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'http_request_timeout';
  $strongarm->value = 30;
  $export['http_request_timeout'] = $strongarm;

  return $export;
}
