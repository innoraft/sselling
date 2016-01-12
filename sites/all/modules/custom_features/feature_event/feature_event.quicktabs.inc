<?php
/**
 * @file
 * feature_event.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function feature_event_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'events_tab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Events Tab';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_event_list-block_1',
      'hide_title' => 1,
      'title' => 'Upcoming Event',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_event_list-block_2',
      'hide_title' => 1,
      'title' => 'Event History',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Arrows';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Event History');
  t('Events Tab');
  t('Upcoming Event');

  $export['events_tab'] = $quicktabs;

  return $export;
}
