<?php
/**
 * @file
 * communitygathering.features.inc
 */

/**
 * Implements hook_node_info().
 */
function communitygathering_node_info() {
  $items = array(
    'communitygatherings_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Event to add to communitygatherings list.'),
      'has_title' => '1',
      'title_label' => t('Event'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
