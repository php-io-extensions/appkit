
extern zend_class_entry *appkit_ns_nstableheaderview_nstableheaderview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableHeaderView_NSTableHeaderView);

PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, initWithFrame);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, tableView);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, setTableView);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, draggedColumn);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, draggedDistance);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, resizedColumn);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, headerRectOfColumn);
PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, columnAtPoint);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_tableview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_settableview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_draggedcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_draggeddistance, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_resizedcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_headerrectofcolumn, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheaderview_nstableheaderview_columnatpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstableheaderview_nstableheaderview_method_entry) {
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, initWithFrame, arginfo_appkit_ns_nstableheaderview_nstableheaderview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, tableView, arginfo_appkit_ns_nstableheaderview_nstableheaderview_tableview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, setTableView, arginfo_appkit_ns_nstableheaderview_nstableheaderview_settableview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, draggedColumn, arginfo_appkit_ns_nstableheaderview_nstableheaderview_draggedcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, draggedDistance, arginfo_appkit_ns_nstableheaderview_nstableheaderview_draggeddistance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, resizedColumn, arginfo_appkit_ns_nstableheaderview_nstableheaderview_resizedcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, headerRectOfColumn, arginfo_appkit_ns_nstableheaderview_nstableheaderview_headerrectofcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderView_NSTableHeaderView, columnAtPoint, arginfo_appkit_ns_nstableheaderview_nstableheaderview_columnatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
