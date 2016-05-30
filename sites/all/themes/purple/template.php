<?php
/*
 * Implementation of preprocess page
 */
function purple_preprocess_page(&$vars) {
	global $base_url;
	$vars['path_to_theme'] = $base_url.'/'.path_to_theme();


 // $mtree1 = menu_tree_all_data('main-menu', null, 1);
  //purple_menu_tree_add_active_path($mtree1);
  //$vars['menu'] = drupal_render(menu_tree_output($mtree1));
  $vars['menu'] = drupal_render(menu_tree_output(menu_tree_all_data('main-menu', null, 1)));
  
  $mtree = menu_tree_all_data('menu-mobile-menus', null, 3);
  ob_menu_tree_add_active_path($mtree);
  $vars['custom_mobile_menu'] = drupal_render(menu_tree_output($mtree));
  
   if (isset($vars['main_menu'])) {
    $vars['main_menu'] = theme('links__system_main_menu', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'class' => array('nav', 'navbar-nav', 'navbar-right'), /* 'main-menu', 'clearfix', 'footer_nav'*/
      ),
      /*'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )*/
    ));
  }
  else {
    $vars['main_menu'] = FALSE;
  }
  
}

/*
 * Implementation of theme_menu_tree__main_menu
 */
function purple_menu_tree__main_menu($variables) {
  return '<ul class="nav navbar-nav navbar-right">' . $variables['tree'] . '</ul>';
}


/*
 * Implementation of themename_preprocess_html()
 */
function purple_preprocess_html(&$vars) {
  $viewport = array(
   '#tag' => 'meta',
   '#attributes' => array(
     'name' => 'viewport',
     'content' => 'width=device-width, initial-scale=1, maximum-scale=1',
   ),
  );
  drupal_add_html_head($viewport, 'viewport');	
}

/*
 * Implementation of themename_html_head_alter()
 */
function purple_html_head_alter(&$head_elements) {
	unset($head_elements['system_meta_generator']);
	
  // Force the latest IE rendering engine and Google Chrome Frame.
  $head_elements['chrome_frame'] = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array('http-equiv' => 'X-UA-Compatible', 'content' => 'IE=edge,chrome=1'),
    '#weight' => -1001,
  );
}

/*
 * Custom function  
 */
function purple_menu_tree_add_active_path($mtree) {
	// Grab any menu item to find the menu_name for this tree.
	if(isset($tree)) {
  $menu_item = current($tree);
  $tree_with_trail = menu_tree_page_data($menu_item['link']['menu_name']);

  // To traverse the original tree down the active trail, we use a pointer.
  $subtree_pointer = &$tree;

  // Find each key in the active trail.
  while ($tree_with_trail) {
    foreach (array_keys($tree_with_trail) as $key) {
      if ($tree_with_trail[$key]['link']['in_active_trail']) {
        // Set the active trail info in the original tree.
        $subtree_pointer[$key]['link']['in_active_trail'] = TRUE;
        // Continue in the subtree, if it exists.
        $tree_with_trail = &$tree_with_trail[$key]['below'];
        $subtree_pointer = &$subtree_pointer[$key]['below'];
        break;
      }
      else {
        unset($tree_with_trail[$key]);
      }
    }
  }
	}
}

function ob_menu_tree_add_active_path(&$tree) {
  // Grab any menu item to find the menu_name for this tree.
  $menu_item = current($tree);
  $tree_with_trail = menu_tree_page_data($menu_item['link']['menu_name']);

  // To traverse the original tree down the active trail, we use a pointer.
  $subtree_pointer = &$tree;

  // Find each key in the active trail.
  while ($tree_with_trail) {
    foreach (array_keys($tree_with_trail) as $key) {
      if ($tree_with_trail[$key]['link']['in_active_trail']) {
        // Set the active trail info in the original tree.
        $subtree_pointer[$key]['link']['in_active_trail'] = TRUE;
        // Continue in the subtree, if it exists.
        $tree_with_trail = &$tree_with_trail[$key]['below'];
        $subtree_pointer = &$subtree_pointer[$key]['below'];
        break;
      }
      else {
        unset($tree_with_trail[$key]);
      }
    }
  }
}

/*function purple_preprocess_views_view__our_team(&$vars) {

        $columns = 3; //Number of Columns
        $count = ceil(count($vars['view']->result) / $columns);
        
        $vars['split'] = $count;

        $rows = preg_replace('~>\s+<~', '><', $vars['rows']);
        $rows = str_replace('<ul', '<ul class="view-column view-column-1"', $rows);

        for ($i = 2; $i <= $columns; $i++) {
            
            $row_count = ($i - 1) * $count + 1;
            $search = '<li class="views-row views-row-' . $row_count;
            $replace = '</ul><ul class="view-column view-column-' . $i . '"><li class="views-row views-row-' . $row_count;
            $rows = str_replace($search, $replace, $rows);
        
        }
        
        $vars['rows'] = $rows;
    
}*/


function pr($arr) {
  print "<pre>";
  print_r($arr);
  print "</pre>";
}

function purple_links__system_main_menu($variables) {
  $links = $variables['links'];
  $attributes = $variables['attributes'];
  $heading = $variables['heading'];
  global $language_url;
  $output = '';

  if (count($links) > 0) {
    // Treat the heading first if it is present to prepend it to the
    // list of links.
    if (!empty($heading)) {
      if (is_string($heading)) {
        // Prepare the array that will be used when the passed heading
        // is a string.
        $heading = array(
          'text' => $heading,
          // Set the default level of the heading.
          'level' => 'h2',
        );
      }
      $output .= '<' . $heading['level'];
      if (!empty($heading['class'])) {
        $output .= drupal_attributes(array('class' => $heading['class']));
      }
      $output .= '>' . check_plain($heading['text']) . '</' . $heading['level'] . '>';
    }

    $output .= '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = array($key);

      // Add first, last and active classes to the list of links to help out
      // themers.
      if ($i == 1) {
        $class[] = 'first';
      }
      if ($i == $num_links) {
        $class[] = 'last';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page()))
         && (empty($link['language']) || $link['language']->language == $language_url->language)) {
        $class[] = 'active';
      }
      $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';

      // Stack the long texts
      $long_texts = array('CUSTOMER ENGAGEMENT', 'MANAGED SERVICES');
      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        if (in_array($link['title'], $long_texts)) {
          $link['html'] = TRUE;
          $link['title'] = str_replace(' ', "<br>", $link['title']);
        }
        $output .= l($link['title'], $link['href'], $link);
      }
      elseif (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for
        // adding title and class attributes.
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span' . $span_attributes . '>' . $link['title'] . '</span>';
      }

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  return $output;
}