<?php
/**
 * @file
 * us_courts_defaults.features.content.inc
 */

/**
 * Implementation of hook_content_defaults().
 */
function us_courts_defaults_content_defaults() {
global $base_url;
$content = array();
$content['case_info'] = (object)array(
  /*
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/case_info',
    'router_path' => 'node/%',
    'link_title' => 'Case Info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-44',
    'identifier' => 'main-menu:node-name/case_info',
  ),
  */
  'exported_path' => 'case-info',
  'title' => 'Case Info',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1303961524',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'case_info',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><em><strong>Links to PACER and CM/ECF, with brief descriptions of what each offers.</strong></em></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><em><strong>Links to PACER and CM/ECF, with brief descriptions of what each offers.</strong></em></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['cm_ecf_case_info'] = (object)array(
  /*
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/cm_ecf_case_info',
    'router_path' => 'node/%',
    'link_title' => 'CM/ECF Case Info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node-name/case_info',
    'identifier' => 'main-menu:node-name/cm_ecf_case_info',
  ),
  */
  'exported_path' => 'case-info/cm-ecf-case-info',
  'title' => 'CM/ECF Case Info',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1304106923',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'cm_ecf_case_info',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>
	Public Access to Court Electronic Records (PACER)</h3>
<p>
	Public Access to Court Electronic Records (PACER) is an electronic public access service that allows users to obtain case and docket information from federal appellate, district and bankruptcy courts, and the PACER Case Locator via the Internet. PACER is provided by the federal Judiciary in keeping with its commitment to providing public access to court information via a centralized service.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h3>
	Public Access to Court Electronic Records (PACER)</h3>
<p>
	Public Access to Court Electronic Records (PACER) is an electronic public access service that allows users to obtain case and docket information from federal appellate, district and bankruptcy courts, and the PACER Case Locator via the Internet. PACER is provided by the federal Judiciary in keeping with its commitment to providing public access to court information via a centralized service.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['court_holidays'] = (object)array(
  'exported_path' => 'court-info/court-holidays',
  'title' => 'Court Holidays',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1304450548',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'court_holidays',
   'body' => array(
    'und' => array(
      0 => array(
        'value' => '<em><strong>Provide a listing of the days in the coming year that the court will take a holiday.</strong></em>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<em><strong>Provide a listing of the days in the coming year that the court will take a holiday.</strong></em>
',
        'safe_summary' => '',
      ),
    ),
  ),
);


/*Added to test new content 09/30/2011 */
$content['Judicial_Conduct_Disability'] = (object)array(
  'exported_path' => 'judicial-conduct-disability',
  'title' => 'Judicial Conduct & Disability',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1317407649',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'judicial_conduct_disability',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Codes of Conduct and related sources of authority provide standards of behavior for judges and others in the federal court family. The <a href="http://www.uscourts.gov/RulesAndPolicies/ConductAndDisability/JudicialConductDisability.aspx" target="_blank">Judicial Conduct and Disability Act</a> allows complaints alleging that a federal judge has engaged in &ldquo;conduct prejudicial to the effective and expeditious administration of the business of the courts&rdquo; or has become, by reason of a temporary or permanent condition, &ldquo;unable to discharge the duties&rdquo; of the judicial office.</p>

',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Codes of Conduct and related sources of authority provide standards of behavior for judges and others in the federal court family. The <a href="http://www.uscourts.gov/RulesAndPolicies/ConductAndDisability/JudicialConductDisability.aspx" target="_blank">Judicial Conduct and Disability Act</a> allows complaints alleging that a federal judge has engaged in &ldquo;conduct prejudicial to the effective and expeditious administration of the business of the courts&rdquo; or has become, by reason of a temporary or permanent condition, &ldquo;unable to discharge the duties&rdquo; of the judicial office.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);

$content['docket'] = (object)array(
  'exported_path' => 'docket',
  'title' => 'Docket',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1317651334',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'docket',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<em><strong>Include information on or link to your court\'s daily docket.</strong></em>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<em><strong>Include information on or link to your court\'s daily docket.</strong></em>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['employment'] = (object)array(
  'exported_path' => 'employment',
  'title' => 'Employment',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1317651363',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'employment',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<em><strong>Post your court\'s position announcements and information about jobs in the court or link to the Careers page on uscourts.gov <a href="http://www.uscourts.gov/Careers.aspx">http://www.uscourts.gov/Careers.aspx</a></strong></em>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<em><strong>Post your court\'s position announcements and information about jobs in the court or link to the Careers page on uscourts.gov <a href="http://www.uscourts.gov/Careers.aspx">http://www.uscourts.gov/Careers.aspx</a></strong></em>
',
        'safe_summary' => '',
      ),
    ),
  ),
);

$content['browsealoud'] = (object)array(
  'exported_path' => 'browsealoud-information',
  'title' => 'BrowseAloud Information',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1317402152',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'browsealoud',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><img src="http://www.uscourts.gov/Images/browseAloud.jpg" style="padding-right: 10px; float: left;" /></p>
<p>BrowseAloud is a small computer program that works with web browsers to allow users to listen to text that appears on a web site as it is read aloud. Once the required software is installed, a computer-generated voice reads aloud the selected text, highlighting the specific text as it is read. BrowseAloud is a free download and can be downloaded <a href="http://browsealoud.com/page.asp">here</a>.</p>
<p>BrowseAloud can be a useful tool for persons who may have difficulties reading text online, or who have literacy problems or a learning disability such as dyslexia. It can also be helpful for persons with limited English language skills who may find it easier to listen to spoken text instead of reading the words on a page.</p>
<p><a href="http://browsealoud.com/page.asp">Download BrowseAloud</a></p>
<p><a href="http://browsealoud.com/page.asp?pg_id=80006">Technical assistance</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><img src="http://www.uscourts.gov/Images/browseAloud.jpg" style="padding-right: 10px; float: left;" /></p>
<p>BrowseAloud is a small computer program that works with web browsers to allow users to listen to text that appears on a web site as it is read aloud. Once the required software is installed, a computer-generated voice reads aloud the selected text, highlighting the specific text as it is read. BrowseAloud is a free download and can be downloaded <a href="http://browsealoud.com/page.asp">here</a>.</p>
<p>BrowseAloud can be a useful tool for persons who may have difficulties reading text online, or who have literacy problems or a learning disability such as dyslexia. It can also be helpful for persons with limited English language skills who may find it easier to listen to spoken text instead of reading the words on a page.</p>
<p><a href="http://browsealoud.com/page.asp">Download BrowseAloud</a></p>
<p><a href="http://browsealoud.com/page.asp?pg_id=80006">Technical assistance</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['judicial_seminar_disclosure'] = (object)array(
  'exported_path' => 'judicial-seminar-disclosure',
  'title' => 'Judicial Seminar Disclosure',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1317409809',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'judicial_seminar_disclosure',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Judicial Conference adopted a private seminars disclosure reporting&nbsp;<a href="http://www.uscourts.gov/uscourts/RulesAndPolicies/SeminarDisclosure/judbrappc906c.pdf">policy</a>&nbsp;(pdf) that requires educational program providers and judges to disclose certain information relevant to judges&#39; attendance at privately-funded educational programs.</p>
<p>Any organization covered by the policy that issues an invitation on or after January 1, 2007 (for a program commencing after that date), to a federal judge to attend an educational program as a speaker, panelist, or attendee and offers to pay for or reimburse that judge, in excess of $305, must disclose financial and programmatic information.</p>
<ul>
	<li>
		<a href="http://psds.uscourts.gov/seminar.fwx?mode=pubjdglist&amp;cascode=D05TXNC">Privately Funded Seminars Disclosure System Login</a> <span style="color: rgb(255, 0, 0);">Note* this link will have to be customized to match the specific court&#39;s cascode. For example: cascode=D05TXNC</span></li>
</ul>
<h4>
	Resources</h4>
<p><a href="http://www.uscourts.gov/RulesAndPolicies/PrivateSeminarDisclosure/PrivatelySeminarsDisclosureOverview.aspx">Overview of Privately Funded Seminars Disclosure System</a>&nbsp;provides information on how the system works for judges, education program providers, and the public.</p>
<ul>
	<li>
		<a href="http://www.uscourts.gov/RulesAndPolicies/PrivateSeminarDisclosure/StatementOfPurpose.aspx">Statement of Purpose</a></li>
	<li>
		<a href="http://www.uscourts.gov/RulesAndPolicies/PrivateSeminarDisclosure/PrivatelySeminarsDisclosureFAQ.aspx">FAQs for Education Program Providers</a></li>
	<li>
		<a href="http://psds.uscourts.gov/psdsdetail.pdf">Report of Privately Funded Seminars</a>&nbsp;(pdf)</li>
</ul>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The Judicial Conference adopted a private seminars disclosure reporting <a href="http://www.uscourts.gov/uscourts/RulesAndPolicies/SeminarDisclosure/judbrappc906c.pdf">policy</a> (pdf) that requires educational program providers and judges to disclose certain information relevant to judges\' attendance at privately-funded educational programs.</p>
<p>Any organization covered by the policy that issues an invitation on or after January 1, 2007 (for a program commencing after that date), to a federal judge to attend an educational program as a speaker, panelist, or attendee and offers to pay for or reimburse that judge, in excess of $305, must disclose financial and programmatic information.</p>
<ul><li>
		<a href="http://psds.uscourts.gov/seminar.fwx?mode=pubjdglist&amp;cascode=D05TXNC">Privately Funded Seminars Disclosure System Login</a> <span style="color: rgb(255, 0, 0);">Note* this link will have to be customized to match the specific court\'s cascode. For example: cascode=D05TXNC</span></li>
</ul><h4>
	Resources</h4>
<p><a href="http://www.uscourts.gov/RulesAndPolicies/PrivateSeminarDisclosure/PrivatelySeminarsDisclosureOverview.aspx">Overview of Privately Funded Seminars Disclosure System</a> provides information on how the system works for judges, education program providers, and the public.</p>
<ul><li>
		<a href="http://www.uscourts.gov/RulesAndPolicies/PrivateSeminarDisclosure/StatementOfPurpose.aspx">Statement of Purpose</a></li>
<li>
		<a href="http://www.uscourts.gov/RulesAndPolicies/PrivateSeminarDisclosure/PrivatelySeminarsDisclosureFAQ.aspx">FAQs for Education Program Providers</a></li>
<li>
		<a href="http://psds.uscourts.gov/psdsdetail.pdf">Report of Privately Funded Seminars</a> (pdf)</li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['privacy_policy'] = (object)array(
  'exported_path' => 'privacy-policy',
  'title' => 'Privacy Policy',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1317406656',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'privacy_policy',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="color: rgb(255, 0, 0);"><i>[Please note: This is a sample privacy policy. Please ensure that the information on this page matches the policies of your court. ]</i></span></p>
<p>&nbsp;</p>
<p>Thank you for visiting the Federal Judiciary&#39;s website. Our privacy policy outlines the types of information we learn when you visit our site and how such information will be used.</p>
<p><strong>Information Routinely Collected and Stored</strong></p>
<p>If you visit our site to view or download information, we collect and store the following information:</p>
<ul>
	<li>
		The name of the domain from which you accessed the Internet; for example, &quot;aol.com&quot; if you use America Online.</li>
	<li>
		The IP address from which you accessed the Judiciary&#39;s website. An IP address is a number automatically assigned to your computer whenever you are surfing the World Wide Web.</li>
	<li>
		The date and time you access our site.</li>
	<li>
		The type of browser and operating system used to access the Judiciary&#39;s site.</li>
	<li>
		The pages you visit.</li>
	<li>
		If you linked to the Judiciary&#39;s website from another website, the address of the originating site.</li>
</ul>
<p>This information is used solely for the purpose of evaluating and maintaining our site. From this information, we learn what users like and need; what kind of technology they are using; how often they visit; and other valuable information that helps us to offer our visitors the best site possible.</p>
<p><strong>Information You Provide</strong></p>
<p>If you choose to provide us with personal information, perhaps to be placed on our mailing list or to request additional information via our webmaster e-mailbox, it will be used only for the purpose(s) you state. We collect such information only to respond to your requests. We do not share that information with others, and we do not collect information for commercial marketing.</p>
<p><strong>Security Notice</strong></p>
<p>For site security purposes and to ensure that this service remains available to all users, this Government computer system employs software programs to monitor network traffic to identify unauthorized attempts to upload or change information, or otherwise cause damage.</p>
<p>Anyone using this system expressly consents to such monitoring and is advised that if such monitoring reveals evidence of possible abuse or criminal activity, such evidence may be provided to appropriate law enforcement officials.</p>
<p>Unauthorized attempts to upload or change information on this server are strictly prohibited and may be punishable by law, including the Computer Fraud and Abuse Act of 1986 and the National Information Infrastructure Protection Act of 1996.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><span style="color: rgb(255, 0, 0);"><i>[Please note: This is a sample privacy policy. Please ensure that the information on this page matches the policies of your court. ]</i></span></p>
<p> </p>
<p>Thank you for visiting the Federal Judiciary\'s website. Our privacy policy outlines the types of information we learn when you visit our site and how such information will be used.</p>
<p><strong>Information Routinely Collected and Stored</strong></p>
<p>If you visit our site to view or download information, we collect and store the following information:</p>
<ul><li>
		The name of the domain from which you accessed the Internet; for example, "aol.com" if you use America Online.</li>
<li>
		The IP address from which you accessed the Judiciary\'s website. An IP address is a number automatically assigned to your computer whenever you are surfing the World Wide Web.</li>
<li>
		The date and time you access our site.</li>
<li>
		The type of browser and operating system used to access the Judiciary\'s site.</li>
<li>
		The pages you visit.</li>
<li>
		If you linked to the Judiciary\'s website from another website, the address of the originating site.</li>
</ul><p>This information is used solely for the purpose of evaluating and maintaining our site. From this information, we learn what users like and need; what kind of technology they are using; how often they visit; and other valuable information that helps us to offer our visitors the best site possible.</p>
<p><strong>Information You Provide</strong></p>
<p>If you choose to provide us with personal information, perhaps to be placed on our mailing list or to request additional information via our webmaster e-mailbox, it will be used only for the purpose(s) you state. We collect such information only to respond to your requests. We do not share that information with others, and we do not collect information for commercial marketing.</p>
<p><strong>Security Notice</strong></p>
<p>For site security purposes and to ensure that this service remains available to all users, this Government computer system employs software programs to monitor network traffic to identify unauthorized attempts to upload or change information, or otherwise cause damage.</p>
<p>Anyone using this system expressly consents to such monitoring and is advised that if such monitoring reveals evidence of possible abuse or criminal activity, such evidence may be provided to appropriate law enforcement officials.</p>
<p>Unauthorized attempts to upload or change information on this server are strictly prohibited and may be punishable by law, including the Computer Fraud and Abuse Act of 1986 and the National Information Infrastructure Protection Act of 1996.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);



/* end of testing new content */

$content['court_info'] = (object)array(
  'exported_path' => 'court-info',
  'title' => 'Court Info',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1303961569',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'court_info',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><em><strong>Post information about visting the court, cell phone/electronics policy, history of the court, workload statistics, fees, link to the directory, etc.</strong></em></p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p><em><strong>Post information about visting the court, cell phone/electronics policy, history of the court, workload statistics, fees, link to the directory, etc.</strong></em></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['filing_without_attorney'] = (object)array(
  /*
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/filing_without_attorney',
    'router_path' => 'node/%',
    'link_title' => 'Filing Without an Attorney',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'identifier' => 'main-menu:node-name/filing_without_attorney',
  ),
  */
  'exported_path' => 'filing-without-attorney',
  'title' => 'Filing Without an Attorney',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1303961598',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'filing_without_attorney',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><strong><em>Post your court\'s pro se information, including links to e-pro se or other applications for pro se litigants. Also provide links to forms and other guidance.</em></strong></p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p><strong><em>Post your court\'s pro se information, including links to e-pro se or other applications for pro se litigants. Also provide links to forms and other guidance.</em></strong></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['for_attorneys'] = (object)array(
  /*
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/for_attorneys',
    'router_path' => 'node/%',
    'link_title' => 'For Attorneys',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'identifier' => 'main-menu:node-name/for_attorneys',
  ),
  */
  'exported_path' => 'attorneys',
  'title' => 'For Attorneys',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1303961619',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'for_attorneys',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><strong><em>Post relevant links and information for attorneys practing in your court--links to the directory, bar admission information, class listings, etc.</em></strong></p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p><strong><em>Post relevant links and information for attorneys practing in your court--links to the directory, bar admission information, class listings, etc.</em></strong></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['forms'] = (object)array(
  /*
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/forms',
    'router_path' => 'node/%',
    'link_title' => 'Forms',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
    'identifier' => 'main-menu:node-name/forms',
  ),
  */
  'exported_path' => 'forms',
  'title' => 'Forms',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1303962116',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'forms',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>
	National Forms</h3>
<p>Offical court forms approved by the Judicial Conference of the United States for use in all District Court/Bankruptcy Courts.</p>
<h3>
	Local Forms</h3>
<p>Official court forms approved by the XXXX for use in the District of XXXX.</p>
<ul>
	<li>
		<a href="#">Local Mandatory Forms</a></li>
	<li>
		<a href="#">Local Recommended Forms</a></li>
</ul>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h3>
	National Forms</h3>
<p>Offical court forms approved by the Judicial Conference of the United States for use in all District Court/Bankruptcy Courts.</p>
<h3>
	Local Forms</h3>
<p>Official court forms approved by the XXXX for use in the District of XXXX.</p>
<ul>
	<li>
		<a href="#">Local Mandatory Forms</a></li>
	<li>
		<a href="#">Local Recommended Forms</a></li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['judges_info'] = (object)array(
  /*
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/judges_info',
    'router_path' => 'node/%',
    'link_title' => 'Judges\' Info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
    'identifier' => 'main-menu:node-name/judges_info',
  ),
  */
  'exported_path' => 'judges-info',
  'title' => 'Judges\' Info',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1303961637',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'judges_info',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><strong><em>Provide an overview of your court--number of judges, places of holding court, etc. Then direct users to the listing of judges in the left navigation for specifics.</em></strong></p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p><strong><em>Provide an overview of your court--number of judges, places of holding court, etc. Then direct users to the listing of judges in the left navigation for specifics.</em></strong></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['local_rules_and_orders'] = (object)array(
  'exported_path' => 'court-info/local-rules-and-orders',
  'title' => 'Local Rules and Orders',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1303969170',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'local_rules_and_orders',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<em><strong>Post your court\'s local rules and general orders.</strong></em>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<em><strong>Post your court\'s local rules and general orders.</strong></em>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['nb_footer_coptright'] = (object)array(
  'exported_path' => 'content/footer-copyright',
  'title' => 'Footer (left): Home',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'node_block',
  'language' => 'und',
  'created' => '1304347998',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'nb_footer_coptright',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><a class="ql-first" href=" '.$base_url.' ">Home</a> | <a href=" '.$base_url.'/court-info/court-locations/">Contact Us</a> | <a href=" '.$base_url.'/employment/">Employment</a> | <a href="http://www.uscourts.gov/Common/Glossary.aspx" target="_blank">Glossary of Legal Terms</a> | <a class="ql-last" href=" '.$base_url.'/court-info/faq/">FAQs</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><a class="ql-first" href=" '.$base_url.' ">Home</a> | <a href=" '.$base_url.'/court-info/court-locations/">Contact Us</a> | <a href=" '.$base_url.'/employment/">Employment</a> | <a href="http://www.uscourts.gov/Common/Glossary.aspx" target="_blank">Glossary of Legal Terms</a> | <a class="ql-last" href=" '.$base_url.'/court-info/faq/">FAQs</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_nb_show_title' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
);
$content['nb_footer_quick_links'] = (object)array(
  'exported_path' => 'content/footer-right-quick-links',
  'title' => 'Footer (right): Quick links',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'node_block',
  'language' => 'und',
  'created' => '1304350345',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'nb_footer_quick_links',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	<a class="ql-first" href=" '.$base_url.'/privacy-policy/">Privacy Policy</a>|<a class="ql-last" href=" '.$base_url.'/browsealoud-information/">BrowseAloud</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>
	<a class="ql-first" href=" '.$base_url.'/privacy-policy/">Privacy Policy</a>|<a class="ql-last" href=" '.$base_url.'/browsealoud-information/">BrowseAloud</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_nb_show_title' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
);
$content['nb_form_overview'] = (object)array(
  'exported_path' => 'nodeblock/forms-overview',
  'title' => 'Forms Overview',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'node_block',
  'language' => 'und',
  'created' => '1304973182',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'nb_form_overview',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	The court&rsquo;s Forms Overview electronic learning module contains an in-depth demonstration of the various types of forms and related guidance available on our internet site as well as tips on how to access those forms. <a href="#">View the module &raquo;</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>
	The court’s Forms Overview electronic learning module contains an in-depth demonstration of the various types of forms and related guidance available on our internet site as well as tips on how to access those forms. <a href="#">View the module »</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_nb_show_title' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
$content['nb_have_a_question'] = (object)array(
  'exported_path' => 'content/have-question',
  'title' => 'Have a Question?',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'node_block',
  'language' => 'und',
  'created' => '1304529363',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'nb_have_a_question',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	E-mail <a href="mailto:questions@uscourts.gov">questions@uscourts.gov</a><br />
	or call 898-898-8998</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>
	E-mail <a href="mailto:questions@uscourts.gov">questions@uscourts.gov</a><br />
	or call 898-898-8998</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_nb_show_title' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
$content['nb_how_to_access_pacer'] = (object)array(
  'exported_path' => 'content/how-do-i-access-pacer',
  'title' => 'How Do I Access PACER?',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'node_block',
  'language' => 'und',
  'created' => '1304451440',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'nb_how_to_access_pacer',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	&nbsp;</p>
<p>
	First, you will need a PACER account.</p>
<p>
	Sign up for one using our convenient on-line registration process. <a href="#">Sign Up Here &raquo;</a></p>
<p>
	Each court maintains its case information locally. Click here to access the <a href="#">District of New Jersey Document Filing System</a>.</p>
<p>
	If you do not know where the case is filed, use the <a href="#">PACER Case Locator</a>.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>
	 </p>
<p>
	First, you will need a PACER account.</p>
<p>
	Sign up for one using our convenient on-line registration process. <a href="#">Sign Up Here »</a></p>
<p>
	Each court maintains its case information locally. Click here to access the <a href="#">District of New Jersey Document Filing System</a>.</p>
<p>
	If you do not know where the case is filed, use the <a href="#">PACER Case Locator</a>.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_nb_show_title' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
$content['nb_programs_services'] = (object)array(
  'exported_path' => 'nodeblock/programs-and-services',
  'title' => 'Programs and Services',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'node_block',
  'language' => 'und',
  'created' => '1304973345',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'nb_programs_services',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<ul>
	<li>
		<a href="#">Lawyers Advisory Committee</a></li>
	<li>
		<a href="#">Mediation</a></li>
	<li>
		<a href="#">Pro Bono Programs</a></li>
	<li>
		<a href="#">View All &raquo;</a></li>
</ul>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<ul><li>
		<a href="#">Lawyers Advisory Committee</a></li>
<li>
		<a href="#">Mediation</a></li>
<li>
		<a href="#">Pro Bono Programs</a></li>
<li>
		<a href="#">View All »</a></li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_nb_show_title' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
$content['nb_quick_links'] = (object)array(
  'exported_path' => 'content/quick-links',
  'title' => 'Quick Links',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'node_block',
  'language' => 'und',
  'created' => '1304529124',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'nb_quick_links',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<ul>
	<li>
		<a href="#">Link 1</a></li>
	<li>
		<a href="#">Link 2</a></li>
	<li>
		<a href="#">Link 3</a></li>
	<li>
		<a href="#">Link 4</a></li>
</ul>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<ul><li>
		<a href="#">Link 1</a></li>
<li>
		<a href="#">Link 2</a></li>
<li>
		<a href="#">Link 3</a></li>
<li>
		<a href="#">Link 4</a></li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_nb_show_title' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
$content['nb_quick_links_other_resources'] = (object)array(
  'exported_path' => 'nodeblock/other-resources',
  'title' => 'Other Resources',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'node_block',
  'language' => 'und',
  'created' => '1311343845',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'nb_quick_links_other_resources',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<ul>
	<li>
		<a href=" '.$base_url. '/judicial-seminar-disclosure/">Judicial Seminars Disclosure</a></li>
	<li>
		<a href=" '.$base_url. '/judicial-conduct-disability/"><font color="#1765b3">Judicial Conduct and Disability</font></a></li>
</ul>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<ul>
	<li>
		<a href=" '.$base_url. '/judicial-seminar-disclosure/">Judicial Seminars Disclosure</a></li>
	<li>
		<a href=" '.$base_url. '/judicial-conduct-disability/"><font color="#1765b3">Judicial Conduct and Disability</font></a></li>
</ul>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_nb_show_title' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
$content['nb_quick_links_home'] = (object)array(
  'exported_path' => 'nodeblock/other-court-links',
  'title' => 'Other Court Links',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'node_block',
  'language' => 'und',
  'created' => '1311343845',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'nb_quick_links_home',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<ul>
	<li>
		<a href="#">Court of Appeals</a></li>
	<li>
		<a href="#">Bankruptcy Court/District Court ( <em>edit appropriately</em> )</a></li>
	<li>
		<a href="#">Probation and Pretrial Services</a></li>
	<li>
		<a href="#">Court Library</a></li>
</ul>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<ul><li>
		<a href="#">Court of Appeals</a></li>
<li>
		<a href="#">Bankruptcy Court/District Court <em>(edit as appropriate)</em></a></li>
<li>
		<a href="#">Probation and Pretrial Services</a></li>
<li>
		<a href="#">Court Library</a></li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_nb_show_title' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
$content['nb_working_with_pdf_forms'] = (object)array(
  'exported_path' => 'nodeblock/working-pdf-forms',
  'title' => 'Working with PDF Forms',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'node_block',
  'language' => 'und',
  'created' => '1305029546',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'nb_working_with_pdf_forms',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	The court&rsquo;s Working With PDF Forms electronic learning module contains helpful tips on viewing, completing and saving documents in PDF format. <a href="#">View the module &raquo;</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>
	The court’s Working With PDF Forms electronic learning module contains helpful tips on viewing, completing and saving documents in PDF format. <a href="#">View the module »</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_nb_show_title' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
//$content['office_of_the_us_trustee'] = (object)array(
//  /*
//  'link' => array(
//    'menu_name' => 'main-menu',
//    'link_path' => 'node-name/office_of_the_us_trustee',
//    'router_path' => 'node/%',
//    'link_title' => 'Office of the US Trustee',
//    'options' => array(
//      'attributes' => array(
//        'title' => '',
//      ),
//    ),
//    'module' => 'menu',
//    'hidden' => '0',
//    'external' => '0',
//    'has_children' => '0',
//    'expanded' => '0',
//    'weight' => '-43',
//    'identifier' => 'main-menu:node-name/office_of_the_us_trustee',
//  ),
//  */
//  'exported_path' => 'office-us-trustee',
//  'title' => 'Office of the US Trustee',
//  'status' => '1',
//  'promote' => '0',
//  'sticky' => '0',
//  'type' => 'page',
//  'language' => 'und',
//  'created' => '1303961723',
//  'comment' => '1',
//  'translate' => '0',
//  'machine_name' => 'office_of_the_us_trustee',
//  'body' => array(
//    'und' => array(
//      0 => array(
//        'value' => '<p>
//	Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Nulla vitae elit libero, a pharetra augue. Vestibulum id ligula porta felis euismod semper. Donec id elit non mi porta gravida at eget metus. &nbsp; Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Donec ullamcorper nulla non metus auctor fringilla. Maecenas faucibus mollis interdum. Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Maecenas faucibus mollis interdum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
//',
//        'summary' => '',
//        'format' => 'filtered_html',
//        'safe_value' => '<p>Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Nulla vitae elit libero, a pharetra augue. Vestibulum id ligula porta felis euismod semper. Donec id elit non mi porta gravida at eget metus.   Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Donec ullamcorper nulla non metus auctor fringilla. Maecenas faucibus mollis interdum. Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Maecenas faucibus mollis interdum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
//',
//        'safe_summary' => '',
//      ),
//    ),
//  ),
//);
$content['programs_and_services'] = (object)array(
  /*
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/programs_and_services',
    'router_path' => 'node/%',
    'link_title' => 'Programs & Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'identifier' => 'main-menu:node-name/programs_and_services',
  ),
  */
  'exported_path' => 'programs-services',
  'title' => 'Programs & Services',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1303961765',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'programs_and_services',
//  'body' => array(
//    'und' => array(
//      0 => array(
//        'value' => '<p>
//	Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Nulla vitae elit libero, a pharetra augue. Vestibulum id ligula porta felis euismod semper. Donec id elit non mi porta gravida at eget metus. &nbsp; Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Donec ullamcorper nulla non metus auctor fringilla. Maecenas faucibus mollis interdum. Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Maecenas faucibus mollis interdum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
//',
//        'summary' => '',
//        'format' => 'filtered_html',
//        'safe_value' => '<p>Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Nulla vitae elit libero, a pharetra augue. Vestibulum id ligula porta felis euismod semper. Donec id elit non mi porta gravida at eget metus.   Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Donec ullamcorper nulla non metus auctor fringilla. Maecenas faucibus mollis interdum. Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Maecenas faucibus mollis interdum. Integer posuere erat a ante venenatis dapibus posuere velit aliquet.</p>
//',
//        'safe_summary' => '',
//      ),
//    ),
//  ),
//);
//$content['understanding_bankruptcy'] = (object)array(
//  /*
//  'link' => array(
//    'menu_name' => 'main-menu',
//    'link_path' => 'node-name/understanding_bankruptcy',
//    'router_path' => 'node/%',
//    'link_title' => 'Understanding Bankruptcy',
//    'options' => array(
//      'attributes' => array(
//        'title' => '',
//      ),
//    ),
//    'module' => 'menu',
//    'hidden' => '0',
//    'external' => '0',
//    'has_children' => '1',
//    'expanded' => '0',
//    'weight' => '-50',
//    'identifier' => 'main-menu:node-name/understanding_bankruptcy',
//  ),
//  */
//  'exported_path' => 'understanding-bankruptcy',
//  'title' => 'Understanding Bankruptcy',
//  'status' => '1',
//  'promote' => '0',
//  'sticky' => '0',
//  'type' => 'page',
//  'language' => 'und',
//  'created' => '1303962151',
//  'comment' => '1',
//  'translate' => '0',
//  'machine_name' => 'understanding_bankruptcy',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><em><strong>Post a listing and links to your court\'s services and programs, including ADR, classes for pro se litigants, mediation, etc.</strong></em></p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p><em><strong>Post a listing and links to your court\'s services and programs, including ADR, classes for pro se litigants, mediation, etc.</strong></em></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
return $content;
}
