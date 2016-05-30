//<?php
//
///**
// * An array of fields and field instances used by the content type.
// * declared by this module.
// */
//
//
///**
// * Returns a structured array defining the fields created by this content type.
// *
// * @return
// *  An associative array specifying the fields we wish to add to our
// *  new node type.
// */
//function _block_purple_create_fields() {
//  $t = get_t();
//
//  return array(
//    'field_block_image' => array(
//      'translatable' => '0',
//      'entity_types' => array(),
//      'settings' => array(
//        'uri_scheme' => 'public',
//        'default_image' => 0,
//      ),
//      'storage' => array(
//        'type' => 'field_sql_storage',
//        'settings' => array(),
//        'module' => 'field_sql_storage',
//        'active' => '1',
//        'details' => array(
//          'sql' => array(
//            'FIELD_LOAD_CURRENT' => array(
//              'field_data_field_block_image' => array(
//                'fid' => 'field_block_image_fid',
//                'alt' => 'field_block_image_alt',
//                'title' => 'field_block_image_title',
//                'width' => 'field_block_image_width',
//                'height' => 'field_block_image_height',
//              ),
//            ),
//            'FIELD_LOAD_REVISION' => array(
//              'field_revision_field_block_image' => array(
//                'fid' => 'field_block_image_fid',
//                'alt' => 'field_block_image_alt',
//                'title' => 'field_block_image_title',
//                'width' => 'field_block_image_width',
//                'height' => 'field_block_image_height',
//              ),
//            ),
//          ),
//        ),
//      ),
//      'foreign keys' => array(
//        'fid' => array(
//          'table' => 'file_managed',
//          'columns' => array(
//            'fid' => 'fid',
//          ),
//        ),
//      ),
//      'indexes' => array(
//        'fid' => array(
//          'fid',
//        ),
//      ),
//      'field_name' => 'field_block_image',
//      'type' => 'image',
//      'module' => 'image',
//      'active' => '1',
//      'locked' => '0',
//      'cardinality' => '1',
//      'deleted' => '0',
//      'columns' => array(
//        'fid' => array(
//          'description' => 'The {file_managed}.fid being referenced in this field.',
//          'type' => 'int',
//          'not null' => FALSE,
//          'unsigned' => TRUE,
//        ),
//        'alt' => array(
//          'description' => "Alternative image text, for the image's 'alt' attribute.",
//          'type' => 'varchar',
//          'length' => 512,
//          'not null' => FALSE,
//        ),
//        'title' => array(
//          'description' => "Image title text, for the image's 'title' attribute.",
//          'type' => 'varchar',
//          'length' => 1024,
//          'not null' => FALSE,
//        ),
//        'width' => array(
//          'description' => 'The width of the image in pixels.',
//          'type' => 'int',
//          'unsigned' => TRUE,
//        ),
//        'height' => array(
//          'description' => 'The height of the image in pixels.',
//          'type' => 'int',
//          'unsigned' => TRUE,
//        ),
//      ),
//      'bundles' => array(
//        'node' => array(
//          'client',
//          'block',
//        ),
//      ),
//    ),
//    
//    'field_block_link' => array(
//      'translatable' => '0',
//      'entity_types' => array(),
//      'settings' => array(
//        'attributes' => array(
//          'target' => 'default',
//          'class' => '',
//          'rel' => '',
//        ),
//        'url' => 0,
//        'title' => 'optional',
//        'title_value' => '',
//        'title_maxlength' => 128,
//        'enable_tokens' => 1,
//        'display' => array(
//          'url_cutoff' => 80,
//        ),
//      ),
//      'storage' => array(
//        'type' => 'field_sql_storage',
//        'settings' => array(),
//        'module' => 'field_sql_storage',
//        'active' => '1',
//        'details' => array(
//          'sql' => array(
//            'FIELD_LOAD_CURRENT' => array(
//              'field_data_field_block_link' => array(
//                'url' => 'field_block_link_url',
//                'title' => 'field_block_link_title',
//                'attributes' => 'field_block_link_attributes',
//              ),
//            ),
//            'FIELD_LOAD_REVISION' => array(
//              'field_revision_field_block_link' => array(
//                'url' => 'field_block_link_url',
//                'title' => 'field_block_link_title',
//                'attributes' => 'field_block_link_attributes',
//              ),
//            ),
//          ),
//        ),
//      ),
//      'foreign keys' => array(),
//      'indexes' => array(),
//      'field_name' => 'field_block_link',
//      'type' => 'link_field',
//      'module' => 'link',
//      'active' => '1',
//      'locked' => '0',
//      'cardinality' => '1',
//      'deleted' => '0',
//      'columns' => array(
//        'url' => array(
//          'type' => 'varchar',
//          'length' => 2048,
//          'not null' => FALSE,
//          'sortable' => TRUE,
//        ),
//        'title' => array(
//          'type' => 'varchar',
//          'length' => 255,
//          'not null' => FALSE,
//          'sortable' => TRUE,
//        ),
//        'attributes' => array(
//          'type' => 'text',
//          'size' => 'medium',
//          'not null' => FALSE,
//        ),
//      ),
//      'bundles' => array(
//        'node' => array(
//          'client',
//          'block',
//        ),
//      ),
//    ),
//    
//  );
//}
//
///**
// * Returns a structured array defining the instances for this content type.
// *
// * @return
// *  An associative array specifying the instances we wish to add to our new
// *  node type.
// */
//function _block_purple_create_instances() {
//  $t = get_t();
//  return array(
//    'field_block_image' => array(
//      'label' => 'Image',
//      'widget' => array(
//        'weight' => '1',
//        'type' => 'media_generic',
//        'module' => 'media',
//        'active' => 1,
//        'settings' => array(
//          'allowed_types' => array(
//            'image' => 'image',
//            'video' => 0,
//            'audio' => 0,
//            'document' => 0,
//          ),
//          'allowed_schemes' => array(
//            'public' => 'public',
//          ),
//          'browser_plugins' => array(
//            'upload' => 0,
//            'media_default--media_browser_1' => 0,
//            'media_default--media_browser_my_files' => 0,
//            'media_internet' => 0,
//          ),
//          'progress_indicator' => 'throbber',
//        ),
//      ),
//      'settings' => array(
//        'file_directory' => 'block',
//        'file_extensions' => 'png gif jpg jpeg',
//        'max_filesize' => '5 MB',
//        'max_resolution' => '',
//        'min_resolution' => '',
//        'alt_field' => 0,
//        'title_field' => 0,
//        'default_image' => 0,
//        'exclude_cv' => FALSE,
//        'user_register_form' => FALSE,
//      ),
//      'display' => array(
//        'default' => array(
//          'label' => 'hidden',
//          'type' => 'image',
//          'weight' => '1',
//          'settings' => array(
//            'image_style' => '',
//            'image_link' => '',
//          ),
//          'module' => 'image',
//        ),
//        'teaser' => array(
//          'type' => 'hidden',
//          'label' => 'above',
//          'settings' => array(),
//          'weight' => 0,
//        ),
//      ),
//      'required' => 1,
//      'description' => '',
//      'exclude_cv' => 0,
//      'field_name' => 'field_block_image',
//      'entity_type' => 'node',
//      'bundle' => 'block',
//      'deleted' => '0',
//    ),
//    
//    'field_block_link' => array(
//      'label' => 'Link Path',
//      'widget' => array(
//        'weight' => '2',
//        'type' => 'link_field',
//        'module' => 'link',
//        'active' => 0,
//        'settings' => array(),
//      ),
//      'settings' => array(
//        'validate_url' => 1,
//        'url' => 0,
//        'title' => 'none',
//        'title_value' => '',
//        'title_maxlength' => '128',
//        'enable_tokens' => 1,
//        'display' => array(
//          'url_cutoff' => '80',
//        ),
//        'attributes' => array(
//          'target' => 'default',
//          'rel' => '',
//          'class' => '',
//          'configurable_title' => 0,
//          'title' => '',
//        ),
//        'rel_remove' => 'default',
//        'user_register_form' => FALSE,
//        'exclude_cv' => FALSE,
//      ),
//      'display' => array(
//        'default' => array(
//          'label' => 'hidden',
//          'type' => 'link_default',
//          'weight' => '3',
//          'settings' => array(),
//          'module' => 'link',
//        ),
//        'teaser' => array(
//          'type' => 'hidden',
//          'label' => 'above',
//          'settings' => array(),
//          'weight' => 0,
//        ),
//      ),
//      'required' => 0,
//      'description' => '',
//      'default_value' => NULL,
//      'field_name' => 'field_block_link',
//      'entity_type' => 'node',
//      'bundle' => 'block',
//      'deleted' => '0',
//    ),
//  );
//}
