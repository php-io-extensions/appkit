
extern zend_class_entry *appkit_ns_nsparagraphstyle_nsparagraphstyle_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSParagraphStyle_NSParagraphStyle);

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, defaultParagraphStyle);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, create);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, wrap);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, destroy);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getLineSpacing);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setLineSpacing);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getLineBreakMode);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setLineBreakMode);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getAlignment);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setAlignment);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setParagraphStyle);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setHeadIndent);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getHeadIndent);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setHyphenationFactor);
PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getHyphenationFactor);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_defaultparagraphstyle, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsParagraphStylePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_getlinespacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_setlinespacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_getlinebreakmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_setlinebreakmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_getalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_setparagraphstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_setheadindent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_getheadindent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_sethyphenationfactor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_gethyphenationfactor, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsparagraphstyle_nsparagraphstyle_method_entry) {
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, defaultParagraphStyle, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_defaultparagraphstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, create, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, wrap, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, destroy, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getLineSpacing, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_getlinespacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setLineSpacing, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_setlinespacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getLineBreakMode, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_getlinebreakmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setLineBreakMode, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_setlinebreakmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getAlignment, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_getalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setAlignment, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setParagraphStyle, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_setparagraphstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setHeadIndent, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_setheadindent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getHeadIndent, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_getheadindent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setHyphenationFactor, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_sethyphenationfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getHyphenationFactor, arginfo_appkit_ns_nsparagraphstyle_nsparagraphstyle_gethyphenationfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
