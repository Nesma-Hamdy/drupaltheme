<?php
/**
 * @file
 * us_courts_defaults.features.content_menu_links.inc
 */

/**
 * Implementation of hook_content_menu_links_defaults().
 */
function us_courts_defaults_content_menu_links_defaults() {
  $menu_links = array();
  /*
   * Court Info and children
   */
  // Exported menu link: main-menu:court_info
  $menu_links['main-menu:node-name/court_info'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/court_info',
    'router_path' => 'node/%',
    'link_title' => 'Court Info',
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
    'weight' => '-49',
  );
  
  // Exported menu link: main-menu:court-info/faq
  $menu_links['main-menu:court-info/faq'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'court-info/faq',
    'router_path' => 'court-info/faq',
    'link_title' => 'FAQs',
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
    'parent_path' => 'node-name/court_info',
  );
  // Exported menu link: main-menu:court-info/court-locations
  $menu_links['main-menu:court-info/court-locations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'court-info/court-locations',
    'router_path' => 'court-info/court-locations',
    'link_title' => 'Court Locations',
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
    'parent_path' => 'node-name/court_info',
  );
  // Exported menu link: main-menu:node-name/court_holidays
  $menu_links['main-menu:node-name/court_holidays'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/court_holidays',
    'router_path' => 'node/%',
    'link_title' => 'Court Holidays',
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
    'weight' => '-48',
    'parent_path' => 'node-name/court_info',
    'identifier' => 'main-menu:node-name/court_holidays',
  );
  // Exported menu link: main-menu:node/local_rules_and_orders
  $menu_links['main-menu:node-name/local_rules_and_orders'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/local_rules_and_orders',
    'router_path' => 'node/%',
    'link_title' => 'Local Rules and Orders',
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
    'weight' => '-49',
    'parent_path' => 'node-name/court_info',
  );
  // Exported menu link: main-menu:court-info/local-rules-and-orders/general-orders
  $menu_links['main-menu:court-info/local-rules-and-orders/general-orders'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'court-info/local-rules-and-orders/general-orders',
    'router_path' => 'court-info/local-rules-and-orders/general-orders',
    'link_title' => 'General Orders',
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
    'weight' => '-49',
    'parent_path' => 'node-name/local_rules_and_orders',
  );
  // Exported menu link: main-menu:court-info/local-rules-and-orders/local-rules
  $menu_links['main-menu:court-info/local-rules-and-orders/local-rules'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'court-info/local-rules-and-orders/local-rules',
    'router_path' => 'court-info/local-rules-and-orders/local-rules',
    'link_title' => 'Local Rules',
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
    'parent_path' => 'node-name/local_rules_and_orders',
  );
  // Exported menu link: main-menu:node-name/forms
  $menu_links['main-menu:node-name/forms'] = array(
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
  );
  // Exported menu link: main-menu:forms/all-forms
  $menu_links['main-menu:forms/all-forms'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forms/all-forms',
    'router_path' => 'forms/all-forms',
    'link_title' => 'All Forms',
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
    'parent_path' => 'node-name/forms',
  );
  // Exported menu link: main-menu:node/judges_info
  $menu_links['main-menu:node-name/judges_info'] = array(
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
  );
  // Exported menu link: main-menu:node-name/sample_judge
  $menu_links['main-menu:node-name/sample_judge'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/sample_judge',
    'router_path' => 'node/%',
    'link_title' => 'Judge John Example',
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
    'weight' => '-48',
    'parent_path' => 'node-name/judges_info',
  );
  // Exported menu link: main-menu:judges-info/hearing-dates
  $menu_links['main-menu:judges-info/hearing-dates'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'judges-info/hearing-dates',
    'router_path' => 'judges-info/hearing-dates',
    'link_title' => 'Hearing Dates',
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
    'weight' => '-49',
    'parent_path' => 'node-name/judges_info',
  );
  // Exported menu link: main-menu:judges-info/opinions
  $menu_links['main-menu:judges-info/opinions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'judges-info/opinions',
    'router_path' => 'judges-info/opinions',
    'link_title' => 'Opinions',
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
    'parent_path' => 'node-name/judges_info',
  );
  // Exported menu link: main-menu:node/5
  $menu_links['main-menu:node-name/case_info'] = array(
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
  );
  // Exported menu link: main-menu:node/cm_ecf_case_info
  $menu_links['main-menu:node-name/cm_ecf_case_info'] = array(
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
  );
  // Exported menu link: main-menu:node/filing_without_attorney
  $menu_links['main-menu:node-name/filing_without_attorney'] = array(
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
  );
  // Exported menu link: main-menu:node/for_attorneys
  $menu_links['main-menu:node-name/for_attorneys'] = array(
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
  );
  
  /*// Exported menu link: main-menu:node/office_of_the_us_trustee
  $menu_links['main-menu:node-name/office_of_the_us_trustee'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/office_of_the_us_trustee',
    'router_path' => 'node/%',
    'link_title' => 'Office of the US Trustee',
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
    'weight' => '-43',
  );*/
  // Exported menu link: main-menu:node/4
  $menu_links['main-menu:node-name/programs_and_services'] = array(
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
  );
  
  // Exported menu link: main-menu:node/3
  //$menu_links['main-menu:node-name/understanding_bankruptcy'] = array(
  //  'menu_name' => 'main-menu',
  //  'link_path' => 'node-name/understanding_bankruptcy',
  //  'router_path' => 'node/%',
  //  'link_title' => 'Understanding Bankruptcy',
  //  'options' => array(
  //    'attributes' => array(
  //      'title' => '',
  //    ),
  //  ),
  //  'module' => 'menu',
  //  'hidden' => '0',
  //  'external' => '0',
  //  'has_children' => '1',
  //  'expanded' => '0',
  //  'weight' => '-50',
  //);
  //// Exported menu link: main-menu:understanding-bankruptcy/faqs
  //$menu_links['main-menu:understanding-bankruptcy/faqs'] = array(
  //  'menu_name' => 'main-menu',
  //  'link_path' => 'understanding-bankruptcy/faqs',
  //  'router_path' => 'understanding-bankruptcy/faqs',
  //  'link_title' => 'FAQs',
  //  'options' => array(
  //    'attributes' => array(
  //      'title' => '',
  //    ),
  //  ),
  //  'module' => 'menu',
  //  'hidden' => '0',
  //  'external' => '0',
  //  'has_children' => '0',
  //  'expanded' => '0',
  //  'weight' => '-50',
  //  'parent_path' => 'node-name/understanding_bankruptcy',
  //);
  
  
  // Translatables
  // Included for use with string extractors like potx.
  t('All Forms');
  t('CM/ECF Case Info');
  t('Case Info');
  t('Judge John Example');
  t('Court Info');
  t('Court Holidays');
  t('FAQs');
  t('Filing Without an Attorney');
  t('For Attorneys');
  t('Forms');
  t('General Orders');
  t('Hearing Dates');
  t('Judges\' Info');
  t('Local Rules');
  t('Local Rules and Orders');
  t('Office of the US Trustee');
  t('Opinions');
  t('Programs & Services');
  t('Court Locations');



  return $menu_links;
}
