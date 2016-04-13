<?php
/**
 * @file
 * compro_component.features.inc
 */

/**
 * Implements hook_eck_entity_type_info().
 */
function compro_component_eck_entity_type_info() {
  $items = array(
    'compro_component' => array(
      'name' => 'compro_component',
      'label' => 'Component',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}
