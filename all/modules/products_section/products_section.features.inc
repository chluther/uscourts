<?php
/**
 * @file
 * products_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function products_section_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function products_section_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function products_section_node_info() {
  $items = array(
    'product_sheet' => array(
      'name' => t('Product Sheet'),
      'base' => 'node_content',
      'description' => t('Product Sheet template for all items in the pipeline or in production.'),
      'has_title' => '1',
      'title_label' => t('Product Name'),
      'help' => '',
    ),
  );
  return $items;
}
