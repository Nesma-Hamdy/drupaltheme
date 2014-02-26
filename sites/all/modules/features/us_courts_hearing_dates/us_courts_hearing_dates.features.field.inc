<?php
/**
 * @file
 * us_courts_hearing_dates.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function us_courts_hearing_dates_field_default_fields() {
  $fields = array();

  // Exported field: 'node-hearing_date-body'
  $fields['node-hearing_date-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'hearing_date',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '2',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-hearing_date-field_hd_address'
  $fields['node-hearing_date-field_hd_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hd_address',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'hearing_date',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_hd_address',
      'label' => 'Address',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-hearing_date-field_hd_table'
  $fields['node-hearing_date-field_hd_table'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hd_table',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'hearing_date',
      'default_value' => array(
        0 => array(
          'format' => 'full_html',
          'value' => '<strong>All motions that require notice to be sent by the court must be scheduled for a minimum of 30 days from the date of filing.</strong><br />

<table width="100%" border="0" cellspacing="0" cellpadding="0">
  <tr>
    <th scope="col"><p>Motions Chapter 7 and 11 and Objections to Information Notices</p>
    <p>Monday 10:00am</p></th>
    <th scope="col"><p>U.S. Trustee Motions and Status Conference Chapter 11</p>
    <p>Monday 11:00am</p></th>
    <th scope="col"><p>Motions Chapter 13</p>
    <p>Tuesday 9am, Chapter 13 Confirmation Hearings will be heard at 9:30 a.m.</p></th>
    <th scope="col"><p>Fee Applications Chapter 13</p>
    <p>Tuesday 12:00 Noon</p></th>
    <th scope="col"><p>Fee Applications Chapter 7 and 11</p>
    <p>Thursday 10:00am</p></th>
    <th scope="col"><p>Disclosure Statement and Confirmation Chapter 11</p>
    <p>Thursday 10:00am</p></th>
    <th scope="col"><p>Pre-Trials</p>
    <p>Pre trial dates should be set 90 days out Wednesday 2:00pm</p></th>
    <th scope="col"><p>Newark Hearing Dates</p>
    <p>Call Court for times</p></th>
  </tr>
  <tr>
    <td>04/25/2011 </td>
    <td>&nbsp;</td>
    <td>04/25/2011 </td>
    <td>04/25/2011 </td>
    <td>04/25/2011 </td>
    <td>04/25/2011 </td>
    <td>04/25/2011 </td>
    <td>&nbsp;</td>
  </tr>
  <tr>
    <td>05/02/2011<br>
      05/09/2011<br>
      05/16/2011<br>
    05/23/2011</td>
    <td>05/02/2011<br>
    05/16/2011 </td>
    <td>05/02/2011<br>
    05/16/2011 </td>
    <td>05/02/2011<br>
    05/16/2011 </td>
    <td>05/02/2011<br>
    05/16/2011 </td>
    <td>&nbsp;</td>
    <td>05/02/2011<br>
    05/16/2011 </td>
    <td>&nbsp;</td>
  </tr>
</table>',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_hd_table',
      'label' => 'Hearing Dates',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-hearing_date-field_judge'
  $fields['node-hearing_date-field_judge'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_judge',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'article' => 0,
          'faq' => 0,
          'form' => 0,
          'judge' => 'judge',
          'local_rule' => 0,
          'news_announcements' => 0,
          'opinion' => 0,
          'page' => 0,
          'wp_blog' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'hearing_date',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_judge',
      'label' => 'Judge',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Body');
  t('Hearing Dates');
  t('Judge');

  return $fields;
}
