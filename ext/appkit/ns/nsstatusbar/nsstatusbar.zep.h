
extern zend_class_entry *appkit_ns_nsstatusbar_nsstatusbar_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStatusBar_NSStatusBar);

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, systemStatusBar);
PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, statusItemWithLength);
PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, removeStatusItem);
PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, isVertical);
PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, thickness);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbar_nsstatusbar_systemstatusbar, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbar_nsstatusbar_statusitemwithlength, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbar_nsstatusbar_removestatusitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbar_nsstatusbar_isvertical, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusbar_nsstatusbar_thickness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsstatusbar_nsstatusbar_method_entry) {
	PHP_ME(AppKit_NS_NSStatusBar_NSStatusBar, systemStatusBar, arginfo_appkit_ns_nsstatusbar_nsstatusbar_systemstatusbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBar_NSStatusBar, statusItemWithLength, arginfo_appkit_ns_nsstatusbar_nsstatusbar_statusitemwithlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBar_NSStatusBar, removeStatusItem, arginfo_appkit_ns_nsstatusbar_nsstatusbar_removestatusitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBar_NSStatusBar, isVertical, arginfo_appkit_ns_nsstatusbar_nsstatusbar_isvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusBar_NSStatusBar, thickness, arginfo_appkit_ns_nsstatusbar_nsstatusbar_thickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
