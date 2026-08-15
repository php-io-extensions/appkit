
extern zend_class_entry *appkit_ns_nsoutlineview_nsoutlineview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSOutlineView_NSOutlineView);

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, create);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, destroy);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, clear);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, addRoot);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, addChild);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, itemCount);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, getSelected);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setSelected);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, outline, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, outline, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_addroot, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, outline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_addchild, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, outline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parentId, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_itemcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, outline, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_getselected, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, outline, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, outline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, itemId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, outline, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsoutlineview_nsoutlineview_method_entry) {
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, create, arginfo_appkit_ns_nsoutlineview_nsoutlineview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, destroy, arginfo_appkit_ns_nsoutlineview_nsoutlineview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, clear, arginfo_appkit_ns_nsoutlineview_nsoutlineview_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, addRoot, arginfo_appkit_ns_nsoutlineview_nsoutlineview_addroot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, addChild, arginfo_appkit_ns_nsoutlineview_nsoutlineview_addchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, itemCount, arginfo_appkit_ns_nsoutlineview_nsoutlineview_itemcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, getSelected, arginfo_appkit_ns_nsoutlineview_nsoutlineview_getselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, setSelected, arginfo_appkit_ns_nsoutlineview_nsoutlineview_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, pollChange, arginfo_appkit_ns_nsoutlineview_nsoutlineview_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
