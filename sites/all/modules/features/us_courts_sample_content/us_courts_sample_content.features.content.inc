<?php
/**
 * @file
 * us_courts_sample_content.features.content.inc
 */

/**
 * Implementation of hook_content_defaults().
 */
function us_courts_sample_content_content_defaults() {
$content = array();
$content['sample_checklist_item_one'] = (object)array(
  'title' => 'Checklist Item 1',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'checklist_items',
  'language' => 'und',
  'created' => '1311458105',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_checklist_item_one',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>
	Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['sample_checklist_item_two'] = (object)array(
  'title' => 'Checklist Item 2',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'checklist_items',
  'language' => 'und',
  'created' => '1311458142',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_checklist_item_two',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>
	Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['sample_court'] = (object)array(
  'exported_path' => 'court-info/court-locations/newark',
  'title' => 'Newark',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'court',
  'language' => 'und',
  'created' => '1303497718',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_court',
  'body' => array(),
  'field_court_mail_add' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	US Bankruptcy Court<br />
	District of New Jersey<br />
	402 Market Street<br />
	Camden, NJ 08101</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>
	US Bankruptcy Court<br />
	District of New Jersey<br />
	402 Market Street<br />
	Camden, NJ 08101</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_court_st_add' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	US Bankruptcy Court<br />
	District of New Jersey<br />
	No Summary was given</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>
	US Bankruptcy Court<br />
	District of New Jersey<br />
	No Summary was given</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_court_staff' => array(
    'und' => array(
      0 => array(
        'value' => '<table border="0" cellpadding="0" cellspacing="0" style="width: 100%; ">
	<tbody>
		<tr>
			<td>
				<b>Deputy-in-Charge:</b></td>
			<td>
				&nbsp;</td>
		</tr>
		<tr>
			<td>
				John Doe</td>
			<td>
				XXX-XXX-XXXX</td>
		</tr>
	</tbody>
</table>
<p>
	<br />
	&nbsp;</p>
	<p><em><strong>Names and contact info need to be made generic -- i.e. John Doe,&nbsp; XXX-XXX-XXXX</strong></em></p>
',
        'format' => 'full_html',
        'safe_value' => '<table border="0" cellpadding="0" cellspacing="0" style="width: 100%; "><tbody><tr><td>
				<b>Deputy-in-Charge:</b></td>
<td>
				 </td>
</tr><tr><td>
				John Doe</td>
<td>
				XXX-XXX-XXXX</td>
</tr></tbody></table><p>
	<br />
	&nbsp;</p>
	<p><em><strong>Names and contact info need to be made generic -- i.e. John Doe,&nbsp; XXX-XXX-XXXX</strong></em></p>
',
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
);
$content['sample_court_two'] = (object)array(
  'exported_path' => 'court-info/court-locations/trenton',
  'title' => 'Trenton',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'court',
  'language' => 'und',
  'created' => '1304531615',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_court_two',
  'body' => array(),
  'field_court_mail_add' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	US Bankruptcy Court<br />
	District of New Jersey<br />
	402 Market Street<br />
	Camden, NJ 08101</p>
',
        'summary' => '<p>
	&nbsp;</p>
<p>
	US Bankruptcy Court<br />
	District of New Jersey</p>
',
        'format' => 'full_html',
        'safe_value' => '<p>
	US Bankruptcy Court<br />
	District of New Jersey<br />
	402 Market Street<br />
	Camden, NJ 08101</p>
',
        'safe_summary' => '<p>
	 </p>
<p>
	US Bankruptcy Court<br />
	District of New Jersey</p>
',
      ),
    ),
  ),
  'field_court_st_add' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	US Bankruptcy Court<br />
	District of New Jersey<br />
	Long Version of Address</p>
',
        'summary' => '<p>
	US Bankruptcy Court<br />
	District of New Jersey</p>
',
        'format' => 'full_html',
        'safe_value' => '<p>
	US Bankruptcy Court<br />
	District of New Jersey<br />
	Long Version of Address</p>
',
        'safe_summary' => '<p>
	US Bankruptcy Court<br />
	District of New Jersey</p>
',
      ),
    ),
  ),
  'field_court_staff' => array(
    'und' => array(
      0 => array(
        'value' => '<table border="0" cellpadding="0" cellspacing="0" style="width: 100%; ">
	<tbody>
		<tr>
			<td>
				<b>Deputy-in-Charge:</b></td>
			<td>
				&nbsp;</td>
		</tr>
		<tr>
			<td>
				John Doe</td>
			<td>
				XXX-XXX-XXXX</td>
		</tr>
	</tbody>
</table>
<p>&nbsp;</p>
<p><em><strong>Names and contact info need to be made generic -- i.e. John Doe,&nbsp; XXX-XXX-XXXX</strong></em></p>
',
        'format' => 'full_html',
        'safe_value' => '<table border="0" cellpadding="0" cellspacing="0" style="width: 100%; "><tbody><tr><td>
				<b>Deputy-in-Charge:</b></td>
<td>
				 </td>
</tr><tr><td>
				John Doe</td>
<td>
				XXX-XXX-XXXX</td>
</tr></tbody></table><p>&nbsp;</p>
<p><em><strong>Names and contact info need to be made generic -- i.e. John Doe,&nbsp; XXX-XXX-XXXX</strong></em></p>
',
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
$content['sample_faq_1'] = (object)array(
  'exported_path' => 'content/sample-question',
  'title' => 'Sample Question',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'faq',
  'language' => 'und',
  'created' => '1303497687',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_faq_1',
  'field_faq_answer' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Nulla vitae elit libero, a pharetra augue. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Sed posuere consectetur est at lobortis. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.</p>
',
        'format' => 'full_html',
        'safe_value' => '<p>
	Nulla vitae elit libero, a pharetra augue. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Sed posuere consectetur est at lobortis. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.</p>
',
      ),
    ),
  ),
  'field_faq_type' => array(
    'und' => array(
      0 => array(
        'value' => 'common',
      ),
    ),
  ),
);
$content['sample_faq_2'] = (object)array(
  'exported_path' => 'content/sample-question-2',
  'title' => 'Sample Question 2',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'faq',
  'language' => 'und',
  'created' => '1303497703',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_faq_2',
  'field_faq_answer' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Nulla vitae elit libero, a pharetra augue. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Sed posuere consectetur est at lobortis. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.</p>
',
        'format' => 'full_html',
        'safe_value' => '<p>
	Nulla vitae elit libero, a pharetra augue. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Sed posuere consectetur est at lobortis. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.</p>
',
      ),
    ),
  ),
  'field_faq_type' => array(
    'und' => array(
      0 => array(
        'value' => 'cm_ecf',
      ),
    ),
  ),
);
$content['sample_form'] = (object)array(
  'exported_path' => 'forms/sample-form',
  'title' => 'Sample Form',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'form',
  'language' => 'und',
  'created' => '1303497787',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_form',
  'body' => array(),
  'field_form_cat' => array(
    'und' => array(
      0 => array(
        'value' => 'mandatory_forms',
      ),
    ),
  ),
  'field_form_file' => array(
    'und' => array(
      0 => array(
        'display' => '1',
        'description' => '',
        'filename' => 'form-sample.txt',
        'uri' => 'public://form-sample.txt',
        'filemime' => 'text/plain',
        'filesize' => '20',
        'status' => '1',
        'rdf_mapping' => array(),
        'image' => 'sample text for form',
      ),
    ),
  ),
  'field_meta_data' => array(
    'und' => array(
      0 => array(
        'value' => 'Meta Data Here',
        'format' => NULL,
        'safe_value' => 'Meta Data Here',
      ),
    ),
  ),
  'field_rel_form' => array(
    'und' => array(
      0 => array(
        'machine_name' => 'sample_form_2',
      ),
    ),
  ),
  'field_rel_go' => array(
    'und' => array(
      0 => array(
        'machine_name' => 'sample_gen_order_2',
      ),
    ),
  ),
  'field_rel_lr' => array(
    'und' => array(
      0 => array(
        'machine_name' => 'sample_local_rule',
      ),
      1 => array(
        'machine_name' => 'sample_local_rule_2',
      ),
    ),
  ),
  'field_form_rev_date' => array(
    'und' => array(
      0 => array(
        'value' => '2010-08-14T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
);
$content['sample_form_2'] = (object)array(
  'exported_path' => 'forms/sample-form-2',
  'title' => 'Sample Form 2',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'form',
  'language' => 'und',
  'created' => '1303497827',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_form_2',
  'body' => array(),
  'field_form_cat' => array(
    'und' => array(
      0 => array(
        'value' => 'recommended_forms',
      ),
    ),
  ),
  'field_form_file' => array(
    'und' => array(
      0 => array(
        'display' => '1',
        'description' => '',
        'filename' => 'form-sample-2.txt',
        'uri' => 'public://form-sample-2.txt',
        'filemime' => 'text/plain',
        'filesize' => '20',
        'status' => '1',
        'rdf_mapping' => array(),
        'image' => 'sample text for form',
      ),
    ),
  ),
  'field_meta_data' => array(
    'und' => array(
      0 => array(
        'value' => 'Meta Data Here',
        'format' => NULL,
        'safe_value' => 'Meta Data Here',
      ),
    ),
  ),
  'field_rel_go' => array(
    'und' => array(
      0 => array(
        'machine_name' => 'sample_gen_order_2',
      ),
    ),
  ),
);
$content['sample_gen_order'] = (object)array(
  'exported_path' => 'content/sample-general-order',
  'title' => 'Sample General Order',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'general_order',
  'language' => 'und',
  'created' => '1304008323',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_gen_order',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Cras justo odio, dapibus ac facilisis in, egestas eget quam. Maecenas faucibus mollis interdum. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Donec id elit non mi porta gravida at eget metus. Donec sed odio dui.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Cras justo odio, dapibus ac facilisis in, egestas eget quam. Maecenas faucibus mollis interdum. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Donec id elit non mi porta gravida at eget metus. Donec sed odio dui.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_go_file' => array(
    'und' => array(
      0 => array(
        'display' => '1',
        'description' => '',
        'filename' => 'sample_general_order.txt',
        'uri' => 'public://sample_general_order.txt',
        'filemime' => 'text/plain',
        'filesize' => '20',
        'status' => '1',
        'rdf_mapping' => array(),
        'image' => 'Sample general order',
      ),
    ),
  ),
  'field_go_type' => array(
    'und' => array(
      0 => array(
        'value' => 'chap_11',
      ),
    ),
  ),
);
$content['sample_gen_order_2'] = (object)array(
  'exported_path' => 'content/sample-general-order-two',
  'title' => 'Sample General Order Two',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'general_order',
  'language' => 'und',
  'created' => '1304008347',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_gen_order_2',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Cras justo odio, dapibus ac facilisis in, egestas eget quam. Maecenas faucibus mollis interdum. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Donec id elit non mi porta gravida at eget metus. Donec sed odio dui.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Cras justo odio, dapibus ac facilisis in, egestas eget quam. Maecenas faucibus mollis interdum. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Donec id elit non mi porta gravida at eget metus. Donec sed odio dui.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_go_file' => array(
    'und' => array(
      0 => array(
        'display' => '1',
        'description' => '',
        'filename' => 'sample_general_order_two.txt',
        'uri' => 'public://sample_general_order_two.txt',
        'filemime' => 'text/plain',
        'filesize' => '20',
        'status' => '1',
        'rdf_mapping' => array(),
        'image' => 'Sample general order',
      ),
    ),
  ),
  'field_go_type' => array(
    'und' => array(
      0 => array(
        'value' => 'ele_file',
      ),
    ),
  ),
);
$content['sample_hearing_date'] = (object)array(
  'exported_path' => 'judges-info/hearing-dates/judge-john-example-hearing-dates',
  'title' => 'Judge John Example\'s Hearing Dates',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'hearing_date',
  'language' => 'und',
  'created' => '1311452367',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_hearing_date',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><em><strong>Here&rsquo;s where you&rsquo;ll input the hearing dates for an individual judge. You can use the table below as a template, or display it in a different customized way.</strong></em></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><em><strong>Here&rsquo;s where you&rsquo;ll input the hearing dates for an individual judge. You can use the table below as a template, or display it in a different customized way.</strong></em></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_hd_address' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Courthouse street address goes here</p>
',
        'format' => 'full_html',
        'safe_value' => '<p>Courthouse street address goes here</p>
',
      ),
    ),
  ),
  'field_hd_table' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	<strong>All motions that require notice to be sent by the court must be scheduled for a minimum of 30 days from the date of filing.</strong></p>
<br />
<table border="0" cellpadding="0" cellspacing="0" width="100%">
	<tbody>
		<tr>
			<th scope="col">
				<p>
					Motions Chapter 7 and 11 and Objections to Information Notices</p>
				<p>
					Monday 10:00am</p>
			</th>
			<th scope="col">
				<p>
					U.S. Trustee Motions and Status Conference Chapter 11</p>
				<p>
					Monday 11:00am</p>
			</th>
			<th scope="col">
				<p>
					Motions Chapter 13</p>
				<p>
					Tuesday 9am, Chapter 13 Confirmation Hearings will be heard at 9:30 a.m.</p>
			</th>
			<th scope="col">
				<p>
					Fee Applications Chapter 13</p>
				<p>
					Tuesday 12:00 Noon</p>
			</th>
			<th scope="col">
				<p>
					Fee Applications Chapter 7 and 11</p>
				<p>
					Thursday 10:00am</p>
			</th>
			<th scope="col">
				<p>
					Disclosure Statement and Confirmation Chapter 11</p>
				<p>
					Thursday 10:00am</p>
			</th>
			<th scope="col">
				<p>
					Pre-Trials</p>
				<p>
					Pre trial dates should be set 90 days out Wednesday 2:00pm</p>
			</th>
			<th scope="col">
				<p>
					Newark Hearing Dates</p>
				<p>
					Call Court for times</p>
			</th>
		</tr>
		<tr>
			<td>
				04/25/2011</td>
			<td>
				&nbsp;</td>
			<td>
				04/25/2011</td>
			<td>
				04/25/2011</td>
			<td>
				04/25/2011</td>
			<td>
				04/25/2011</td>
			<td>
				04/25/2011</td>
			<td>
				&nbsp;</td>
		</tr>
		<tr>
			<td>
				05/02/2011<br />
				05/09/2011<br />
				05/16/2011<br />
				05/23/2011</td>
			<td>
				05/02/2011<br />
				05/16/2011</td>
			<td>
				05/02/2011<br />
				05/16/2011</td>
			<td>
				05/02/2011<br />
				05/16/2011</td>
			<td>
				05/02/2011<br />
				05/16/2011</td>
			<td>
				&nbsp;</td>
			<td>
				05/02/2011<br />
				05/16/2011</td>
			<td>
				&nbsp;</td>
		</tr>
	</tbody>
</table>
',
        'format' => 'full_html',
        'safe_value' => '<p>
	<strong>All motions that require notice to be sent by the court must be scheduled for a minimum of 30 days from the date of filing.</strong></p>
<p></p>
<table border="0" cellpadding="0" cellspacing="0" width="100%"><tbody><tr><th scope="col">
<p>
					Motions Chapter 7 and 11 and Objections to Information Notices</p>
<p>
					Monday 10:00am</p>
</th>
<th scope="col">
<p>
					U.S. Trustee Motions and Status Conference Chapter 11</p>
<p>
					Monday 11:00am</p>
</th>
<th scope="col">
<p>
					Motions Chapter 13</p>
<p>
					Tuesday 9am, Chapter 13 Confirmation Hearings will be heard at 9:30 a.m.</p>
</th>
<th scope="col">
<p>
					Fee Applications Chapter 13</p>
<p>
					Tuesday 12:00 Noon</p>
</th>
<th scope="col">
<p>
					Fee Applications Chapter 7 and 11</p>
<p>
					Thursday 10:00am</p>
</th>
<th scope="col">
<p>
					Disclosure Statement and Confirmation Chapter 11</p>
<p>
					Thursday 10:00am</p>
</th>
<th scope="col">
<p>
					Pre-Trials</p>
<p>
					Pre trial dates should be set 90 days out Wednesday 2:00pm</p>
</th>
<th scope="col">
<p>
					Newark Hearing Dates</p>
<p>
					Call Court for times</p>
</th>
</tr><tr><td>
				04/25/2011</td>
<td>
				 </td>
<td>
				04/25/2011</td>
<td>
				04/25/2011</td>
<td>
				04/25/2011</td>
<td>
				04/25/2011</td>
<td>
				04/25/2011</td>
<td>
				 </td>
</tr><tr><td>
				05/02/2011<br />
				05/09/2011<br />
				05/16/2011<br />
				05/23/2011</td>
<td>
				05/02/2011<br />
				05/16/2011</td>
<td>
				05/02/2011<br />
				05/16/2011</td>
<td>
				05/02/2011<br />
				05/16/2011</td>
<td>
				05/02/2011<br />
				05/16/2011</td>
<td>
				 </td>
<td>
				05/02/2011<br />
				05/16/2011</td>
<td>
				 </td>
</tr></tbody></table>',
      ),
    ),
  ),
  'field_judge' => array(
    'und' => array(
      0 => array(
        'machine_name' => 'sample_judge',
      ),
    ),
  ),
);
$content['sample_judge'] = (object)array(
  'exported_path' => 'judges-info/judge-example',
  'title' => 'Judge John Example',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'judge',
  'language' => 'und',
  'created' => '1303494627',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_judge',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	<strong>United States Bankruptcy Judge for the District of New Jersey</strong> Chambers e-mail: <a href="mailto:John_Example@uscourts.gov">John_Example@uscourts.gov</a> For additional contact information, see <a href="http://www.uscourts.gov">www.uscourts.gov</a></p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>
	<strong>United States Bankruptcy Judge for the District of New Jersey</strong> Chambers e-mail: <a href="mailto:John_Example@uscourts.gov">John_Example@uscourts.gov</a> For additional contact information, see <a href="http://www.uscourts.gov">www.uscourts.gov</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_j_comm' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
      ),
    ),
  ),
  'field_j_copies' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
      ),
    ),
  ),
  'field_j_fee_apps' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
      ),
    ),
  ),
  'field_j_motions' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
      ),
    ),
  ),
  'field_j_reaf_agr' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
      ),
    ),
  ),
  'field_j_staff_first' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	<strong>Lorem Ipsum</strong>, Judicial Assistant 888-888-8888 <a href="mailto:email@domain.gov">email@domain.gov</a></p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p><strong>Lorem Ipsum</strong>, Judicial Assistant 888-888-8888 <a href="mailto:email@domain.gov">email@domain.gov</a></p>
',
      ),
    ),
  ),
  'field_j_staff_second' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	<strong>Ipsum Dolor</strong>, Generalist 999-999-9999</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p><strong>Ipsum Dolor</strong>, Generalist 999-999-9999</p>
',
      ),
    ),
  ),
  'field_j_trial' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam quis risus eget urna mollis ornare vel eu leo. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec sed odio dui. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec id elit non mi porta gravida at eget metus.</p>
',
      ),
    ),
  ),
);
$content['sample_local_rule'] = (object)array(
  'exported_path' => 'content/sample-local-rule',
  'title' => 'Sample Local Rule',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'local_rule',
  'language' => 'und',
  'created' => '1303497878',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_local_rule',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Cras mattis consectetur purus sit amet fermentum. Cras mattis consectetur purus sit amet fermentum. Nulla vitae elit libero, a pharetra augue. Nulla vitae elit libero, a pharetra augue. Sed posuere consectetur est at lobortis. Curabitur blandit tempus porttitor.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Cras mattis consectetur purus sit amet fermentum. Cras mattis consectetur purus sit amet fermentum. Nulla vitae elit libero, a pharetra augue. Nulla vitae elit libero, a pharetra augue. Sed posuere consectetur est at lobortis. Curabitur blandit tempus porttitor.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_lr_file' => array(
    'und' => array(
      0 => array(
        'display' => '1',
        'description' => '',
        'filename' => 'sample_local_rule.txt',
        'uri' => 'public://sample_local_rule.txt',
        'filemime' => 'text/plain',
        'filesize' => '26',
        'status' => '1',
        'rdf_mapping' => array(),
        'image' => 'Sample local rule document',
      ),
    ),
  ),
);
$content['sample_local_rule_2'] = (object)array(
  'exported_path' => 'content/sample-local-rule-two',
  'title' => 'Sample Local Rule Two',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'local_rule',
  'language' => 'und',
  'created' => '1304006942',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_local_rule_2',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Cras mattis consectetur purus sit amet fermentum. Cras mattis consectetur purus sit amet fermentum. Nulla vitae elit libero, a pharetra augue. Nulla vitae elit libero, a pharetra augue. Sed posuere consectetur est at lobortis. Curabitur blandit tempus porttitor.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Cras mattis consectetur purus sit amet fermentum. Cras mattis consectetur purus sit amet fermentum. Nulla vitae elit libero, a pharetra augue. Nulla vitae elit libero, a pharetra augue. Sed posuere consectetur est at lobortis. Curabitur blandit tempus porttitor.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_lr_file' => array(
    'und' => array(
      0 => array(
        'display' => '1',
        'description' => '',
        'filename' => 'sample_local_rule_two.txt',
        'uri' => 'public://sample_local_rule_two.txt',
        'filemime' => 'text/plain',
        'filesize' => '26',
        'status' => '1',
        'rdf_mapping' => array(),
        'image' => 'Sample local rule document',
      ),
    ),
  ),
);
$content['sample_news_item'] = (object)array(
  'exported_path' => 'news/sample-news-item',
  'title' => 'Sample News Item',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'news_announcements',
  'language' => 'und',
  'created' => '1303497898',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_news_item',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Sample News Item</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Sample News Item</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2011-04-22T04:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
);
$content['sample_opinion'] = (object)array(
  'exported_path' => 'content/sample-opinion',
  'title' => 'Sample Opinion',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'opinion',
  'language' => 'und',
  'created' => '1303497921',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_opinion',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Nulla vitae elit libero, a pharetra augue. Maecenas faucibus mollis interdum. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Donec id elit non mi porta gravida at eget metus. Aenean lacinia bibendum nulla sed consectetur.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Nulla vitae elit libero, a pharetra augue. Maecenas faucibus mollis interdum. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Donec id elit non mi porta gravida at eget metus. Aenean lacinia bibendum nulla sed consectetur.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_judge' => array(
    'und' => array(
      0 => array(
        'machine_name' => 'sample_judge',
      ),
    ),
  ),
  'field_opinion_date' => array(
    'und' => array(
      0 => array(
        'value' => '2011-04-22T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_opinion_file' => array(
    'und' => array(
      0 => array(
        'display' => '1',
        'description' => '',
        'filename' => 'sample-opinion.txt',
        'uri' => 'public://sample-opinion.txt',
        'filemime' => 'text/plain',
        'filesize' => '14',
        'status' => '1',
        'rdf_mapping' => array(),
        'image' => 'sample opinion',
      ),
    ),
  ),
);
/*$content['sample_opinion_two'] = (object)array(
  'exported_path' => 'content/re-cantwell-no-03-45208-336-br-688',
  'title' => 'In re Cantwell, No. 03-45208, 336 B.R. 688',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'opinion',
  'language' => 'und',
  'created' => '1303967412',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'sample_opinion_two',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Debtors&rsquo; Chapter 11 plan was confirmed with issue of appropriate cramdown rate of interest for junior mortgagee reserved. In the absence of an efficient market, court determined to use formula approach to calculate appropriate cramdown interest rate. Negligent risk of nonpayment made it appropriate to add a risk factor of only 1% to the national prime rate.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Debtors’ Chapter 11 plan was confirmed with issue of appropriate cramdown rate of interest for junior mortgagee reserved. In the absence of an efficient market, court determined to use formula approach to calculate appropriate cramdown interest rate. Negligent risk of nonpayment made it appropriate to add a risk factor of only 1% to the national prime rate.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_judge' => array(
    'und' => array(
      0 => array(
        'machine_name' => 'sample_judge',
      ),
    ),
  ),
  'field_opinion_date' => array(
    'und' => array(
      0 => array(
        'value' => '2006-01-05T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_opinion_file' => array(
    'und' => array(
      0 => array(
        'display' => '1',
        'description' => '',
        'filename' => 'sample_opinion_two.txt',
        'uri' => 'public://sample_opinion_two.txt',
        'filemime' => 'text/plain',
        'filesize' => '23',
        'status' => '1',
        'rdf_mapping' => array(),
        'image' => 'Sample opinion document',
      ),
    ),
  ),
); */
return $content;
}
