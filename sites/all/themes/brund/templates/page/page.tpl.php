<?php
/**
 * @file
 * Default page template file for the theme.
 */
?>
<div id="page" class="<?php print $classes?>">
  <header>
    <!-- Header image -->
    <div class="image"></div>

    <?php print render($page['header']); ?>
  </header>

  <div class="content-wrapper">
    <div class="content-inner">
      <!-- Navigation -->
      <nav>
        <!-- Mobil navigation icons -->
        <!--      <ul class="topbar-menu">-->
        <!--        <li class="last js-topbar-link">-->
        <!--          <a class="menu-item js-menu" title="" href="#">-->
        <!--            <i class="icon-align-justify"></i>-->
        <!--          </a>-->
        <!--        </li>-->
        <!--      </ul>-->

        <?php if (isset($main_menu)): ?>
          <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('class' => array('main-menu')))); ?>
        <?php endif; ?>
      </nav>

      <?php if ($messages): ?>
        <div id="messages">
          <?php print $messages; ?>
        </div>
      <?php endif; ?>

      <div class="primary-content">
        <a id="primary-content"></a>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1 class="title" id="page-title">
            <?php print $title; ?>
          </h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>

        <?php if ($tabs): ?>
          <div class="tabs">
            <?php print render($tabs); ?>
          </div>
        <?php endif; ?>

        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>

        <?php print render($page['content']); ?>
      </div>

      <?php if ($page['secondary_content']): ?>
        <aside class="secondary-content">
          <?php print render($page['secondary_content']); ?>
        </aside>
      <?php endif; ?>
    </div> <!-- inner -->
  </div> <!-- content -->

  <?php if (isset($page['footer'])): ?>
    <footer>
      <?php print render($page['footer']); ?>
    </footer>
  <?php endif; ?>
</div>
