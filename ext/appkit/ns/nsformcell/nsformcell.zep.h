
extern zend_class_entry *appkit_ns_nsformcell_nsformcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSFormCell_NSFormCell);

PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, createText);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, wrap);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, destroy);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, nsFormCell);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, setTitle);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, getTitle);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, setState);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, getState);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, setEnabled);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, isEnabled);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, setTag);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, getTag);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, setPlaceholderString);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, getPlaceholderString);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, setTitleWidth);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, getTitleWidth);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, setStringValue);
PHP_METHOD(AppKit_NS_NSFormCell_NSFormCell, getStringValue);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsFormCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_nsformcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_setplaceholderstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placeholder, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_getplaceholderstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_settitlewidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_gettitlewidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_setstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsformcell_nsformcell_getstringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsformcell_nsformcell_method_entry) {
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, createText, arginfo_appkit_ns_nsformcell_nsformcell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, wrap, arginfo_appkit_ns_nsformcell_nsformcell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, destroy, arginfo_appkit_ns_nsformcell_nsformcell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, nsFormCell, arginfo_appkit_ns_nsformcell_nsformcell_nsformcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, setTitle, arginfo_appkit_ns_nsformcell_nsformcell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, getTitle, arginfo_appkit_ns_nsformcell_nsformcell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, setState, arginfo_appkit_ns_nsformcell_nsformcell_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, getState, arginfo_appkit_ns_nsformcell_nsformcell_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, setEnabled, arginfo_appkit_ns_nsformcell_nsformcell_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, isEnabled, arginfo_appkit_ns_nsformcell_nsformcell_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, setTag, arginfo_appkit_ns_nsformcell_nsformcell_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, getTag, arginfo_appkit_ns_nsformcell_nsformcell_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, setPlaceholderString, arginfo_appkit_ns_nsformcell_nsformcell_setplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, getPlaceholderString, arginfo_appkit_ns_nsformcell_nsformcell_getplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, setTitleWidth, arginfo_appkit_ns_nsformcell_nsformcell_settitlewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, getTitleWidth, arginfo_appkit_ns_nsformcell_nsformcell_gettitlewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, setStringValue, arginfo_appkit_ns_nsformcell_nsformcell_setstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFormCell_NSFormCell, getStringValue, arginfo_appkit_ns_nsformcell_nsformcell_getstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
