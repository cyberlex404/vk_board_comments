<?php
/**
 * Created by PhpStorm.
 * User: Lex
 * Date: 05.03.2017
 * Time: 23:46
 */

function vk_board_comments_config_form($form, &$form_state) {

  $form = array();
  $form['vk_board_page_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Page title'),
    '#default_value' => variable_get('vk_board_page_title', 'Reviews'),
    '#required' => TRUE,
  );
  $form['vk_board_comment_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Count by page'),
    '#default_value' => variable_get('vk_board_comment_count', ''),
    '#required' => TRUE,
  );

  $form['vk_board_client_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Client id'),
    '#default_value' => variable_get('vk_board_client_id', ''),
    '#required' => TRUE,
  );
  // client_secret
  $form['vk_board_service_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Service key'),
    '#default_value' => variable_get('vk_board_service_key', ''),
    '#required' => TRUE,
  );

  $form['vk_board_protected_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Protected key'),
    '#default_value' => variable_get('vk_board_protected_key', ''),
  );

  $form['vk_board_group_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Group id'),
    '#default_value' => variable_get('vk_board_group_id', ''),
  );
  $form['vk_board_topic_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Topic id'),
    '#default_value' => variable_get('vk_board_topic_id', ''),
  );
  $form['vk_board_comment_sort'] = array(
    '#type' => 'select',
    '#title' => t('Comment sort'),
    '#options' => array(
      'asc' => 'хронологический',
      'desc' => 'антихронологический',
    ),
    '#default_value' => variable_get('vk_board_comment_sort', 'desc'),
  );

  return system_settings_form($form);
}