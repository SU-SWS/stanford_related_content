<?php
/**
 * @file
 * stanford_related_events_upcoming_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_related_events_upcoming_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_upcoming_related';
  $context->description = 'Upcoming Events page in Events section for related content';
  $context->tag = 'Events';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events/upcoming-events/related-content' => 'events/upcoming-events/related-content',
        'news-events/upcoming-events' => 'news-events/upcoming-events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fdbb6ea2c420f895188b18052fc9c443' => array(
          'module' => 'views',
          'delta' => 'fdbb6ea2c420f895188b18052fc9c443',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Upcoming Events page in Events section for related content');
  $export['events_upcoming_related'] = $context;

  return $export;
}
