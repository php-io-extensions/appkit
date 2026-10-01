/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 90cca383cd9207f264f7b0fa891e653fa92177d8 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_CFType___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFType_getTypeID, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CFType_hash arginfo_class_CFType_getTypeID

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFType_description, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CFType_pointer arginfo_class_CFType_getTypeID

ZEND_METHOD(CFType, __construct);
ZEND_METHOD(CFType, getTypeID);
ZEND_METHOD(CFType, hash);
ZEND_METHOD(CFType, description);
ZEND_METHOD(CFType, pointer);

static const zend_function_entry class_CFType_methods[] = {
	ZEND_ME(CFType, __construct, arginfo_class_CFType___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(CFType, getTypeID, arginfo_class_CFType_getTypeID, ZEND_ACC_PUBLIC)
	ZEND_ME(CFType, hash, arginfo_class_CFType_hash, ZEND_ACC_PUBLIC)
	ZEND_ME(CFType, description, arginfo_class_CFType_description, ZEND_ACC_PUBLIC)
	ZEND_ME(CFType, pointer, arginfo_class_CFType_pointer, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_CFType(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CFType", class_CFType_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
