<?php
/**
 * @file
 * nm_integrative_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nm_integrative_content_types_node_info() {
  $items = array(
    'despre_noi' => array(
      'name' => t('Despre noi'),
      'base' => 'node_content',
      'description' => t('About us'),
      'has_title' => '1',
      'title_label' => t('Titlu'),
      'help' => '',
    ),
    'oferte' => array(
      'name' => t('Oferte'),
      'base' => 'node_content',
      'description' => t('Content type used for adding new site-wide offers.'),
      'has_title' => '1',
      'title_label' => t('Titlul ofertei'),
      'help' => '',
    ),
    'terapeuti' => array(
      'name' => t('Terapeuti'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nume si prenume'),
      'help' => '',
    ),
    'tratamente' => array(
      'name' => t('Tratamente'),
      'base' => 'node_content',
      'description' => t('Folosit la adaugarea de tratamente'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
