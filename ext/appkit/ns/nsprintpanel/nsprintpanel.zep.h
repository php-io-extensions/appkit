
extern zend_class_entry *appkit_ns_nsprintpanel_nsprintpanel_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPrintPanel_NSPrintPanel);

PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, wrap);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, destroy);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, nsPrintPanel);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, printPanel);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, options);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, setOptions);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, defaultButtonTitle);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, setDefaultButtonTitle);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, helpAnchor);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, setHelpAnchor);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, jobStyleHint);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, setJobStyleHint);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, runModal);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, runModalWithPrintInfo);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, printInfo);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, addAccessoryController);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, removeAccessoryController);
PHP_METHOD(AppKit_NS_NSPrintPanel_NSPrintPanel, accessoryControllerCount);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsPrintPanelPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_nsprintpanel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_printpanel, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_options, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_setoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_defaultbuttontitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_setdefaultbuttontitle, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_helpanchor, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_sethelpanchor, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_jobstylehint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_setjobstylehint, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hint, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_runmodal, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_runmodalwithprintinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_printinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_addaccessorycontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_removeaccessorycontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintpanel_nsprintpanel_accessorycontrollercount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsprintpanel_nsprintpanel_method_entry) {
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, wrap, arginfo_appkit_ns_nsprintpanel_nsprintpanel_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, destroy, arginfo_appkit_ns_nsprintpanel_nsprintpanel_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, nsPrintPanel, arginfo_appkit_ns_nsprintpanel_nsprintpanel_nsprintpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, printPanel, arginfo_appkit_ns_nsprintpanel_nsprintpanel_printpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, options, arginfo_appkit_ns_nsprintpanel_nsprintpanel_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, setOptions, arginfo_appkit_ns_nsprintpanel_nsprintpanel_setoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, defaultButtonTitle, arginfo_appkit_ns_nsprintpanel_nsprintpanel_defaultbuttontitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, setDefaultButtonTitle, arginfo_appkit_ns_nsprintpanel_nsprintpanel_setdefaultbuttontitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, helpAnchor, arginfo_appkit_ns_nsprintpanel_nsprintpanel_helpanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, setHelpAnchor, arginfo_appkit_ns_nsprintpanel_nsprintpanel_sethelpanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, jobStyleHint, arginfo_appkit_ns_nsprintpanel_nsprintpanel_jobstylehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, setJobStyleHint, arginfo_appkit_ns_nsprintpanel_nsprintpanel_setjobstylehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, runModal, arginfo_appkit_ns_nsprintpanel_nsprintpanel_runmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, runModalWithPrintInfo, arginfo_appkit_ns_nsprintpanel_nsprintpanel_runmodalwithprintinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, printInfo, arginfo_appkit_ns_nsprintpanel_nsprintpanel_printinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, addAccessoryController, arginfo_appkit_ns_nsprintpanel_nsprintpanel_addaccessorycontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, removeAccessoryController, arginfo_appkit_ns_nsprintpanel_nsprintpanel_removeaccessorycontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintPanel_NSPrintPanel, accessoryControllerCount, arginfo_appkit_ns_nsprintpanel_nsprintpanel_accessorycontrollercount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
