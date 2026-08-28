
extern zend_class_entry *appkit_ns_nscolorwell_nscolorwell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSColorWell_NSColorWell);

PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, initWithFrame);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, colorWellWithStyle);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, deactivate);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, activate);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, isActive);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, drawWellInside);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, takeColorFrom);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, color);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, setColor);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, colorWellStyle);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, setColorWellStyle);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, image);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, setImage);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, pulldownTarget);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, setPulldownTarget);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, pulldownAction);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, setPulldownAction);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, supportsAlpha);
PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, setSupportsAlpha);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_colorwellwithstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_deactivate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_activate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, exclusive, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_isactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_drawwellinside, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_takecolorfrom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_color, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_setcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_colorwellstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_setcolorwellstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorWellStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_image, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_pulldowntarget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_setpulldowntarget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pulldownTarget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_pulldownaction, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_setpulldownaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, pulldownAction)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_supportsalpha, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorwell_nscolorwell_setsupportsalpha, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, supportsAlpha, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscolorwell_nscolorwell_method_entry) {
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, initWithFrame, arginfo_appkit_ns_nscolorwell_nscolorwell_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, colorWellWithStyle, arginfo_appkit_ns_nscolorwell_nscolorwell_colorwellwithstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, deactivate, arginfo_appkit_ns_nscolorwell_nscolorwell_deactivate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, activate, arginfo_appkit_ns_nscolorwell_nscolorwell_activate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, isActive, arginfo_appkit_ns_nscolorwell_nscolorwell_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, drawWellInside, arginfo_appkit_ns_nscolorwell_nscolorwell_drawwellinside, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, takeColorFrom, arginfo_appkit_ns_nscolorwell_nscolorwell_takecolorfrom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, color, arginfo_appkit_ns_nscolorwell_nscolorwell_color, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, setColor, arginfo_appkit_ns_nscolorwell_nscolorwell_setcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, colorWellStyle, arginfo_appkit_ns_nscolorwell_nscolorwell_colorwellstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, setColorWellStyle, arginfo_appkit_ns_nscolorwell_nscolorwell_setcolorwellstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, image, arginfo_appkit_ns_nscolorwell_nscolorwell_image, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, setImage, arginfo_appkit_ns_nscolorwell_nscolorwell_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, pulldownTarget, arginfo_appkit_ns_nscolorwell_nscolorwell_pulldowntarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, setPulldownTarget, arginfo_appkit_ns_nscolorwell_nscolorwell_setpulldowntarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, pulldownAction, arginfo_appkit_ns_nscolorwell_nscolorwell_pulldownaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, setPulldownAction, arginfo_appkit_ns_nscolorwell_nscolorwell_setpulldownaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, supportsAlpha, arginfo_appkit_ns_nscolorwell_nscolorwell_supportsalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorWell_NSColorWell, setSupportsAlpha, arginfo_appkit_ns_nscolorwell_nscolorwell_setsupportsalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
