
extern zend_class_entry *appkit_ns_nscolorpicker_nscolorpicker_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSColorPicker_NSColorPicker);

PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, wrap);
PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, destroy);
PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, create);
PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, colorPanel);
PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, buttonToolTip);
PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, minContentSize);
PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, setMode);
PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, attachColorList);
PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, detachColorList);
PHP_METHOD(AppKit_NS_NSColorPicker_NSColorPicker, nsColorPicker);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpicker_nscolorpicker_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsColorPickerPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpicker_nscolorpicker_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpicker_nscolorpicker_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpicker_nscolorpicker_colorpanel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpicker_nscolorpicker_buttontooltip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpicker_nscolorpicker_mincontentsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpicker_nscolorpicker_setmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpicker_nscolorpicker_attachcolorlist, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpicker_nscolorpicker_detachcolorlist, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpicker_nscolorpicker_nscolorpicker, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscolorpicker_nscolorpicker_method_entry) {
	PHP_ME(AppKit_NS_NSColorPicker_NSColorPicker, wrap, arginfo_appkit_ns_nscolorpicker_nscolorpicker_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPicker_NSColorPicker, destroy, arginfo_appkit_ns_nscolorpicker_nscolorpicker_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPicker_NSColorPicker, create, arginfo_appkit_ns_nscolorpicker_nscolorpicker_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPicker_NSColorPicker, colorPanel, arginfo_appkit_ns_nscolorpicker_nscolorpicker_colorpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPicker_NSColorPicker, buttonToolTip, arginfo_appkit_ns_nscolorpicker_nscolorpicker_buttontooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPicker_NSColorPicker, minContentSize, arginfo_appkit_ns_nscolorpicker_nscolorpicker_mincontentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPicker_NSColorPicker, setMode, arginfo_appkit_ns_nscolorpicker_nscolorpicker_setmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPicker_NSColorPicker, attachColorList, arginfo_appkit_ns_nscolorpicker_nscolorpicker_attachcolorlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPicker_NSColorPicker, detachColorList, arginfo_appkit_ns_nscolorpicker_nscolorpicker_detachcolorlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPicker_NSColorPicker, nsColorPicker, arginfo_appkit_ns_nscolorpicker_nscolorpicker_nscolorpicker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
