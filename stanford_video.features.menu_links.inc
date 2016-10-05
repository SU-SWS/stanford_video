<?php
/**
 * @file
 * stanford_video.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function stanford_video_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin-shortcuts_add-video:admin/stanford/jumpstart/shortcuts/site-actions/add/stanford-video.
  $menu_links['menu-admin-shortcuts_add-video:admin/stanford/jumpstart/shortcuts/site-actions/add/stanford-video'] = array(
    'menu_name' => 'menu-admin-shortcuts',
    'link_path' => 'admin/stanford/jumpstart/shortcuts/site-actions/add/stanford-video',
    'router_path' => 'admin/stanford/jumpstart/shortcuts/site-actions/add/stanford-video',
    'link_title' => 'Add Video',
    'options' => array(
      'identifier' => 'menu-admin-shortcuts_add-video:admin/stanford/jumpstart/shortcuts/site-actions/add/stanford-video',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -92,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts_site-actions:admin/stanford/jumpstart/shortcuts/site-actions',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Video');

  return $menu_links;
}
