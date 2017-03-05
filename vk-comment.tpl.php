<?php
/**
 * Created by PhpStorm.
 * User: Lex
 * Date: 04.03.2017
 * Time: 22:25
 */

/**
 *
 * $cid
 * $fullname
 * $avasrc
 * $time
 * $body
 * $comment_link
 * $item => all data
 * $uid => id author
 *
 */
?>
<div class="vk-comment-container" data-comment-id="<?php print $cid; ?>" data-comment-uid="<?php print $uid; ?>">
  <div class="ava"><a href="<?php print $author_link; ?>" target="_blank" rel="nofollow"><img src="<?php print $avasrc; ?>" width="100px" height="auto"></a></div>
  <div class="comment-fullname"><a href="<?php print $author_link; ?>" target="_blank" rel="nofollow"><?php print $fullname; ?></a></div>
    <div class="comment-time"><a href="<?php print $comment_link; ?>" target="_blank" rel="nofollow"><?php print $time; ?></a></div>
  <div class="vk-body">
    <?php print $body; ?>
  </div>
</div>