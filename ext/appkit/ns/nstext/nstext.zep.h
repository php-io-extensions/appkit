
extern zend_class_entry *appkit_ns_nstext_nstext_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSText_NSText);

PHP_METHOD(AppKit_NS_NSText_NSText, create);
PHP_METHOD(AppKit_NS_NSText_NSText, wrap);
PHP_METHOD(AppKit_NS_NSText_NSText, destroy);
PHP_METHOD(AppKit_NS_NSText_NSText, nsText);
PHP_METHOD(AppKit_NS_NSText_NSText, setString);
PHP_METHOD(AppKit_NS_NSText_NSText, getString);
PHP_METHOD(AppKit_NS_NSText_NSText, setEditable);
PHP_METHOD(AppKit_NS_NSText_NSText, isEditable);
PHP_METHOD(AppKit_NS_NSText_NSText, setSelectable);
PHP_METHOD(AppKit_NS_NSText_NSText, isSelectable);
PHP_METHOD(AppKit_NS_NSText_NSText, setRichText);
PHP_METHOD(AppKit_NS_NSText_NSText, isRichText);
PHP_METHOD(AppKit_NS_NSText_NSText, setDrawsBackground);
PHP_METHOD(AppKit_NS_NSText_NSText, drawsBackground);
PHP_METHOD(AppKit_NS_NSText_NSText, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSText_NSText, setTextColor);
PHP_METHOD(AppKit_NS_NSText_NSText, setFont);
PHP_METHOD(AppKit_NS_NSText_NSText, setAlignment);
PHP_METHOD(AppKit_NS_NSText_NSText, getAlignment);
PHP_METHOD(AppKit_NS_NSText_NSText, setWritingDirection);
PHP_METHOD(AppKit_NS_NSText_NSText, getWritingDirection);
PHP_METHOD(AppKit_NS_NSText_NSText, setSelectedRange);
PHP_METHOD(AppKit_NS_NSText_NSText, getSelectedRange);
PHP_METHOD(AppKit_NS_NSText_NSText, sizeToFit);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_nstext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_setstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_getstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_setselectable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_isselectable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_setrichtext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, richText, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_isrichtext, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_setdrawsbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, drawsBackground, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_drawsbackground, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_settextcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_setfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_getalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_setwritingdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_getwritingdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_setselectedrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_getselectedrange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstext_nstext_sizetofit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstext_nstext_method_entry) {
	PHP_ME(AppKit_NS_NSText_NSText, create, arginfo_appkit_ns_nstext_nstext_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, wrap, arginfo_appkit_ns_nstext_nstext_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, destroy, arginfo_appkit_ns_nstext_nstext_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, nsText, arginfo_appkit_ns_nstext_nstext_nstext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, setString, arginfo_appkit_ns_nstext_nstext_setstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, getString, arginfo_appkit_ns_nstext_nstext_getstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, setEditable, arginfo_appkit_ns_nstext_nstext_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, isEditable, arginfo_appkit_ns_nstext_nstext_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, setSelectable, arginfo_appkit_ns_nstext_nstext_setselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, isSelectable, arginfo_appkit_ns_nstext_nstext_isselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, setRichText, arginfo_appkit_ns_nstext_nstext_setrichtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, isRichText, arginfo_appkit_ns_nstext_nstext_isrichtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, setDrawsBackground, arginfo_appkit_ns_nstext_nstext_setdrawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, drawsBackground, arginfo_appkit_ns_nstext_nstext_drawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, setBackgroundColor, arginfo_appkit_ns_nstext_nstext_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, setTextColor, arginfo_appkit_ns_nstext_nstext_settextcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, setFont, arginfo_appkit_ns_nstext_nstext_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, setAlignment, arginfo_appkit_ns_nstext_nstext_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, getAlignment, arginfo_appkit_ns_nstext_nstext_getalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, setWritingDirection, arginfo_appkit_ns_nstext_nstext_setwritingdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, getWritingDirection, arginfo_appkit_ns_nstext_nstext_getwritingdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, setSelectedRange, arginfo_appkit_ns_nstext_nstext_setselectedrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, getSelectedRange, arginfo_appkit_ns_nstext_nstext_getselectedrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSText_NSText, sizeToFit, arginfo_appkit_ns_nstext_nstext_sizetofit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
