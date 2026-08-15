
extern zend_class_entry *appkit_ns_nstabview_nstabview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTabView_NSTabView);

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, create);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, destroy);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, addTab);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, getSelected);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setSelected);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tabs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_addtab, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tabs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_getselected, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tabs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstabview_nstabview_method_entry) {
	PHP_ME(AppKit_NS_NSTabView_NSTabView, create, arginfo_appkit_ns_nstabview_nstabview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, destroy, arginfo_appkit_ns_nstabview_nstabview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, addTab, arginfo_appkit_ns_nstabview_nstabview_addtab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, getSelected, arginfo_appkit_ns_nstabview_nstabview_getselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, setSelected, arginfo_appkit_ns_nstabview_nstabview_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
