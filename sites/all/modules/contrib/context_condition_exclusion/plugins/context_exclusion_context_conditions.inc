<?php

class context_exclusion_context_condition_exclusion extends context_condition_path {

  const MATCH_NOT_FOUND = 0;
  const MATCH_FOUND = 1;
  const MATCH_EXCLUDE = 2;

  const NODE_VIEW = 0;
  const NODE_FORM = 1;
  const NODE_FORM_ONLY = 2;

  function condition_values() {
    $values = array();
    foreach (node_type_get_types() as $type) {
      $values[$type->type] = check_plain($type->name);
    }

    return $values;
  }

  function options_form($context) {
    $defaults = $this->fetch_from_context($context, 'options');

    $items = array(
        'node_form' => array(
            '#title' => t('Set on node form'),
            '#type' => 'select',
            '#options' => array(
                self::NODE_VIEW => t('No'),
                self::NODE_FORM => t('Yes'),
                self::NODE_FORM_ONLY => t('Only on node form')
            ),
            '#description' => t('Set this context on node forms'),
            '#default_value' => isset($defaults['node_form']) ? $defaults['node_form'] : TRUE,
        ),
        'paths' => parent::condition_form($context),
      'reverse' => array(
        '#title' => t('Reverse the result of the check'),
        '#type' => 'checkbox',
        '#description' => t('If checked then the result of the node type and exclusion checks will be reversed. Let\'s you stop a context from working on certain nodes.')
      )
    );

    $items['paths']['#default_value'] = isset($defaults['paths']) ? $defaults['paths'] : '';
    $items['paths']['#description'] = t('The paths to include or exclude');

    return $items;
  }

  function options_form_submit($values) {
    $values['paths'] = implode("\n", parent::condition_form_submit( $values['paths']) );

    return $values;
  }

  function condition_form_submit($values) {
    return $values;
  }

  function condition_form($context) {
    return array(
        '#title' => $this->title,
        '#description' => $this->description,
        '#options' => $this->condition_values(),
        '#type' => 'checkboxes',
        '#default_value' => $this->fetch_from_context($context, 'values'),
    );
  }

  function execute($node, $op) {
    if (!$this->condition_used()) {
      return NULL;
    }

    $current_path = array(drupal_get_path_alias($_GET['q']));
    if ($current_path[0] != $_GET['q']) {
      $current_path[] = $_GET['q'];
    }

    foreach ($this->get_contexts() as $context ) {
      $options = $this->fetch_from_context($context, 'options');
      $paths = explode( "\n", trim($options['paths']) );
      $selected_nodes = $this->fetch_from_context($context, 'values');
      $selected_nodes = array_filter($selected_nodes);

      $result = $this->match_path($current_path, $paths, TRUE);
      if ( self::MATCH_EXCLUDE === $result) {

      }
      elseif (self::MATCH_FOUND === $result) {
        $this->condition_met($context, $current_path);
      }
      else {  // MATCH_NOT_FOUND
        $match_on_form = empty($options['node_form']) ?
                            FALSE :
                            in_array(
                                     $options['node_form'],
                                     array( self::NODE_FORM, self::NODE_FORM_ONLY)
                                     );

        // If configured to show on forms and we're on a form
        $match_on_form = 'form' === $op && $match_on_form;

        // If set to only show on forms and we're not on a form
        $match_on_not_form = 'form' !== $op && self::NODE_FORM_ONLY !== $options['node_form'];

        $operation_match = $match_on_form || $match_on_not_form;

        if ( $operation_match && in_array($node->type, $selected_nodes) ) {
          $this->condition_met($context, $node->type);
        }
      }
    }
  }

  protected function match_path($subject, $patterns, $path = FALSE) {
    static $regexps;
    $match = self::MATCH_NOT_FOUND;
    $positives = $negatives = 0;
    $subject = !is_array($subject) ? array($subject) : $subject;
    foreach ($patterns as $pattern) {
      if ( empty($pattern) ) {
        continue;
      }

      if (strpos($pattern, '~') === 0) {
        $negate = TRUE;
        $negatives++;
      }
      else {
        $negate = FALSE;
        $positives++;
      }
      $pattern = ltrim($pattern, '~');
      if (!isset($regexps[$pattern])) {
        if ($path) {
          $regexps[$pattern] = '/^(' . preg_replace(array('/(\r\n?|\n)/', '/\\\\\*/', '/(^|\|)\\\\<front\\\\>($|\|)/'), array('|', '.*', '\1' . preg_quote(variable_get('site_frontpage', 'node'), '/') . '\2'), preg_quote($pattern, '/')) . ')$/';
        }
        else {
          $regexps[$pattern] = '/^(' . preg_replace(array('/(\r\n?|\n)/', '/\\\\\*/'), array('|', '.*'), preg_quote($pattern, '/')) . ')$/';
        }
      }
      foreach ($subject as $value) {
        if (preg_match($regexps[$pattern], $value)) {
          if ($negate) {
            return self::MATCH_EXCLUDE;
          }
          $match = self::MATCH_FOUND;
        }
      }
    }

    return $match;
  }
}
