<?php
/**
 * @file
 * stanford_video.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_video_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stanford_video_streaming|node|stanford_video|form';
  $field_group->group_name = 'group_stanford_video_streaming';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Streaming Video',
    'weight' => '3',
    'children' => array(
      0 => 'field_stanford_video_link',
      1 => 'field_stanford_video_server',
      2 => 'field_stanford_video_account',
      3 => 'field_stanford_video_filename',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_stanford_video_streaming|node|stanford_video|form'] = $field_group;

  return $export;
}
