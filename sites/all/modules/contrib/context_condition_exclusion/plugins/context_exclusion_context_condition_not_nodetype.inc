<?php

class context_exclusion_context_condition_not_nodetype extends
  context_condition_node {

  function options_form($context) {
    return array();
  }

  function execute($node, $op) {
    foreach ($this->get_contexts( $node->type ) as $context) {
      $excluded_types = $this->fetch_from_context($context, 'values');

      if ( !in_array( $node->type, $excluded_types ) ) {
        // Check the node form option.
        $this->condition_met( $context, $node->type );
      }
    }
  }

}
