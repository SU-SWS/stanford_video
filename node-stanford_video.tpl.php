<?php 
$allowed_tags = array('img', 'p', 'a', 'em', 'strong', 'ul', 'ol', 'li', 'dl', 'dt', 'dd', 'div');
$media = filter_xss($node->field_stanford_video_media[0]['filepath'], $allowed_tags);
$caption = filter_xss($node->field_stanford_video_caption[0]['filepath'], $allowed_tags);
$remote = filter_xss($node->field_stanford_video_remote[0]['view'], $allowed_tags);
$videocols = filter_xss($node->field_stanford_video_resolution[0]['view'], $allowed_tags);
$keyframe = filter_xss($node->field_stanford_video_keyframe[0]['filepath'], $allowed_tags);
$basepath = base_path();
$filepath = file_directory_path();
//kpr($node);
?>
 <script type="text/javascript" src="<?php print $basepath.$filepath; ?>/media/swfobject.js"></script>
<script type="text/javascript">
	swfobject.registerObject("player","9.0.98","expressInstall.swf");
</script>

<?php

if ($videocols == '480 X 320'){
    $output = "<div style=\"width: 480px; margin:auto; margin-bottom:2em;\"><object id=\"player\" classid=\"clsid:D27CDB6E-AE6D-11cf-96B8-444553540000\" name=\"player\" width=\"480\" height=\"340\"><param name=\"movie\" value=\"";
    $output .= $basepath.$filepath;
    $output .= "/media/player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }
  elseif ($videocols == '320 X 240'){
    $output = "<div style=\"width: 320px; float:right; margin-left:1em; margin-right:1em;\"><object id=\"player\" classid=\"clsid:D27CDB6E-AE6D-11cf-96B8-444553540000\" name=\"player\" width=\"320\" height=\"240\"><param name=\"movie\" value=\"";
    $output .= $basepath.$filepath;
    $output .= "/media/player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }			
  elseif ($videocols == '640 X 360'){
    $output = "<div style=\"width: 640px; margin:auto; margin-bottom:2em;\"><object id=\"player\" classid=\"clsid:D27CDB6E-AE6D-11cf-96B8-444553540000\" name=\"player\" width=\"640\" height=\"360\"><param name=\"movie\" value=\"";
    $output .= $basepath.$filepath;
    $output .= "/media/player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }	
  elseif ($videocols == '640 X 480'){
    $output = "<div style=\"width: 640px; margin:auto; margin-bottom:2em;\"><object id=\"player\" classid=\"clsid:D27CDB6E-AE6D-11cf-96B8-444553540000\" name=\"player\" width=\"640\" height=\"480\"><param name=\"movie\" value=\"";
    $output .= $basepath.$filepath;
    $output .= "/media/player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }				
  else {
    $output = t("I'm sorry, something has gone terribly wrong. ");
    $output .= l(t("Please contact the webmaster. "), "contact");
  }
  echo $output;
  print"<param name=\"flashvars\" value=\"file=";

  if ($remote != null){
    print $remote;
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

  if ($videocols == '480 X 320'){
    $output = "<div style=\"width: 480px; margin:auto; margin-bottom:2em;\"><object type=\"application/x-shockwave-flash\" data=\"";
    $output .= $basepath.$filepath;
    $output .= "/media/player.swf\" width=\"480\" height=\"340\"><param name=\"movie\" value=\"player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }
  elseif ($videocols == '320 X 240'){
    $output = "<div style=\"width: 320px; float:right; margin-left:1em; margin-right:1em;\"><object type=\"application/x-shockwave-flash\" data=\"";
    $output .= $basepath.$filepath;
    $output .= "/media/player.swf\" width=\"320\" height=\"240\"><param name=\"movie\" value=\"player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }			
  elseif ($videocols == '640 X 360'){
    $output = "<div style=\"width: 640px; margin:auto; margin-bottom:2em;\"><object type=\"application/x-shockwave-flash\" data=\"";
    $output .= $basepath.$filepath;
    $output .= "/media/player.swf\" width=\"640\" height=\"360\"><param name=\"movie\" value=\"player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }	
  elseif ($videocols == '640 X 480'){
    $output = "<div style=\"width: 640px; margin:auto; margin-bottom:2em;\"><object type=\"application/x-shockwave-flash\" data=\"";
    $output .= $basepath.$filepath;
    $output .= "/media/player.swf\" width=\"640\" height=\"480\"><param name=\"movie\" value=\"player.swf\" /><param name=\"allowfullscreen\" value=\"true\" /><param name=\"allowscriptaccess\" value=\"always\" />";
  }				
  else {
    $output = t("I'm sorry, something has gone terribly wrong. ");
    $output .= l(t("Please contact the webmaster."), "contact");
  }
  echo $output;

print "<param name=\"flashvars\" value=\"file=";
if ($remote != null){
		print $remote; }
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

print $node->content['body']['#value'];

 ?>

<br class="clear" />
