/*
 * Split views and tab views: the containers that hand their space to the user,
 * by divider drags and by tabs.
 */

#include "runtime.h"
#include "controls.h"
#include "../stubs/NSSplitView_arginfo.h"

_Static_assert(NSSplitViewDividerStyleThick == 1 && NSSplitViewDividerStyleThin == 2 && NSSplitViewDividerStylePaneSplitter == 3, "NSSplitViewDividerStyle values moved");

void appkit_register_NSSplitView(int module_number)
{
	register_NSSplitView_symbols(module_number);

	appkit_ce_NSSplitViewDividerStyle = register_class_NSSplitViewDividerStyle();

	APPKIT_MAP(NSSplitView, appkit_ce_NSView);
	APPKIT_MAP(NSTabView, appkit_ce_NSView);
	APPKIT_MAP(NSTabViewItem, appkit_ce_NSObject);
}

/* NSSplitView */
BOOL_GET(NSSplitView, NSSplitView, isVertical, isVertical)
BOOL_SET(NSSplitView, NSSplitView, setVertical, setVertical)
ENUM_GET(NSSplitView, NSSplitView, dividerStyle, dividerStyle, appkit_ce_NSSplitViewDividerStyle, false)
ENUM_SET(NSSplitView, NSSplitView, setDividerStyle, setDividerStyle, appkit_ce_NSSplitViewDividerStyle, NSSplitViewDividerStyle)
DOUBLE_GET(NSSplitView, NSSplitView, dividerThickness, dividerThickness)
BOOL_GET(NSSplitView, NSSplitView, arrangesAllSubviews, arrangesAllSubviews)
BOOL_SET(NSSplitView, NSSplitView, setArrangesAllSubviews, setArrangesAllSubviews)
OBJ_SET(NSSplitView, NSSplitView, addArrangedSubview, addArrangedSubview, appkit_ce_NSView, NSView *)
OBJ_SET(NSSplitView, NSSplitView, removeArrangedSubview, removeArrangedSubview, appkit_ce_NSView, NSView *)
VOID_METHOD(NSSplitView, NSSplitView, adjustSubviews, adjustSubviews)
METHOD(NSSplitView, isSubviewCollapsed, PARSE_OBJ(appkit_ce_NSView), RETURN_BOOL([SELF(NSSplitView) isSubviewCollapsed:(NSView *) APPKIT_ID(v)]);)

METHOD(NSSplitView, arrangedSubviews, PARSE_NONE,
	array_init(return_value);
	for (NSView *view in [SELF(NSSplitView) arrangedSubviews]) {
		zval boxed;
		appkit_box_objc(&boxed, view);
		add_next_index_zval(return_value, &boxed);
	}
)

ZEND_METHOD(NSSplitView, insertArrangedSubviewAtIndex)
{
	zend_object *view;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(view, appkit_ce_NSView)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[SELF(NSSplitView) insertArrangedSubview:(NSView *) APPKIT_ID(view) atIndex:(NSInteger) index];
	APPKIT_END
}

ZEND_METHOD(NSSplitView, setPositionOfDividerAtIndex)
{
	double position;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(position)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[SELF(NSSplitView) setPosition:(CGFloat) position ofDividerAtIndex:(NSInteger) index];
	APPKIT_END
}

METHOD(NSSplitView, holdingPriorityForSubviewAtIndex, PARSE_LONG, RETURN_DOUBLE([SELF(NSSplitView) holdingPriorityForSubviewAtIndex:(NSInteger) v]);)

ZEND_METHOD(NSSplitView, setHoldingPriorityForSubviewAtIndex)
{
	double priority;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(priority)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[SELF(NSSplitView) setHoldingPriority:(NSLayoutPriority) priority forSubviewAtIndex:(NSInteger) index];
	APPKIT_END
}

/* NSTabView */
OBJ_SET(NSTabView, NSTabView, addTabViewItem, addTabViewItem, appkit_ce_NSTabViewItem, NSTabViewItem *)
ZEND_METHOD(NSTabView, insertTabViewItemAtIndex)
{
	zend_object *item;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(item, appkit_ce_NSTabViewItem)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nstabview-insert-tab-view-item-at-index */

	APPKIT_BEGIN
		[SELF(NSTabView) insertTabViewItem:(NSTabViewItem *) APPKIT_ID(item) atIndex:(NSInteger) index];
	APPKIT_END
}
LONG_GET(NSTabView, NSTabView, numberOfTabViewItems, numberOfTabViewItems)
OBJ_GET(NSTabView, NSTabView, selectedTabViewItem, selectedTabViewItem)
OBJ_GET(NSTabView, NSTabView, delegate, delegate)
OBJ_SET_OR_NULL(NSTabView, NSTabView, setDelegate, setDelegate, appkit_ce_NSObject, id<NSTabViewDelegate>)

METHOD(NSTabView, tabViewItems, PARSE_NONE,
	array_init(return_value);
	for (NSTabViewItem *item in [SELF(NSTabView) tabViewItems]) {
		zval boxed;
		appkit_box_objc(&boxed, item);
		add_next_index_zval(return_value, &boxed);
	}
)

METHOD(NSTabView, indexOfTabViewItemWithIdentifier, PARSE_STR,
	NSInteger index = [SELF(NSTabView) indexOfTabViewItemWithIdentifier:appkit_nsstring(v)];
	RETURN_LONG(index == NSNotFound ? -1 : (zend_long) index);
)

OBJ_SET(NSTabView, NSTabView, removeTabViewItem, removeTabViewItem, appkit_ce_NSTabViewItem, NSTabViewItem *)
METHOD(NSTabView, selectTabViewItemWithIdentifier, PARSE_STR, [SELF(NSTabView) selectTabViewItemWithIdentifier:appkit_nsstring(v)];)

/* NSTabViewItem */
ANY_METHOD(NSTabViewItem, initWithIdentifier, PARSE_STR,
	NSTabViewItem *item = [[CALLED alloc] initWithIdentifier:appkit_nsstring(v)];
	appkit_box_objc(return_value, item);
	[item release];
)
ANY_METHOD(NSTabViewItem, identifier, PARSE_NONE, appkit_zval_from_id(return_value, [SELF(NSTabViewItem) identifier]);)
ANY_STR_GET(NSTabViewItem, NSTabViewItem, label, label)
ANY_STR_SET(NSTabViewItem, NSTabViewItem, setLabel, setLabel)
ANY_OBJ_GET(NSTabViewItem, NSTabViewItem, view, view)
ANY_OBJ_SET_OR_NULL(NSTabViewItem, NSTabViewItem, setView, setView, appkit_ce_NSView, NSView *)
ANY_OBJ_GET(NSTabViewItem, NSTabViewItem, tabView, tabView)
