
extern zend_class_entry *appkit_ns_nstextlist_nstextlist_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextList_NSTextList);

PHP_METHOD(AppKit_NS_NSTextList_NSTextList, create);
PHP_METHOD(AppKit_NS_NSTextList_NSTextList, wrap);
PHP_METHOD(AppKit_NS_NSTextList_NSTextList, destroy);
PHP_METHOD(AppKit_NS_NSTextList_NSTextList, markerForItemNumber);
PHP_METHOD(AppKit_NS_NSTextList_NSTextList, isOrdered);
PHP_METHOD(AppKit_NS_NSTextList_NSTextList, setStartingItemNumber);
PHP_METHOD(AppKit_NS_NSTextList_NSTextList, getStartingItemNumber);
PHP_METHOD(AppKit_NS_NSTextList_NSTextList, getMarkerFormat);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextlist_nstextlist_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, markerFormat, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startingItemNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextlist_nstextlist_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextListPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextlist_nstextlist_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextlist_nstextlist_markerforitemnumber, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, itemNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextlist_nstextlist_isordered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextlist_nstextlist_setstartingitemnumber, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, number, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextlist_nstextlist_getstartingitemnumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextlist_nstextlist_getmarkerformat, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextlist_nstextlist_method_entry) {
	PHP_ME(AppKit_NS_NSTextList_NSTextList, create, arginfo_appkit_ns_nstextlist_nstextlist_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextList_NSTextList, wrap, arginfo_appkit_ns_nstextlist_nstextlist_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextList_NSTextList, destroy, arginfo_appkit_ns_nstextlist_nstextlist_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextList_NSTextList, markerForItemNumber, arginfo_appkit_ns_nstextlist_nstextlist_markerforitemnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextList_NSTextList, isOrdered, arginfo_appkit_ns_nstextlist_nstextlist_isordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextList_NSTextList, setStartingItemNumber, arginfo_appkit_ns_nstextlist_nstextlist_setstartingitemnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextList_NSTextList, getStartingItemNumber, arginfo_appkit_ns_nstextlist_nstextlist_getstartingitemnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextList_NSTextList, getMarkerFormat, arginfo_appkit_ns_nstextlist_nstextlist_getmarkerformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
