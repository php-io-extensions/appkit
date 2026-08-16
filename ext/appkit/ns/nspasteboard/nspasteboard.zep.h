
extern zend_class_entry *appkit_ns_nspasteboard_nspasteboard_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPasteboard_NSPasteboard);

PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, general);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, withName);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, withUniqueName);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, wrap);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, destroy);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, nsPasteboard);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, getName);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, changeCount);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, clearContents);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, writeStrings);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, stringForType);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, setString);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, types);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, canReadTypes);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, itemsCount);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, itemAt);
PHP_METHOD(AppKit_NS_NSPasteboard_NSPasteboard, accessBehavior);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_general, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_withname, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_withuniquename, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsPasteboardPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_nspasteboard, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_getname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_changecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_clearcontents, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_writestrings, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, strings, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_stringfortype, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_setstring, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_types, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_canreadtypes, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, types, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_itemscount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_itemat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspasteboard_nspasteboard_accessbehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspasteboard_nspasteboard_method_entry) {
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, general, arginfo_appkit_ns_nspasteboard_nspasteboard_general, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, withName, arginfo_appkit_ns_nspasteboard_nspasteboard_withname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, withUniqueName, arginfo_appkit_ns_nspasteboard_nspasteboard_withuniquename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, wrap, arginfo_appkit_ns_nspasteboard_nspasteboard_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, destroy, arginfo_appkit_ns_nspasteboard_nspasteboard_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, nsPasteboard, arginfo_appkit_ns_nspasteboard_nspasteboard_nspasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, getName, arginfo_appkit_ns_nspasteboard_nspasteboard_getname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, changeCount, arginfo_appkit_ns_nspasteboard_nspasteboard_changecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, clearContents, arginfo_appkit_ns_nspasteboard_nspasteboard_clearcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, writeStrings, arginfo_appkit_ns_nspasteboard_nspasteboard_writestrings, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, stringForType, arginfo_appkit_ns_nspasteboard_nspasteboard_stringfortype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, setString, arginfo_appkit_ns_nspasteboard_nspasteboard_setstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, types, arginfo_appkit_ns_nspasteboard_nspasteboard_types, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, canReadTypes, arginfo_appkit_ns_nspasteboard_nspasteboard_canreadtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, itemsCount, arginfo_appkit_ns_nspasteboard_nspasteboard_itemscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, itemAt, arginfo_appkit_ns_nspasteboard_nspasteboard_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPasteboard_NSPasteboard, accessBehavior, arginfo_appkit_ns_nspasteboard_nspasteboard_accessbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
