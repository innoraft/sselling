<?php
/**
 * @file
 * feature_eventbrite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_eventbrite_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_eventbrite_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_eventbrite_node_info() {
  $items = array(
    'content_type_eventbrite' => array(
      'name' => t('Eventbrite'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
