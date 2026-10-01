/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: ed92489dd7ba09eea5be1dc319e4b637d8e236e6 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NSSize___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, width, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, height, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NSRect___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, width, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, height, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_METHOD(NSSize, __construct);
ZEND_METHOD(NSRect, __construct);

static const zend_function_entry class_NSSize_methods[] = {
	ZEND_ME(NSSize, __construct, arginfo_class_NSSize___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSRect_methods[] = {
	ZEND_ME(NSRect, __construct, arginfo_class_NSRect___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSSize(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSSize", class_NSSize_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_width_default_value;
	ZVAL_DOUBLE(&property_width_default_value, 0.0);
	zend_string *property_width_name = zend_string_init("width", sizeof("width") - 1, 1);
	zend_declare_typed_property(class_entry, property_width_name, &property_width_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_width_name);

	zval property_height_default_value;
	ZVAL_DOUBLE(&property_height_default_value, 0.0);
	zend_string *property_height_name = zend_string_init("height", sizeof("height") - 1, 1);
	zend_declare_typed_property(class_entry, property_height_name, &property_height_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_height_name);

	return class_entry;
}

static zend_class_entry *register_class_NSRect(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSRect", class_NSRect_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_x_default_value;
	ZVAL_DOUBLE(&property_x_default_value, 0.0);
	zend_string *property_x_name = zend_string_init("x", sizeof("x") - 1, 1);
	zend_declare_typed_property(class_entry, property_x_name, &property_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_x_name);

	zval property_y_default_value;
	ZVAL_DOUBLE(&property_y_default_value, 0.0);
	zend_string *property_y_name = zend_string_init("y", sizeof("y") - 1, 1);
	zend_declare_typed_property(class_entry, property_y_name, &property_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_y_name);

	zval property_width_default_value;
	ZVAL_DOUBLE(&property_width_default_value, 0.0);
	zend_string *property_width_name = zend_string_init("width", sizeof("width") - 1, 1);
	zend_declare_typed_property(class_entry, property_width_name, &property_width_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_width_name);

	zval property_height_default_value;
	ZVAL_DOUBLE(&property_height_default_value, 0.0);
	zend_string *property_height_name = zend_string_init("height", sizeof("height") - 1, 1);
	zend_declare_typed_property(class_entry, property_height_name, &property_height_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_height_name);

	return class_entry;
}
