<?php
/**
 * @file
 * stanford_related_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_related_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_page_related';
  $context->description = 'Related content on pages';
  $context->tag = 'Page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_page' => 'stanford_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page');
  t('Related content on pages');
  $export['stanford_page_related'] = $context;

  return $export;
}
