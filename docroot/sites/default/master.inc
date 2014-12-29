<?php
/**
 * @file: Configure master module.
 */

/*
 * Master Modul Konfiguration
 */
$conf['install_profile'] = 'minimal';
$conf['master_version'] = 2;
$conf['master_modules'] = array(
  'base' => array(

    // Core Modules
    'dblog',
    'file',
    'image',
    'update',


    // Contrib Modules
    'admin_menu',
    'ctools',
    'diff',
    'display_cache',
    'entity',
    'entitycache',
    'environment_indicator',
    'features',
    'strongarm',

    // Features
    'soateba_base',

    #'backup_migrate',

    #'date',
    #'date_popup',
    #'date_views',

    #
    #'entityreference',
    #'entityreference_view_widget',
    #'environment_indicator',
    #
    #'features_override',
    #'field_collection',
    #'file',
    #'final_polish',
    #'globalredirect',
    #'jquery_update',
    #'image',
    #'l10n_update',
    #'libraries',
    #'number',
    #'list',
    #'list_predefined_options',
    #'media',
    #'manualcrop',
    #'module_filter',
    #'menu',
    #'multiselect',
    #'page_manager',
    #'page_title',
    #'panels',
    #'panels_everywhere',
    #'paragraphs',
    #'pathauto',
    #'redirect',
    #'title',
    #'transliteration',
    #
  ),

  'local' => array(
    'field_ui',
  ),

  'stage' => array(
    #'field_ui',
  ),

  'live' => array(

  ),
);

$conf['master_uninstall_blacklist'] = array(

);

$conf['master_removable_blacklist'] = array(
  0 => 'modules/*',
);

