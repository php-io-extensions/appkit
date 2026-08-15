
extern zend_class_entry *appkit_ns_nsfontpanel_nsfontpanel_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSFontPanel_NSFontPanel);

PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, wrap);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, shared);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, destroy);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, sharedExists);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, setPanelFont);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, panelConvertFont);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, worksWhenModal);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, setWorksWhenModal);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, isEnabled);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, setEnabled);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, reloadDefaultFontFamilies);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, orderFront);
PHP_METHOD(AppKit_NS_NSFontPanel_NSFontPanel, nsFontPanel);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsFontPanelPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_shared, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_sharedexists, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_setpanelfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isMultiple, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_panelconvertfont, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_workswhenmodal, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_setworkswhenmodal, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, works, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_reloaddefaultfontfamilies, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_orderfront, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontpanel_nsfontpanel_nsfontpanel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsfontpanel_nsfontpanel_method_entry) {
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, wrap, arginfo_appkit_ns_nsfontpanel_nsfontpanel_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, shared, arginfo_appkit_ns_nsfontpanel_nsfontpanel_shared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, destroy, arginfo_appkit_ns_nsfontpanel_nsfontpanel_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, sharedExists, arginfo_appkit_ns_nsfontpanel_nsfontpanel_sharedexists, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, setPanelFont, arginfo_appkit_ns_nsfontpanel_nsfontpanel_setpanelfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, panelConvertFont, arginfo_appkit_ns_nsfontpanel_nsfontpanel_panelconvertfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, worksWhenModal, arginfo_appkit_ns_nsfontpanel_nsfontpanel_workswhenmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, setWorksWhenModal, arginfo_appkit_ns_nsfontpanel_nsfontpanel_setworkswhenmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, isEnabled, arginfo_appkit_ns_nsfontpanel_nsfontpanel_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, setEnabled, arginfo_appkit_ns_nsfontpanel_nsfontpanel_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, reloadDefaultFontFamilies, arginfo_appkit_ns_nsfontpanel_nsfontpanel_reloaddefaultfontfamilies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, orderFront, arginfo_appkit_ns_nsfontpanel_nsfontpanel_orderfront, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontPanel_NSFontPanel, nsFontPanel, arginfo_appkit_ns_nsfontpanel_nsfontpanel_nsfontpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
