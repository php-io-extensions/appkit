
extern zend_class_entry *appkit_ns_nsgridview_nsgridview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSGridView_NSGridView);

PHP_METHOD(AppKit_NS_NSGridView_NSGridView, initWithFrame);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, gridViewWithNumberOfColumnsRows);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, gridViewWithViews);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, numberOfRows);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, numberOfColumns);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, rowAtIndex);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, indexOfRow);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, columnAtIndex);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, indexOfColumn);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, cellAtColumnIndexRowIndex);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, cellForView);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, addRowWithViews);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, insertRowAtIndexWithViews);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, moveRowAtIndexToIndex);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, removeRowAtIndex);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, addColumnWithViews);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, insertColumnAtIndexWithViews);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, moveColumnAtIndexToIndex);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, removeColumnAtIndex);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, xPlacement);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setXPlacement);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, yPlacement);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setYPlacement);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, rowAlignment);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setRowAlignment);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, rowSpacing);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setRowSpacing);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, columnSpacing);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, setColumnSpacing);
PHP_METHOD(AppKit_NS_NSGridView_NSGridView, mergeCellsInHorizontalRangeVerticalRange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_gridviewwithnumberofcolumnsrows, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columnCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_gridviewwithviews, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, rows, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_numberofrows, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_numberofcolumns, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_rowatindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_indexofrow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_columnatindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_indexofcolumn, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_cellatcolumnindexrowindex, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columnIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_cellforview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_addrowwithviews, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, views, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_insertrowatindexwithviews, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, views, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_moverowatindextoindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fromIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_removerowatindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_addcolumnwithviews, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, views, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_insertcolumnatindexwithviews, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, views, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_movecolumnatindextoindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fromIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_removecolumnatindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_xplacement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_setxplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xPlacement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_yplacement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_setyplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, yPlacement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_rowalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_setrowalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowAlignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_rowspacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_setrowspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowSpacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_columnspacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_setcolumnspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columnSpacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridview_nsgridview_mergecellsinhorizontalrangeverticalrange, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hLocation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hLength, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vLocation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vLength, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsgridview_nsgridview_method_entry) {
	PHP_ME(AppKit_NS_NSGridView_NSGridView, initWithFrame, arginfo_appkit_ns_nsgridview_nsgridview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, gridViewWithNumberOfColumnsRows, arginfo_appkit_ns_nsgridview_nsgridview_gridviewwithnumberofcolumnsrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, gridViewWithViews, arginfo_appkit_ns_nsgridview_nsgridview_gridviewwithviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, numberOfRows, arginfo_appkit_ns_nsgridview_nsgridview_numberofrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, numberOfColumns, arginfo_appkit_ns_nsgridview_nsgridview_numberofcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, rowAtIndex, arginfo_appkit_ns_nsgridview_nsgridview_rowatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, indexOfRow, arginfo_appkit_ns_nsgridview_nsgridview_indexofrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, columnAtIndex, arginfo_appkit_ns_nsgridview_nsgridview_columnatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, indexOfColumn, arginfo_appkit_ns_nsgridview_nsgridview_indexofcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, cellAtColumnIndexRowIndex, arginfo_appkit_ns_nsgridview_nsgridview_cellatcolumnindexrowindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, cellForView, arginfo_appkit_ns_nsgridview_nsgridview_cellforview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, addRowWithViews, arginfo_appkit_ns_nsgridview_nsgridview_addrowwithviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, insertRowAtIndexWithViews, arginfo_appkit_ns_nsgridview_nsgridview_insertrowatindexwithviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, moveRowAtIndexToIndex, arginfo_appkit_ns_nsgridview_nsgridview_moverowatindextoindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, removeRowAtIndex, arginfo_appkit_ns_nsgridview_nsgridview_removerowatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, addColumnWithViews, arginfo_appkit_ns_nsgridview_nsgridview_addcolumnwithviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, insertColumnAtIndexWithViews, arginfo_appkit_ns_nsgridview_nsgridview_insertcolumnatindexwithviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, moveColumnAtIndexToIndex, arginfo_appkit_ns_nsgridview_nsgridview_movecolumnatindextoindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, removeColumnAtIndex, arginfo_appkit_ns_nsgridview_nsgridview_removecolumnatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, xPlacement, arginfo_appkit_ns_nsgridview_nsgridview_xplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, setXPlacement, arginfo_appkit_ns_nsgridview_nsgridview_setxplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, yPlacement, arginfo_appkit_ns_nsgridview_nsgridview_yplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, setYPlacement, arginfo_appkit_ns_nsgridview_nsgridview_setyplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, rowAlignment, arginfo_appkit_ns_nsgridview_nsgridview_rowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, setRowAlignment, arginfo_appkit_ns_nsgridview_nsgridview_setrowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, rowSpacing, arginfo_appkit_ns_nsgridview_nsgridview_rowspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, setRowSpacing, arginfo_appkit_ns_nsgridview_nsgridview_setrowspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, columnSpacing, arginfo_appkit_ns_nsgridview_nsgridview_columnspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, setColumnSpacing, arginfo_appkit_ns_nsgridview_nsgridview_setcolumnspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridView_NSGridView, mergeCellsInHorizontalRangeVerticalRange, arginfo_appkit_ns_nsgridview_nsgridview_mergecellsinhorizontalrangeverticalrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
