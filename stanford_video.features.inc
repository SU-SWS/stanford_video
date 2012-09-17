<?php
/**
 * @file
 * stanford_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_video_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "jw_player" && $api == "jw_player_presets") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_video_node_info() {
  $items = array(
    'stanford_video' => array(
      'name' => t('Stanford Video'),
      'base' => 'node_content',
      'description' => t('The Video content type is a custom content type that affords the ability to publish a captioned video to your website via direct file upload or remote stream. Video post-production and transcript generation can be found at <a href="http://captioning.stanford.edu">http://captioning.stanford.edu</a>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
