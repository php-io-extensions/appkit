#include "runtime.h"
#include "controls.h"
#include "../stubs/NSTableView_arginfo.h"


void appkit_register_NSTableView(void)
{
	APPKIT_MAP(NSIndexSet, appkit_ce_NSObject);
	APPKIT_MAP(NSTableColumn, appkit_ce_NSObject);
	APPKIT_MAP(NSTableHeaderView, appkit_ce_NSView);
	APPKIT_MAP(NSTableView, appkit_ce_NSControl);
	APPKIT_MAP(NSOutlineView, appkit_ce_NSTableView);
	APPKIT_MAP(NSCell, appkit_ce_NSObject);
}

/* NSIndexSet */
ANY_METHOD(NSIndexSet, indexSetWithIndex, PARSE_LONG, appkit_box_objc(return_value, [CALLED indexSetWithIndex:(NSUInteger) v]);)
ANY_LONG_GET(NSIndexSet, NSIndexSet, firstIndex, firstIndex)
ANY_LONG_GET(NSIndexSet, NSIndexSet, count, count)

/* NSTableColumn */
ANY_METHOD(NSTableColumn, initWithIdentifier, PARSE_STR,
	NSTableColumn *column = [[CALLED alloc] initWithIdentifier:appkit_nsstring(v)];
	appkit_box_objc(return_value, column);
	[column release];
)
ANY_STR_GET(NSTableColumn, NSTableColumn, identifier, identifier)
ANY_STR_GET(NSTableColumn, NSTableColumn, title, title)
ANY_STR_SET(NSTableColumn, NSTableColumn, setTitle, setTitle)
ANY_DOUBLE_GET(NSTableColumn, NSTableColumn, width, width)
ANY_DOUBLE_SET(NSTableColumn, NSTableColumn, setWidth, setWidth)
ANY_LONG_SET(NSTableColumn, NSTableColumn, setResizingMask, setResizingMask, NSTableColumnResizingOptions)

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

METHOD(NSTableView, doubleAction, PARSE_NONE, SEL action = [SELF(NSTableView) doubleAction]; if (action == NULL) { RETURN_NULL(); } RETURN_STRING(sel_getName(action));) /* binding:main-thread-nstableview-double-action */
METHOD(NSTableView, setDoubleAction, PARSE_STR_OR_NULL, [SELF(NSTableView) setDoubleAction:SELECTOR_OR_NULL(v)];) /* binding:main-thread-nstableview-set-double-action */
LONG_GET(NSTableView, NSTableView, clickedRow, clickedRow) /* binding:main-thread-nstableview-clicked-row */
LONG_SET(NSTableView, NSTableView, scrollRowToVisible, scrollRowToVisible, NSInteger) /* binding:main-thread-nstableview-scroll-row-to-visible */

/* NSOutlineView */
OBJ_GET(NSOutlineView, NSOutlineView, outlineTableColumn, outlineTableColumn) /* binding:main-thread-nsoutlineview-outline-table-column */
OBJ_SET_OR_NULL(NSOutlineView, NSOutlineView, setOutlineTableColumn, setOutlineTableColumn, appkit_ce_NSTableColumn, NSTableColumn *) /* binding:main-thread-nsoutlineview-set-outline-table-column */
SENDER_METHOD(NSOutlineView, NSOutlineView, expandItem, expandItem) /* binding:main-thread-nsoutlineview-expand-item */
SENDER_METHOD(NSOutlineView, NSOutlineView, collapseItem, collapseItem) /* binding:main-thread-nsoutlineview-collapse-item */
METHOD(NSOutlineView, isItemExpanded, PARSE_OBJ_OR_NULL(appkit_ce_NSObject), RETURN_BOOL([SELF(NSOutlineView) isItemExpanded:OPTIONAL_ID(v)]);) /* binding:main-thread-nsoutlineview-is-item-expanded */
METHOD(NSOutlineView, itemAtRow, PARSE_LONG, appkit_box_objc(return_value, [SELF(NSOutlineView) itemAtRow:(NSInteger) v]);) /* binding:main-thread-nsoutlineview-item-at-row */
METHOD(NSOutlineView, rowForItem, PARSE_OBJ_OR_NULL(appkit_ce_NSObject), RETURN_LONG((zend_long) [SELF(NSOutlineView) rowForItem:OPTIONAL_ID(v)]);) /* binding:main-thread-nsoutlineview-row-for-item */
DOUBLE_GET(NSOutlineView, NSOutlineView, indentationPerLevel, indentationPerLevel) /* binding:main-thread-nsoutlineview-indentation-per-level */
DOUBLE_SET(NSOutlineView, NSOutlineView, setIndentationPerLevel, setIndentationPerLevel) /* binding:main-thread-nsoutlineview-set-indentation-per-level */

ZEND_METHOD(NSOutlineView, reloadItemReloadChildren)
{
	zend_object *item = NULL;
	bool children;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(item, appkit_ce_NSObject)
		Z_PARAM_BOOL(children)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nsoutlineview-reload-item */

	APPKIT_BEGIN
		[SELF(NSOutlineView) reloadItem:OPTIONAL_ID(item) reloadChildren:children];
	APPKIT_END
}

/* NSCell */
ANY_METHOD(NSCell, objectValue, PARSE_NONE, appkit_zval_from_id(return_value, [SELF(NSCell) objectValue]);)
