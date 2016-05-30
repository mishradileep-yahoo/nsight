<?php

/*
 * Implementation of Hook_form_alter, Perform alterations before a form is rendered.
 */

function purple_form_alter(&$form, &$form_state, $form_id) {
	
  global $user;
	//dsm($user);
//dsm($form_id);
	//if($form_id == "search_block_form"){
	//	$form['search_block_form']['#attributes'] = array('placeholder' => 'Search');
	//}

//  if(isset($form_id) &&  $form_id == 'webform_client_form_4' && arg(2) && is_numeric(arg(2)) ) {	
//	  $nodeload = node_load(arg(2));
//	  $uri = $nodeload->field_know_upload_pdf ['und'][0]['uri'];
//	  $form['submitted']['upload_doc']['#value'] = file_create_url($uri);
//  }
//	if($form_id == "views_exposed_form"){
//		//$form['search_block_form']['#attributes'] = array('placeholder' => 'Search');
//		$form['field_job_location_value']['#attributes'] = array('placeholder' => 'Location');
//		
//	}

 if(!in_array('administrator', $user->roles)) {
    //dsm($form['metatags']);
    //drupal_add_js('jQuery().ready(function(){jQuery(".filter-wrapper").hide();});', 'inline');
		// Hide Unwanted fields from Meta tags
    if(isset($form['metatags'])) {
      hide($form['metatags']['und']['intro_text']);
      hide($form['metatags']['und']['advanced']);
      hide($form['metatags']['und']['abstract']);
    }
		if(isset($form['revision_information'])) { hide($form['revision_information']); }
    if(isset($form['author'])) { hide($form['author']); }
		if(isset($form['options']['promote'])) { hide($form['options']['promote']); }
    if(isset($form['options']['sticky'])) { hide($form['options']['sticky']); }
		if(isset($form['comment_settings'])){ hide($form['comment_settings']); }
		$form['options']['#weight'] = 1;
		if(($form_id != 'page_node_form')) {
			unset($form['metatags']);
			unset($form['menu']);
			if(isset($form['actions']['preview'])){ unset($form['actions']['preview']); }	
		}		
	}	
	
	// Webform CMS Standard
	switch($form_id) {
		case 'form_upload_node_form':
			$form['field_form_category']['und']['#options']['_none']="Select Category";
		break;
		case 'webform_client_form_1':
		case 'webform_client_form_2':
    case 'webform_client_form_3':
    case 'webform_client_form_4':
		case 'webform_client_form_5':
		case 'webform_client_form_6':
		unset($form['#action']);
      foreach ($form["submitted"] as $key => $value) {			
				if (in_array($value["#type"], array("textfield", "webform_email", "textarea"))) {
					$required = '';
					if(isset($form["submitted"][$key]['#required']) && $form["submitted"][$key]['#required']) {
					   $required = '*';
				  }
					$form["submitted"][$key]['#attributes']["placeholder"] = t($value["#title"]) . $required; //strtolower
					$form["submitted"][$key]['#title_display'] = 'invisible';
				}
      }
			$form["submitted"]["wrapper"] = array("#markup" => "<div class='inline-messages'></div>", "#weight" => -50);
			$form["actions"]["submit"]["#ajax"] = array (
				'callback'	 => 'purple_webform_js_submit',
				'wrapper' => str_replace('_','-',$form['#form_id']),
				'effect' => 'fade',
				'method' => 'replace',
				'progress' => array('type' => 'throbber', 'message' => ''),
				'keypress' => TRUE,
	      'event' => 'click',
			);	   
		break;	
	}
	
	if((in_array('site admin', $user->roles))) {
	if($form_id == 'user_profile_form') {
		//$form['account']['roles']['#type'] = 'radios';
		unset($form['timezone']);
		unset($form['picture']);
		unset($form['time_estimate']);
		unset($form['account']['status']);
		unset($form['mimemail']);
      //unset($form['account']['roles']);
	}
	if($form_id == 'user_profile_form') {
	global $base_url;
	//$form['account']['roles']['#options'][3][] ="true";
	$form['account']['name']['#disabled'] = TRUE;
	$form['account']['mail']['#disabled'] = TRUE;
	$form['account']['roles'][3]['#access'] = FALSE;
	//hide($form['account']['roles']);
	//hide($form['account']['field_reg_name']);
	unset($form['actions']['cancel']);
	}
	if($form_id == 'taxonomy_overview_terms'){
	hide($form['actions']['reset_alphabetical']);
	}
	if($form_id == 'taxonomy_form_term'){
	//hide($form['actions']['reset_alphabetical']);	
	}
	if($form_id == 'user_register_form'){
		$form['account']['roles']['#type'] = 'radios';
		$form['field_account_manager']['#states']= array(
			'visible' => array(
			':input[name="roles"]' => array('value' => '5'),
			),
		);
		$form['field_client_manager']['#states']= array(
			'visible' => array(
			':input[name="roles"]' => array('value' => '5'),
			),
		);
		//unset($vars['form']['group_if_in_fieldset']['field_the_radios']['value']['']); 
		//hide($form['account']['roles']);
		hide($form['account']['notify']);
		hide($form['account']['status']);
		hide($form['account']['roles'][2]);
		unset($form['account']['roles']['#options'][3]);
		unset($form['account']['roles']['#options'][4]);
	}
	}
	if($form_id == "search_block_form"){
		$form['search_block_form']['#attributes'] = array('placeholder' => 'Search');
	}
  if((!in_array('administrator', $user->roles))) {
		//dsm($form);		
    //drupal_add_js('jQuery().ready(function(){jQuery(".filter-wrapper").hide();});', 'inline');
		// Hide Unwanted fields from Meta tags
    if(isset($form['metatags'])) {
      hide($form['metatags']['open-graph']);
      hide($form['metatags']['advanced']);
      hide($form['metatags']['abstract']);
      hide($form['metatags']['tokens']);			
    }
		if(isset($form['revision_information'])) { hide($form['revision_information']); }
    if(isset($form['author'])) { hide($form['author']); }
		if(isset($form['options']['promote'])) { hide($form['options']['promote']); }
    if(isset($form['options']['sticky'])) { hide($form['options']['sticky']); }
		if(isset($form['comment_settings'])){ hide($form['comment_settings']); }
		$form['options']['#weight'] = 1;
		if(($form_id != 'page_node_form')) {
			unset($form['metatags']);
			unset($form['menu']);
			if(isset($form['actions']['preview'])){ unset($form['actions']['preview']); }	
		}		
	}	
}

  // Function implements for webform "Ajax" submit
  function purple_webform_js_submit($form, &$form_state) {
	  $sid = $form_state['values']['details']['sid'];
    if ($sid) {
    $node = node_load($form_state['values']['details']['nid']);
    $confirmation = array(
			'#type' => 'markup',
			'#markup' => check_markup($node->webform['confirmation'], $node->webform['confirmation_format'], '', TRUE),
    );
    return $confirmation;
    }
    else {
			$messages = theme('status_messages');
			if($messages) {
				$form["submitted"]["wrapper"]["#prefix"] = "<div class='element-invisible inline-messages'>$messages</div>";
			}
			return $form;
    }
  }
	
	

//  if(!in_array('administrator', $user->roles)) {
//    //hide all menu attributes & unwanted links.
//		if(isset($form['menu']['link'])) {
//      hide($form['menu']['link']['options']);
//      hide($form['menu']['link']['weight']);
//		}
//    if(isset($form['metatags'])) {
//      hide($form['metatags']['open-graph']);
//      hide($form['metatags']['advanced']);
//      hide($form['metatags']['abstract']);
//      //hide($form['metatags']['title']);
//      hide($form['metatags']['tokens']);  
//    }
//		if(isset($form['actions']['preview'])){
//		  unset($form['actions']['preview']);
//	  }		
//	  if(isset($form['comment_settings'])){
//		  hide($form['comment_settings']);
//	  }
//    if(($form_id != 'page_node_form')) {
//      //unset($form['metatags']);
//      unset($form['menu']);
//      hide($form['revision_information']);
//      hide($form['author']);
//      hide($form['options']['promote']);
//      hide($form['options']['sticky']);
//    }
//    if(($form_id == 'page_node_form')) {     
//      hide($form['revision_information']);
//      hide($form['weight']);
//      hide($form['author']);
//      hide($form['options']['promote']);
//      hide($form['options']['sticky']);
//      $form['metatags']['keywords']['#weight']=1;
//      $form['metatags']['description']['#weight']=2;
//      $form['metatags']['description']['value']['#default_value']="";      
//    }
//		
//    switch($form_id) {
//      case 'menu_edit_item':
//				hide($form['expanded']);
//				hide($form['parent']);
//				hide($form['weight']);
//				$form['link_path']['#description']='The path for this menu link.';
//      break;
//    }
//  }
//
//  switch($form_id) {
//		
//    case 'nodequeue_arrange_subqueue_form_1':
//			if(!in_array('administrator', $user->roles)) {
//				unset($form['actions']['reverse']);
//				unset($form['actions']['shuffle']);
//				unset($form['actions']['clear']);
//				if($form['nodes']['#queue']['size'] <= $form['nodes']['#subqueue']['count']) {
//					unset($form['add']);
//				}
//			}
//    break;
//	  
//    case 'user_profile_form':
//      if(!in_array('administrator', $user->roles)) {
//				$form['account']['mail']['#weight'] = -3;
//				$form['account']['current_pass']['#weight'] = -2;
//				$form['account']['current_pass_required_values']['#weight'] = -1;
//				$form['account']['current_pass']['#description'] = 'Enter your current password to change the E-mail address or Password';
//				unset($form['mimemail']);
//				unset($form['account']['roles']);
//				if($user->uid == is_numeric(arg(1))){
//					unset($form['account']['status']);
//					unset($form['actions']['cancel']);
//				}
//      }
//    break;
//	  
//    case 'user_login':
//      $form['name']['#description'] = '';
//      $form['pass']['#description'] = '';
//    break;
//	  
//    case 'webform_client_form_4':	
//      unset($form['#action']);
//      foreach ($form["submitted"] as $key => $value) {
//				if (in_array($value["#type"], array("textfield", "webform_email", "textarea"))) {
//					$form["submitted"][$key]['#attributes']["placeholder"] = t($value["#title"]); //strtolower
//				}
//				//$form["submitted"][$key]['#title_display'] = 'invisible';
//      }
//    break;
//	  
//	  }
//		
//  }
  
		//    case 'webform_client_form_317':
		//			$form['submitted']['careers_title']['#value'] = get_node_title($_GET['id']);
		//      foreach ($form["submitted"] as $key => $value) {
		//				if (in_array($value["#type"], array("textfield", "webform_email", "textarea"))) {
		//					$form["submitted"][$key]['#attributes']["placeholder"] = t($value["#title"]); //strtolower
		//				}
		//      $form["submitted"][$key]['#title_display'] = 'invisible';
		//      }
		//    break;    

 
//function custom_captcha_placeholder(&$form, $form_state) {
//  drupal_add_js(drupal_get_path('module','image_captcha_refresh').'/image_captcha_refresh.js');
//  $form['captcha_widgets']['captcha_response']['#attributes']['placeholder'] = t('Verification Code');
//  $form['captcha_widgets']['captcha_response']['#title'] = '';
//  $form['captcha_widgets']['captcha_response']['#description'] = '';
//  return $form;
//}

//  if($form_id == 'page_node_form') {
//    //dsm($form);
//    $form['field_background_color']['#states']= array(
//      'visible' => array(
//	':input[name="field_promote_to_front_page[und]"]' => array('checked' => TRUE),
//      ),
//    );
//    $form['field_page_image']['#states'] = array(
//      'visible' => array(
//	':input[name="field_promote_to_front_page[und]"]' => array('checked' => TRUE),
//      ),
//    );
//    $form['field_page_description']['#states'] = array(
//      'visible' => array(
//	':input[name="field_promote_to_front_page[und]"]' => array('checked' => TRUE),
//      ),
//    );
//  }
  
  //foreach(node_type_get_types() as $key=>$val) {
  // $ntype[] = $key.'_node_form';    
  //}
  //if(in_array($form_id, $ntype)) {//}
	
	//if($form_id != "media_add_upload" && arg(0) != 'company' && arg(0) != 'contactus' && $form_id != 'ctools_jump_menu' && $form_id != 'poll_view_voting' && $form_id != 'poll_cancel_form') {
		 //$form['actions']['submit']['#suffix'] = '<input type="button" id="edit-cancel" name="op" value="Cancel" class="secondary button radius form-submit" onClick="history.go(-1)" />';
	 //}
