
extern zend_class_entry *appkit_ns_nstableview_nstableview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableView_NSTableView);

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, create);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, destroy);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, clearRows);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, addRow);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowCount);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, getSelected);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setSelected);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_clearrows, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_addrow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_getselected, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstableview_nstableview_method_entry) {
	PHP_ME(AppKit_NS_NSTableView_NSTableView, create, arginfo_appkit_ns_nstableview_nstableview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, destroy, arginfo_appkit_ns_nstableview_nstableview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, clearRows, arginfo_appkit_ns_nstableview_nstableview_clearrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, addRow, arginfo_appkit_ns_nstableview_nstableview_addrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, rowCount, arginfo_appkit_ns_nstableview_nstableview_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, getSelected, arginfo_appkit_ns_nstableview_nstableview_getselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setSelected, arginfo_appkit_ns_nstableview_nstableview_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, pollChange, arginfo_appkit_ns_nstableview_nstableview_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
