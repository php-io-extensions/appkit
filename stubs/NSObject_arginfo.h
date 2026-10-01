/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: d13898c0abd3366b8e74899bf3056c2e5c7ff871 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NSObject___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSObject_className, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSObject_isKindOfClass, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, className, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSObject_respondsToSelector, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSObject_isEqual, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, object, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSObject_hash, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSObject_description arginfo_class_NSObject_className

#define arginfo_class_NSObject_pointer arginfo_class_NSObject_hash

ZEND_METHOD(NSObject, __construct);
ZEND_METHOD(NSObject, className);
ZEND_METHOD(NSObject, isKindOfClass);
ZEND_METHOD(NSObject, respondsToSelector);
ZEND_METHOD(NSObject, isEqual);
ZEND_METHOD(NSObject, hash);
ZEND_METHOD(NSObject, description);
ZEND_METHOD(NSObject, pointer);

static const zend_function_entry class_NSObject_methods[] = {
	ZEND_ME(NSObject, __construct, arginfo_class_NSObject___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(NSObject, className, arginfo_class_NSObject_className, ZEND_ACC_PUBLIC)
	ZEND_ME(NSObject, isKindOfClass, arginfo_class_NSObject_isKindOfClass, ZEND_ACC_PUBLIC)
	ZEND_ME(NSObject, respondsToSelector, arginfo_class_NSObject_respondsToSelector, ZEND_ACC_PUBLIC)
	ZEND_ME(NSObject, isEqual, arginfo_class_NSObject_isEqual, ZEND_ACC_PUBLIC)
	ZEND_ME(NSObject, hash, arginfo_class_NSObject_hash, ZEND_ACC_PUBLIC)
	ZEND_ME(NSObject, description, arginfo_class_NSObject_description, ZEND_ACC_PUBLIC)
	ZEND_ME(NSObject, pointer, arginfo_class_NSObject_pointer, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSObject(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSObject", class_NSObject_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
