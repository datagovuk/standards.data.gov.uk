<?php
/**
 * @file
 * like_dislike.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function like_dislike_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'like_dislike',
      'tag' => 'vote',
      'title' => 'Like Dislike',
      'node_types' => array(
        0 => 'proposal',
      ),
      'comment_types' => array(
        0 => 'article',
        1 => 'page',
        2 => 'challenge',
        3 => 'meeting_minute',
        4 => 'news',
        5 => 'proposal',
        6 => 'standard',
        7 => 'profile',
        8 => 'standard_version',
        9 => 'webform',
      ),
      'options' => array(
        0 => array(
          0 => '1',
          1 => 'Like',
        ),
        1 => array(
          0 => '-1',
          1 => 'Dislike',
        ),
      ),
      'template' => 'yesno',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '5',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => '3',
        2 => '2',
        4 => '4',
        5 => '5',
        1 => 0,
      ),
      'allow_voting_by_author' => 0,
      'noperm_behaviour' => '1',
      'displayed' => '2',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'value_type' => 'option',
      'theme' => 'rate_template_yesno',
      'css' => 'sites/all/modules/contrib/rate/templates/yesno/yesno.css',
      'translate' => TRUE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  return $export;
}
