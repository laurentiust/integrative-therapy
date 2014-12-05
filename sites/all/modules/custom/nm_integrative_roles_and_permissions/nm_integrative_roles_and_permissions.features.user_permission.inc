<?php
/**
 * @file
 * nm_integrative_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nm_integrative_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create despre_noi content'.
  $permissions['create despre_noi content'] = array(
    'name' => 'create despre_noi content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create oferte content'.
  $permissions['create oferte content'] = array(
    'name' => 'create oferte content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create terapeuti content'.
  $permissions['create terapeuti content'] = array(
    'name' => 'create terapeuti content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tratamente content'.
  $permissions['create tratamente content'] = array(
    'name' => 'create tratamente content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any despre_noi content'.
  $permissions['delete any despre_noi content'] = array(
    'name' => 'delete any despre_noi content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any oferte content'.
  $permissions['delete any oferte content'] = array(
    'name' => 'delete any oferte content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any terapeuti content'.
  $permissions['delete any terapeuti content'] = array(
    'name' => 'delete any terapeuti content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tratamente content'.
  $permissions['delete any tratamente content'] = array(
    'name' => 'delete any tratamente content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own despre_noi content'.
  $permissions['delete own despre_noi content'] = array(
    'name' => 'delete own despre_noi content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own oferte content'.
  $permissions['delete own oferte content'] = array(
    'name' => 'delete own oferte content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own terapeuti content'.
  $permissions['delete own terapeuti content'] = array(
    'name' => 'delete own terapeuti content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tratamente content'.
  $permissions['delete own tratamente content'] = array(
    'name' => 'delete own tratamente content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any despre_noi content'.
  $permissions['edit any despre_noi content'] = array(
    'name' => 'edit any despre_noi content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any oferte content'.
  $permissions['edit any oferte content'] = array(
    'name' => 'edit any oferte content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any terapeuti content'.
  $permissions['edit any terapeuti content'] = array(
    'name' => 'edit any terapeuti content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tratamente content'.
  $permissions['edit any tratamente content'] = array(
    'name' => 'edit any tratamente content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own despre_noi content'.
  $permissions['edit own despre_noi content'] = array(
    'name' => 'edit own despre_noi content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own oferte content'.
  $permissions['edit own oferte content'] = array(
    'name' => 'edit own oferte content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own terapeuti content'.
  $permissions['edit own terapeuti content'] = array(
    'name' => 'edit own terapeuti content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tratamente content'.
  $permissions['edit own tratamente content'] = array(
    'name' => 'edit own tratamente content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use text format despre_noi'.
  $permissions['use text format despre_noi'] = array(
    'name' => 'use text format despre_noi',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
