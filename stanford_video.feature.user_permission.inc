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

  // Exported permission: 'administer video styles'.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: 'convert from stanford_video'.
  $permissions['convert from stanford_video'] = array(
    'name' => 'convert from stanford_video',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to stanford_video'.
  $permissions['convert to stanford_video'] = array(
    'name' => 'convert to stanford_video',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'create stanford_video content'.
  $permissions['create stanford_video content'] = array(
    'name' => 'create stanford_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_video content'.
  $permissions['delete any stanford_video content'] = array(
    'name' => 'delete any stanford_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_video content'.
  $permissions['delete own stanford_video content'] = array(
    'name' => 'delete own stanford_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'ds_switch stanford_video'.
  $permissions['ds_switch stanford_video'] = array(
    'name' => 'ds_switch stanford_video',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'edit any stanford_video content'.
  $permissions['edit any stanford_video content'] = array(
    'name' => 'edit any stanford_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_video content'.
  $permissions['edit own stanford_video content'] = array(
    'name' => 'edit own stanford_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  return $permissions;
}
