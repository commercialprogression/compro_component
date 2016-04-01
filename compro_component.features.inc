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
    'component' => array(
      'name' => 'component',
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
