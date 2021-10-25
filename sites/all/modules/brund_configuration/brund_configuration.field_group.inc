<?php

/**
 * @file
 * brund_configuration.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function brund_configuration_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|booking|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'booking';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_navn',
      1 => 'field_telefon',
      2 => 'field_mail',
      3 => 'field_adress',
      4 => 'field_post_nr_',
      5 => 'field_by',
      6 => 'field_kommentar',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-contact field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
      'label' => 'Kontakt',
    ),
    'format_type' => 'fieldset',
    'label' => 'Kontakt',
    'weight' => '5',
  );
  $field_groups['group_contact|node|booking|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Kontakt');

  return $field_groups;
}
