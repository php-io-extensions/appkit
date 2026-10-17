/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 29a1af01551725afce88bece4df35eab180b1638 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSError_domain, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSError_code, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSError_localizedDescription arginfo_class_NSError_domain

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSError_userInfo, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSError, domain);
ZEND_METHOD(NSError, code);
ZEND_METHOD(NSError, localizedDescription);
ZEND_METHOD(NSError, userInfo);

static const zend_function_entry class_NSError_methods[] = {
	ZEND_ME(NSError, domain, arginfo_class_NSError_domain, ZEND_ACC_PUBLIC)
	ZEND_ME(NSError, code, arginfo_class_NSError_code, ZEND_ACC_PUBLIC)
	ZEND_ME(NSError, localizedDescription, arginfo_class_NSError_localizedDescription, ZEND_ACC_PUBLIC)
	ZEND_ME(NSError, userInfo, arginfo_class_NSError_userInfo, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSError(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSError", class_NSError_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
