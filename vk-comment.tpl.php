<?php
/**
 * Created by PhpStorm.
 * User: Lex
 * Date: 04.03.2017
 * Time: 22:25
 */

?>
<div class="vk-comment-container" data-comment-id="<?php print $cid; ?>">
  <div class="c-id"><?php print $cid; ?></div>
  <div class="ava"><img src="<?php print $avasrc; ?>" width="100px" height="auto"></div>
  <div class="comment-fullname"><?php print $fullname; ?></div>
  <div class="comment-time"><?php print $time; ?></div>
  <div class="vk-body">
    <?php print $body; ?>
  </div>
</div>
