/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 31fca6d570eeabc43df8ee1827f564d7a33838cb */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSIndexSet_indexSetWithIndex, 0, 1, IS_STATIC, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSIndexSet_firstIndex, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSIndexSet_count arginfo_class_NSIndexSet_firstIndex

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableColumn_initWithIdentifier, 0, 1, IS_STATIC, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableColumn_identifier, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSTableColumn_title arginfo_class_NSTableColumn_identifier

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableColumn_setTitle, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableColumn_width, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableColumn_setWidth, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableColumn_setResizingMask, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableView_addTableColumn, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, column, NSTableColumn, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSTableView_removeTableColumn arginfo_class_NSTableView_addTableColumn

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableView_tableColumns, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSTableView_dataSource, 0, 0, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableView_setDataSource, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, dataSource, NSObject, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSTableView_delegate arginfo_class_NSTableView_dataSource

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableView_setDelegate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, delegate, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableView_reloadData, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSTableView_numberOfRows arginfo_class_NSIndexSet_firstIndex

#define arginfo_class_NSTableView_selectedRow arginfo_class_NSIndexSet_firstIndex

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableView_selectRowIndexesByExtendingSelection, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, indexes, NSIndexSet, 0)
	ZEND_ARG_TYPE_INFO(0, extend, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableView_deselectAll, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, sender, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableView_setAllowsEmptySelection, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, allows, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableView_setUsesAlternatingRowBackgroundColors, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, uses, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSTableView_backgroundColor, 0, 0, NSColor, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableView_setBackgroundColor, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, color, NSColor, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSTableView_headerView, 0, 0, NSTableHeaderView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTableView_setHeaderView, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, header, NSTableHeaderView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSTableView_preparedCellAtColumnRow, 0, 2, NSCell, 1)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSTableView_viewAtColumnRowMakeIfNecessary, 0, 3, NSView, 1)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, makeIfNecessary, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCell_objectValue, 0, 0, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSIndexSet, indexSetWithIndex);
ZEND_METHOD(NSIndexSet, firstIndex);
ZEND_METHOD(NSIndexSet, count);
ZEND_METHOD(NSTableColumn, initWithIdentifier);
ZEND_METHOD(NSTableColumn, identifier);
ZEND_METHOD(NSTableColumn, title);
ZEND_METHOD(NSTableColumn, setTitle);
ZEND_METHOD(NSTableColumn, width);
ZEND_METHOD(NSTableColumn, setWidth);
ZEND_METHOD(NSTableColumn, setResizingMask);
ZEND_METHOD(NSTableView, addTableColumn);
ZEND_METHOD(NSTableView, removeTableColumn);
ZEND_METHOD(NSTableView, tableColumns);
ZEND_METHOD(NSTableView, dataSource);
ZEND_METHOD(NSTableView, setDataSource);
ZEND_METHOD(NSTableView, delegate);
ZEND_METHOD(NSTableView, setDelegate);
ZEND_METHOD(NSTableView, reloadData);
ZEND_METHOD(NSTableView, numberOfRows);
ZEND_METHOD(NSTableView, selectedRow);
ZEND_METHOD(NSTableView, selectRowIndexesByExtendingSelection);
ZEND_METHOD(NSTableView, deselectAll);
ZEND_METHOD(NSTableView, setAllowsEmptySelection);
ZEND_METHOD(NSTableView, setUsesAlternatingRowBackgroundColors);
ZEND_METHOD(NSTableView, backgroundColor);
ZEND_METHOD(NSTableView, setBackgroundColor);
ZEND_METHOD(NSTableView, headerView);
ZEND_METHOD(NSTableView, setHeaderView);
ZEND_METHOD(NSTableView, preparedCellAtColumnRow);
ZEND_METHOD(NSTableView, viewAtColumnRowMakeIfNecessary);
ZEND_METHOD(NSCell, objectValue);

static const zend_function_entry class_NSIndexSet_methods[] = {
	ZEND_ME(NSIndexSet, indexSetWithIndex, arginfo_class_NSIndexSet_indexSetWithIndex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSIndexSet, firstIndex, arginfo_class_NSIndexSet_firstIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSIndexSet, count, arginfo_class_NSIndexSet_count, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSTableColumn_methods[] = {
	ZEND_ME(NSTableColumn, initWithIdentifier, arginfo_class_NSTableColumn_initWithIdentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSTableColumn, identifier, arginfo_class_NSTableColumn_identifier, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableColumn, title, arginfo_class_NSTableColumn_title, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableColumn, setTitle, arginfo_class_NSTableColumn_setTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableColumn, width, arginfo_class_NSTableColumn_width, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableColumn, setWidth, arginfo_class_NSTableColumn_setWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableColumn, setResizingMask, arginfo_class_NSTableColumn_setResizingMask, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSTableView_methods[] = {
	ZEND_ME(NSTableView, addTableColumn, arginfo_class_NSTableView_addTableColumn, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, removeTableColumn, arginfo_class_NSTableView_removeTableColumn, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, tableColumns, arginfo_class_NSTableView_tableColumns, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, dataSource, arginfo_class_NSTableView_dataSource, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, setDataSource, arginfo_class_NSTableView_setDataSource, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, delegate, arginfo_class_NSTableView_delegate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, setDelegate, arginfo_class_NSTableView_setDelegate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, reloadData, arginfo_class_NSTableView_reloadData, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, numberOfRows, arginfo_class_NSTableView_numberOfRows, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, selectedRow, arginfo_class_NSTableView_selectedRow, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, selectRowIndexesByExtendingSelection, arginfo_class_NSTableView_selectRowIndexesByExtendingSelection, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, deselectAll, arginfo_class_NSTableView_deselectAll, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, setAllowsEmptySelection, arginfo_class_NSTableView_setAllowsEmptySelection, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, setUsesAlternatingRowBackgroundColors, arginfo_class_NSTableView_setUsesAlternatingRowBackgroundColors, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, backgroundColor, arginfo_class_NSTableView_backgroundColor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, setBackgroundColor, arginfo_class_NSTableView_setBackgroundColor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, headerView, arginfo_class_NSTableView_headerView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, setHeaderView, arginfo_class_NSTableView_setHeaderView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, preparedCellAtColumnRow, arginfo_class_NSTableView_preparedCellAtColumnRow, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTableView, viewAtColumnRowMakeIfNecessary, arginfo_class_NSTableView_viewAtColumnRowMakeIfNecessary, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSCell_methods[] = {
	ZEND_ME(NSCell, objectValue, arginfo_class_NSCell_objectValue, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSIndexSet(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSIndexSet", class_NSIndexSet_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSTableColumn(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSTableColumn", class_NSTableColumn_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	zval const_RESIZING_MASK_NONE_value;
	ZVAL_LONG(&const_RESIZING_MASK_NONE_value, 0);
	zend_string *const_RESIZING_MASK_NONE_name = zend_string_init_interned("RESIZING_MASK_NONE", sizeof("RESIZING_MASK_NONE") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_RESIZING_MASK_NONE_name, &const_RESIZING_MASK_NONE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_RESIZING_MASK_NONE_name);

	zval const_RESIZING_MASK_AUTORESIZING_value;
	ZVAL_LONG(&const_RESIZING_MASK_AUTORESIZING_value, 1);
	zend_string *const_RESIZING_MASK_AUTORESIZING_name = zend_string_init_interned("RESIZING_MASK_AUTORESIZING", sizeof("RESIZING_MASK_AUTORESIZING") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_RESIZING_MASK_AUTORESIZING_name, &const_RESIZING_MASK_AUTORESIZING_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_RESIZING_MASK_AUTORESIZING_name);

	zval const_RESIZING_MASK_USER_RESIZING_value;
	ZVAL_LONG(&const_RESIZING_MASK_USER_RESIZING_value, 2);
	zend_string *const_RESIZING_MASK_USER_RESIZING_name = zend_string_init_interned("RESIZING_MASK_USER_RESIZING", sizeof("RESIZING_MASK_USER_RESIZING") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_RESIZING_MASK_USER_RESIZING_name, &const_RESIZING_MASK_USER_RESIZING_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_RESIZING_MASK_USER_RESIZING_name);

	return class_entry;
}

static zend_class_entry *register_class_NSTableHeaderView(zend_class_entry *class_entry_NSView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSTableHeaderView", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSTableView(zend_class_entry *class_entry_NSControl)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSTableView", class_NSTableView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSControl, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSCell(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSCell", class_NSCell_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
