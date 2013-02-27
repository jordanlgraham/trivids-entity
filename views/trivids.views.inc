<?php

/**
 * @file
 * Providing extra functionality for the trivids UI via views.
 */


/**
 * Implements hook_views_data()
 */
function trivids_views_data_alter(&$data) { 
  $data['trivids']['link_trivids'] = array(
    'field' => array(
      'title' => t('Link'),
      'help' => t('Provide a link to the trivids record.'),
      'handler' => 'trivids_handler_link_field',
    ),
  );
}


/**
 * Implements hook_views_default_views().
 */
function trivids_views_default_views() {
  $views = array();

$view = new view();
$view->name = 'trivids athletes';
$view->description = 'A list of all trivids athletes';
$view->tag = 'trivids athletes';
$view->base_table = 'trivids_athletes';
$view->human_name = 'trivids athletes';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'trivids athletes';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'firstname' => 'firstname',
  'trivids_idno' => 'idno',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'firstname' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'trivids_idno' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Empty ';
$handler->display->display_options['empty']['area']['content'] = 'No trivids athletes have been created yet';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['trivids_id']['id'] = 'trivids_id';
$handler->display->display_options['fields']['trivids_id']['table'] = 'trivids_athletes';
$handler->display->display_options['fields']['trivids_id']['field'] = 'trivids_id';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'trivids_athletes';
$handler->display->display_options['fields']['name']['field'] = 'name';
/* Field: : Link */
$handler->display->display_options['fields']['link_trivids']['id'] = 'link_trivids';
$handler->display->display_options['fields']['link_trivids']['table'] = 'trivids_athletes';
$handler->display->display_options['fields']['link_trivids']['field'] = 'link_trivids';
$handler->display->display_options['fields']['link_trivids']['label'] = 'View';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'trivids_athletes';
$handler->display->display_options['fields']['operations']['field'] = 'operations';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'trivids athletes_admin_page');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['path'] = 'admin/content/trivids athletes/list';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'List';
$handler->display->display_options['menu']['weight'] = '-10';
$handler->display->display_options['tab_options']['type'] = 'tab';
$handler->display->display_options['tab_options']['title'] = 'trivids athletes';
$handler->display->display_options['tab_options']['description'] = 'Manage trivids athletes';
$handler->display->display_options['tab_options']['weight'] = '0';
$handler->display->display_options['tab_options']['name'] = 'management';

  $translatables['trivids athletes'] = array(
    t('Master'),
    t('trivids athletes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Empty '),
    t('No trivids athletes have been created yet'),
    t('trivids ID'),
    t('.'),
    t(','),
    t('Name'),
    t('View'),
    t('Operations links'),
    t('Page'),
  );
  $views[] = $view;
  return $views;

}
