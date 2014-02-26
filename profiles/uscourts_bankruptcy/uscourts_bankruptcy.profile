<?php

/**
 * Implements hook_install_tasks_alter().
 */
function uscourts_bankruptcy_install_tasks_alter(&$tasks, $install_state) {
  // Preselect the English language, so users can skip the language selection
  // form. We do not ship other languages with Acquia Drupal at this point.
  if (!isset($_GET['locale'])) {
    $_POST['locale'] = 'en';
  }
}


/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function uscourts_bankruptcy_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#title'] = 'Site name/district name (i.e.- District of New Jersey)';
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['site_information']['site_mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST']; 
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
}

