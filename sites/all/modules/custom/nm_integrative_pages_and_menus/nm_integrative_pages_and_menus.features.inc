<?php
/**
 * @file
 * nm_integrative_pages_and_menus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nm_integrative_pages_and_menus_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
