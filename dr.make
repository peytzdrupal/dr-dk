; makefile for dr.dk demo site

; define core version and drush make compatibility

core = 7.x
api = 2

; modules

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc1

projects[advanced_help][subdir] = contrib
projects[advanced_help][version] = 1.0

projects[coder][subdir] = developer
projects[coder][version] = 1.0

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.x-dev

projects[date][subdir] = contrib
projects[date][version] = 2.0-rc1

projects[devel][subdir] = developer
projects[devel][version] = 1.2

projects[diff][subdir] = contrib
projects[diff][version] = 2.0

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc1

projects[entity_token][subdir] = contrib
projects[entity_token][version] = 1.0-rc1

projects[features][subdir] = contrib
projects[features][version] = 1.0-beta5

projects[feeds][subdir] = contrib
projects[feeds][version] = 2.0-alpha4

projects[field_collection][subdir] = contrib
projects[field_collection][version] = 1.0-beta3

projects[field_group][subdir] = contrib
projects[field_group][version] = 1.1

projects[file_entity][subdir] = contrib
projects[file_entity][version] = 2.x-dev

projects[job_scheduler][subdir] = contrib
projects[job_scheduler][version] = 2.0-alpha2

projects[l10n_update][subdir] = contrib
projects[l10n_update][version] = 1.0-beta2

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.x-dev

projects[link][subdir] = contrib
projects[link][version] = 1.0

projects[media][subdir] = contrib
projects[media][version] = 2.x-dev

projects[menu_block][subdir] = contrib
projects[menu_block][version] = 2.x-dev

projects[migrate][subdir] = developer
projects[migrate][version] = 2.x-dev

projects[panels][subdir] = contrib
projects[panels][version] = 3.x-dev

projects[panelizer][subdir] = contrib
projects[panelizer][version] = 2.x-dev

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.0

projects[redirect][subdir] = contrib
projects[redirect][version] = 1.0-beta4

projects[references][subdir] = contrib
projects[references][version] = 2.0

projects[references_dialog][subdir] = contrib
projects[references_dialog][version] = 1.0-alpha3

projects[rules][subdir] = contrib
projects[rules][version] = 2.0

projects[services][subdir] = contrib
projects[services][version] = 3.1

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0-beta5

projects[token][subdir] = contrib
projects[token][version] = 1.0-beta7

projects[transliteration][subdir] = contrib
projects[transliteration][version] = 3.0

projects[variable][subdir] = contrib
projects[variable][version] = 1.1

projects[views][subdir] = contrib
projects[views][version] = 3.1

projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = 3.0-beta3

projects[workbench][subdir] = contrib
projects[workbench][version] = 1.1

projects[workbench_access][subdir] = contrib
projects[workbench_access][version] = 1.x-dev

projects[workbench_media][subdir] = contrib
projects[workbench_media][version] = 1.x-dev

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.1

; themes

; libraries

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz
