<?php
/**
 * @file
 * nm_integrative_custom_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function nm_integrative_custom_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'despre';
  $page->task = 'page';
  $page->admin_title = 'Despre';
  $page->admin_description = '';
  $page->path = 'despre';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Despre',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_despre_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'despre';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9f3a126a-272b-42cc-a56d-064b727bf619';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bdccf893-3996-4b85-b0eb-d25cc587aa34';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '25',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bdccf893-3996-4b85-b0eb-d25cc587aa34';
    $display->content['new-bdccf893-3996-4b85-b0eb-d25cc587aa34'] = $pane;
    $display->panels['center'][0] = 'new-bdccf893-3996-4b85-b0eb-d25cc587aa34';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['despre'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'galerie';
  $page->task = 'page';
  $page->admin_title = 'Galerie';
  $page->admin_description = 'Galerie foto';
  $page->path = 'galery';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Galerie',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_galerie_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'galerie';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Galerie';
  $display->uuid = '6d0b7180-c5b3-4b82-a38c-2548194537d4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6367ec1d-c4ac-44b0-a112-bd61b1b3e00e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Disponibil in curand.</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6367ec1d-c4ac-44b0-a112-bd61b1b3e00e';
    $display->content['new-6367ec1d-c4ac-44b0-a112-bd61b1b3e00e'] = $pane;
    $display->panels['middle'][0] = 'new-6367ec1d-c4ac-44b0-a112-bd61b1b3e00e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['galerie'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home page';
  $page->admin_description = 'Home page';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Bun venit!';
  $display->uuid = '1a0ef835-0de2-4067-89c2-4ab136b06940';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-48d3132b-5a2d-4a12-9b03-258f325c7fcc';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Tinem legatura!',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '48d3132b-5a2d-4a12-9b03-258f325c7fcc';
    $display->content['new-48d3132b-5a2d-4a12-9b03-258f325c7fcc'] = $pane;
    $display->panels['left'][0] = 'new-48d3132b-5a2d-4a12-9b03-258f325c7fcc';
    $pane = new stdClass();
    $pane->pid = 'new-21b15334-60d6-44ab-ba8d-ed4f665372ad';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p style="text-align: center;"><em>Urmariti-ne pe Facebook, LinkedIn sau&nbsp;</em><em style="line-height: 1.538em;">canalul nostru de Youtube.</em></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'follow-us-on',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '21b15334-60d6-44ab-ba8d-ed4f665372ad';
    $display->content['new-21b15334-60d6-44ab-ba8d-ed4f665372ad'] = $pane;
    $display->panels['left'][1] = 'new-21b15334-60d6-44ab-ba8d-ed4f665372ad';
    $pane = new stdClass();
    $pane->pid = 'new-994f5b2b-5860-4d30-bc9b-3ea4a91cadce';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p style="text-align: center;"><img alt="" src="/sites/default/files/styles/vertical-line.png" style="width: 115px; height: 150px;"></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'line-separator',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '994f5b2b-5860-4d30-bc9b-3ea4a91cadce';
    $display->content['new-994f5b2b-5860-4d30-bc9b-3ea4a91cadce'] = $pane;
    $display->panels['middle'][0] = 'new-994f5b2b-5860-4d30-bc9b-3ea4a91cadce';
    $pane = new stdClass();
    $pane->pid = 'new-95c80e44-61bc-40fc-b78d-0a4c9135d4c3';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'simplenews-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'news-letter-subscribe',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95c80e44-61bc-40fc-b78d-0a4c9135d4c3';
    $display->content['new-95c80e44-61bc-40fc-b78d-0a4c9135d4c3'] = $pane;
    $display->panels['right'][0] = 'new-95c80e44-61bc-40fc-b78d-0a4c9135d4c3';
    $pane = new stdClass();
    $pane->pid = 'new-8d835f17-2542-4763-a087-9b193420c732';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p style="text-align: center;"><em>Aboneaza-te acum pentru a afla ultimele noastre noutati.</em></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'subscribe-now-newsletter',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8d835f17-2542-4763-a087-9b193420c732';
    $display->content['new-8d835f17-2542-4763-a087-9b193420c732'] = $pane;
    $display->panels['right'][1] = 'new-8d835f17-2542-4763-a087-9b193420c732';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
