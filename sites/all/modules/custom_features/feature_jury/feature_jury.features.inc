<?php
/**
 * @file
 * feature_jury.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_jury_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_jury_node_info() {
  $items = array(
    'our_team' => array(
      'name' => t('Our Jury'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
