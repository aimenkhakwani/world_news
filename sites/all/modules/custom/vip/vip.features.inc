<?php
/**
 * @file
 * vip.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vip_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vip_node_info() {
  $items = array(
    'vip_promotions' => array(
      'name' => t('Promotions'),
      'base' => 'node_content',
      'description' => t('Promotions such as coupons, subscriptions, and event tickets for VIP members only'),
      'has_title' => '1',
      'title_label' => t('Promotions'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
