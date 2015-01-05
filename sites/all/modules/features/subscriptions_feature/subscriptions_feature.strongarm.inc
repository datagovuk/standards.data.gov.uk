<?php
/**
 * @file
 * subscriptions_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function subscriptions_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_avoid_empty_subscribe_links';
  $strongarm->value = 0;
  $export['subscriptions_avoid_empty_subscribe_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_blocked_content_types';
  $strongarm->value = array(
    'meeting_minute' => 'meeting_minute',
    'article' => 'article',
    'book' => 'book',
    'further_information' => 'further_information',
    'page' => 'page',
    'profile' => 'profile',
    'webform' => 'webform',
  );
  $export['subscriptions_blocked_content_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_blocked_nodes';
  $strongarm->value = '';
  $export['subscriptions_blocked_nodes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_cron_percent';
  $strongarm->value = '50';
  $export['subscriptions_cron_percent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_form_expanded';
  $strongarm->value = 0;
  $export['subscriptions_form_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_form_in_block';
  $strongarm->value = '0';
  $export['subscriptions_form_in_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_form_link_only';
  $strongarm->value = '0';
  $export['subscriptions_form_link_only'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_number_of_mails';
  $strongarm->value = '0';
  $export['subscriptions_number_of_mails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_showmailkeys';
  $strongarm->value = 0;
  $export['subscriptions_showmailkeys'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_show_by_author_options';
  $strongarm->value = 1;
  $export['subscriptions_show_by_author_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_show_install_info';
  $strongarm->value = 1;
  $export['subscriptions_show_install_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_site_mail';
  $strongarm->value = 'team@data.gov.uk';
  $export['subscriptions_site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_site_mail_name';
  $strongarm->value = '';
  $export['subscriptions_site_mail_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_static_content_types';
  $strongarm->value = array();
  $export['subscriptions_static_content_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_unlisted_content_types';
  $strongarm->value = array(
    'meeting_minute' => 'meeting_minute',
    'article' => 'article',
    'book' => 'book',
    'further_information' => 'further_information',
    'page' => 'page',
    'profile' => 'profile',
    'webform' => 'webform',
  );
  $export['subscriptions_unlisted_content_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_watchgood';
  $strongarm->value = 1;
  $export['subscriptions_watchgood'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_watchstats';
  $strongarm->value = 1;
  $export['subscriptions_watchstats'] = $strongarm;

  return $export;
}
