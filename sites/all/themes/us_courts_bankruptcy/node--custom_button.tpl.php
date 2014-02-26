<?php
  //TO-DO: Move this logic somewhere else
  drupal_add_css(drupal_get_path('module', 'us_courts_buttons') . '/css/us-courts-btns.css');
  
  $link_field = field_view_field('node', $node, 'field_btn_link');
  $link_field = $link_field['#items'][0];
  
  $btn_field = field_view_field('node', $node, 'field_btn_icon');
  $btn_field_img_url = file_create_url($btn_field['#items'][0]['uri']);
  
  $btn_icon = '<span class="usc-btn-icon" ';
  $btn_icon .= 'style="background-image: url(' . $btn_field_img_url . ')"';
  $btn_icon .= '"></span>';
  
  echo l($btn_icon . $link_field['title'], $link_field['url'], array('html' => true, 'attributes' => array('class' => 'usc-btn')));
?>