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
function _case_study_purple_create_fields() {
  $t = get_t();

  return array(
   'field_case_studies_upload' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'display_field' => 0,
        'display_default' => 0,
        'uri_scheme' => 'public',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_case_studies_upload' => array(
                'fid' => 'field_case_studies_upload_fid',
                'display' => 'field_case_studies_upload_display',
                'description' => 'field_case_studies_upload_description',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_case_studies_upload' => array(
                'fid' => 'field_case_studies_upload_fid',
                'display' => 'field_case_studies_upload_display',
                'description' => 'field_case_studies_upload_description',
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
      'field_name' => 'field_case_studies_upload',
      'type' => 'file',
      'module' => 'file',
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
        'display' => array(
          'description' => 'Flag to control whether this file should be displayed when viewing content.',
          'type' => 'int',
          'size' => 'tiny',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'default' => 1,
        ),
        'description' => array(
          'description' => 'A description of the file.',
          'type' => 'text',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          'case_study',
        ),
      ),
    ),
    
    'field_case_studies_image' => array(
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
              'field_data_field_case_studies_image' => array(
                'fid' => 'field_case_studies_image_fid',
                'alt' => 'field_case_studies_image_alt',
                'title' => 'field_case_studies_image_title',
                'width' => 'field_case_studies_image_width',
                'height' => 'field_case_studies_image_height',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_case_studies_image' => array(
                'fid' => 'field_case_studies_image_fid',
                'alt' => 'field_case_studies_image_alt',
                'title' => 'field_case_studies_image_title',
                'width' => 'field_case_studies_image_width',
                'height' => 'field_case_studies_image_height',
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
      'field_name' => 'field_case_studies_image',
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
          'case_study',
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
function _case_study_purple_create_instances() {
  $t = get_t();
  return array(
    'field_case_studies_upload' => array(
      'label' => 'Upload',
      'widget' => array(
        'weight' => '3',
        'type' => 'file_generic',
        'module' => 'file',
        'active' => 1,
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
      ),
      'settings' => array(
        'file_directory' => 'casestudies/pdf',
        'file_extensions' => 'pdf',
        'max_filesize' => '5 MB',
        'description_field' => 0,
        'exclude_cv' => FALSE,
        'user_register_form' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'type' => 'file_default',
          'weight' => '2',
          'settings' => array(),
          'module' => 'file',
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
      'field_name' => 'field_case_studies_upload',
      'entity_type' => 'node',
      'bundle' => 'case_study',
      'deleted' => '0',
    ),
    
    'field_case_studies_image' => array(
      'label' => 'Image',
      'widget' => array(
        'weight' => '4',
        'type' => 'media_generic',
        'module' => 'media',
        'active' => 1,
        'settings' => array(
          'progress_indicator' => 'throbber',
          'preview_image_style' => 'thumbnail',
          'allowed_types' => array(
            'image',
          ),
          'browser_plugins' => array(),
          'allowed_schemes' => array(
            'public',
            'private',
          ),
        ),
      ),
      'settings' => array(
        'file_directory' => 'casestudies/images',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '5 MB',
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
          'label' => 'hidden',
          'type' => 'image',
          'weight' => '0',
          'settings' => array(
            'image_style' => '',
            'image_link' => '',
          ),
          'module' => 'image',
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
      'field_name' => 'field_case_studies_image',
      'entity_type' => 'node',
      'bundle' => 'case_study',
      'deleted' => '0',
    ),
  );
}
