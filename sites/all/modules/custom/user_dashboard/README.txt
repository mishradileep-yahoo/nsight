To add fields defined by UI, put the below code somewhere and copy and paste
the output into the ex_cctwf.fields.inc arrays.

include_once DRUPAL_ROOT . '/includes/utility.inc';

// Display information about a field, ready to cut and paste
$field_name = 'field_test_image'; // machine name of field
$field_data = field_info_field($field_name);
unset($field_data['id']); // remove id so it's reassigned
dsm(drupal_var_export(array($field_name => $field_data)));

// Display information about a field instance connected to a bundle
$bundle_name = 'jobs'; // machine name of content type
$instance_data = field_info_instance('node', $field_name, $bundle_name);
unset($instance_data['id'], $instance_data['field_id']);
dsm(drupal_var_export(array($field_name => $instance_data)));

// cut and paste data into _ex_cctwf_create_fields() and _ex_cctwf_create_instances() respectively