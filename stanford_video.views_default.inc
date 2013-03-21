<?php
/**
 * @file
 * stanford_video.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_video_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_web_videos';
  $view->description = 'A simple View showing all Stanford Web Video nodes on your site';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Web Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stanford Web Videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Account Name */
  $handler->display->display_options['fields']['field_stanford_video_account']['id'] = 'field_stanford_video_account';
  $handler->display->display_options['fields']['field_stanford_video_account']['table'] = 'field_data_field_stanford_video_account';
  $handler->display->display_options['fields']['field_stanford_video_account']['field'] = 'field_stanford_video_account';
  $handler->display->display_options['fields']['field_stanford_video_account']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_account']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_video_account']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Caption File */
  $handler->display->display_options['fields']['field_stanford_video_caption']['id'] = 'field_stanford_video_caption';
  $handler->display->display_options['fields']['field_stanford_video_caption']['table'] = 'field_data_field_stanford_video_caption';
  $handler->display->display_options['fields']['field_stanford_video_caption']['field'] = 'field_stanford_video_caption';
  $handler->display->display_options['fields']['field_stanford_video_caption']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_video_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_video_caption']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stanford_video_caption']['settings'] = array(
    'jwplayer_preset' => 'stanford_video',
  );
  /* Field: Content: File Name */
  $handler->display->display_options['fields']['field_stanford_video_filename']['id'] = 'field_stanford_video_filename';
  $handler->display->display_options['fields']['field_stanford_video_filename']['table'] = 'field_data_field_stanford_video_filename';
  $handler->display->display_options['fields']['field_stanford_video_filename']['field'] = 'field_stanford_video_filename';
  $handler->display->display_options['fields']['field_stanford_video_filename']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_filename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_video_filename']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_stanford_video_poster']['id'] = 'field_stanford_video_poster';
  $handler->display->display_options['fields']['field_stanford_video_poster']['table'] = 'field_data_field_stanford_video_poster';
  $handler->display->display_options['fields']['field_stanford_video_poster']['field'] = 'field_stanford_video_poster';
  $handler->display->display_options['fields']['field_stanford_video_poster']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_poster']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_video_poster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_video_poster']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stanford_video_poster']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Streaming Server */
  $handler->display->display_options['fields']['field_stanford_video_server']['id'] = 'field_stanford_video_server';
  $handler->display->display_options['fields']['field_stanford_video_server']['table'] = 'field_data_field_stanford_video_server';
  $handler->display->display_options['fields']['field_stanford_video_server']['field'] = 'field_stanford_video_server';
  $handler->display->display_options['fields']['field_stanford_video_server']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_server']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_video_server']['element_label_colon'] = FALSE;
  /* Field: Content: External Video Embed */
  $handler->display->display_options['fields']['field_stanford_video_external']['id'] = 'field_stanford_video_external';
  $handler->display->display_options['fields']['field_stanford_video_external']['table'] = 'field_data_field_stanford_video_external';
  $handler->display->display_options['fields']['field_stanford_video_external']['field'] = 'field_stanford_video_external';
  $handler->display->display_options['fields']['field_stanford_video_external']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_external']['element_label_colon'] = FALSE;
  /* Field: Content: Video File */
  $handler->display->display_options['fields']['field_stanford_video_file']['id'] = 'field_stanford_video_file';
  $handler->display->display_options['fields']['field_stanford_video_file']['table'] = 'field_data_field_stanford_video_file';
  $handler->display->display_options['fields']['field_stanford_video_file']['field'] = 'field_stanford_video_file';
  $handler->display->display_options['fields']['field_stanford_video_file']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_video_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stanford_video_file']['type'] = 'stanford_video';
  $handler->display->display_options['fields']['field_stanford_video_file']['settings'] = array(
    'jwplayer_preset' => 'stanford_web_video_640_480',
  );
  /* Field: Content: Video Link */
  $handler->display->display_options['fields']['field_stanford_video_link']['id'] = 'field_stanford_video_link';
  $handler->display->display_options['fields']['field_stanford_video_link']['table'] = 'field_data_field_stanford_video_link';
  $handler->display->display_options['fields']['field_stanford_video_link']['field'] = 'field_stanford_video_link';
  $handler->display->display_options['fields']['field_stanford_video_link']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_video_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_stanford_video_link']['type'] = 'stanford_video';
  $handler->display->display_options['fields']['field_stanford_video_link']['settings'] = array(
    'jwplayer_preset' => 'stanford_web_video_640_480',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_video' => 'stanford_video',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'stanford-web-videos';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'stanford-web-videos.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Recent Video';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Account Name */
  $handler->display->display_options['fields']['field_stanford_video_account']['id'] = 'field_stanford_video_account';
  $handler->display->display_options['fields']['field_stanford_video_account']['table'] = 'field_data_field_stanford_video_account';
  $handler->display->display_options['fields']['field_stanford_video_account']['field'] = 'field_stanford_video_account';
  $handler->display->display_options['fields']['field_stanford_video_account']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_account']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_video_account']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Caption File */
  $handler->display->display_options['fields']['field_stanford_video_caption']['id'] = 'field_stanford_video_caption';
  $handler->display->display_options['fields']['field_stanford_video_caption']['table'] = 'field_data_field_stanford_video_caption';
  $handler->display->display_options['fields']['field_stanford_video_caption']['field'] = 'field_stanford_video_caption';
  $handler->display->display_options['fields']['field_stanford_video_caption']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_video_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_video_caption']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stanford_video_caption']['settings'] = array(
    'jwplayer_preset' => 'stanford_video',
  );
  /* Field: Content: File Name */
  $handler->display->display_options['fields']['field_stanford_video_filename']['id'] = 'field_stanford_video_filename';
  $handler->display->display_options['fields']['field_stanford_video_filename']['table'] = 'field_data_field_stanford_video_filename';
  $handler->display->display_options['fields']['field_stanford_video_filename']['field'] = 'field_stanford_video_filename';
  $handler->display->display_options['fields']['field_stanford_video_filename']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_filename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_video_filename']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_stanford_video_poster']['id'] = 'field_stanford_video_poster';
  $handler->display->display_options['fields']['field_stanford_video_poster']['table'] = 'field_data_field_stanford_video_poster';
  $handler->display->display_options['fields']['field_stanford_video_poster']['field'] = 'field_stanford_video_poster';
  $handler->display->display_options['fields']['field_stanford_video_poster']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_poster']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_video_poster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_video_poster']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stanford_video_poster']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Streaming Server */
  $handler->display->display_options['fields']['field_stanford_video_server']['id'] = 'field_stanford_video_server';
  $handler->display->display_options['fields']['field_stanford_video_server']['table'] = 'field_data_field_stanford_video_server';
  $handler->display->display_options['fields']['field_stanford_video_server']['field'] = 'field_stanford_video_server';
  $handler->display->display_options['fields']['field_stanford_video_server']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_server']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_video_server']['element_label_colon'] = FALSE;
  /* Field: Content: External Video Embed */
  $handler->display->display_options['fields']['field_stanford_video_external']['id'] = 'field_stanford_video_external';
  $handler->display->display_options['fields']['field_stanford_video_external']['table'] = 'field_data_field_stanford_video_external';
  $handler->display->display_options['fields']['field_stanford_video_external']['field'] = 'field_stanford_video_external';
  $handler->display->display_options['fields']['field_stanford_video_external']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_external']['element_label_colon'] = FALSE;
  /* Field: Content: Video File */
  $handler->display->display_options['fields']['field_stanford_video_file']['id'] = 'field_stanford_video_file';
  $handler->display->display_options['fields']['field_stanford_video_file']['table'] = 'field_data_field_stanford_video_file';
  $handler->display->display_options['fields']['field_stanford_video_file']['field'] = 'field_stanford_video_file';
  $handler->display->display_options['fields']['field_stanford_video_file']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_video_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stanford_video_file']['type'] = 'stanford_video';
  $handler->display->display_options['fields']['field_stanford_video_file']['settings'] = array(
    'jwplayer_preset' => 'stanford_web_video_320_240',
  );
  /* Field: Content: Video Link */
  $handler->display->display_options['fields']['field_stanford_video_link']['id'] = 'field_stanford_video_link';
  $handler->display->display_options['fields']['field_stanford_video_link']['table'] = 'field_data_field_stanford_video_link';
  $handler->display->display_options['fields']['field_stanford_video_link']['field'] = 'field_stanford_video_link';
  $handler->display->display_options['fields']['field_stanford_video_link']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_video_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_video_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_stanford_video_link']['type'] = 'stanford_video';
  $handler->display->display_options['fields']['field_stanford_video_link']['settings'] = array(
    'jwplayer_preset' => 'stanford_web_video_320_240',
  );
  $export['stanford_web_videos'] = $view;

  return $export;
}
