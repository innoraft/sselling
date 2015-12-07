<?php
/**
 * @file
 * feature_blog.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_blog_image_default_styles() {
  $styles = array();

  // Exported image style: blog_image.
  $styles['blog_image'] = array(
    'label' => 'blog image',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 648,
          'height' => 432,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: blog_node_image.
  $styles['blog_node_image'] = array(
    'label' => 'blog node image',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1040,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
