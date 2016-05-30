<?php

/**
 * An array of fields and field instances used by the content type.
 * declared by this module.
 */


/**
 * Returns a structured array defining the fields created by this content type.
 *
 * @return
 *  An associative array specifying the fields we wish to add to our
 *  new node type.
 */
function _user_dashboard_create_fields() {
  $t = get_t();

  return array(
    //####################### field_dashboard_image
    'field_dashboard_image' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'uri_scheme' => 'public',
        'default_image' => 0,
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_dashboard_image' => array(
                'fid' => 'field_dashboard_image_fid',
                'alt' => 'field_dashboard_image_alt',
                'title' => 'field_dashboard_image_title',
                'width' => 'field_dashboard_image_width',
                'height' => 'field_dashboard_image_height',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_dashboard_image' => array(
                'fid' => 'field_dashboard_image_fid',
                'alt' => 'field_dashboard_image_alt',
                'title' => 'field_dashboard_image_title',
                'width' => 'field_dashboard_image_width',
                'height' => 'field_dashboard_image_height',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'fid' => array(
          'table' => 'file_managed',
          'columns' => array(
            'fid' => 'fid',
          ),
        ),
      ),
      'indexes' => array(
        'fid' => array(
          'fid',
        ),
      ),
      'field_name' => 'field_dashboard_image',
      'type' => 'image',
      'module' => 'image',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'fid' => array(
          'description' => 'The {file_managed}.fid being referenced in this field.',
          'type' => 'int',
          'not null' => FALSE,
          'unsigned' => TRUE,
        ),
        'alt' => array(
          'description' => "Alternative image text, for the image's 'alt' attribute.",
          'type' => 'varchar',
          'length' => 512,
          'not null' => FALSE,
        ),
        'title' => array(
          'description' => "Image title text, for the image's 'title' attribute.",
          'type' => 'varchar',
          'length' => 1024,
          'not null' => FALSE,
        ),
        'width' => array(
          'description' => 'The width of the image in pixels.',
          'type' => 'int',
          'unsigned' => TRUE,
        ),
        'height' => array(
          'description' => 'The height of the image in pixels.',
          'type' => 'int',
          'unsigned' => TRUE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          'dashboard',
        ),
      ),
    ),		
    //####################### field_dashboard_link
    'field_dashboard_link' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '255',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_dashboard_link' => array(
                'value' => 'field_dashboard_link_value',
                'format' => 'field_dashboard_link_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_dashboard_link' => array(
                'value' => 'field_dashboard_link_value',
                'format' => 'field_dashboard_link_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          'format',
        ),
      ),
      'field_name' => 'field_dashboard_link',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '255',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          'dashboard',
        ),
      ),
    ),
    //####################### field_user_permissions
    'field_user_permissions' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          'site admin' => 'site admin',
        ),
        'allowed_values_function' => 'purple_predefined_list_option_permissions',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_user_permissions' => array(
                'value' => 'field_user_permissions_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_user_permissions' => array(
                'value' => 'field_user_permissions_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          'value',
        ),
      ),
      'field_name' => 'field_user_permissions',
      'type' => 'list_text',
      'module' => 'list',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          'dashboard',
        ),
      ),
    ),
  );
}

/**
 * Returns a structured array defining the instances for this content type.
 *
 * @return
 *  An associative array specifying the instances we wish to add to our new
 *  node type.
 */
function _user_dashboard_create_instances() {
  $t = get_t();
  return array(
    'field_dashboard_image' => array(
      'label' => 'Image',
      'widget' => array(
        'weight' => '1',
        'type' => 'image_image',
        'module' => 'image',
        'active' => 1,
        'settings' => array(
          'progress_indicator' => 'throbber',
          'preview_image_style' => 'thumbnail',
        ),
      ),
      'settings' => array(
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'alt_field' => 0,
        'title_field' => 0,
        'default_image' => 0,
        'exclude_cv' => FALSE,
        'user_register_form' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'above',
          'type' => 'image',
          'settings' => array(
            'image_style' => '',
            'image_link' => '',
          ),
          'module' => 'image',
          'weight' => 1,
        ),
        'teaser' => array(
          'type' => 'hidden',
          'label' => 'above',
          'settings' => array(),
          'weight' => 0,
        ),
      ),
      'required' => 1,
      'description' => '',
      'exclude_cv' => 0,
      'field_name' => 'field_dashboard_image',
      'entity_type' => 'node',
      'bundle' => 'dashboard',
      'deleted' => '0',
    ),
    'field_dashboard_link' => array(
      'label' => 'Link',
      'widget' => array(
        'weight' => '2',
        'type' => 'text_textfield',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'size' => '60',
        ),
      ),
      'settings' => array(
        'text_processing' => '0',
        'exclude_cv' => FALSE,
        'user_register_form' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'above',
          'type' => 'text_default',
          'settings' => array(),
          'module' => 'text',
          'weight' => 2,
        ),
        'teaser' => array(
          'type' => 'hidden',
          'label' => 'above',
          'settings' => array(),
          'weight' => 0,
        ),
      ),
      'required' => 1,
      'description' => '',
      'exclude_cv' => 0,
      'default_value' => NULL,
      'field_name' => 'field_dashboard_link',
      'entity_type' => 'node',
      'bundle' => 'dashboard',
      'deleted' => '0',
    ),
    
    'field_user_permissions' => array(
      'label' => 'User Permissions',
      'widget' => array(
        'weight' => '3',
        'type' => 'options_select',
        'module' => 'options',
        'active' => 1,
        'settings' => array(),
      ),
      'settings' => array(
        'exclude_cv' => FALSE,
        'user_register_form' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'above',
          'type' => 'list_default',
          'settings' => array(),
          'module' => 'list',
          'weight' => 3,
        ),
        'teaser' => array(
          'type' => 'hidden',
          'label' => 'above',
          'settings' => array(),
          'weight' => 0,
        ),
      ),
      'required' => 0,
      'description' => '',
      'exclude_cv' => 0,
      'default_value' => NULL,
      'field_name' => 'field_user_permissions',
      'entity_type' => 'node',
      'bundle' => 'dashboard',
      'deleted' => '0',
    ),
  );
}
