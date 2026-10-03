/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 35aefd279cda363e2a505309ef1302d649b970ef */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NSRange___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, location, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, length, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSGridView_gridViewWithNumberOfColumnsRows, 0, 2, IS_STATIC, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSGridView_numberOfRows, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSGridView_numberOfColumns arginfo_class_NSGridView_numberOfRows

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSGridView_addRowWithViews, 0, 1, NSGridRow, 0)
	ZEND_ARG_TYPE_INFO(0, views, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSGridView_insertRowAtIndexWithViews, 0, 2, NSGridRow, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, views, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSGridView_removeRowAtIndex, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSGridView_addColumnWithViews, 0, 1, NSGridColumn, 0)
	ZEND_ARG_TYPE_INFO(0, views, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSGridView_rowSpacing, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSGridView_setRowSpacing, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSGridView_columnSpacing arginfo_class_NSGridView_rowSpacing

#define arginfo_class_NSGridView_setColumnSpacing arginfo_class_NSGridView_setRowSpacing

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSGridView_cellAtColumnIndexRowIndex, 0, 2, NSGridCell, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSGridView_mergeCellsInHorizontalRangeVerticalRange, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, horizontal, NSRange, 0)
	ZEND_ARG_OBJ_INFO(0, vertical, NSRange, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSGridView_rowAtIndex, 0, 1, NSGridRow, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSGridView_columnAtIndex, 0, 1, NSGridColumn, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSGridCell_contentView, 0, 0, NSView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSGridCell_setContentView, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSGridCell_xPlacement, 0, 0, NSGridCellPlacement, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSGridCell_setXPlacement, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, placement, NSGridCellPlacement, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSGridCell_yPlacement arginfo_class_NSGridCell_xPlacement

#define arginfo_class_NSGridCell_setYPlacement arginfo_class_NSGridCell_setXPlacement

#define arginfo_class_NSGridRow_height arginfo_class_NSGridView_rowSpacing

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSGridRow_setHeight, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSGridRow_topPadding arginfo_class_NSGridView_rowSpacing

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSGridRow_setTopPadding, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, padding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSGridRow_bottomPadding arginfo_class_NSGridView_rowSpacing

#define arginfo_class_NSGridRow_setBottomPadding arginfo_class_NSGridRow_setTopPadding

#define arginfo_class_NSGridRow_yPlacement arginfo_class_NSGridCell_xPlacement

#define arginfo_class_NSGridRow_setYPlacement arginfo_class_NSGridCell_setXPlacement

#define arginfo_class_NSGridColumn_width arginfo_class_NSGridView_rowSpacing

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSGridColumn_setWidth, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSGridColumn_leadingPadding arginfo_class_NSGridView_rowSpacing

#define arginfo_class_NSGridColumn_setLeadingPadding arginfo_class_NSGridRow_setTopPadding

#define arginfo_class_NSGridColumn_trailingPadding arginfo_class_NSGridView_rowSpacing

#define arginfo_class_NSGridColumn_setTrailingPadding arginfo_class_NSGridRow_setTopPadding

#define arginfo_class_NSGridColumn_xPlacement arginfo_class_NSGridCell_xPlacement

#define arginfo_class_NSGridColumn_setXPlacement arginfo_class_NSGridCell_setXPlacement

ZEND_METHOD(NSRange, __construct);
ZEND_METHOD(NSGridView, gridViewWithNumberOfColumnsRows);
ZEND_METHOD(NSGridView, numberOfRows);
ZEND_METHOD(NSGridView, numberOfColumns);
ZEND_METHOD(NSGridView, addRowWithViews);
ZEND_METHOD(NSGridView, insertRowAtIndexWithViews);
ZEND_METHOD(NSGridView, removeRowAtIndex);
ZEND_METHOD(NSGridView, addColumnWithViews);
ZEND_METHOD(NSGridView, rowSpacing);
ZEND_METHOD(NSGridView, setRowSpacing);
ZEND_METHOD(NSGridView, columnSpacing);
ZEND_METHOD(NSGridView, setColumnSpacing);
ZEND_METHOD(NSGridView, cellAtColumnIndexRowIndex);
ZEND_METHOD(NSGridView, mergeCellsInHorizontalRangeVerticalRange);
ZEND_METHOD(NSGridView, rowAtIndex);
ZEND_METHOD(NSGridView, columnAtIndex);
ZEND_METHOD(NSGridCell, contentView);
ZEND_METHOD(NSGridCell, setContentView);
ZEND_METHOD(NSGridCell, xPlacement);
ZEND_METHOD(NSGridCell, setXPlacement);
ZEND_METHOD(NSGridCell, yPlacement);
ZEND_METHOD(NSGridCell, setYPlacement);
ZEND_METHOD(NSGridRow, height);
ZEND_METHOD(NSGridRow, setHeight);
ZEND_METHOD(NSGridRow, topPadding);
ZEND_METHOD(NSGridRow, setTopPadding);
ZEND_METHOD(NSGridRow, bottomPadding);
ZEND_METHOD(NSGridRow, setBottomPadding);
ZEND_METHOD(NSGridRow, yPlacement);
ZEND_METHOD(NSGridRow, setYPlacement);
ZEND_METHOD(NSGridColumn, width);
ZEND_METHOD(NSGridColumn, setWidth);
ZEND_METHOD(NSGridColumn, leadingPadding);
ZEND_METHOD(NSGridColumn, setLeadingPadding);
ZEND_METHOD(NSGridColumn, trailingPadding);
ZEND_METHOD(NSGridColumn, setTrailingPadding);
ZEND_METHOD(NSGridColumn, xPlacement);
ZEND_METHOD(NSGridColumn, setXPlacement);

static const zend_function_entry class_NSRange_methods[] = {
	ZEND_ME(NSRange, __construct, arginfo_class_NSRange___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSGridView_methods[] = {
	ZEND_ME(NSGridView, gridViewWithNumberOfColumnsRows, arginfo_class_NSGridView_gridViewWithNumberOfColumnsRows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSGridView, numberOfRows, arginfo_class_NSGridView_numberOfRows, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, numberOfColumns, arginfo_class_NSGridView_numberOfColumns, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, addRowWithViews, arginfo_class_NSGridView_addRowWithViews, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, insertRowAtIndexWithViews, arginfo_class_NSGridView_insertRowAtIndexWithViews, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, removeRowAtIndex, arginfo_class_NSGridView_removeRowAtIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, addColumnWithViews, arginfo_class_NSGridView_addColumnWithViews, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, rowSpacing, arginfo_class_NSGridView_rowSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, setRowSpacing, arginfo_class_NSGridView_setRowSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, columnSpacing, arginfo_class_NSGridView_columnSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, setColumnSpacing, arginfo_class_NSGridView_setColumnSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, cellAtColumnIndexRowIndex, arginfo_class_NSGridView_cellAtColumnIndexRowIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, mergeCellsInHorizontalRangeVerticalRange, arginfo_class_NSGridView_mergeCellsInHorizontalRangeVerticalRange, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, rowAtIndex, arginfo_class_NSGridView_rowAtIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridView, columnAtIndex, arginfo_class_NSGridView_columnAtIndex, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSGridCell_methods[] = {
	ZEND_ME(NSGridCell, contentView, arginfo_class_NSGridCell_contentView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridCell, setContentView, arginfo_class_NSGridCell_setContentView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridCell, xPlacement, arginfo_class_NSGridCell_xPlacement, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridCell, setXPlacement, arginfo_class_NSGridCell_setXPlacement, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridCell, yPlacement, arginfo_class_NSGridCell_yPlacement, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridCell, setYPlacement, arginfo_class_NSGridCell_setYPlacement, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSGridRow_methods[] = {
	ZEND_ME(NSGridRow, height, arginfo_class_NSGridRow_height, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridRow, setHeight, arginfo_class_NSGridRow_setHeight, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridRow, topPadding, arginfo_class_NSGridRow_topPadding, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridRow, setTopPadding, arginfo_class_NSGridRow_setTopPadding, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridRow, bottomPadding, arginfo_class_NSGridRow_bottomPadding, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridRow, setBottomPadding, arginfo_class_NSGridRow_setBottomPadding, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridRow, yPlacement, arginfo_class_NSGridRow_yPlacement, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridRow, setYPlacement, arginfo_class_NSGridRow_setYPlacement, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSGridColumn_methods[] = {
	ZEND_ME(NSGridColumn, width, arginfo_class_NSGridColumn_width, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridColumn, setWidth, arginfo_class_NSGridColumn_setWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridColumn, leadingPadding, arginfo_class_NSGridColumn_leadingPadding, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridColumn, setLeadingPadding, arginfo_class_NSGridColumn_setLeadingPadding, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridColumn, trailingPadding, arginfo_class_NSGridColumn_trailingPadding, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridColumn, setTrailingPadding, arginfo_class_NSGridColumn_setTrailingPadding, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridColumn, xPlacement, arginfo_class_NSGridColumn_xPlacement, ZEND_ACC_PUBLIC)
	ZEND_ME(NSGridColumn, setXPlacement, arginfo_class_NSGridColumn_setXPlacement, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSGridCellPlacement(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSGridCellPlacement", IS_LONG, NULL);

	zval enum_case_INHERITED_value;
	ZVAL_LONG(&enum_case_INHERITED_value, 0);
	zend_enum_add_case_cstr(class_entry, "INHERITED", &enum_case_INHERITED_value);

	zval enum_case_NONE_value;
	ZVAL_LONG(&enum_case_NONE_value, 1);
	zend_enum_add_case_cstr(class_entry, "NONE", &enum_case_NONE_value);

	zval enum_case_LEADING_value;
	ZVAL_LONG(&enum_case_LEADING_value, 2);
	zend_enum_add_case_cstr(class_entry, "LEADING", &enum_case_LEADING_value);

	zval enum_case_TRAILING_value;
	ZVAL_LONG(&enum_case_TRAILING_value, 3);
	zend_enum_add_case_cstr(class_entry, "TRAILING", &enum_case_TRAILING_value);

	zval enum_case_CENTER_value;
	ZVAL_LONG(&enum_case_CENTER_value, 4);
	zend_enum_add_case_cstr(class_entry, "CENTER", &enum_case_CENTER_value);

	zval enum_case_FILL_value;
	ZVAL_LONG(&enum_case_FILL_value, 5);
	zend_enum_add_case_cstr(class_entry, "FILL", &enum_case_FILL_value);

	return class_entry;
}

static zend_class_entry *register_class_NSRange(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSRange", class_NSRange_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_location_default_value;
	ZVAL_LONG(&property_location_default_value, 0);
	zend_string *property_location_name = zend_string_init("location", sizeof("location") - 1, 1);
	zend_declare_typed_property(class_entry, property_location_name, &property_location_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_location_name);

	zval property_length_default_value;
	ZVAL_LONG(&property_length_default_value, 0);
	zend_string *property_length_name = zend_string_init("length", sizeof("length") - 1, 1);
	zend_declare_typed_property(class_entry, property_length_name, &property_length_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_length_name);

	return class_entry;
}

static zend_class_entry *register_class_NSGridView(zend_class_entry *class_entry_NSView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSGridView", class_NSGridView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSGridCell(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSGridCell", class_NSGridCell_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSGridRow(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSGridRow", class_NSGridRow_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSGridColumn(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSGridColumn", class_NSGridColumn_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
