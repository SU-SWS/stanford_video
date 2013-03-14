<?php
/**
 * @file
 * Display the JW Player.
 *
 * Variables available:
 * - $html_id: Unique id generated for each video.
 * - $width: Width of the video player.
 * - $height: Height of the video player.
 * - $sources: An array of files to be played.
 * - $jw_player_inline_js_code: JSON data with configuration settings for the video player.
 * - $image: URL to an image to be used for the poster (ie. preview image) for this video.
 *
 * @see template_preprocess_jw_player()
 */
?>
<div class="jwplayer-video">
  <video id="<?php print $html_id ?>" width="<?php print $width ?>" height="<?php print $height ?>" controls="controls" preload="none"<?php if(isset($image)) : ?> poster="<?php print $image ?>"<?php endif ?>>
  <?php foreach ($sources as $source) { ?>
    <source src="<?php print $source['file_path']; ?>"<?php if (isset($source['file_mime'])): ?> type="<?php print $source['file_mime'] ?>"<?php endif ?> />
  <?php };?>
  </video>
</div>
<?php if(isset($jw_player_inline_js_code)): ?>
  <script type="text/javascript">
    jwplayer('<?php print $html_id ?>').setup(<?php print $jw_player_inline_js_code?>);
  </script>
<?php endif ?>
