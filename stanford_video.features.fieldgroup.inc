<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function stanford_video_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_stanford_video_file
  $groups['stanford_video-group_stanford_video_file'] = array(
    'group_type' => 'standard',
    'type_name' => 'stanford_video',
    'group_name' => 'group_stanford_video_file',
    'label' => 'Video File',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => 'Choose either a remotely hosted file <strong>or</strong> upload your own video file',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_stanford_video_media',
      '1' => 'field_stanford_video_remote',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Video File');

  return $groups;
}
