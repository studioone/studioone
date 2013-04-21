<div id="page">
  <?php $eyebrow = render($page['eyebrow']); ?>
  <?php if ($eyebrow): ?>
    <nav id="eyebrow" role="navigation">
      <?php print $eyebrow; ?>
    </nav>
  <?php endif; ?>

  <header id="header" role="banner">

    <?php print $logo; ?>

    <div id="navigation">
      <?php if ($main_menu): ?>
        <nav id="main-menu" role="navigation">
          <?php print $main_menu; ?>
        </nav>
      <?php endif; ?>
    </div><!-- /#navigation -->

    <?php print render($page['header']); ?>
  </header>

  <?php print $messages; ?>

  <div id="main-wrapper" role="main">
    <div id="main">
      <?php
        // Render some regions to see if there's anything in them.
        $sidebar_first  = render($page['sidebar_first']);
        $sidebar_second = render($page['sidebar_second']);
        $subcontent = render($page['sub_content']);
      ?>
      <div id="content" class="column">
        <a id="main-content"></a>
        <?php print render($tabs); ?>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1 class="title" id="page-title"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      </div><!-- /#content -->

      <?php if ($sidebar_first || $sidebar_second): ?>
        <aside class="sidebars">
          <?php print $sidebar_first; ?>
          <?php print $sidebar_second; ?>
        </aside>
      <?php endif; ?>

      <?php if ($subcontent): ?>
        <div id="sub-content">
          <?php print $subcontent; ?>
        </div>
      <?php endif; ?>


    </div><!-- /#main -->

  </div><!-- /#main-wrapper -->
</div><!-- /#page -->

<?php print render($page['footer']); ?>
<?php print render($page['bottom']); ?>
