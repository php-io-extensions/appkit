
extern zend_class_entry *appkit_ns_nscell_nscell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSCell_NSCell);

PHP_METHOD(AppKit_NS_NSCell_NSCell, createText);
PHP_METHOD(AppKit_NS_NSCell_NSCell, wrap);
PHP_METHOD(AppKit_NS_NSCell_NSCell, destroy);
PHP_METHOD(AppKit_NS_NSCell_NSCell, nsCell);
PHP_METHOD(AppKit_NS_NSCell_NSCell, setTitle);
PHP_METHOD(AppKit_NS_NSCell_NSCell, getTitle);
PHP_METHOD(AppKit_NS_NSCell_NSCell, setState);
PHP_METHOD(AppKit_NS_NSCell_NSCell, getState);
PHP_METHOD(AppKit_NS_NSCell_NSCell, setEnabled);
PHP_METHOD(AppKit_NS_NSCell_NSCell, isEnabled);
PHP_METHOD(AppKit_NS_NSCell_NSCell, setTag);
PHP_METHOD(AppKit_NS_NSCell_NSCell, getTag);
PHP_METHOD(AppKit_NS_NSCell_NSCell, setStringValue);
PHP_METHOD(AppKit_NS_NSCell_NSCell, getStringValue);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_nscell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_setstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscell_nscell_getstringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscell_nscell_method_entry) {
	PHP_ME(AppKit_NS_NSCell_NSCell, createText, arginfo_appkit_ns_nscell_nscell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, wrap, arginfo_appkit_ns_nscell_nscell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, destroy, arginfo_appkit_ns_nscell_nscell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, nsCell, arginfo_appkit_ns_nscell_nscell_nscell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, setTitle, arginfo_appkit_ns_nscell_nscell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, getTitle, arginfo_appkit_ns_nscell_nscell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, setState, arginfo_appkit_ns_nscell_nscell_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, getState, arginfo_appkit_ns_nscell_nscell_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, setEnabled, arginfo_appkit_ns_nscell_nscell_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, isEnabled, arginfo_appkit_ns_nscell_nscell_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, setTag, arginfo_appkit_ns_nscell_nscell_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, getTag, arginfo_appkit_ns_nscell_nscell_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, setStringValue, arginfo_appkit_ns_nscell_nscell_setstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCell_NSCell, getStringValue, arginfo_appkit_ns_nscell_nscell_getstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
