/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: f22cccea55a7fb0b53d8d279fd31ae4acc4a002c */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_UTType_typeWithFilenameExtension, 0, 1, UTType, 1)
	ZEND_ARG_TYPE_INFO(0, filenameExtension, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_UTType_identifier, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(UTType, typeWithFilenameExtension);
ZEND_METHOD(UTType, identifier);

static const zend_function_entry class_UTType_methods[] = {
	ZEND_ME(UTType, typeWithFilenameExtension, arginfo_class_UTType_typeWithFilenameExtension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(UTType, identifier, arginfo_class_UTType_identifier, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_UTType(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "UTType", class_UTType_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
