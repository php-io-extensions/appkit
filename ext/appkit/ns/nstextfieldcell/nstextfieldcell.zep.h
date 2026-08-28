
extern zend_class_entry *appkit_ns_nstextfieldcell_nstextfieldcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextFieldCell_NSTextFieldCell);

PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, initTextCell);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, backgroundColor);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, drawsBackground);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setDrawsBackground);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, textColor);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setTextColor);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setUpFieldEditorAttributes);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, bezelStyle);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBezelStyle);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, placeholderString);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setPlaceholderString);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setWantsNotificationForMarkedText);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, allowedInputSourceLocales);
PHP_METHOD(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setAllowedInputSourceLocales);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_inittextcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_drawsbackground, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setdrawsbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, drawsBackground, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_textcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_settextcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setupfieldeditorattributes, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textObj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_bezelstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setbezelstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bezelStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_placeholderstring, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setplaceholderstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, placeholderString)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setwantsnotificationformarkedtext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_allowedinputsourcelocales, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setallowedinputsourcelocales, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, allowedInputSourceLocales, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextfieldcell_nstextfieldcell_method_entry) {
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, initTextCell, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_inittextcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, backgroundColor, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBackgroundColor, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, drawsBackground, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_drawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setDrawsBackground, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setdrawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, textColor, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_textcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setTextColor, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_settextcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setUpFieldEditorAttributes, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setupfieldeditorattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, bezelStyle, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_bezelstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setBezelStyle, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setbezelstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, placeholderString, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_placeholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setPlaceholderString, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setWantsNotificationForMarkedText, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setwantsnotificationformarkedtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, allowedInputSourceLocales, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_allowedinputsourcelocales, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFieldCell_NSTextFieldCell, setAllowedInputSourceLocales, arginfo_appkit_ns_nstextfieldcell_nstextfieldcell_setallowedinputsourcelocales, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
