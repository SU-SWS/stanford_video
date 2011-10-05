<?php

/**
 * Implementation of hook_node_info().
 */
function stanford_video_node_info() {
  $items = array(
    'stanford_video' => array(
      'name' => t('Stanford Video'),
      'module' => 'features',
      'description' => t('<p>The Video content type is a custom content type that affords the ability to upload and publish a captioned video to your website. It supports 4 different videos sizes: 480 X 320 (*), 320 X 240, 640 X 360 and 640 X 480. It is highly recommended that you ensure that your video matches one of these size formats - if not, the player will re-size your video to the view-port selected, and may result in a degradation of quality. (The player also allows for full screen viewing of the video)</p>

<p>To upload a video to the system, you MUST have a timestamped transcript associated to your video; you will receive an error message otherwise.  Video post-production and transcript generation can be found at <a href="http://captioning.stanford.edu">http://captioning.stanford.edu</a></p>

<p>(* the 480 X 320 view-port is the default size provided by the Stanford Captioning Service, and has been designed to occupy the center of the page in a 1-3-1 layout. This is probably the most common size used)</p>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Video Summary'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
