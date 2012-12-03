<?php 

abstract class AbstractVideoProvider {
  
  public function process_url(&$url, &$settings) {
  }
  
  public function global_settings() {
    return array();
  }
  
}
