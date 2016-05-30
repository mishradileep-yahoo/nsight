<?php
//
///**
// * @file
// * template.php
// */
//
// // set custom tpl for the login page.
//function bootstrap_subtheme_theme() {
// 
//  $items = array();
// 
//  $items['user_login'] = array(
//    'render element' => 'form',
//    'path' => drupal_get_path('theme', 'books') . '/templates',
//    'template' => 'user-login',
//  );
// 
//}
//
////add class to buttons
//function bootstrap_subtheme_button($variables) {
//  $element = $variables['element'];
//  $element['#attributes']['type'] = 'submit';
//  element_set_attributes($element, array('id', 'name', 'value'));
// 
//  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
//  $element['#attributes']['class'][] = 'btn';
//  // adding bootstrap classes.
//  if($element['#button_type'] == 'submit'){
//    $element['#attributes']['class'][] = 'btn-primary';
//    $element['#attributes']['class'][] = 'btn-lg';
//  }
//  if (!empty($element['#attributes']['disabled'])) {
//    $element['#attributes']['class'][] = 'form-button-disabled';
//  }
// 
//  return '<input' . drupal_attributes($element['#attributes']) . ' />';
//}
//
///**** theme form textfields. ***/
//function bootstrap_subtheme_textfield($variables) {
// 
//  $element = $variables['element'];
//  $output = '';
//  // login form adding glyphicon.
//  if($element['#name'] == 'name') {
//    $output = '<span class="input-group-addon"><span class="glyphicon glyphicon-user"></span></span>';
//  }
// 
//  // force type.
//  $element['#attributes']['type'] = 'text';
//  // set placeholder.
//  if(isset($variables['element']['#description'])){
//    $element['#attributes']['placeholder'] = $variables['element']['#description'];
//  }
// 
//  element_set_attributes($element, array('id', 'name', 'value', 'size', 'maxlength'));
//  // adding bootstrap classes.
//  _form_set_class($element, array('form-text', 'form-control', 'input-lg-3'));
// 
//  $extra = '';
//  if ($element['#autocomplete_path'] && drupal_valid_path($element['#autocomplete_path'])) {
//    drupal_add_library('system', 'drupal.autocomplete');
//    $element['#attributes']['class'][] = 'form-autocomplete';
// 
//    $attributes = array();
//    $attributes['type'] = 'hidden';
//    $attributes['id'] = $element['#attributes']['id'] . '-autocomplete';
//    $attributes['value'] = url($element['#autocomplete_path'], array('absolute' => TRUE));
//    $attributes['disabled'] = 'disabled';
//    $attributes['class'][] = 'autocomplete';
//    $extra = '<input' . drupal_attributes($attributes) . ' />';
//  }
// 
//  $output .= '<input' . drupal_attributes($element['#attributes']) . ' />';
// 
//  return $output . $extra;
//}
// 
///*** theme password field ***/
//function bootstrap_subtheme_password($variables) {
//  $element = $variables['element'];
//  $element['#attributes']['type'] = 'password';
//  element_set_attributes($element, array('id', 'name', 'size', 'maxlength'));
//  _form_set_class($element, array('form-text', 'form-control'));
// 
//  $output = '';
//  // login form adding glyphicon.
//  if($element['#name'] == 'pass') {
//    $output = '<span class="input-group-addon"><span class="glyphicon glyphicon-eye-close"></span></span>';
//  }
// 
//  return $output . '<input' . drupal_attributes($element['#attributes']) . ' />';
//}
// 
///** Theme form element **/
//function bootstrap_subtheme_form_element($variables) {
//  $element = &$variables['element'];
// 
//  // This function is invoked as theme wrapper, but the rendered form element
//  // may not necessarily have been processed by form_builder().
//  $element += array(
//    '#title_display' => 'before',
//  );
// 
//  // Add element #id for #type 'item'.
//  if (isset($element['#markup']) && !empty($element['#id'])) {
//    $attributes['id'] = $element['#id'];
//  }
//  // Add element's #type and #name as class to aid with JS/CSS selectors.
//  $attributes['class'] = array('form-item');
//  if (!empty($element['#type'])) {
//    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
//  }
//  if (!empty($element['#name'])) {
//    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
//  }
//  // Add a class for disabled elements to facilitate cross-browser styling.
//  if (!empty($element['#attributes']['disabled'])) {
//    $attributes['class'][] = 'form-disabled';
//  }
//  if (isset($element['#parents']) && form_get_error($element)) {
//    $attributes['class'][] = 'has-error';
//  }
// 
//  if($element['#type'] != 'radio'){
//    $attributes['class'][] = 'input-group';
//  }
// 
//  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";
// 
//  // If #title is not set, we don't display any label or required marker.
//  if (!isset($element['#title'])) {
//    $element['#title_display'] = 'none';
//  }
//  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
//  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';
// 
//  switch ($element['#title_display']) {
//    case 'before':
//    case 'invisible':
//      $output .= ' ' . theme('form_element_label', $variables);
//      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
//      break;
// 
//    case 'after':
//      $output .= ' ' . $prefix . $element['#children'] . $suffix;
//      $output .= ' ' . theme('form_element_label', $variables) . "\n";
//      break;
// 
//    case 'none':
//    case 'attribute':
//      // Output no label and no required marker, only the children.
//      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
//      break;
//  }
//  // remove description we'll use placeholder.
//  if (!empty($element['#description'])) {
//    //$output .= '<div class="description">' . $element['#description'] . "</div>\n";
//  }
// 
//  $output .= "</div>\n";
// 
//  return $output;
//}