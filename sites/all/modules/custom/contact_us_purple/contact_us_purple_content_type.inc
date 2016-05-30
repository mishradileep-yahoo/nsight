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
function _contact_us_purple_create_fields() {
  $t = get_t();

  return array(
    'field_address_1' => array(
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
              'field_data_field_address_1' => array(
                'value' => 'field_address_1_value',
                'format' => 'field_address_1_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_address_1' => array(
                'value' => 'field_address_1_value',
                'format' => 'field_address_1_format',
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
      'field_name' => 'field_address_1',
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
          'contact_us',
        ),
      ),
    ),
    
    'field_address_2' => array(
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
              'field_data_field_address_2' => array(
                'value' => 'field_address_2_value',
                'format' => 'field_address_2_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_address_2' => array(
                'value' => 'field_address_2_value',
                'format' => 'field_address_2_format',
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
      'field_name' => 'field_address_2',
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
          'contact_us',
        ),
      ),
    ),
    
    'field_city' => array(
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
              'field_data_field_city' => array(
                'value' => 'field_city_value',
                'format' => 'field_city_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_city' => array(
                'value' => 'field_city_value',
                'format' => 'field_city_format',
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
      'field_name' => 'field_city',
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
          'contact_us',
        ),
      ),
    ),
    
    'field_state' => array(
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
              'field_data_field_state' => array(
                'value' => 'field_state_value',
                'format' => 'field_state_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_state' => array(
                'value' => 'field_state_value',
                'format' => 'field_state_format',
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
      'field_name' => 'field_state',
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
          'contact_us',
        ),
      ),
    ),
    
    'field_zip' => array(
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
              'field_data_field_zip' => array(
                'value' => 'field_zip_value',
                'format' => 'field_zip_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_zip' => array(
                'value' => 'field_zip_value',
                'format' => 'field_zip_format',
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
      'field_name' => 'field_zip',
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
          'contact_us',
        ),
      ),
    ),
    
    'field_email' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_email' => array(
                'email' => 'field_email_email',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_email' => array(
                'email' => 'field_email_email',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_email',
      'type' => 'email',
      'module' => 'email',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'email' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          'contact_us',
        ),
      ),
    ),
    
    'field_tel_no' => array(
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
              'field_data_field_tel_no' => array(
                'value' => 'field_tel_no_value',
                'format' => 'field_tel_no_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_tel_no' => array(
                'value' => 'field_tel_no_value',
                'format' => 'field_tel_no_format',
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
      'field_name' => 'field_tel_no',
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
          'contact_us',
        ),
      ),
    ),
    
    'field_fax_no' => array(
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
              'field_data_field_fax_no' => array(
                'value' => 'field_fax_no_value',
                'format' => 'field_fax_no_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_fax_no' => array(
                'value' => 'field_fax_no_value',
                'format' => 'field_fax_no_format',
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
      'field_name' => 'field_fax_no',
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
          'contact_us',
        ),
      ),
    ),
    
    'field_office' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          'Head office',
          'Branch',
        ),
        'allowed_values_function' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_office' => array(
                'value' => 'field_office_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_office' => array(
                'value' => 'field_office_value',
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
      'field_name' => 'field_office',
      'type' => 'list_float',
      'module' => 'list',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'float',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          'contact_us',
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
function _contact_us_purple_create_instances() {
  $t = get_t();
  return array(
    'field_address_1' => array(
      'label' => 'Address 1',
      'widget' => array(
        'weight' => '1',
        'type' => 'text_textfield',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'size' => '60',
        ),
      ),
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
        'exclude_cv' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'type' => 'text_default',
          'weight' => '0',
          'settings' => array(),
          'module' => 'text',
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
      'default_value' => NULL,
      'field_name' => 'field_address_1',
      'entity_type' => 'node',
      'bundle' => 'contact_us',
      'deleted' => '0',
    ),
    
    'field_address_2' => array(
      'label' => 'Address 2',
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
        'user_register_form' => FALSE,
        'exclude_cv' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'type' => 'text_default',
          'weight' => '1',
          'settings' => array(),
          'module' => 'text',
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
      'default_value' => NULL,
      'field_name' => 'field_address_2',
      'entity_type' => 'node',
      'bundle' => 'contact_us',
      'deleted' => '0',
    ),
    
    'field_city' => array(
      'label' => 'City',
      'widget' => array(
        'weight' => '3',
        'type' => 'text_textfield',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'size' => '60',
        ),
      ),
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
        'exclude_cv' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'type' => 'text_default',
          'weight' => '2',
          'settings' => array(),
          'module' => 'text',
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
      'default_value' => NULL,
      'field_name' => 'field_city',
      'entity_type' => 'node',
      'bundle' => 'contact_us',
      'deleted' => '0',
    ),
    
    'field_state' => array(
      'label' => 'State',
      'widget' => array(
        'weight' => '4',
        'type' => 'text_textfield',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'size' => '60',
        ),
      ),
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
        'exclude_cv' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'type' => 'text_default',
          'weight' => '3',
          'settings' => array(),
          'module' => 'text',
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
      'default_value' => NULL,
      'field_name' => 'field_state',
      'entity_type' => 'node',
      'bundle' => 'contact_us',
      'deleted' => '0',
    ),
    
    'field_zip' => array(
      'label' => 'Zip',
      'widget' => array(
        'weight' => '5',
        'type' => 'text_textfield',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'size' => '60',
        ),
      ),
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
        'exclude_cv' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'type' => 'text_default',
          'weight' => '4',
          'settings' => array(),
          'module' => 'text',
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
      'default_value' => NULL,
      'field_name' => 'field_zip',
      'entity_type' => 'node',
      'bundle' => 'contact_us',
      'deleted' => '0',
    ),
    
    'field_email' => array(
      'label' => 'Email',
      'widget' => array(
        'weight' => '6',
        'type' => 'emailwidget',
        'module' => 'html5_tools',
        'active' => 0,
        'settings' => array(),
      ),
      'settings' => array(
        'user_register_form' => FALSE,
        'exclude_cv' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'type' => 'email_default',
          'weight' => '5',
          'settings' => array(),
          'module' => 'email',
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
      'default_value' => NULL,
      'field_name' => 'field_email',
      'entity_type' => 'node',
      'bundle' => 'contact_us',
      'deleted' => '0',
    ),
    
    'field_tel_no' => array(
      'label' => 'Tel no',
      'widget' => array(
        'weight' => '7',
        'type' => 'text_textfield',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'size' => '60',
        ),
      ),
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
        'exclude_cv' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'type' => 'text_default',
          'weight' => '6',
          'settings' => array(),
          'module' => 'text',
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
      'default_value' => NULL,
      'field_name' => 'field_tel_no',
      'entity_type' => 'node',
      'bundle' => 'contact_us',
      'deleted' => '0',
    ),
    
    'field_fax_no' => array(
      'label' => 'Fax no',
      'widget' => array(
        'weight' => '8',
        'type' => 'text_textfield',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'size' => '60',
        ),
      ),
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
        'exclude_cv' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'type' => 'text_default',
          'weight' => '7',
          'settings' => array(),
          'module' => 'text',
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
      'default_value' => NULL,
      'field_name' => 'field_fax_no',
      'entity_type' => 'node',
      'bundle' => 'contact_us',
      'deleted' => '0',
    ),
    
    'field_office' => array(
      'label' => 'Office',
      'widget' => array(
        'weight' => '9',
        'type' => 'options_select',
        'module' => 'options',
        'active' => 1,
        'settings' => array(),
      ),
      'settings' => array(
        'user_register_form' => FALSE,
        'exclude_cv' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'type' => 'list_default',
          'weight' => '8',
          'settings' => array(),
          'module' => 'list',
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
      'default_value' => NULL,
      'exclude_cv' => 0,
      'field_name' => 'field_office',
      'entity_type' => 'node',
      'bundle' => 'contact_us',
      'deleted' => '0',
    ),
    
  );
}
