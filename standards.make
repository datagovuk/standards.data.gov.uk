core = 7.x
api = 2

projects[drupal][version] = 7.25

; Modules
projects[admin_menu][subdir] = "contrib"

projects[module_filter][subdir] = "contrib"

projects[backup_migrate][subdir] = "contrib"

projects[ctools][subdir] = "contrib"

projects[context][subdir] = "contrib"

projects[date][subdir] = "contrib"

projects[devel][subdir] = "contrib"

projects[diff][subdir] = "contrib"

projects[entity][subdir] = "contrib"

;projects[fancybox][version] = "2.x-dev"
projects[fancybox][type] = "module"
projects[fancybox][download][type] = "git"
projects[fancybox][download][url] = "http://git.drupal.org/project/fancybox.git"
projects[fancybox][download][revision] = "272acd38b7e441601e92b7c7f012d9da2fbc95c5"
projects[fancybox][subdir] = "contrib"
projects[fancybox][patch][] = "http://drupal.org/files/fancybox_type_error.patch"

projects[features][subdir] = "contrib"

projects[features_extra][subdir] = "contrib"

projects[filefield_sources][subdir] = "contrib"

projects[flag][subdir] = "contrib"
projects[flag][version] = "2.1"
;projects[flag][patch][] = "http://drupal.org/files/flag_invalid_arguments_passed_in_template_preprocess_flag.patch"

projects[flag_abuse][subdir] = "contrib"

projects[google_analytics][subdir] = "contrib"

projects[imce][subdir] = "contrib"

projects[imce_wysiwyg][subdir] = "contrib"

projects[jquery_update][subdir] = "contrib"

projects[libraries][subdir] = "contrib"

projects[link][subdir] = "contrib"

projects[mollom][subdir] = "contrib"
;projects[mollom][version] = "1.1"

projects[maxlength][subdir] = "contrib"

projects[nodereferrer][subdir] = "contrib"

projects[quicktabs][subdir] = "contrib"

projects[references][subdir] = "contrib"

projects[pathauto][subdir] = "contrib"

projects[pathauto_persist][subdir] = "contrib"

projects[relation][subdir] = "contrib"

projects[relation_add][subdir] = "contrib"

projects[remote_file_source][subdir] = "contrib"

projects[remote_stream_wrapper][subdir] = "contrib"

projects[session_api][subdir] = "contrib"

projects[stringoverrides][subdir] = "contrib"

projects[strongarm][subdir] = "contrib"

projects[token][subdir] = "contrib"

projects[views][subdir] = "contrib"

projects[webform][subdir] = "contrib"

projects[workbench_moderation][subdir] = "contrib"

projects[wysiwyg][subdir] = "contrib"

projects[field_permissions][subdir] = "contrib"

projects[field_collection][subdir] = "contrib"

projects[field_group][subdir] = "contrib"

projects[conditional_fields][subdir] = "contrib"

; Libraries
libraries[fancybox][download][type]= "git"
libraries[fancybox][download][url] = "https://github.com/ratajczak/fancyBox.git"
libraries[fancybox][directory_name] = "fancybox"
libraries[fancybox][destination] = "libraries"

libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://github.com/downloads/tinymce/tinymce/tinymce_3.5.7.zip"
libraries[tinymce][directory_name] = "tinymce"
libraries[tinymce][destination] = "libraries"

; Themes
projects[adaptivetheme][version] = "2.1"
