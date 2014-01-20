<?php
/**
 * @file
 * stanford_video.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_video_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create stanford_video content'.
  $permissions['create stanford_video content'] = array(
    'name' => 'create stanford_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_video content'.
  $permissions['delete any stanford_video content'] = array(
    'name' => 'delete any stanford_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_video content'.
  $permissions['delete own stanford_video content'] = array(
    'name' => 'delete own stanford_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stanford_video content'.
  $permissions['edit any stanford_video content'] = array(
    'name' => 'edit any stanford_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_video content'.
  $permissions['edit own stanford_video content'] = array(
    'name' => 'edit own stanford_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'embed external web video'.
  $permissions['embed external web video'] = array(
    'name' => 'embed external web video',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'stanford_video',
  );

  return $permissions;
}
