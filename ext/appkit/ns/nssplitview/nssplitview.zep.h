
extern zend_class_entry *appkit_ns_nssplitview_nssplitview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSplitView_NSSplitView);

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, create);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, destroy);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, addSubview);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vertical, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, split, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_addsubview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, split, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssplitview_nssplitview_method_entry) {
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, create, arginfo_appkit_ns_nssplitview_nssplitview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, destroy, arginfo_appkit_ns_nssplitview_nssplitview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, addSubview, arginfo_appkit_ns_nssplitview_nssplitview_addsubview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
