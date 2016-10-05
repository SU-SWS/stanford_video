<?php
/**
 * @file
 * stanford_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_video_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_menu_position_default_menu_positions().
 */
function stanford_video_menu_position_default_menu_positions() {
  $items = array(
    'videos_by_content_type' => array(
      'admin_title' => 'Videos by content type',
      'enabled' => 1,
      'conditions' => 'a:1:{s:12:"content_type";a:1:{s:12:"content_type";a:1:{s:14:"stanford_video";s:14:"stanford_video";}}}',
      'menu_name' => 'main-menu',
      'plid' => 1874,
      'mlid' => 3128,
      'weight' => 0,
      'machine_name' => 'videos_by_content_type',
    ),
    'videos_by_path' => array(
      'admin_title' => 'Videos by path',
      'enabled' => 1,
      'conditions' => 'a:1:{s:5:"pages";a:1:{s:5:"pages";s:8:"videos/*";}}',
      'menu_name' => 'main-menu',
      'plid' => 1874,
      'mlid' => 3130,
      'weight' => 0,
      'machine_name' => 'videos_by_path',
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function stanford_video_node_info() {
  $items = array(
    'stanford_video' => array(
      'name' => t('Stanford Video'),
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
