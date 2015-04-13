<?php
/**
 * @file
 * Default template.php for this theme.
 */

/**
 * Implements hook_preprocess_page().
 */
function brund_preprocess_page(&$variables) {
  if (isset($variables['node'])) {
    // If the node type is "blog" the template suggestion will be
    // "page--blog.tpl.php".
    $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
  }
}

/**
 * Implements hook_breadcrumb().
 */
function brund_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Adding the title of the current page to the breadcrumb.
    $breadcrumb[] = drupal_get_title();

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div>';

    return $output;
  }
}
