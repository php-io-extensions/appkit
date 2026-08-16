
extern zend_class_entry *appkit_ns_nspasteboarditem_nspasteboarditem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPasteboardItem_NSPasteboardItem);

PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, create);
PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, wrap);
PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, destroy);
PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, nsPasteboardItem);
PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, types);
PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, availableTypeFromArray);
PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, setString);
PHP_METHOD(AppKit_NS_NSPasteboardItem_NSPasteboardItem, stringForType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsPasteboardItemPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_nspasteboarditem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_types, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_availabletypefromarray, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, types, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_setstring, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_stringfortype, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspasteboarditem_nspasteboarditem_method_entry) {
	PHP_ME(AppKit_NS_NSPasteboardItem_NSPasteboardItem, create, arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboardItem_NSPasteboardItem, wrap, arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboardItem_NSPasteboardItem, destroy, arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboardItem_NSPasteboardItem, nsPasteboardItem, arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_nspasteboarditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboardItem_NSPasteboardItem, types, arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_types, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboardItem_NSPasteboardItem, availableTypeFromArray, arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_availabletypefromarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboardItem_NSPasteboardItem, setString, arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_setstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboardItem_NSPasteboardItem, stringForType, arginfo_appkit_ns_nspasteboarditem_nspasteboarditem_stringfortype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
