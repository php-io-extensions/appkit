
extern zend_class_entry *appkit_ns_nscolor_nscolor_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSColor_NSColor);

PHP_METHOD(AppKit_NS_NSColor_NSColor, wrap);
PHP_METHOD(AppKit_NS_NSColor_NSColor, destroy);
PHP_METHOD(AppKit_NS_NSColor_NSColor, withRgba);
PHP_METHOD(AppKit_NS_NSColor_NSColor, withSrgbBytes);
PHP_METHOD(AppKit_NS_NSColor_NSColor, withWhite);
PHP_METHOD(AppKit_NS_NSColor_NSColor, withHsb);
PHP_METHOD(AppKit_NS_NSColor_NSColor, named);
PHP_METHOD(AppKit_NS_NSColor_NSColor, withCatalog);
PHP_METHOD(AppKit_NS_NSColor_NSColor, standard);
PHP_METHOD(AppKit_NS_NSColor_NSColor, withAlpha);
PHP_METHOD(AppKit_NS_NSColor_NSColor, usingColorSpace);
PHP_METHOD(AppKit_NS_NSColor_NSColor, type);
PHP_METHOD(AppKit_NS_NSColor_NSColor, alpha);
PHP_METHOD(AppKit_NS_NSColor_NSColor, getSrgba);
PHP_METHOD(AppKit_NS_NSColor_NSColor, getRgbaDouble);
PHP_METHOD(AppKit_NS_NSColor_NSColor, set);
PHP_METHOD(AppKit_NS_NSColor_NSColor, setFill);
PHP_METHOD(AppKit_NS_NSColor_NSColor, setStroke);
PHP_METHOD(AppKit_NS_NSColor_NSColor, catalogName);
PHP_METHOD(AppKit_NS_NSColor_NSColor, colorName);
PHP_METHOD(AppKit_NS_NSColor_NSColor, nsColor);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsColorPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_withrgba, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, red, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, green, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, blue, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_withsrgbbytes, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, red, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, green, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, blue, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_withwhite, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, white, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_withhsb, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hue, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, saturation, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, brightness, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_named, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_withcatalog, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, listName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, colorName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_standard, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_withalpha, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_usingcolorspace, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, space, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_alpha, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_getsrgba, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_getrgbadouble, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_set, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_setfill, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_setstroke, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_catalogname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_colorname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolor_nscolor_nscolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscolor_nscolor_method_entry) {
	PHP_ME(AppKit_NS_NSColor_NSColor, wrap, arginfo_appkit_ns_nscolor_nscolor_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, destroy, arginfo_appkit_ns_nscolor_nscolor_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, withRgba, arginfo_appkit_ns_nscolor_nscolor_withrgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, withSrgbBytes, arginfo_appkit_ns_nscolor_nscolor_withsrgbbytes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, withWhite, arginfo_appkit_ns_nscolor_nscolor_withwhite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, withHsb, arginfo_appkit_ns_nscolor_nscolor_withhsb, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, named, arginfo_appkit_ns_nscolor_nscolor_named, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, withCatalog, arginfo_appkit_ns_nscolor_nscolor_withcatalog, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, standard, arginfo_appkit_ns_nscolor_nscolor_standard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, withAlpha, arginfo_appkit_ns_nscolor_nscolor_withalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, usingColorSpace, arginfo_appkit_ns_nscolor_nscolor_usingcolorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, type, arginfo_appkit_ns_nscolor_nscolor_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, alpha, arginfo_appkit_ns_nscolor_nscolor_alpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, getSrgba, arginfo_appkit_ns_nscolor_nscolor_getsrgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, getRgbaDouble, arginfo_appkit_ns_nscolor_nscolor_getrgbadouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, set, arginfo_appkit_ns_nscolor_nscolor_set, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, setFill, arginfo_appkit_ns_nscolor_nscolor_setfill, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, setStroke, arginfo_appkit_ns_nscolor_nscolor_setstroke, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, catalogName, arginfo_appkit_ns_nscolor_nscolor_catalogname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, colorName, arginfo_appkit_ns_nscolor_nscolor_colorname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColor_NSColor, nsColor, arginfo_appkit_ns_nscolor_nscolor_nscolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
