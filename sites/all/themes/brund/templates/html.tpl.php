<?php

/**
 * @file
 * Implementation to display the basic html structure of a single Drupal page.
 */
?>
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width">
    <meta name="google-site-verification" content="SesIBJMgYQxc1YQSsHU3aEwObVqxq4WFqNqqgTjOkJQ" />
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>
    <?php print $styles; ?>
    <?php print $scripts; ?>
  </head>
  <body class="<?php print $classes; ?>" <?php print $attributes;?>>
    <div id="skip-link">
      <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    </div>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
    <script>
      const hamburgerMenu = document.querySelector(".hamburger-menu");
      const nav = document.querySelector("nav");

      hamburgerMenu.addEventListener("click", () => {
        nav.classList.toggle("active")
      });
    </script>
  </body>
</html>
