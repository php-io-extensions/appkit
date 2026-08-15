
extern zend_class_entry *appkit_ns_nspopover_nspopover_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPopover_NSPopover);

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, create);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, destroy);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setContentView);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, show);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, close);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, isShown);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, popover, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_setcontentview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, popover, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_show, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, popover, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, popover, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_isshown, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, popover, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspopover_nspopover_method_entry) {
	PHP_ME(AppKit_NS_NSPopover_NSPopover, create, arginfo_appkit_ns_nspopover_nspopover_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, destroy, arginfo_appkit_ns_nspopover_nspopover_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, setContentView, arginfo_appkit_ns_nspopover_nspopover_setcontentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, show, arginfo_appkit_ns_nspopover_nspopover_show, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, close, arginfo_appkit_ns_nspopover_nspopover_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, isShown, arginfo_appkit_ns_nspopover_nspopover_isshown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
