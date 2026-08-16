
extern zend_class_entry *appkit_ns_nshelpmanager_nshelpmanager_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSHelpManager_NSHelpManager);

PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, shared);
PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, destroy);
PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, nsHelpManager);
PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, isContextHelpModeActive);
PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, setContextHelpModeActive);
PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, setContextHelpForObject);
PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, removeContextHelpForObject);
PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, contextHelpForObject);
PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, showContextHelpForObject);
PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, openHelpAnchor);
PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, findString);
PHP_METHOD(AppKit_NS_NSHelpManager_NSHelpManager, registerBooksInBundlePath);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_shared, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_nshelpmanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_iscontexthelpmodeactive, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_setcontexthelpmodeactive, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, active, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_setcontexthelpforobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, objectPtr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, helpText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_removecontexthelpforobject, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, objectPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_contexthelpforobject, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, objectPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_showcontexthelpforobject, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, objectPtr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_openhelpanchor, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, anchor, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, book, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_findstring, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, book, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nshelpmanager_nshelpmanager_registerbooksinbundlepath, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, bundlePath, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nshelpmanager_nshelpmanager_method_entry) {
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, shared, arginfo_appkit_ns_nshelpmanager_nshelpmanager_shared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, destroy, arginfo_appkit_ns_nshelpmanager_nshelpmanager_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, nsHelpManager, arginfo_appkit_ns_nshelpmanager_nshelpmanager_nshelpmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, isContextHelpModeActive, arginfo_appkit_ns_nshelpmanager_nshelpmanager_iscontexthelpmodeactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, setContextHelpModeActive, arginfo_appkit_ns_nshelpmanager_nshelpmanager_setcontexthelpmodeactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, setContextHelpForObject, arginfo_appkit_ns_nshelpmanager_nshelpmanager_setcontexthelpforobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, removeContextHelpForObject, arginfo_appkit_ns_nshelpmanager_nshelpmanager_removecontexthelpforobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, contextHelpForObject, arginfo_appkit_ns_nshelpmanager_nshelpmanager_contexthelpforobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, showContextHelpForObject, arginfo_appkit_ns_nshelpmanager_nshelpmanager_showcontexthelpforobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, openHelpAnchor, arginfo_appkit_ns_nshelpmanager_nshelpmanager_openhelpanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, findString, arginfo_appkit_ns_nshelpmanager_nshelpmanager_findstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSHelpManager_NSHelpManager, registerBooksInBundlePath, arginfo_appkit_ns_nshelpmanager_nshelpmanager_registerbooksinbundlepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
