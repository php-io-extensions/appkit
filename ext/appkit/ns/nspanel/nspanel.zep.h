
extern zend_class_entry *appkit_ns_nspanel_nspanel_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPanel_NSPanel);

PHP_METHOD(AppKit_NS_NSPanel_NSPanel, create);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, destroy);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, setTitle);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, show);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, hide);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, center);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, shouldClose);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, getWidth);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, getHeight);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, contentView);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, setContentView);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, makeFirstResponder);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, screenToContent);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, setFloatingPanel);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, isFloatingPanel);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, setBecomesKeyOnlyIfNeeded);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, becomesKeyOnlyIfNeeded);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, setWorksWhenModal);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, worksWhenModal);
PHP_METHOD(AppKit_NS_NSPanel_NSPanel, nsPanel);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_create, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_show, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_hide, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_center, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_shouldclose, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_getwidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_getheight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_contentview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_setcontentview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_makefirstresponder, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_screentocontent, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screenX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, screenY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_setfloatingpanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, floating, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_isfloatingpanel, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_setbecomeskeyonlyifneeded, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_becomeskeyonlyifneeded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_setworkswhenmodal, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_workswhenmodal, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspanel_nspanel_nspanel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspanel_nspanel_method_entry) {
	PHP_ME(AppKit_NS_NSPanel_NSPanel, create, arginfo_appkit_ns_nspanel_nspanel_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, destroy, arginfo_appkit_ns_nspanel_nspanel_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, setTitle, arginfo_appkit_ns_nspanel_nspanel_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, show, arginfo_appkit_ns_nspanel_nspanel_show, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, hide, arginfo_appkit_ns_nspanel_nspanel_hide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, center, arginfo_appkit_ns_nspanel_nspanel_center, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, shouldClose, arginfo_appkit_ns_nspanel_nspanel_shouldclose, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, getWidth, arginfo_appkit_ns_nspanel_nspanel_getwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, getHeight, arginfo_appkit_ns_nspanel_nspanel_getheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, contentView, arginfo_appkit_ns_nspanel_nspanel_contentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, setContentView, arginfo_appkit_ns_nspanel_nspanel_setcontentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, makeFirstResponder, arginfo_appkit_ns_nspanel_nspanel_makefirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, screenToContent, arginfo_appkit_ns_nspanel_nspanel_screentocontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, setFloatingPanel, arginfo_appkit_ns_nspanel_nspanel_setfloatingpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, isFloatingPanel, arginfo_appkit_ns_nspanel_nspanel_isfloatingpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, setBecomesKeyOnlyIfNeeded, arginfo_appkit_ns_nspanel_nspanel_setbecomeskeyonlyifneeded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, becomesKeyOnlyIfNeeded, arginfo_appkit_ns_nspanel_nspanel_becomeskeyonlyifneeded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, setWorksWhenModal, arginfo_appkit_ns_nspanel_nspanel_setworkswhenmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, worksWhenModal, arginfo_appkit_ns_nspanel_nspanel_workswhenmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPanel_NSPanel, nsPanel, arginfo_appkit_ns_nspanel_nspanel_nspanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
