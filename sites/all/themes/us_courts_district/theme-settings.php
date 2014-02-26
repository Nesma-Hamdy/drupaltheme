<?php

  function us_courts_district_form_system_theme_settings_alter(&$form, &$form_state) { 
  
  /*--The code below is commended out to remove the seal selection and seal uploading function in the appearance setting.-*/   
    /*$form['theme_settings']['toggle_seal'] = array(
      '#title' => t('Seal'),
      '#type' => 'checkbox',
      '#default_value' => theme_get_setting('toggle_seal', 'us_courts_district')
    );
    
    //Seal graphic upload
    $form['seal_img'] = array(
      '#type' => 'fieldset',
      '#title' => t('Seal image settings'),
    );
    $form['seal_img']['default_seal_img'] = array(
     '#type' => 'checkbox', 
     '#title' => t('Use the default seal image'), 
     '#default_value' => theme_get_setting('default_seal_img', 'us_courts_district'), 
     '#tree' => FALSE, 
     '#description' => t('Check here if you want the theme to use the seal image supplied with it.'),
    );
    $form['seal_img']['settings'] = array(
    '#type' => 'container', 
    '#states' => array(
      // Hide the seal image settings when using the default seal image.
      'invisible' => array(
        'input[name="default_seal_img"]' => array('checked' => TRUE),
      ),
     ),
    );
    $seal_img_path = theme_get_setting('seal_img_path');
     // If $seal_img_path is a public:// URI, display the path relative to the files
     // directory; stream wrappers are not end-user friendly.
  
     if (file_uri_scheme($seal_img_path) == 'public') {
       $seal_img_path = file_uri_target($seal_img_path);
     }
        
   $form['seal_img']['settings']['seal_img_path'] = array(
     '#type' => 'textfield',
     '#title' => t('Path to custom seal image'),
     '#description' => t('The path to the file you would like to use as your seal image file instead of the default seal image.'),
     '#default_value' =>  $seal_img_path,
   ); 
 
   $form['seal_img']['settings']['seal_img_upload'] = array(
     '#type' => 'file',
     '#title' => t('Upload seal image'),
     '#description' => t('If you don\'t have direct file access to the server, use this field to upload your seal.')
   );
    
    $form['homepage_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Homepage Settings'),
      '#collapsible' => FALSE,
    );*/
   
   //Site Court Title
   $form['court_title_settings']['site_court'] = array(
   	 '#type' => 'fieldset',
     '#title' => t('Site Name settings'),
   );
   
   $form ['court_title_settings']['site_court']['court_title'] = array(
     '#type' => 'textfield',
     '#title' => t('Court title'),
     '#description' => t('Type in Court Title for District of Bankruptcy.'),
     '#default_value' => theme_get_setting('court_title','us_courts_district')
   );
   
    
    //Welcome buttons
    $form['homepage_settings']['welcome_btns'] = array(
     '#type' => 'fieldset',
     '#title' => t('Welcome button settings'),
    ); 
    
    $form['homepage_settings']['welcome_btns']['pacer_link'] = array(
     '#type' => 'textfield',
     '#title' => t('Pacer link'),
     '#description' => t('Format: http://siteurl.com/'),
     '#default_value' => theme_get_setting('pacer_link', 'us_courts_district')
    );
    
    $form['homepage_settings']['welcome_btns']['cmecf_link'] = array(
     '#type' => 'textfield',
     '#title' => t('CM/ECF link'),
     '#description' => t('Format: http://siteurl.com/'),
     '#default_value' => theme_get_setting('cmecf_link', 'us_courts_district')
    );
    
    $form['homepage_settings']['welcome_btns']['wb_one'] = array(
     '#type' => 'textfield',
     '#title' => t('Custom welcome button 1'),
     '#description' => t('Format: title|url.'),
     '#default_value' => theme_get_setting('wb_one', 'us_courts_district')
    );
    
    $form['homepage_settings']['welcome_btns']['wb_two'] = array(
     '#type' => 'textfield',
     '#title' => t('Custom welcome button 2'),
     '#description' => t('Format title|url.'),
     '#default_value' => theme_get_setting('wb_two', 'us_courts_district')
    );
    
    //Welcome text
    $welcome_txt = theme_get_setting('welcome_txt', 'us_courts_district');
    //When this is overriden it becomes an array that has the text format
    //and the text value, we always want to force 'Full HTML' so let's just get
    //the value if it's an array
    is_array($welcome_txt) ? $welcome_txt = $welcome_txt['value'] : $welcome_txt = $welcome_txt;
    
    $form['homepage_settings']['welcome_txt'] = array(
      '#type' => 'text_format',
      '#format' => 'full_html',
      '#title' => t('Welcome Text'),
      '#description' => t('Welcome text displayed to visitors on the homepage'),
      '#default_value' => $welcome_txt,
    );
    
    //Homepage graphic upload
    $form['theme_settings']['toggle_welcome_img'] = array(
      '#title' => t('Welcome Image'),
      '#type' => 'checkbox',
      '#default_value' => theme_get_setting('toggle_welcome_img', 'us_courts_district')
    );
    
    $form['homepage_settings']['welcome_img'] = array(
      '#type' => 'fieldset',
      '#title' => t('Welcome image settings'),
      '#description' => t("Recommended image dimensions are 300x130")
    );
    $form['homepage_settings']['welcome_img']['default_welcome_img'] = array(
     '#type' => 'checkbox', 
     '#title' => t('Use the default welcome image'), 
     '#default_value' => theme_get_setting('default_welcome_img', 'us_courts_district'), 
     '#tree' => FALSE, 
     '#description' => t('Check here if you want the theme to use the welcome image supplied with it.'),
    );
    $form['homepage_settings']['welcome_img']['settings'] = array(
    '#type' => 'container', 
    '#states' => array(
      // Hide the welcome image settings when using the default welcome image.
      'invisible' => array(
        'input[name="default_welcome_img"]' => array('checked' => TRUE),
      ),
     ),
    );
    $welcome_img_path = theme_get_setting('welcome_img_path');
     // If $logo_path is a public:// URI, display the path relative to the files
     // directory; stream wrappers are not end-user friendly.

     if (file_uri_scheme($welcome_img_path) == 'public') {
       $welcome_img_path = file_uri_target($welcome_img_path);
     }
        
   $form['homepage_settings']['welcome_img']['settings']['welcome_img_path'] = array(
     '#type' => 'textfield',
     '#title' => t('Path to custom welcome image'),
     '#description' => t('The path to the file you would like to use as your welcome image file instead of the default welcome image.'),
     '#default_value' =>  $welcome_img_path,
   ); 
 
   $form['homepage_settings']['welcome_img']['settings']['welcome_img_upload'] = array(
     '#type' => 'file',
     '#title' => t('Upload welcome image'),
     '#description' => t('If you don\'t have direct file access to the server, use this field to upload your logo.')
   );
    
    $form['#submit'][] = '_us_courts_district_settings_submit';
    $form['#validate'][] = '_us_courts_district_settings_validate';
  }
  
  function _us_courts_district_settings_submit($form, &$form_state) {
   //Unlike the 'system_theme_settings_submit' we have to do this by reference
   //since we are not gaurunteed to be the last to touch this value
   $values =& $form_state['values'];
   
   // If the user uploaded a new welcome image, save it to a permanent location
   // and use it in place of the default theme-provided file.
   if ($file = $values['welcome_img_upload']) {
     //Get rid of the file object because we only care about the path
     //to the file
     unset($values['welcome_img_upload']);
     
     $filename = file_unmanaged_copy($file->uri);
     $values['default_welcome_img'] = 0;
     $values['welcome_img_path'] = $filename;
   }
   
   // If the user entered a path relative to the system files directory for
   // a logo or favicon, store a public:// URI so the theme system can handle it.
   if (!empty($values['welcome_img_path'])) {
     $values['welcome_img_path'] = _system_theme_settings_validate_path($values['welcome_img_path']);
   }
  }
  
  function _us_courts_district_settings_validate($form, &$form_state) {
   // Handle file uploads.
   $validators = array('file_validate_is_image' => array());
 
   // Check for a new uploaded logo.
   $file = file_save_upload('welcome_img_upload', $validators);
   if (isset($file)) {
     // File upload was attempted.
     if ($file) {
       // Put the temporary file in form_values so we can save it on submit.
       $form_state['values']['welcome_img_upload'] = $file;
     }
     else {
       // File upload failed.
       form_set_error('welcome_img_upload', t('The welcome image could not be uploaded.'));
     }
   }
 
   $validators = array('file_validate_extensions' => array('ico png gif jpg jpeg apng svg'));
 
   // If the user provided a path for a logo or favicon file, make sure a file
   // exists at that path.
   if ($form_state['values']['welcome_img_path']) {
     $path = _system_theme_settings_validate_path($form_state['values']['welcome_img_path']);
     if (!$path) {
       form_set_error('welcome_img_path', t('The custom welcome image path is invalid.'));
     }
   }
   
  }