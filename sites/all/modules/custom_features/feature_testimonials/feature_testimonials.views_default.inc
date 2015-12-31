<?php
/**
 * @file
 * feature_testimonials.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_testimonials_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'testimonial_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'testimonial list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Testimonials';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Testimonial Image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 'testimonial_image',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_designation']['id'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['table'] = 'field_data_field_designation';
  $handler->display->display_options['fields']['field_designation']['field'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['label'] = '';
  $handler->display->display_options['fields']['field_designation']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_designation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['field_company']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: linkedin path */
  $handler->display->display_options['fields']['field_linkedin_path']['id'] = 'field_linkedin_path';
  $handler->display->display_options['fields']['field_linkedin_path']['table'] = 'field_data_field_linkedin_path';
  $handler->display->display_options['fields']['field_linkedin_path']['field'] = 'field_linkedin_path';
  $handler->display->display_options['fields']['field_linkedin_path']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_path']['element_label_colon'] = FALSE;
  /* Field: Content: website path */
  $handler->display->display_options['fields']['field_website_path']['id'] = 'field_website_path';
  $handler->display->display_options['fields']['field_website_path']['table'] = 'field_data_field_website_path';
  $handler->display->display_options['fields']['field_website_path']['field'] = 'field_website_path';
  $handler->display->display_options['fields']['field_website_path']['label'] = '';
  $handler->display->display_options['fields']['field_website_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website_path']['element_label_colon'] = FALSE;
  /* Field: Content: wikipedia path */
  $handler->display->display_options['fields']['field_wikipedia_path']['id'] = 'field_wikipedia_path';
  $handler->display->display_options['fields']['field_wikipedia_path']['table'] = 'field_data_field_wikipedia_path';
  $handler->display->display_options['fields']['field_wikipedia_path']['field'] = 'field_wikipedia_path';
  $handler->display->display_options['fields']['field_wikipedia_path']['label'] = '';
  $handler->display->display_options['fields']['field_wikipedia_path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_wikipedia_path']['alter']['text'] = '<div class="testimonials-icons">
   <a class="linkedin-link" href=[field_linkedin_path]><img src="sites/all/themes/md_leaders/img/linkedin_testimonials.png"></a>
   <a class="wikipedia-link" href=[field_wikipedia_path]><img src="sites/all/themes/md_leaders/img/wikipedia_testimonials.png"></a>
   <a class="website-link" href=[field_website_path]><img src="sites/all/themes/md_leaders/img/website_testimonials.png"></a>
</div>';
  $handler->display->display_options['fields']['field_wikipedia_path']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonials' => 'testimonials',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'social-selling-testimonials';
  $export['testimonial_list'] = $view;

  return $export;
}
