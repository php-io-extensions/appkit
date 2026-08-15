
extern zend_class_entry *appkit_ns_nsgridview_nsgridview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSGridView_NSGridView);

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, create);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, destroy);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, addView);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setRowSpacing);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setColumnSpacing);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, numberOfRows);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, numberOfColumns);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, rowAt);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, columnAt);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, cellAt);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, sizeForContent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, grid, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_addview, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, grid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_setrowspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, grid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_setcolumnspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, grid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_numberofrows, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, grid, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_numberofcolumns, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, grid, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_rowat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, grid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_columnat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, grid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_cellat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, grid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_sizeforcontent, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsgridview_nsgridview_method_entry) {
	PHP_ME(AppKit_NS_NSGridView_NSGridView, create, arginfo_appkit_ns_nsgridview_nsgridview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, destroy, arginfo_appkit_ns_nsgridview_nsgridview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, addView, arginfo_appkit_ns_nsgridview_nsgridview_addview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, setRowSpacing, arginfo_appkit_ns_nsgridview_nsgridview_setrowspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, setColumnSpacing, arginfo_appkit_ns_nsgridview_nsgridview_setcolumnspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, numberOfRows, arginfo_appkit_ns_nsgridview_nsgridview_numberofrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, numberOfColumns, arginfo_appkit_ns_nsgridview_nsgridview_numberofcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, rowAt, arginfo_appkit_ns_nsgridview_nsgridview_rowat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, columnAt, arginfo_appkit_ns_nsgridview_nsgridview_columnat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, cellAt, arginfo_appkit_ns_nsgridview_nsgridview_cellat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, sizeForContent, arginfo_appkit_ns_nsgridview_nsgridview_sizeforcontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
