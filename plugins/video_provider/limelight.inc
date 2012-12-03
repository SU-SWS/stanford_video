<?php

$plugin = array(
  'provider' => 'LimelightVideoProvider',
);

require_once('AbstractVideoProvider.class.php');

class LimelightVideoProvider extends AbstractVideoProvider {
  
  public function process_url(&$url, &$settings) {
    $parts = drupal_parse_url($url);

    // Assume that URLs that don't start with http are for limelight.
    if (substr($parts['path'], 0, 4) != 'http') {
      $settings['#streamer'] = variable_get('jw_player_limelight_streamer_url');
    }
  }
  
  public function global_settings() {
    $form['streamer_url'] = array(
      '#type' => 'textfield',
      '#title' => 'Streamer URL',
    );
    return $form;
  }
  
}
