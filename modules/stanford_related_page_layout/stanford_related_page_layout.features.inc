<?php
/**
 * @file
 * stanford_related_page_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_related_page_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}