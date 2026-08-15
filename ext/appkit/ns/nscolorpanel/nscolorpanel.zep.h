
extern zend_class_entry *appkit_ns_nscolorpanel_nscolorpanel_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSColorPanel_NSColorPanel);

PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, shared);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, destroy);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, sharedExists);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setPickerMask);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setPickerMode);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, orderFront);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, mode);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setMode);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, showsAlpha);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setShowsAlpha);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, isContinuous);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setContinuous);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, setColorRgba);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, getColorRgba);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, alpha);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, attachColorList);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, detachColorList);
PHP_METHOD(AppKit_NS_NSColorPanel_NSColorPanel, nsColorPanel);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_shared, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_sharedexists, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_setpickermask, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_setpickermode, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_orderfront, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_mode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_setmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_showsalpha, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_setshowsalpha, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shows, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_iscontinuous, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_setcontinuous, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, continuous, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_setcolorrgba, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_getcolorrgba, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_alpha, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_attachcolorlist, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_detachcolorlist, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, list, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorpanel_nscolorpanel_nscolorpanel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscolorpanel_nscolorpanel_method_entry) {
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, shared, arginfo_appkit_ns_nscolorpanel_nscolorpanel_shared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, destroy, arginfo_appkit_ns_nscolorpanel_nscolorpanel_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, sharedExists, arginfo_appkit_ns_nscolorpanel_nscolorpanel_sharedexists, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, setPickerMask, arginfo_appkit_ns_nscolorpanel_nscolorpanel_setpickermask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, setPickerMode, arginfo_appkit_ns_nscolorpanel_nscolorpanel_setpickermode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, orderFront, arginfo_appkit_ns_nscolorpanel_nscolorpanel_orderfront, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, mode, arginfo_appkit_ns_nscolorpanel_nscolorpanel_mode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, setMode, arginfo_appkit_ns_nscolorpanel_nscolorpanel_setmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, showsAlpha, arginfo_appkit_ns_nscolorpanel_nscolorpanel_showsalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, setShowsAlpha, arginfo_appkit_ns_nscolorpanel_nscolorpanel_setshowsalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, isContinuous, arginfo_appkit_ns_nscolorpanel_nscolorpanel_iscontinuous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, setContinuous, arginfo_appkit_ns_nscolorpanel_nscolorpanel_setcontinuous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, setColorRgba, arginfo_appkit_ns_nscolorpanel_nscolorpanel_setcolorrgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, getColorRgba, arginfo_appkit_ns_nscolorpanel_nscolorpanel_getcolorrgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, alpha, arginfo_appkit_ns_nscolorpanel_nscolorpanel_alpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, attachColorList, arginfo_appkit_ns_nscolorpanel_nscolorpanel_attachcolorlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, detachColorList, arginfo_appkit_ns_nscolorpanel_nscolorpanel_detachcolorlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorPanel_NSColorPanel, nsColorPanel, arginfo_appkit_ns_nscolorpanel_nscolorpanel_nscolorpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
