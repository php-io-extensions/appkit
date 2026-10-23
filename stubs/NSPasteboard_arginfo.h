/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 1269113f8bf8dbf6af5525ab66bbd6467db5f226 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSPasteboard_generalPasteboard, 0, 0, NSPasteboard, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSPasteboard_clearContents, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSPasteboard_setStringForType, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dataType, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSPasteboard_stringForType, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, dataType, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSPasteboard, generalPasteboard);
ZEND_METHOD(NSPasteboard, clearContents);
ZEND_METHOD(NSPasteboard, setStringForType);
ZEND_METHOD(NSPasteboard, stringForType);

static const zend_function_entry class_NSPasteboard_methods[] = {
	ZEND_ME(NSPasteboard, generalPasteboard, arginfo_class_NSPasteboard_generalPasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSPasteboard, clearContents, arginfo_class_NSPasteboard_clearContents, ZEND_ACC_PUBLIC)
	ZEND_ME(NSPasteboard, setStringForType, arginfo_class_NSPasteboard_setStringForType, ZEND_ACC_PUBLIC)
	ZEND_ME(NSPasteboard, stringForType, arginfo_class_NSPasteboard_stringForType, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_NSPasteboard_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("NSPasteboardTypeString", appkit_cfstring_constant((CFStringRef) NSPasteboardTypeString), CONST_PERSISTENT);
}

static zend_class_entry *register_class_NSPasteboard(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSPasteboard", class_NSPasteboard_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
