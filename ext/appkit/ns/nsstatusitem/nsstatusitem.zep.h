
extern zend_class_entry *appkit_ns_nsstatusitem_nsstatusitem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStatusItem_NSStatusItem);

PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, init);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, statusBar);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, length);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, setLength);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, menu);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, setMenu);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, button);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, behavior);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, setBehavior);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, isVisible);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, setVisible);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, autosaveName);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, setAutosaveName);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_statusbar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_length, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_setlength, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_menu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_setmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_button, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_behavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_setbehavior, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, behavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_isvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_autosavename, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_setautosavename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, autosaveName)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsstatusitem_nsstatusitem_method_entry) {
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, init, arginfo_appkit_ns_nsstatusitem_nsstatusitem_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, statusBar, arginfo_appkit_ns_nsstatusitem_nsstatusitem_statusbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, length, arginfo_appkit_ns_nsstatusitem_nsstatusitem_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, setLength, arginfo_appkit_ns_nsstatusitem_nsstatusitem_setlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, menu, arginfo_appkit_ns_nsstatusitem_nsstatusitem_menu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, setMenu, arginfo_appkit_ns_nsstatusitem_nsstatusitem_setmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, button, arginfo_appkit_ns_nsstatusitem_nsstatusitem_button, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, behavior, arginfo_appkit_ns_nsstatusitem_nsstatusitem_behavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, setBehavior, arginfo_appkit_ns_nsstatusitem_nsstatusitem_setbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, isVisible, arginfo_appkit_ns_nsstatusitem_nsstatusitem_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, setVisible, arginfo_appkit_ns_nsstatusitem_nsstatusitem_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, autosaveName, arginfo_appkit_ns_nsstatusitem_nsstatusitem_autosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, setAutosaveName, arginfo_appkit_ns_nsstatusitem_nsstatusitem_setautosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
