<?php
/**
 * @file
 * nm_integrative_pages_and_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nm_integrative_pages_and_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_contact:contact
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact us',
      ),
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_despre:despre
  $menu_links['main-menu_despre:despre'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'despre',
    'router_path' => 'despre',
    'link_title' => 'Despre',
    'options' => array(
      'identifier' => 'main-menu_despre:despre',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_galerie:galery
  $menu_links['main-menu_galerie:galery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'galery',
    'router_path' => 'galery',
    'link_title' => 'Galerie',
    'options' => array(
      'identifier' => 'main-menu_galerie:galery',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_oferte:oferte
  $menu_links['main-menu_oferte:oferte'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'oferte',
    'router_path' => 'oferte',
    'link_title' => 'Oferte',
    'options' => array(
      'identifier' => 'main-menu_oferte:oferte',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_terapeuti:terapeuti
  $menu_links['main-menu_terapeuti:terapeuti'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'terapeuti',
    'router_path' => 'terapeuti',
    'link_title' => 'Terapeuti',
    'options' => array(
      'identifier' => 'main-menu_terapeuti:terapeuti',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_terapii:tratamente
  $menu_links['main-menu_terapii:tratamente'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tratamente',
    'router_path' => 'tratamente',
    'link_title' => 'Terapii',
    'options' => array(
      'attributes' => array(
        'title' => 'Tratamentele oferite de noi',
      ),
      'identifier' => 'main-menu_terapii:tratamente',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Despre');
  t('Galerie');
  t('Home');
  t('Oferte');
  t('Terapeuti');
  t('Terapii');


  return $menu_links;
}
