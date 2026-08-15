
extern zend_class_entry *appkit_ns_nscolorlist_nscolorlist_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSColorList_NSColorList);

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, wrap);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, destroy);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, availableCount);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, availableAt);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, named);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, create);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, createFromFile);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, name);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, isEditable);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, setColor);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, insertColor);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, removeColorWithKey);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, colorWithKey);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, allKeysCount);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, allKeyAt);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, writeToUrl);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, removeFile);
PHP_METHOD(AppKit_NS_NSColorList_NSColorList, nsColorList);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsColorListPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_availablecount, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_availableat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_named, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_create, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_createfromfile, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_setcolor, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_insertcolor, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_removecolorwithkey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_colorwithkey, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_allkeyscount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_allkeyat, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_writetourl, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_removefile, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorlist_nscolorlist_nscolorlist, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscolorlist_nscolorlist_method_entry) {
	PHP_ME(AppKit_NS_NSColorList_NSColorList, wrap, arginfo_appkit_ns_nscolorlist_nscolorlist_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, destroy, arginfo_appkit_ns_nscolorlist_nscolorlist_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, availableCount, arginfo_appkit_ns_nscolorlist_nscolorlist_availablecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, availableAt, arginfo_appkit_ns_nscolorlist_nscolorlist_availableat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, named, arginfo_appkit_ns_nscolorlist_nscolorlist_named, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, create, arginfo_appkit_ns_nscolorlist_nscolorlist_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, createFromFile, arginfo_appkit_ns_nscolorlist_nscolorlist_createfromfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, name, arginfo_appkit_ns_nscolorlist_nscolorlist_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, isEditable, arginfo_appkit_ns_nscolorlist_nscolorlist_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, setColor, arginfo_appkit_ns_nscolorlist_nscolorlist_setcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, insertColor, arginfo_appkit_ns_nscolorlist_nscolorlist_insertcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, removeColorWithKey, arginfo_appkit_ns_nscolorlist_nscolorlist_removecolorwithkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, colorWithKey, arginfo_appkit_ns_nscolorlist_nscolorlist_colorwithkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, allKeysCount, arginfo_appkit_ns_nscolorlist_nscolorlist_allkeyscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, allKeyAt, arginfo_appkit_ns_nscolorlist_nscolorlist_allkeyat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, writeToUrl, arginfo_appkit_ns_nscolorlist_nscolorlist_writetourl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, removeFile, arginfo_appkit_ns_nscolorlist_nscolorlist_removefile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorList_NSColorList, nsColorList, arginfo_appkit_ns_nscolorlist_nscolorlist_nscolorlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
