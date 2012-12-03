<?php

$plugin = array(
  'provider' => 'YoutubeVideoProvider',
);

require_once('AbstractVideoProvider.class.php');

class YoutubeVideoProvider extends AbstractVideoProvider {
  
  public function process_url(&$url, &$settings) {
    $video_id = NULL;
    $parts = drupal_parse_url($url);
    extract(drupal_parse_url($url));
    
    if (strpos($path, 'youtu.be')) {
      // Youtube short URL.
      $video_id = array_pop(explode('/', $path));
    } else if (strpos($path, 'youtube.com')) {
      // Youtube long URL.
      if ($query['v']) {
        $video_id = $query['v'];
      }
    }
    
    if ($video_id) {
      $url = "http://youtu.be/v/$video_id";
    }
  }
  
}
