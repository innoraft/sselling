<?php
/**
 * @file
 * feature_pr_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_pr_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_pr_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_pr_news_image_default_styles() {
  $styles = array();

  // Exported image style: pr_news_image.
  $styles['pr_news_image'] = array(
    'label' => 'pr news image',
    'effects' => array(
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 225,
          'height' => 225,
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
function feature_pr_news_node_info() {
  $items = array(
    'pr_news' => array(
      'name' => t('PR News'),
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
