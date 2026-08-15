
extern zend_class_entry *appkit_ns_nsbrowsercell_nsbrowsercell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSBrowserCell_NSBrowserCell);

PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, createText);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, wrap);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, destroy);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, nsBrowserCell);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setTitle);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, getTitle);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setState);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, getState);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setEnabled);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, isEnabled);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setTag);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, getTag);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setLeaf);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, isLeaf);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, setLoaded);
PHP_METHOD(AppKit_NS_NSBrowserCell_NSBrowserCell, isLoaded);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsBrowserCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_nsbrowsercell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_setleaf, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_isleaf, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_setloaded, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_isloaded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsbrowsercell_nsbrowsercell_method_entry) {
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, createText, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, wrap, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, destroy, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, nsBrowserCell, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_nsbrowsercell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, setTitle, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, getTitle, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, setState, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, getState, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, setEnabled, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, isEnabled, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, setTag, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, getTag, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, setLeaf, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_setleaf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, isLeaf, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_isleaf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, setLoaded, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_setloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowserCell_NSBrowserCell, isLoaded, arginfo_appkit_ns_nsbrowsercell_nsbrowsercell_isloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
