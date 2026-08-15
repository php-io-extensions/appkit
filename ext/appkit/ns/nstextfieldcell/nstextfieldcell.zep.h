
extern zend_class_entry *appkit_ns_nstextfieldcell_nstextfieldcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextFieldCell_NSTextFieldCell);

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, createText);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, wrap);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, destroy);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, nsTextFieldCell);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setTitle);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getTitle);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setStringValue);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getStringValue);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setDrawsBackground);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, drawsBackground);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setTextColor);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBezelStyle);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getBezelStyle);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setPlaceholderString);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getPlaceholderString);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setWantsNotificationForMarkedText);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextFieldCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_nstextfieldcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_getstringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setdrawsbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, drawsBackground, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_drawsbackground, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_settextcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setbezelstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_getbezelstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setplaceholderstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placeholder, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_getplaceholderstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setwantsnotificationformarkedtext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextfieldcell_nstextfieldcell_method_entry) {
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, createText, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, wrap, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, destroy, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, nsTextFieldCell, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_nstextfieldcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setTitle, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getTitle, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setStringValue, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getStringValue, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_getstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBackgroundColor, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setDrawsBackground, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setdrawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, drawsBackground, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_drawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setTextColor, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_settextcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBezelStyle, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setbezelstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getBezelStyle, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_getbezelstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setPlaceholderString, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, getPlaceholderString, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_getplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setWantsNotificationForMarkedText, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setwantsnotificationformarkedtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
