<?php
function us_courts_preprocess_html(&$vars) {
  $vars['classes_array'][] = 'defaultFont';
  
  //Google font add here
  drupal_add_css ('http://fonts.googleapis.com/css?family=Quattrocento', 'external');
  
  //Change welcome title
  if ($vars['is_front']){
	  $vars['head_title'] = implode(' | ', array(variable_get('site_name'), 'United States Bankruptcy Court'));
	  }
	  else {
  	  $vars['head_title'] = implode(' | ', array(drupal_get_title(), variable_get('site_name'), 'United States Bankruptcy Court')); 
  	  }
}

function us_courts_preprocess_page(&$vars) {
 
 $vars['seal_img'] = '';
 if (theme_get_setting('toggle_seal')) {
   //Seal image
   //Get the image in the root of this theme if a custom image is not being used
   $seal_img_path = '';
   if (theme_get_setting('default_seal_img')) {
    $seal_img_path = base_path() . path_to_theme() . '/seal-img.png';
   }
   else {
    $seal_img_path = theme_get_setting('seal_img_path');
   }
   
   $vars['seal_img'] = theme_image(array('path' => $seal_img_path, 'attributes' => array('alt' => '')));
 }
 
 //Welcome image
 $vars['toggle_welcome_img'] = theme_get_setting('toggle_welcome_img');
 $vars['welcome_img'] = '';
 
 if ($vars['toggle_welcome_img']) { 
   //Get the image in the root of this theme if a custom image is not being used
   $welcome_img_path = '';
   if (theme_get_setting('default_welcome_img')) {
    $welcome_img_path = base_path() . path_to_theme() . '/welcome-img.jpg';
   }
   else {
    $welcome_img_path = theme_get_setting('welcome_img_path');
   }
   
   $vars['welcome_img'] = theme_image(array('path' => $welcome_img_path, 'attributes' => array('alt' => '')));
 }
 
 
 //Welcome Text
 $welcome_txt = theme_get_setting('welcome_txt');
 is_array($welcome_txt) ? $vars['welcome_txt'] = $welcome_txt['value'] : $vars['welcome_txt'] = $welcome_txt;
 
 //Custom links for default buttons
 $vars['pacer_link'] = theme_get_setting('pacer_link');
 $vars['cmecf_link'] = theme_get_setting('cmecf_link');
 
 //Additional Welcome buttons - 2 max at this point
 $add_welcome_btns = array(theme_get_setting('wb_one'), theme_get_setting('wb_two'));
 
 $vars['add_welcome_btns'] = '';
 foreach ($add_welcome_btns as $id => $btn) {
  if (isset($btn) && $btn != '') {
   $btn = us_courts_format_wb_vars($btn);
   $vars['add_welcome_btns'] .= '<li>' . l(t(key($btn)) . ' &raquo;', $btn[key($btn)], array('html' => true)) . '</li>';
  }
 }
 
 //Basic Grid 12 Col Grid, 20px Gutter, 60px Col width
	if (!empty($vars['page']['sidebar_first']) && empty($vars['page']['sidebar_second'])) {
		$vars['sb_first_grid_classes'] = 'grid_4';
		$vars['content_grid_classes'] = 'alpha grid_8';
	}
	if (empty($vars['page']['sidebar_first']) && !empty($vars['page']['sidebar_second'])) {
		$vars['content_grid_classes'] = 'grid_8';
		$vars['sb_second_grid_classes'] = 'grid_4';
	}	
	if (!empty($vars['page']['sidebar_first']) && !empty($vars['page']['sidebar_second'])) {
		$vars['sb_first_grid_classes'] = 'alpha grid_3';
		$vars['sb_second_grid_classes'] = 'omega grid_4';
		$vars['content_grid_classes'] = 'grid_5';
	}
	if (empty($vars['page']['sidebar_first']) && empty($vars['page']['sidebar_second'])) {
		$vars['content_grid_classes'] = 'grid_12';
	}
	
	if (isset($vars['node']) && $vars['node']->type == 'hearing_date') {
	  $hd_node = $vars['node']->field_judge['und'][0]['node'];
	  
  // Build Breadcrumbs for Hearing Dates
	  $breadcrumb = array();
	  $breadcrumb[] = l('Home', '<front>');
	  $breadcrumb[] = l($hd_node->title, 'node/' . $hd_node->nid, array('html' => true));
	  drupal_set_breadcrumb($breadcrumb);
	} 
	
	//  Remove page titles from Court - Staff Directory pages
	if ( isset($vars['node']) && $vars['node']->type == 'court' ) {
	  $vars['title'] = t('Staff Directory');
	}
	
	//  Remove page title from home page
	if ( $vars['is_front'] ) {
	  $vars['title'] = '';
	}
	
}

function us_courts_menu_tree($vars) {
  return '<ul class="menu clearfix">' . $vars['tree'] . '</ul>';
}

function us_courts_form_alter(&$form, &$form_state, $form_id) {
  //Adding Go image button to the global Drupal Search
  if ($form_id == 'search_block_form') {
     $form['search_block_form']['#title_display'] = 'none';
     $form['search_block_form']['#title'] = t('Search');
	 $form['search_block_form']['#default_value'] = t('Search this site');
	 $form['search_block_form']['#attributes'] = array('class' => array('custom-search-default-value custom-search-box form-text'),
                                                              'onfocus' => "if (this.value == 'Search This Site') {this.value = '';}",
                                                              'onblur' => "if (this.value == '') {this.value = 'Search This Site';}");
     $form['actions']['submit'] = array('#value' => t('Go'), '#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/imgs/btn-search-go.png');
  }
  //Adding search image to local searches: Forms, Local Rules, General Orders, Opinions
  if ($form_id == 'custom_search_blocks_form_1' || $form_id == 'custom_search_blocks_form_2' || $form_id == 'custom_search_blocks_form_3' || $form_id == 'custom_search_blocks_form_4') {
    $form['#attributes']['class'][] = 'container-inline';
    $form['actions']['submit'] = array('#value' => t('Search'), '#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/imgs/btn-search.png');
  }
}

function us_courts_preprocess_views_view(&$vars) {
 if($vars['name'] == 'faqs' && $vars['display_id'] == 'page') {
  us_courts_views_field_title_subs($vars['view'], 'field_faq_type');
 }
 if($vars['name'] == 'all_forms' && $vars['display_id'] == 'all_forms') {
  us_courts_views_field_title_subs($vars['view'], 'field_form_cat');
 }
}

function us_courts_views_field_title_subs($view, $field_name) {
 $view_build_info = $view->build_info;
 if(isset($view_build_info['substitutions']['%1'])) {
  $field_info = field_info_field($field_name);
  $sub_one = $view_build_info['substitutions']['%1'];
  
  if (isset($field_info['settings']['allowed_values'][$sub_one])) {
   drupal_set_title($view_build_info['title'] . ': ' . $field_info['settings']['allowed_values'][$sub_one]);
  }
 }
}

/**
 * Formats custom variables as an array
 */
function us_courts_format_wb_vars($vars) {
  $formatted_vars = array();
  if ($vars) {
   $vars = explode('|', $vars);
   $formatted_vars[$vars[0]] = $vars[1];
   
   return $formatted_vars;
  }

  return null;
}
?>

