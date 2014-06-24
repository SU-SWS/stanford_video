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

  // Exported menu link: menu-admin-shortcuts-site-action_add-video:node/add/stanford-video
  $menu_links['menu-admin-shortcuts-site-action_add-video:node/add/stanford-video'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-video',
    'router_path' => 'node/add/stanford-video',
    'link_title' => 'Add Video',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_add-video:node/add/stanford-video',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Video');


  return $menu_links;
}
