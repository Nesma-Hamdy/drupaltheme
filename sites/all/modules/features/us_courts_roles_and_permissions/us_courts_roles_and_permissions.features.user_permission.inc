<?php
/**
 * @file
 * us_courts_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function us_courts_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access site in maintenance mode
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer ckeditor
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer custom search
  $permissions['administer custom search'] = array(
    'name' => 'administer custom search',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer imce
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: administer oho site alerts
  $permissions['administer oho site alerts'] = array(
    'name' => 'administer oho site alerts',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'oho_site_alerts',
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: bypass node access
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create checklist_items content
  $permissions['create checklist_items content'] = array(
    'name' => 'create checklist_items content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create court content
  $permissions['create court content'] = array(
    'name' => 'create court content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create custom_button content
  $permissions['create custom_button content'] = array(
    'name' => 'create custom_button content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create faq content
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create form content
  $permissions['create form content'] = array(
    'name' => 'create form content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create general_order content
  $permissions['create general_order content'] = array(
    'name' => 'create general_order content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create hearing_date content
  $permissions['create hearing_date content'] = array(
    'name' => 'create hearing_date content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create judge content
  $permissions['create judge content'] = array(
    'name' => 'create judge content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create local_rule content
  $permissions['create local_rule content'] = array(
    'name' => 'create local_rule content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create news_announcements content
  $permissions['create news_announcements content'] = array(
    'name' => 'create news_announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create node_block content
  $permissions['create node_block content'] = array(
    'name' => 'create node_block content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create opinion content
  $permissions['create opinion content'] = array(
    'name' => 'create opinion content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: customize ckeditor
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: customize shortcut links
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any checklist_items content
  $permissions['delete any checklist_items content'] = array(
    'name' => 'delete any checklist_items content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any court content
  $permissions['delete any court content'] = array(
    'name' => 'delete any court content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any custom_button content
  $permissions['delete any custom_button content'] = array(
    'name' => 'delete any custom_button content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any faq content
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any form content
  $permissions['delete any form content'] = array(
    'name' => 'delete any form content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any general_order content
  $permissions['delete any general_order content'] = array(
    'name' => 'delete any general_order content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any hearing_date content
  $permissions['delete any hearing_date content'] = array(
    'name' => 'delete any hearing_date content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any judge content
  $permissions['delete any judge content'] = array(
    'name' => 'delete any judge content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any local_rule content
  $permissions['delete any local_rule content'] = array(
    'name' => 'delete any local_rule content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any news_announcements content
  $permissions['delete any news_announcements content'] = array(
    'name' => 'delete any news_announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any node_block content
  $permissions['delete any node_block content'] = array(
    'name' => 'delete any node_block content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any opinion content
  $permissions['delete any opinion content'] = array(
    'name' => 'delete any opinion content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own checklist_items content
  $permissions['delete own checklist_items content'] = array(
    'name' => 'delete own checklist_items content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own court content
  $permissions['delete own court content'] = array(
    'name' => 'delete own court content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own custom_button content
  $permissions['delete own custom_button content'] = array(
    'name' => 'delete own custom_button content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own faq content
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own form content
  $permissions['delete own form content'] = array(
    'name' => 'delete own form content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own general_order content
  $permissions['delete own general_order content'] = array(
    'name' => 'delete own general_order content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own hearing_date content
  $permissions['delete own hearing_date content'] = array(
    'name' => 'delete own hearing_date content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own judge content
  $permissions['delete own judge content'] = array(
    'name' => 'delete own judge content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own local_rule content
  $permissions['delete own local_rule content'] = array(
    'name' => 'delete own local_rule content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own news_announcements content
  $permissions['delete own news_announcements content'] = array(
    'name' => 'delete own news_announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own node_block content
  $permissions['delete own node_block content'] = array(
    'name' => 'delete own node_block content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own opinion content
  $permissions['delete own opinion content'] = array(
    'name' => 'delete own opinion content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any checklist_items content
  $permissions['edit any checklist_items content'] = array(
    'name' => 'edit any checklist_items content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any court content
  $permissions['edit any court content'] = array(
    'name' => 'edit any court content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any custom_button content
  $permissions['edit any custom_button content'] = array(
    'name' => 'edit any custom_button content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any faq content
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any form content
  $permissions['edit any form content'] = array(
    'name' => 'edit any form content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any general_order content
  $permissions['edit any general_order content'] = array(
    'name' => 'edit any general_order content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any hearing_date content
  $permissions['edit any hearing_date content'] = array(
    'name' => 'edit any hearing_date content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any judge content
  $permissions['edit any judge content'] = array(
    'name' => 'edit any judge content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any local_rule content
  $permissions['edit any local_rule content'] = array(
    'name' => 'edit any local_rule content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any news_announcements content
  $permissions['edit any news_announcements content'] = array(
    'name' => 'edit any news_announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any node_block content
  $permissions['edit any node_block content'] = array(
    'name' => 'edit any node_block content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any opinion content
  $permissions['edit any opinion content'] = array(
    'name' => 'edit any opinion content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own checklist_items content
  $permissions['edit own checklist_items content'] = array(
    'name' => 'edit own checklist_items content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own court content
  $permissions['edit own court content'] = array(
    'name' => 'edit own court content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own custom_button content
  $permissions['edit own custom_button content'] = array(
    'name' => 'edit own custom_button content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own faq content
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own form content
  $permissions['edit own form content'] = array(
    'name' => 'edit own form content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own general_order content
  $permissions['edit own general_order content'] = array(
    'name' => 'edit own general_order content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own hearing_date content
  $permissions['edit own hearing_date content'] = array(
    'name' => 'edit own hearing_date content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own judge content
  $permissions['edit own judge content'] = array(
    'name' => 'edit own judge content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own local_rule content
  $permissions['edit own local_rule content'] = array(
    'name' => 'edit own local_rule content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own news_announcements content
  $permissions['edit own news_announcements content'] = array(
    'name' => 'edit own news_announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own node_block content
  $permissions['edit own node_block content'] = array(
    'name' => 'edit own node_block content',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own opinion content
  $permissions['edit own opinion content'] = array(
    'name' => 'edit own opinion content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit views basic settings
  $permissions['edit views basic settings'] = array(
    'name' => 'edit views basic settings',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'views_ui_basic',
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: skip comment approval
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: switch shortcut sets
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: use text format filtered_html
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'court administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
      1 => 'content creator',
      2 => 'court administrator',
      3 => 'editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
