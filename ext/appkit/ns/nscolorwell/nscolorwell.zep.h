
extern zend_class_entry *appkit_ns_nscolorwell_nscolorwell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSColorWell_NSColorWell);

PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, create);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, destroy);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, setRgba);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, getRgba);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, well, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_setrgba, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, well, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_getrgba, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, well, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, well, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscolorwell_nscolorwell_method_entry) {
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, create, arginfo_appkit_ns_nscolorwell_nscolorwell_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, destroy, arginfo_appkit_ns_nscolorwell_nscolorwell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, setRgba, arginfo_appkit_ns_nscolorwell_nscolorwell_setrgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, getRgba, arginfo_appkit_ns_nscolorwell_nscolorwell_getrgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, pollChange, arginfo_appkit_ns_nscolorwell_nscolorwell_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
