<?php
/**
 * Created by PhpStorm.
 * User: Lex
 * Date: 04.03.2017
 * Time: 22:25
 */

?>

<?php foreach ($rows as $id => $row): ?>
    <div class="vk-board-item" data-comment-id="<?php print $id; ?>">
      <?php print $row; ?>
    </div>
<?php endforeach; ?>