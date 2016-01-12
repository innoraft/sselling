<?php
/**
 * @file panels-pane.tpl.php
 * Main panel pane template
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 * - $links: Any links associated with the content
 * - $more: An optional 'more' link (destination only)
 * - $admin_links: Administrative links associated with the content
 * - $feeds: Any feed icons or associated with the content
 * - $display: The complete panels display object containing all kinds of
 *   data including the contexts and all of the other panes being displayed.
 */
?>
<?php if ($pane_prefix): ?>
  <?php print $pane_prefix; ?>
<?php endif; ?>
<div class="<?php print $classes; ?>" <?php print $id; ?> <?php print $attributes; ?>>
  <?php if ($admin_links): ?>
    <?php print $admin_links; ?>
  <?php endif; ?>

  <section id="middle" class="grey_section">
      <div class="container">
            <div class="row">
                <div class="col-sm-12">
                    <?php print render($title_prefix); ?>
                    <?php if ($title): ?>
                        <h1 class="text-center block-header animated fadeInUp"><?php print $title; ?></h1>
                    <?php endif; ?>
                    <?php print render($title_suffix); ?>
                </div>
            </div>
            <div class="row row-content">
              <?php print render($content['service_links']); ?>
              <div class="register-link"><a href="<?php print $content['field_register']['#items'][0]['value']; ?>">Register</a></div>
              <?php print render($content['title']); ?>
              <?php print render($content['field_event_location']); ?>
              <?php print render($content['field_date_time']); ?>
              <?php print render($content['body']); ?>
            </div>
        </div>
  </section>

  <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <div class="more-link">
      <?php print $more; ?>
    </div>
  <?php endif; ?>
</div>
<?php if ($pane_suffix): ?>
  <?php print $pane_suffix; ?>
<?php endif; ?>
