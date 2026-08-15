
extern zend_class_entry *appkit_ns_nstableheaderview_nstableheaderview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableHeaderView_NSTableHeaderView);

PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, create);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, wrap);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, destroy);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, setTableView);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, tableView);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, headerHeight);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTableHeaderViewPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_settableview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_tableview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_headerheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstableheaderview_nstableheaderview_method_entry) {
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, create, arginfo_appkit_ns_nstableheaderview_nstableheaderview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, wrap, arginfo_appkit_ns_nstableheaderview_nstableheaderview_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, destroy, arginfo_appkit_ns_nstableheaderview_nstableheaderview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, setTableView, arginfo_appkit_ns_nstableheaderview_nstableheaderview_settableview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, tableView, arginfo_appkit_ns_nstableheaderview_nstableheaderview_tableview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, headerHeight, arginfo_appkit_ns_nstableheaderview_nstableheaderview_headerheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
