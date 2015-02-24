<?php

/**
 * @file
 * Provides integration with Rules.
 */

/**
 * Implements hook_rules_event_info().
 */
function lcs_quote_commerce_cart_rules_event_info() {
  return array(
    'lcs_quote_commerce_cart_get_quote' => array(
      'label' => t('Create quote from the commerce cart'),
      'group' => t('LCS Quote'),
      'variables' => array(
        'order' => array(
          'type' => 'commerce_order',
          'label' => t('Order from cart'),
        ),
      ),
    ),
  );
}
