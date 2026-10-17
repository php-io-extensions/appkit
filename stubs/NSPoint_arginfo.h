/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 46771f7209ecde770f661481e1368a6d8a386a8f */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NSPoint___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSPoint, __construct);

static const zend_function_entry class_NSPoint_methods[] = {
	ZEND_ME(NSPoint, __construct, arginfo_class_NSPoint___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSPoint(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSPoint", class_NSPoint_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_x_default_value;
	ZVAL_UNDEF(&property_x_default_value);
	zend_string *property_x_name = zend_string_init("x", sizeof("x") - 1, 1);
	zend_declare_typed_property(class_entry, property_x_name, &property_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_x_name);

	zval property_y_default_value;
	ZVAL_UNDEF(&property_y_default_value);
	zend_string *property_y_name = zend_string_init("y", sizeof("y") - 1, 1);
	zend_declare_typed_property(class_entry, property_y_name, &property_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_y_name);

	return class_entry;
}
