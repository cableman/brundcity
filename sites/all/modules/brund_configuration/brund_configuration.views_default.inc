<?php

/**
 * @file
 * brund_configuration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function brund_configuration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'booking_administration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Booking administration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Booking administration';
  $handler->display->display_options['css_class'] = 'booking-admin-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_dato_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_dato_1' => 'field_dato_1',
    'title' => 'title',
    'field_dato' => 'field_dato',
    'field_navn' => 'field_navn',
    'field_mail' => 'field_mail',
    'field_telefon' => 'field_telefon',
    'field_kommentar' => 'field_kommentar',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_dato_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dato' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_navn' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_telefon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kommentar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Dato (year) */
  $handler->display->display_options['fields']['field_dato_1']['id'] = 'field_dato_1';
  $handler->display->display_options['fields']['field_dato_1']['table'] = 'field_data_field_dato';
  $handler->display->display_options['fields']['field_dato_1']['field'] = 'field_dato';
  $handler->display->display_options['fields']['field_dato_1']['ui_name'] = 'Dato (year)';
  $handler->display->display_options['fields']['field_dato_1']['label'] = '';
  $handler->display->display_options['fields']['field_dato_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dato_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dato_1']['settings'] = array(
    'format_type' => 'year',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_dato']['id'] = 'field_dato';
  $handler->display->display_options['fields']['field_dato']['table'] = 'field_data_field_dato';
  $handler->display->display_options['fields']['field_dato']['field'] = 'field_dato';
  $handler->display->display_options['fields']['field_dato']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd/m/y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Navn */
  $handler->display->display_options['fields']['field_navn']['id'] = 'field_navn';
  $handler->display->display_options['fields']['field_navn']['table'] = 'field_data_field_navn';
  $handler->display->display_options['fields']['field_navn']['field'] = 'field_navn';
  /* Field: Content: Mail */
  $handler->display->display_options['fields']['field_mail']['id'] = 'field_mail';
  $handler->display->display_options['fields']['field_mail']['table'] = 'field_data_field_mail';
  $handler->display->display_options['fields']['field_mail']['field'] = 'field_mail';
  $handler->display->display_options['fields']['field_mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mail']['alter']['text'] = '<a href="mailto:[field_mail-value]">[field_mail]</a>';
  /* Field: Content: Telefon */
  $handler->display->display_options['fields']['field_telefon']['id'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon']['table'] = 'field_data_field_telefon';
  $handler->display->display_options['fields']['field_telefon']['field'] = 'field_telefon';
  /* Field: Content: Kommentar */
  $handler->display->display_options['fields']['field_kommentar']['id'] = 'field_kommentar';
  $handler->display->display_options['fields']['field_kommentar']['table'] = 'field_data_field_kommentar';
  $handler->display->display_options['fields']['field_kommentar']['field'] = 'field_kommentar';
  /* Field: Export link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Export link';
  $handler->display->display_options['fields']['nothing']['label'] = 'Export';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'export';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/booking-administration/export/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'export';
  /* Sort criterion: Content: Dato -  start date (field_dato) */
  $handler->display->display_options['sorts']['field_dato_value']['id'] = 'field_dato_value';
  $handler->display->display_options['sorts']['field_dato_value']['table'] = 'field_data_field_dato';
  $handler->display->display_options['sorts']['field_dato_value']['field'] = 'field_dato_value';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'booking' => 'booking',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lej-forsamlingshuset/booking-administration';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Booking administration';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['booking_administration'] = array(
    t('Master'),
    t('Booking administration'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Dato'),
    t('Navn'),
    t('Mail'),
    t('<a href="mailto:[field_mail-value]">[field_mail]</a>'),
    t('Telefon'),
    t('Kommentar'),
    t('Export'),
    t('export'),
    t('Page'),
  );
  $export['booking_administration'] = $view;

  $view = new view();
  $view->name = 'bookings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bookings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bookingoversigt';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_dato',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Dato: year */
  $handler->display->display_options['fields']['field_dato']['id'] = 'field_dato';
  $handler->display->display_options['fields']['field_dato']['table'] = 'field_data_field_dato';
  $handler->display->display_options['fields']['field_dato']['field'] = 'field_dato';
  $handler->display->display_options['fields']['field_dato']['ui_name'] = 'Dato: year';
  $handler->display->display_options['fields']['field_dato']['label'] = '';
  $handler->display->display_options['fields']['field_dato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dato']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dato']['alter']['text'] = 'Bookinger i [field_dato]';
  $handler->display->display_options['fields']['field_dato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dato']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_dato_1']['id'] = 'field_dato_1';
  $handler->display->display_options['fields']['field_dato_1']['table'] = 'field_data_field_dato';
  $handler->display->display_options['fields']['field_dato_1']['field'] = 'field_dato';
  $handler->display->display_options['fields']['field_dato_1']['label'] = '';
  $handler->display->display_options['fields']['field_dato_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dato_1']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_dato_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dato_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dato_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '- [title]';
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'booking-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Dato -  start date (field_dato) */
  $handler->display->display_options['sorts']['field_dato_value']['id'] = 'field_dato_value';
  $handler->display->display_options['sorts']['field_dato_value']['table'] = 'field_data_field_dato';
  $handler->display->display_options['sorts']['field_dato_value']['field'] = 'field_dato_value';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'booking' => 'booking',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lej-forsamlingshuset/bookingoversigt';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Bookingoversigt';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['bookings'] = array(
    t('Master'),
    t('Bookingoversigt'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Bookinger i [field_dato]'),
    t('- [title]'),
    t('Page'),
  );
  $export['bookings'] = $view;

  return $export;
}
