/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 146e72236e7332c44fa0cac7a9a38eb02fa7873f */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSGraphicsContext_currentContext, 0, 0, NSGraphicsContext, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSGraphicsContext_CGContext, 0, 0, CGContext, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSGraphicsContext, currentContext);
ZEND_METHOD(NSGraphicsContext, CGContext);

static const zend_function_entry class_NSGraphicsContext_methods[] = {
	ZEND_ME(NSGraphicsContext, currentContext, arginfo_class_NSGraphicsContext_currentContext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSGraphicsContext, CGContext, arginfo_class_NSGraphicsContext_CGContext, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSGraphicsContext(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSGraphicsContext", class_NSGraphicsContext_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
