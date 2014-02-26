<?php
/**
 * @file
 * us_courts_defaults_district.features.content.inc
 */

/**
 * Implementation of hook_content_defaults().
 */
function us_courts_defaults_district_content_defaults() {
$content = array();
$content['alternative_dispute_resolution'] = (object)array(
  'exported_path' => 'alternative-dispute-resolution',
  /*'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/alternative_dispute_resolution',
    'router_path' => 'node/%',
    'link_title' => 'Alternative Dispute Resolution',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node-name/programs_and_services',
    'identifier' => 'main-menu:node-name/alternative_dispute_resolution',
  ), */
  'title' => 'Alternative Dispute Resolution',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1316034923',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'alternative_dispute_resolution',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Nulla vitae elit libero, a pharetra augue. Vestibulum id ligula porta felis euismod semper. Donec id elit non mi porta gravida at eget metus. &nbsp; Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Donec ullamcorper nulla non metus auctor fringilla. Maecenas faucibus mollis interdum. Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Maecenas faucibus mollis interdum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Nulla vitae elit libero, a pharetra augue. Vestibulum id ligula porta felis euismod semper. Donec id elit non mi porta gravida at eget metus.   Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Donec ullamcorper nulla non metus auctor fringilla. Maecenas faucibus mollis interdum. Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Maecenas faucibus mollis interdum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['criminal_justice_act_info'] = (object)array(
  'exported_path' => 'criminal-justice-act-info',
  /*'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/criminal_justice_act_info',
    'router_path' => 'node/%',
    'link_title' => 'Criminal Justice Act',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'identifier' => 'main-menu:node-name/criminal_justice_act_info',
  ), */
  'title' => 'Criminal Justice Act',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1316034831',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'criminal_justice_act_info',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><strong><em>Post information for CJA attorneys, including rates, fees, procedures, etc.</em></strong></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><strong><em>Post information for CJA attorneys, including rates, fees, procedures, etc.</em></strong></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['jury_info'] = (object)array(
  'exported_path' => 'jury-info',
  /*'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/jury_info',
    'router_path' => 'node/%',
    'link_title' => 'Jury Info',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'identifier' => 'main-menu:node-name/jury_info',
  ), */
  'title' => 'Jury Info',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1316034732',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'jury_info',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><strong><em>Post overview information for potential jurors and links to directions to the courthouse, e-juror if your court uses this, and any other relevant information to help jurors.</em></strong></p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><strong><em>Post overview information for potential jurors and links to directions to the courthouse, e-juror if your court uses this, and any other relevant information to help jurors.</em></strong></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
return $content;
}
