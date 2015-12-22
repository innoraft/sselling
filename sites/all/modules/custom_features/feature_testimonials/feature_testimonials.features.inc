<?php
/**
 * @file
 * feature_testimonials.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_testimonials_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_testimonials_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_testimonials_image_default_styles() {
  $styles = array();

  // Exported image style: testimonial_image.
  $styles['testimonial_image'] = array(
    'label' => 'Testimonial Image',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 84,
          'height' => 84,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: testimonial_node_image.
  $styles['testimonial_node_image'] = array(
    'label' => 'Testimonial Node Image',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 168,
          'height' => 168,
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
function feature_testimonials_node_info() {
  $items = array(
    'testimonials' => array(
      'name' => t('Testimonials'),
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
