<?php

/**
 * @file
 * brund_configuration.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function brund_configuration_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html.
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'tinymce',
    'settings' => array(
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'strikethrough' => 1,
          'justifyleft' => 1,
          'justifycenter' => 1,
          'justifyright' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'link' => 1,
          'unlink' => 1,
          'image' => 1,
          'cleanup' => 1,
          'formatselect' => 1,
          'styleselect' => 1,
          'code' => 1,
          'cut' => 1,
          'copy' => 1,
          'paste' => 1,
        ),
        'advimage' => array(
          'advimage' => 1,
        ),
        'advlink' => array(
          'advlink' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
        'table' => array(
          'tablecontrols' => 1,
        ),
      ),
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'css_setting' => 'theme',
      'css_path' => '',
      'theme_advanced_statusbar_location' => 'bottom',
      'theme_advanced_toolbar_location' => 'top',
      'theme_advanced_toolbar_align' => 'left',
      'theme_advanced_blockformats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'theme_advanced_styles' => '',
      'theme_advanced_resizing' => 1,
    ),
    'preferences' => array(
      'add_to_summaries' => FALSE,
      'default' => 1,
      'show_toggle' => 1,
      'user_choose' => 0,
      'version' => '3.5.11',
    ),
    'name' => 'formatfull_html',
  );

  return $profiles;
}
