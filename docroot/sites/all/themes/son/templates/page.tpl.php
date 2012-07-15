<div id="page">

  <?php if ($secondary_menu): ?>
    <nav id="eyebrow" role="navigation">
      <?php print $secondary_menu; ?>
    </nav>
  <?php endif; ?>

  <header id="header" role="banner">

    <?php print $logo; ?>

    <div id="navigation">
      <?php if ($main_menu): ?>
        <nav id="main-menu" role="navigation">
          <?php print render($page['navigation']); ?>
        </nav>
      <?php endif; ?>
    </div><!-- /#navigation -->

    <?php print render($page['header']); ?>
  </header>

  <div id="main-wrapper" role="main">
    <div id="hilighted">
      <?php print render($page['highlighted']); ?>
      <?php print $breadcrumb; ?>
    </div>

    <div id="main">
      <div id="content" class="column">
        <a id="main-content"></a>
        <?php print $messages; ?>
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

      <?php
        // Render the sidebars to see if there's anything in them.
        $sidebar_first  = render($page['sidebar_first']);
        $sidebar_second = render($page['sidebar_second']);
      ?>

      <?php if ($sidebar_first || $sidebar_second): ?>
        <aside class="sidebars">
          <?php print $sidebar_first; ?>
          <?php print $sidebar_second; ?>
        </aside><!-- /.sidebars -->
      <?php endif; ?>
    </div><!-- /#main -->

  </div><!-- /#main-wrapper -->

  <?php print render($page['footer']); ?>

</div><!-- /#page -->

<?php print render($page['bottom']); ?>
