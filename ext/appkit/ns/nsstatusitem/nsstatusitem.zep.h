
extern zend_class_entry *appkit_ns_nsstatusitem_nsstatusitem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStatusItem_NSStatusItem);

PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, create);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, wrap);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, nsStatusItem);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, destroy);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, setTitle);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, pollClick);
PHP_METHOD(AppKit_NS_NSStatusItem_NSStatusItem, button);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsStatusItemPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_nsstatusitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_pollclick, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstatusitem_nsstatusitem_button, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsstatusitem_nsstatusitem_method_entry) {
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, create, arginfo_appkit_ns_nsstatusitem_nsstatusitem_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, wrap, arginfo_appkit_ns_nsstatusitem_nsstatusitem_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, nsStatusItem, arginfo_appkit_ns_nsstatusitem_nsstatusitem_nsstatusitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, destroy, arginfo_appkit_ns_nsstatusitem_nsstatusitem_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, setTitle, arginfo_appkit_ns_nsstatusitem_nsstatusitem_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, pollClick, arginfo_appkit_ns_nsstatusitem_nsstatusitem_pollclick, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStatusItem_NSStatusItem, button, arginfo_appkit_ns_nsstatusitem_nsstatusitem_button, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
