
extern zend_class_entry *appkit_ns_nsmatrix_nsmatrix_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSMatrix_NSMatrix);

PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, create);
PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, destroy);
PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, setMode);
PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, getMode);
PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, numberOfRows);
PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, numberOfColumns);
PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, addRow);
PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, addColumn);
PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, selectedRow);
PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, selectedColumn);
PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, selectCellAt);
PHP_METHOD(AppKit_NS_NSMatrix_NSMatrix, cellAt);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_setmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_getmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_numberofrows, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_numberofcolumns, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_addrow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_addcolumn, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_selectedrow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_selectedcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_selectcellat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmatrix_nsmatrix_cellat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsmatrix_nsmatrix_method_entry) {
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, create, arginfo_appkit_ns_nsmatrix_nsmatrix_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, destroy, arginfo_appkit_ns_nsmatrix_nsmatrix_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, setMode, arginfo_appkit_ns_nsmatrix_nsmatrix_setmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, getMode, arginfo_appkit_ns_nsmatrix_nsmatrix_getmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, numberOfRows, arginfo_appkit_ns_nsmatrix_nsmatrix_numberofrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, numberOfColumns, arginfo_appkit_ns_nsmatrix_nsmatrix_numberofcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, addRow, arginfo_appkit_ns_nsmatrix_nsmatrix_addrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, addColumn, arginfo_appkit_ns_nsmatrix_nsmatrix_addcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, selectedRow, arginfo_appkit_ns_nsmatrix_nsmatrix_selectedrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, selectedColumn, arginfo_appkit_ns_nsmatrix_nsmatrix_selectedcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, selectCellAt, arginfo_appkit_ns_nsmatrix_nsmatrix_selectcellat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMatrix_NSMatrix, cellAt, arginfo_appkit_ns_nsmatrix_nsmatrix_cellat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
