
extern zend_class_entry *appkit_ns_nspathcell_nspathcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPathCell_NSPathCell);

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, createText);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, wrap);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, destroy);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, nsPathCell);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setTitle);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, getTitle);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setState);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, getState);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setEnabled);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, isEnabled);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setTag);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, getTag);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setPathStyle);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, getPathStyle);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setUrlPath);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, getUrlPath);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setPlaceholderString);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, getPlaceholderString);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setAllowedTypes);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, pathComponentCount);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsPathCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_nspathcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setpathstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_getpathstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_seturlpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_geturlpath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setplaceholderstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placeholder, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_getplaceholderstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setallowedtypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, types, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_pathcomponentcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspathcell_nspathcell_method_entry) {
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, createText, arginfo_appkit_ns_nspathcell_nspathcell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, wrap, arginfo_appkit_ns_nspathcell_nspathcell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, destroy, arginfo_appkit_ns_nspathcell_nspathcell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, nsPathCell, arginfo_appkit_ns_nspathcell_nspathcell_nspathcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setTitle, arginfo_appkit_ns_nspathcell_nspathcell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, getTitle, arginfo_appkit_ns_nspathcell_nspathcell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setState, arginfo_appkit_ns_nspathcell_nspathcell_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, getState, arginfo_appkit_ns_nspathcell_nspathcell_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setEnabled, arginfo_appkit_ns_nspathcell_nspathcell_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, isEnabled, arginfo_appkit_ns_nspathcell_nspathcell_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setTag, arginfo_appkit_ns_nspathcell_nspathcell_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, getTag, arginfo_appkit_ns_nspathcell_nspathcell_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setPathStyle, arginfo_appkit_ns_nspathcell_nspathcell_setpathstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, getPathStyle, arginfo_appkit_ns_nspathcell_nspathcell_getpathstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setUrlPath, arginfo_appkit_ns_nspathcell_nspathcell_seturlpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, getUrlPath, arginfo_appkit_ns_nspathcell_nspathcell_geturlpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setPlaceholderString, arginfo_appkit_ns_nspathcell_nspathcell_setplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, getPlaceholderString, arginfo_appkit_ns_nspathcell_nspathcell_getplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setBackgroundColor, arginfo_appkit_ns_nspathcell_nspathcell_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setAllowedTypes, arginfo_appkit_ns_nspathcell_nspathcell_setallowedtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, pathComponentCount, arginfo_appkit_ns_nspathcell_nspathcell_pathcomponentcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
