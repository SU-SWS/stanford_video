<?php
// $Id: content-field.tpl.php,v 1.1.2.6 2009/09/11 09:20:37 markuspetrux Exp $

/**
 * @file content-field.tpl.php
 * Default theme implementation to display the value of a field.
 *
 * Available variables:
 * - $node: The node object.
 * - $field: The field array.
 * - $items: An array of values for each item in the field array.
 * - $teaser: Whether this is displayed as a teaser.
 * - $page: Whether this is displayed as a page.
 * - $field_name: The field name.
 * - $field_type: The field type.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $label: The item label.
 * - $label_display: Position of label display, inline, above, or hidden.
 * - $field_empty: Whether the field has any valid value.
 *
 * Each $item in $items contains:
 * - 'view' - the themed view for that item
 *
 * @see template_preprocess_content_field()
 */
?>
<?php
$allowed_tags = array('img', 'p', 'a', 'em', 'strong', 'ul', 'ol', 'li', 'dl', 'dt', 'dd', 'div');
$media = filter_xss($node->field_stanford_video_media[0]['filepath'], $allowed_tags);
$caption = filter_xss($node->field_stanford_video_caption[0]['filepath'], $allowed_tags);
$remote = filter_xss($node->field_stanford_video_remote[0]['safe'], $allowed_tags);
$videocols = filter_xss($node->field_stanford_video_resolution[0]['value'], $allowed_tags);
$keyframe = filter_xss($node->field_stanford_video_keyframe[0]['filepath'], $allowed_tags);
$keyframe_default = "http://captioning.stanford.edu/images/startimage.png";
$basepath = base_path();
$filepath = file_directory_path();
$stanford_video_path = url(drupal_get_path('module', 'stanford_video'));
preg_match('/[^\/]*.flv/', $remote, $matches);
$splits = preg_split('/\/[^\/]*.flv/', $remote);
$remote_streamer = $splits[0];
$remote_file = $matches[0];
drupal_add_js(drupal_get_path('module', 'stanford_video') . '/media/jwplayer.js');
drupal_set_html_head('<meta http-equiv="Content-Type" content="video/mp4" />');
?>

<video 
    src="<?php print $basepath.$media; ?>" 
    height="480"
    width="640"
    id="container" 
    poster="<?php if(isset($keyframe)) {print $basepath.$keyframe;} else {print 'http\://captioning.stanford.edu/images/startimage.png';} ?>"
>
</video>

<script type="text/javascript">
    jwplayer("container").setup({
        'flashplayer': "<?php print $stanford_video_path; ?>/media/player.swf",
        'image': "<?php if(!empty($keyframe)) {print $basepath.$keyframe;} else {print $keyframe_default;} ?>",
        'plugins': {
          'captions-2': {
            'file': "<?php print $basepath.$caption; ?>"
          }
        }
    });
</script>

<?php

/*
if ($videocols == 1){
    $output = "<div style=\"width: 480px; margin:auto; margin-bottom:2em;\"><object id=\"player\" classid=\"clsid:D27CDB6E-AE6D-11cf-96B8-444553540000\" name=\"player\" width=\"480\" height=\"340\"><param name=\"movie\" value=\"";
    $output .= $stanford_video_path;
    $output .= "/media/player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }
  elseif ($videocols == 2){
    $output = "<div style=\"width: 320px; margin-left:1em; margin-right:1em;\"><object id=\"player\" classid=\"clsid:D27CDB6E-AE6D-11cf-96B8-444553540000\" name=\"player\" width=\"320\" height=\"240\"><param name=\"movie\" value=\"";
    $output .= $stanford_video_path;
    $output .= "/media/player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }			
  elseif ($videocols == 3){
    $output = "<div style=\"width: 640px; margin:auto; margin-bottom:2em;\"><object id=\"player\" classid=\"clsid:D27CDB6E-AE6D-11cf-96B8-444553540000\" name=\"player\" width=\"640\" height=\"360\"><param name=\"movie\" value=\"";
    $output .= $stanford_video_path;
    $output .= "/media/player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }	
  elseif ($videocols == 4){
    $output = "<div style=\"width: 640px; margin:auto; margin-bottom:2em;\"><object id=\"player\" classid=\"clsid:D27CDB6E-AE6D-11cf-96B8-444553540000\" name=\"player\" width=\"640\" height=\"480\"><param name=\"movie\" value=\"";
    $output .= $stanford_video_path;
    $output .= "/media/player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }				
  else {
    $output = t("I'm sorry, something has gone terribly wrong. ");
    $output .= l(t("Please contact the webmaster. "), "contact");
  }
  echo $output;
  print"<param name=\"flashvars\" value=\"file=";

  if ($remote != null){
    print $remote_file ."&amp;streamer=". $remote_streamer;
  }
  else {
    print $basepath.$media;
  }
if ($keyframe !=null){
		print "&amp;image=http://studentaffairs.stanford.edu/";print $keyframe;print"&amp;captions=";}		
else {			
	print"&amp;image=http://captioning.stanford.edu/images/startimage.png&amp;captions=";}
print $basepath.$caption;
print"\" />";

  if ($videocols == 1){
    $output = "<div style=\"width: 480px; margin:auto; margin-bottom:2em;\"><object type=\"application/x-shockwave-flash\" data=\"";
    $output .= $stanford_video_path;
    $output .= "/media/player.swf\" width=\"480\" height=\"340\"><param name=\"movie\" value=\"player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }
  elseif ($videocols == 2){
    $output = "<div style=\"width: 320px; margin-left:1em; margin-right:1em;\"><object type=\"application/x-shockwave-flash\" data=\"";
    $output .= $stanford_video_path;
    $output .= "/media/player.swf\" width=\"320\" height=\"240\"><param name=\"movie\" value=\"player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }			
  elseif ($videocols == 3){
    $output = "<div style=\"width: 640px; margin:auto; margin-bottom:2em;\"><object type=\"application/x-shockwave-flash\" data=\"";
    $output .= $stanford_video_path;
    $output .= "/media/player.swf\" width=\"640\" height=\"360\"><param name=\"movie\" value=\"player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }	
  elseif ($videocols == 4){
    $output = "<div style=\"width: 640px; margin:auto; margin-bottom:2em;\"><object type=\"application/x-shockwave-flash\" data=\"";
    $output .= $stanford_video_path;
    $output .= "/media/player.swf\" width=\"640\" height=\"480\"><param name=\"movie\" value=\"player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }				
  else {
    $output = t("I'm sorry, something has gone terribly wrong. ");
    $output .= l(t("Please contact the webmaster."), "contact");
  }
  echo $output;

print "<param name=\"flashvars\" value=\"file=";
if ($remote != null){
    print $remote_file ."&amp;streamer=". $remote_streamer;
}
else {
		print $basepath.$media;
	}
if ($keyframe !=null){
		print "&amp;image=".$basepath.$keyframe."&amp;captions=";
	}		
else {			
	print"&amp;image=http://studentaffairs.stanford.edu/sites/default/files/media/poster.png&amp;captions=";}
print $basepath.$caption;
print "\" />"; 

print"<p><a href=\"http://get.adobe.com/flashplayer\">Get the Adobe Flash Player</a> to view this presentation.</p></object></div></object></div>"; 

*/
 ?>

<br class="clear" />
