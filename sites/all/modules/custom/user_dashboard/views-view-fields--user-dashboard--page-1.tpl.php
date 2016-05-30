<?php

  $userperm = isset($fields['field_user_permissions']->content) ? $fields['field_user_permissions']->content : '';
  if(!empty($userperm)) {
    $arry = explode(',',$userperm);
    foreach($arry as $v) {
      if(user_access(trim($v))) {
        print l($fields['field_dashboard_image']->content.'<div class="panellink">'.$fields['title']->raw.'</div>', $fields['field_dashboard_link']->content, array('html' => TRUE));
        return false;
      }
    }
  }

?>