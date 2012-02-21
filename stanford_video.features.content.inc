<?php

/**
 * Implementation of hook_content_default_fields().
 */
function stanford_video_content_default_fields() {
  $fields = array();

  // Exported field: field_stanford_video_caption
  $fields['stanford_video-field_stanford_video_caption'] = array(
    'field_name' => 'field_stanford_video_caption',
    'type_name' => 'stanford_video',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'xml srt',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'insert' => NULL,
      'insert_styles' => NULL,
      'insert_default' => NULL,
      'insert_class' => NULL,
      'insert_width' => NULL,
      'label' => 'Caption File',
      'weight' => '-1',
      'description' => 'To upload a video to the system, you MUST have a timestamped transcript associated to your video; you will receive an error message otherwise.  Video post-production assistance and transcript generation can be found at <a href="http://captioning.stanford.edu">http://captioning.stanford.edu</a>',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_stanford_video_keyframe
  $fields['stanford_video-field_stanford_video_keyframe'] = array(
    'field_name' => 'field_stanford_video_keyframe',
    'type_name' => 'stanford_video',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '640x480',
      'min_resolution' => '320x240',
      'alt' => 'user-uploaded image',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => NULL,
      'insert_styles' => NULL,
      'insert_default' => NULL,
      'insert_class' => NULL,
      'insert_width' => NULL,
      'label' => 'Keyframe',
      'weight' => '1',
      'description' => 'Optionally, upload an image to be displayed before the video starts playing. If you do not provide an image, the default image is the Stanford seal.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_stanford_video_media
  $fields['stanford_video-field_stanford_video_media'] = array(
    'field_name' => 'field_stanford_video_media',
    'type_name' => 'stanford_video',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'flv m4v mp4 mp3',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'insert' => NULL,
      'insert_styles' => NULL,
      'insert_default' => NULL,
      'insert_class' => NULL,
      'insert_width' => NULL,
      'label' => 'Media File',
      'weight' => '-3',
      'description' => 'Choose to upload a video here <strong>or</strong> enter the URL of a remotely-hosted video in the field below.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_stanford_video_remote
  $fields['stanford_video-field_stanford_video_remote'] = array(
    'field_name' => 'field_stanford_video_remote',
    'type_name' => 'stanford_video',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_stanford_video_remote][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Remotely Hosted Video File',
      'weight' => '-2',
      'description' => 'If your video is remotely hosted on a streaming server, please provide the URL of the video file here.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_stanford_video_resolution
  $fields['stanford_video-field_stanford_video_resolution'] = array(
    'field_name' => 'field_stanford_video_resolution',
    'type_name' => 'stanford_video',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '1|320 X 240
2|480 X 320
3|640 X 360
4|640 X 480',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video Resolution',
      'weight' => '2',
      'description' => '<p>Choose one of 4 different video sizes: 480 X 320 (*), 320 X 240, 640 X 360 and 640 X 480. It is highly recommended that you ensure that your video matches one of these size formats - if not, the player will re-size your video to the view-port selected, and may result in a degradation of quality.  (The player also allows for full screen viewing of the video)</p>

<p>(* The 480 X 320 view-port is the default size provided by the Stanford Captioning Service, and has been designed to occupy the center of the page in a 1-3-1 layout. This is probably the most commonly-used size.)</p>',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Caption File');
  t('Keyframe');
  t('Media File');
  t('Remotely Hosted Video File');
  t('Video Resolution');

  return $fields;
}
