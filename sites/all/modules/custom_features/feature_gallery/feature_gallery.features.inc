<?php
/**
 * @file
 * feature_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_photo.
  $styles['gallery_photo'] = array(
    'label' => 'gallery photo',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 553,
          'height' => 367,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: juicebox_main.
  $styles['juicebox_main'] = array(
    'label' => 'juicebox main',
    'effects' => array(
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 400,
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
function feature_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('gallery'),
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
