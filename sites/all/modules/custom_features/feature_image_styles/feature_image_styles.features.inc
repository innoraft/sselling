<?php
/**
 * @file
 * feature_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function feature_image_styles_image_default_styles() {
  $styles = array();

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
