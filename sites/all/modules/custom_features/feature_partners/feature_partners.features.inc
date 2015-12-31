<?php
/**
 * @file
 * feature_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_partners_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_partners_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_partners_image_default_styles() {
  $styles = array();

  // Exported image style: partner_node_logo.
  $styles['partner_node_logo'] = array(
    'label' => 'partner node logo',
    'effects' => array(
      20 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 262,
          'height' => 347,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: partner_page_logo.
  $styles['partner_page_logo'] = array(
    'label' => 'partner page logo',
    'effects' => array(
      19 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 225,
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_partners_node_info() {
  $items = array(
    'official_partners' => array(
      'name' => t('official partners'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
