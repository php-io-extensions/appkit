
extern zend_class_entry *appkit_ns_nspagelayout_nspagelayout_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPageLayout_NSPageLayout);

PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, pageLayout);
PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, destroy);
PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, nsPageLayout);
PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, runModal);
PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, runModalWithPrintInfo);
PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, printInfo);
PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, addAccessoryController);
PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, removeAccessoryController);
PHP_METHOD(AppKit_NS_NSPageLayout_NSPageLayout, accessoryControllerCount);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspagelayout_nspagelayout_pagelayout, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspagelayout_nspagelayout_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspagelayout_nspagelayout_nspagelayout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspagelayout_nspagelayout_runmodal, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspagelayout_nspagelayout_runmodalwithprintinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspagelayout_nspagelayout_printinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspagelayout_nspagelayout_addaccessorycontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspagelayout_nspagelayout_removeaccessorycontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspagelayout_nspagelayout_accessorycontrollercount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspagelayout_nspagelayout_method_entry) {
	PHP_ME(AppKit_NS_NSPageLayout_NSPageLayout, pageLayout, arginfo_appkit_ns_nspagelayout_nspagelayout_pagelayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPageLayout_NSPageLayout, destroy, arginfo_appkit_ns_nspagelayout_nspagelayout_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPageLayout_NSPageLayout, nsPageLayout, arginfo_appkit_ns_nspagelayout_nspagelayout_nspagelayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPageLayout_NSPageLayout, runModal, arginfo_appkit_ns_nspagelayout_nspagelayout_runmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPageLayout_NSPageLayout, runModalWithPrintInfo, arginfo_appkit_ns_nspagelayout_nspagelayout_runmodalwithprintinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPageLayout_NSPageLayout, printInfo, arginfo_appkit_ns_nspagelayout_nspagelayout_printinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPageLayout_NSPageLayout, addAccessoryController, arginfo_appkit_ns_nspagelayout_nspagelayout_addaccessorycontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPageLayout_NSPageLayout, removeAccessoryController, arginfo_appkit_ns_nspagelayout_nspagelayout_removeaccessorycontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPageLayout_NSPageLayout, accessoryControllerCount, arginfo_appkit_ns_nspagelayout_nspagelayout_accessorycontrollercount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
