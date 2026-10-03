#include "runtime.h"
#include "controls.h"
#include "../stubs/NSTableView_arginfo.h"

_Static_assert(NSTableColumnNoResizing == 0 && NSTableColumnAutoresizingMask == 1 && NSTableColumnUserResizingMask == 2, "NSTableColumnResizingOptions values moved");

void appkit_register_NSTableView(void)
{
	APPKIT_MAP(NSIndexSet, appkit_ce_NSObject);
	APPKIT_MAP(NSTableColumn, appkit_ce_NSObject);
	APPKIT_MAP(NSTableHeaderView, appkit_ce_NSView);
	APPKIT_MAP(NSTableView, appkit_ce_NSControl);
	APPKIT_MAP(NSCell, appkit_ce_NSObject);
}

/* NSIndexSet */
METHOD(NSIndexSet, indexSetWithIndex, PARSE_LONG, appkit_box_objc(return_value, [CALLED indexSetWithIndex:(NSUInteger) v]);)
LONG_GET(NSIndexSet, NSIndexSet, firstIndex, firstIndex)
LONG_GET(NSIndexSet, NSIndexSet, count, count)

/* NSTableColumn */
METHOD(NSTableColumn, initWithIdentifier, PARSE_STR,
	NSTableColumn *column = [[CALLED alloc] initWithIdentifier:appkit_nsstring(v)];
	appkit_box_objc(return_value, column);
	[column release];
)
STR_GET(NSTableColumn, NSTableColumn, identifier, identifier)
STR_GET(NSTableColumn, NSTableColumn, title, title)
STR_SET(NSTableColumn, NSTableColumn, setTitle, setTitle)
DOUBLE_GET(NSTableColumn, NSTableColumn, width, width)
DOUBLE_SET(NSTableColumn, NSTableColumn, setWidth, setWidth)
LONG_SET(NSTableColumn, NSTableColumn, setResizingMask, setResizingMask, NSTableColumnResizingOptions)

/* NSTableView */
OBJ_SET(NSTableView, NSTableView, addTableColumn, addTableColumn, appkit_ce_NSTableColumn, NSTableColumn *)
OBJ_SET(NSTableView, NSTableView, removeTableColumn, removeTableColumn, appkit_ce_NSTableColumn, NSTableColumn *)
METHOD(NSTableView, tableColumns, PARSE_NONE,
	array_init(return_value);
	for (NSTableColumn *column in [SELF(NSTableView) tableColumns]) {
		zval boxed;
		appkit_box_objc(&boxed, column);
		add_next_index_zval(return_value, &boxed);
	}
)
OBJ_GET(NSTableView, NSTableView, dataSource, dataSource)
OBJ_SET_OR_NULL(NSTableView, NSTableView, setDataSource, setDataSource, appkit_ce_NSObject, id<NSTableViewDataSource>)
OBJ_GET(NSTableView, NSTableView, delegate, delegate)
OBJ_SET_OR_NULL(NSTableView, NSTableView, setDelegate, setDelegate, appkit_ce_NSObject, id<NSTableViewDelegate>)
VOID_METHOD(NSTableView, NSTableView, reloadData, reloadData)
LONG_GET(NSTableView, NSTableView, numberOfRows, numberOfRows)
LONG_GET(NSTableView, NSTableView, selectedRow, selectedRow)
ZEND_METHOD(NSTableView, selectRowIndexesByExtendingSelection)
{
	zend_object *indexes;
	bool extend;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(indexes, appkit_ce_NSIndexSet)
		Z_PARAM_BOOL(extend)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[SELF(NSTableView) selectRowIndexes:(NSIndexSet *) APPKIT_ID(indexes) byExtendingSelection:extend];
	APPKIT_END
}
SENDER_METHOD(NSTableView, NSTableView, deselectAll, deselectAll)
BOOL_SET(NSTableView, NSTableView, setAllowsEmptySelection, setAllowsEmptySelection)
BOOL_SET(NSTableView, NSTableView, setUsesAlternatingRowBackgroundColors, setUsesAlternatingRowBackgroundColors)
OBJ_GET(NSTableView, NSTableView, backgroundColor, backgroundColor)
OBJ_SET(NSTableView, NSTableView, setBackgroundColor, setBackgroundColor, appkit_ce_NSColor, NSColor *)
OBJ_GET(NSTableView, NSTableView, headerView, headerView)
OBJ_SET_OR_NULL(NSTableView, NSTableView, setHeaderView, setHeaderView, appkit_ce_NSTableHeaderView, NSTableHeaderView *)

ZEND_METHOD(NSTableView, preparedCellAtColumnRow)
{
	zend_long column, row;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [SELF(NSTableView) preparedCellAtColumn:(NSInteger) column row:(NSInteger) row]);
	APPKIT_END
}

ZEND_METHOD(NSTableView, viewAtColumnRowMakeIfNecessary)
{
	zend_long column, row;
	bool make;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(row)
		Z_PARAM_BOOL(make)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [SELF(NSTableView) viewAtColumn:(NSInteger) column row:(NSInteger) row makeIfNecessary:make]);
	APPKIT_END
}

/* NSCell */
METHOD(NSCell, objectValue, PARSE_NONE, appkit_zval_from_id(return_value, [SELF(NSCell) objectValue]);)
