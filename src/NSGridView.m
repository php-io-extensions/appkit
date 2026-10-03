#include "runtime.h"
#include "controls.h"
#include "../stubs/NSGridView_arginfo.h"

_Static_assert(NSGridCellPlacementInherited == 0 && NSGridCellPlacementNone == 1 && NSGridCellPlacementLeading == 2
	&& NSGridCellPlacementTrailing == 3 && NSGridCellPlacementCenter == 4 && NSGridCellPlacementFill == 5, "NSGridCellPlacement values moved");

void appkit_register_NSGridView(void)
{
	appkit_ce_NSGridCellPlacement = register_class_NSGridCellPlacement();
	appkit_ce_NSRange = register_class_NSRange();

	appkit_ce_NSGridView = register_class_NSGridView(appkit_ce_NSView);
	appkit_object_setup(appkit_ce_NSGridView);
	appkit_map_objc_class("NSGridView", appkit_ce_NSGridView);

	appkit_ce_NSGridCell = register_class_NSGridCell(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSGridCell);
	appkit_map_objc_class("NSGridCell", appkit_ce_NSGridCell);

	appkit_ce_NSGridRow = register_class_NSGridRow(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSGridRow);
	appkit_map_objc_class("NSGridRow", appkit_ce_NSGridRow);

	appkit_ce_NSGridColumn = register_class_NSGridColumn(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSGridColumn);
	appkit_map_objc_class("NSGridColumn", appkit_ce_NSGridColumn);
}

ZEND_METHOD(NSRange, __construct)
{
	zend_long location = 0;
	zend_long length = 0;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();

	ZVAL_LONG(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 0), location);
	ZVAL_LONG(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 1), length);
}

/* NSRange from the value class; false (ValueError raised) for an unset or negative property. */
static bool appkit_range_from(zend_object *range, uint32_t arg_num, NSRange *out)
{
	zval *location = OBJ_PROP_NUM(range, 0);
	zval *length = OBJ_PROP_NUM(range, 1);

	if (Z_TYPE_P(location) != IS_LONG || Z_TYPE_P(length) != IS_LONG) {
		zend_argument_value_error(arg_num, "must have every property initialized");
		return false;
	}
	if (Z_LVAL_P(location) < 0 || Z_LVAL_P(length) < 0) {
		zend_argument_value_error(arg_num, "must have a non-negative location and length");
		return false;
	}
	*out = NSMakeRange((NSUInteger) Z_LVAL_P(location), (NSUInteger) Z_LVAL_P(length));
	return true;
}

#define THIS_GRID ((NSGridView *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))
#define THIS_CELL ((NSGridCell *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))
#define THIS_ROW ((NSGridRow *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))
#define THIS_COLUMN ((NSGridColumn *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSGridView, gridViewWithNumberOfColumnsRows)
{
	zend_long columns, rows;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(columns)
		Z_PARAM_LONG(rows)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [CALLED gridViewWithNumberOfColumns:(NSInteger) columns rows:(NSInteger) rows]);
	APPKIT_END
}

#define APPKIT_GRID_LONG_GET(name, sel) \
ZEND_METHOD(NSGridView, name) { ZEND_PARSE_PARAMETERS_NONE(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN RETURN_LONG((zend_long) [THIS_GRID sel]); APPKIT_END }
#define APPKIT_GRID_DOUBLE_GET(name, sel) \
ZEND_METHOD(NSGridView, name) { ZEND_PARSE_PARAMETERS_NONE(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN RETURN_DOUBLE([THIS_GRID sel]); APPKIT_END }
#define APPKIT_GRID_DOUBLE_SET(name, sel) \
ZEND_METHOD(NSGridView, name) { double v; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_DOUBLE(v) ZEND_PARSE_PARAMETERS_END(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN [THIS_GRID sel:v]; APPKIT_END }
#define APPKIT_GRID_AT_INDEX(name, sel, box) \
ZEND_METHOD(NSGridView, name) { zend_long i; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_LONG(i) ZEND_PARSE_PARAMETERS_END(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN box; APPKIT_END }

APPKIT_GRID_LONG_GET(numberOfRows, numberOfRows)
APPKIT_GRID_LONG_GET(numberOfColumns, numberOfColumns)
APPKIT_GRID_DOUBLE_GET(rowSpacing, rowSpacing)
APPKIT_GRID_DOUBLE_SET(setRowSpacing, setRowSpacing)
APPKIT_GRID_DOUBLE_GET(columnSpacing, columnSpacing)
APPKIT_GRID_DOUBLE_SET(setColumnSpacing, setColumnSpacing)
APPKIT_GRID_AT_INDEX(removeRowAtIndex, removeRowAtIndex, [THIS_GRID removeRowAtIndex:(NSInteger) i])
APPKIT_GRID_AT_INDEX(rowAtIndex, rowAtIndex, appkit_box_objc(return_value, [THIS_GRID rowAtIndex:(NSInteger) i]))
APPKIT_GRID_AT_INDEX(columnAtIndex, columnAtIndex, appkit_box_objc(return_value, [THIS_GRID columnAtIndex:(NSInteger) i]))

ZEND_METHOD(NSGridView, addRowWithViews)
{
	HashTable *ht;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(ht)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSArray *views = appkit_view_array(ht, 1, [NSGridCell emptyContentView]);
		if (views == nil) {
			RETURN_THROWS();
		}
		appkit_box_objc(return_value, [THIS_GRID addRowWithViews:views]);
	APPKIT_END
}

ZEND_METHOD(NSGridView, insertRowAtIndexWithViews)
{
	zend_long index;
	HashTable *ht;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(index)
		Z_PARAM_ARRAY_HT(ht)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSArray *views = appkit_view_array(ht, 2, [NSGridCell emptyContentView]);
		if (views == nil) {
			RETURN_THROWS();
		}
		appkit_box_objc(return_value, [THIS_GRID insertRowAtIndex:(NSInteger) index withViews:views]);
	APPKIT_END
}

ZEND_METHOD(NSGridView, addColumnWithViews)
{
	HashTable *ht;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(ht)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSArray *views = appkit_view_array(ht, 1, [NSGridCell emptyContentView]);
		if (views == nil) {
			RETURN_THROWS();
		}
		appkit_box_objc(return_value, [THIS_GRID addColumnWithViews:views]);
	APPKIT_END
}

ZEND_METHOD(NSGridView, cellAtColumnIndexRowIndex)
{
	zend_long column, row;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_GRID cellAtColumnIndex:(NSInteger) column rowIndex:(NSInteger) row]);
	APPKIT_END
}

ZEND_METHOD(NSGridView, mergeCellsInHorizontalRangeVerticalRange)
{
	zend_object *horizontal, *vertical;

	NSRange h, w;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(horizontal, appkit_ce_NSRange)
		Z_PARAM_OBJ_OF_CLASS(vertical, appkit_ce_NSRange)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_range_from(horizontal, 1, &h) || !appkit_range_from(vertical, 2, &w)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[THIS_GRID mergeCellsInHorizontalRange:h verticalRange:w];
	APPKIT_END
}

ZEND_METHOD(NSGridCell, contentView)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSView *content = [THIS_CELL contentView];
		appkit_box_objc(return_value, content == [NSGridCell emptyContentView] ? nil : content);
	APPKIT_END
}

ZEND_METHOD(NSGridCell, setContentView)
{
	zend_object *view = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(view, appkit_ce_NSView)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_CELL setContentView:view != NULL ? (NSView *) APPKIT_ID(view) : [NSGridCell emptyContentView]];
	APPKIT_END
}

#define APPKIT_GRID_PLACEMENT_SET(cls, name, self, sel) \
ZEND_METHOD(cls, name) { zend_object *p; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS(p, appkit_ce_NSGridCellPlacement) ZEND_PARSE_PARAMETERS_END(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN [self sel:(NSGridCellPlacement) appkit_enum_value(p, 0)]; APPKIT_END }
#define APPKIT_GRID_DOUBLE_ON(cls, name, self, sel) \
ZEND_METHOD(cls, name) { double v; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_DOUBLE(v) ZEND_PARSE_PARAMETERS_END(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN [self sel:v]; APPKIT_END }

APPKIT_GRID_PLACEMENT_SET(NSGridCell, setXPlacement, THIS_CELL, setXPlacement)
APPKIT_GRID_PLACEMENT_SET(NSGridCell, setYPlacement, THIS_CELL, setYPlacement)
APPKIT_GRID_DOUBLE_ON(NSGridRow, setHeight, THIS_ROW, setHeight)
APPKIT_GRID_DOUBLE_ON(NSGridRow, setTopPadding, THIS_ROW, setTopPadding)
APPKIT_GRID_DOUBLE_ON(NSGridRow, setBottomPadding, THIS_ROW, setBottomPadding)
APPKIT_GRID_PLACEMENT_SET(NSGridRow, setYPlacement, THIS_ROW, setYPlacement)
APPKIT_GRID_DOUBLE_ON(NSGridColumn, setWidth, THIS_COLUMN, setWidth)
APPKIT_GRID_DOUBLE_ON(NSGridColumn, setLeadingPadding, THIS_COLUMN, setLeadingPadding)
APPKIT_GRID_DOUBLE_ON(NSGridColumn, setTrailingPadding, THIS_COLUMN, setTrailingPadding)
APPKIT_GRID_PLACEMENT_SET(NSGridColumn, setXPlacement, THIS_COLUMN, setXPlacement)

ENUM_GET(NSGridCell, NSGridCell, xPlacement, xPlacement, appkit_ce_NSGridCellPlacement, false)
ENUM_GET(NSGridCell, NSGridCell, yPlacement, yPlacement, appkit_ce_NSGridCellPlacement, false)
DOUBLE_GET(NSGridRow, NSGridRow, height, height)
DOUBLE_GET(NSGridRow, NSGridRow, topPadding, topPadding)
DOUBLE_GET(NSGridRow, NSGridRow, bottomPadding, bottomPadding)
ENUM_GET(NSGridRow, NSGridRow, yPlacement, yPlacement, appkit_ce_NSGridCellPlacement, false)
DOUBLE_GET(NSGridColumn, NSGridColumn, width, width)
DOUBLE_GET(NSGridColumn, NSGridColumn, leadingPadding, leadingPadding)
DOUBLE_GET(NSGridColumn, NSGridColumn, trailingPadding, trailingPadding)
ENUM_GET(NSGridColumn, NSGridColumn, xPlacement, xPlacement, appkit_ce_NSGridCellPlacement, false)
