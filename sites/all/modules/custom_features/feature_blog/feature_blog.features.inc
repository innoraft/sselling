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

  // Exported image style: author_image.
  $styles['author_image'] = array(
    'label' => 'Author image (200x200)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

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
      18 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
