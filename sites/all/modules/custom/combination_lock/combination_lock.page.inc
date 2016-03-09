<?php
/**
 * @file
 * Combination Lock View Page.
 */

/**
 * Combination lock view page callback.
 */
function combination_lock_view($combination_lock_nid) {

  $page_content = NULL;

  $combination_lock_node = node_load($combination_lock_nid);
  if (empty($combination_lock_node) || (!empty($combination_lock_node) && $combination_lock_node->type != 'combination_lock')) {
    drupal_not_found();
  }

  drupal_add_css(drupal_get_path('theme', 'md_leaders') . '/css/locker.css' , array('type' => 'file'));
  drupal_add_js(drupal_get_path('theme', 'md_leaders') . '/js/locker.js');
  drupal_add_js(libraries_get_path('jquerycounter') . '/js/jquery.counter.js');

  $help_text = '<div class="locker-section">
                <section class="locker">
                <div class="locker-upper"><img src="/sites/all/themes/md_leaders/img/lock-upper.png" alt="lock-upper-part" width="200" height="200" />
                </div><div class="locker-lower"><img src="/sites/all/themes/md_leaders/img/lock-lower.png" alt="locker-lower-part" width="200" height="200"/>
                </div>';
  $help_text .= '<div class="jcpo-counter lock-pattern-first-counter"><p>
                  <span class="counter-digits contador-dig-0">0</span>
                </p></div>';

  $help_text .= '<div class="jcpo-counter lock-pattern-second-counter "><p>
                  <span class="counter-digits contador-dig-0">0</span>
                </p></div>';
   $help_text .= '</section>';


  $help_text .= '<section class="locker-play"><h1>To Play...</h1>';
  $help_text .= t('Enter your answer by clicking on the numbers or typing it into the box. Use the clues below. Then click the Try button or in the silver loop. The lock will open if you are correct.');

  $combination_lock_question = '<h2>Quiz</h2>';
  $combination_lock_question .= isset($combination_lock_node->body[LANGUAGE_NONE][0]['value']) ? $combination_lock_node->body[LANGUAGE_NONE][0]['value'] : NULL;

  $combination_lock_form = drupal_get_form('combination_lock_form', $combination_lock_nid);
  $combination_lock_form = drupal_render($combination_lock_form);

  // Combined all renderable elements.
  $page_content .= $help_text;
  $page_content .= $combination_lock_question;
  $page_content .= $combination_lock_form;

  $page_content .= '</section></div>';

  return $page_content;
}

/**
 * Combination lock form callback.
 */
function combination_lock_form($form, &$form_state, $combination_lock_nid = NULL) {

  $form['lock_pattern'] = array(
    '#type' => 'textfield',
    '#title' => t('Lock Pattern'),
    '#title_display' => 'invisible',
    '#attributes' => array('class' => array('lock-pattern'), 'placeholder' => 'Enter Lock Pattern'),
  );

  $form['ajax-container'] = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('ajax-container'), 'id' => 'combination-lock-container')
  );

  if (isset($form_state['values']['lock_pattern'])) {
    $lock_pattern = $form_state['values']['lock_pattern'];
    $lock_pattern_answer = check_combination_lock_answer($combination_lock_nid, $lock_pattern);
    watchdog('aa', $lock_pattern_answer);
    $form['ajax-container']['set_answer'] = array(
      '#markup' => '<div class="combination-lock-answer">' . $lock_pattern_answer . '</div>',
    );
  }

  $form['submit-answer'] = array(
    '#type' => 'submit',
    '#value' => t('Try'),
    '#ajax' => array(
      'callback' => 'ajax_combination_lock_callback',
      'wrapper' => 'combination-lock-container',
      'method' => 'replace',
      'effect' => 'fade',
    ),
  );

  return $form;
}

function ajax_combination_lock_callback($form, &$form_state) {
  return $form['ajax-container'];
}

function combination_lock_form_submit($form, &$form_state) {
  $form_state['rebuild'] = TRUE;
}

/**
 * Ajax combination lock view.
 *
 * @param int $combination_lock_answer
 *   Combination Lock user's answer.
 *
 * @return bool
 *   Return TRUE if answer is correct else FALSE.
 */
function check_combination_lock_answer($combination_lock_nid, $combination_lock_answer) {

  // Check answer given by user is safe.
  $combination_lock_answer = check_plain(filter_xss($combination_lock_answer));
  $combination_lock_answer = trim($combination_lock_answer);

  // Get question's correct answer.
  $combination_lock_node = node_load($combination_lock_nid);
  $correct_answer = isset($combination_lock_node->field_combinationlock_answer[LANGUAGE_NONE][0]['value']) ? $combination_lock_node->field_combinationlock_answer[LANGUAGE_NONE][0]['value'] : NULL;

  // Check result is correct or not.
  $answer = ($combination_lock_answer == $correct_answer) ? 'TRUE' : 'FALSE';

  return $answer;
}
