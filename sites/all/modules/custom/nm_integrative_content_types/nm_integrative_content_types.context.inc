<?php
/**
 * @file
 * nm_integrative_content_types.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nm_integrative_content_types_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'oferte';
  $context->description = '';
  $context->tag = 'oferte';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'oferte/*' => 'oferte/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'oferte',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('oferte');
  $export['oferte'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'terapeuti';
  $context->description = '';
  $context->tag = 'terapeuti';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'terapeuti/*' => 'terapeuti/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'terapeuti',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('terapeuti');
  $export['terapeuti'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tratamente';
  $context->description = '';
  $context->tag = 'tratament';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'tratamente/*' => 'tratamente/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'tratamente',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('tratament');
  $export['tratamente'] = $context;

  return $export;
}
