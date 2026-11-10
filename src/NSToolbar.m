#include "runtime.h"
#include "controls.h"
#include "../stubs/NSToolbar_arginfo.h"

_Static_assert(NSToolbarDisplayModeDefault == 0 && NSToolbarDisplayModeIconAndLabel == 1 && NSToolbarDisplayModeIconOnly == 2
	&& NSToolbarDisplayModeLabelOnly == 3, "NSToolbarDisplayMode values moved");
_Static_assert(NSWindowToolbarStyleAutomatic == 0 && NSWindowToolbarStyleExpanded == 1 && NSWindowToolbarStylePreference == 2
	&& NSWindowToolbarStyleUnified == 3 && NSWindowToolbarStyleUnifiedCompact == 4, "NSWindowToolbarStyle values moved");

void appkit_register_NSToolbar(int module_number)
{
	register_NSToolbar_symbols(module_number);

	appkit_ce_NSToolbarDisplayMode = register_class_NSToolbarDisplayMode();
	appkit_ce_NSWindowToolbarStyle = register_class_NSWindowToolbarStyle();

	APPKIT_MAP(NSToolbar, appkit_ce_NSObject);
	APPKIT_MAP(NSToolbarItem, appkit_ce_NSObject);
}

/* NSToolbar */
ZEND_METHOD(NSToolbar, initWithIdentifier)
{
	zend_string *identifier;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		NSToolbar *toolbar = [[CALLED alloc] initWithIdentifier:appkit_nsstring(identifier)];
		appkit_box_objc(return_value, toolbar);
		[toolbar release];
	APPKIT_END
}

ANY_STR_GET(NSToolbar, NSToolbar, identifier, identifier)
ANY_OBJ_GET(NSToolbar, NSToolbar, delegate, delegate)
ANY_OBJ_SET_OR_NULL(NSToolbar, NSToolbar, setDelegate, setDelegate, appkit_ce_NSObject, id<NSToolbarDelegate>)
ANY_ENUM_GET(NSToolbar, NSToolbar, displayMode, displayMode, appkit_ce_NSToolbarDisplayMode, false)
ANY_ENUM_SET(NSToolbar, NSToolbar, setDisplayMode, setDisplayMode, appkit_ce_NSToolbarDisplayMode, NSToolbarDisplayMode)
ANY_BOOL_GET(NSToolbar, NSToolbar, isVisible, isVisible)
ANY_BOOL_SET(NSToolbar, NSToolbar, setVisible, setVisible)
ANY_BOOL_GET(NSToolbar, NSToolbar, allowsUserCustomization, allowsUserCustomization)
ANY_BOOL_SET(NSToolbar, NSToolbar, setAllowsUserCustomization, setAllowsUserCustomization)
ANY_STR_GET_OR_NULL(NSToolbar, NSToolbar, selectedItemIdentifier, selectedItemIdentifier)
ANY_METHOD(NSToolbar, setSelectedItemIdentifier, PARSE_STR_OR_NULL,
	[SELF(NSToolbar) setSelectedItemIdentifier:(v != NULL ? appkit_nsstring(v) : nil)];)
ANY_METHOD(NSToolbar, removeItemAtIndex, PARSE_LONG, [SELF(NSToolbar) removeItemAtIndex:(NSInteger) v];)

ZEND_METHOD(NSToolbar, insertItemWithItemIdentifierAtIndex)
{
	zend_string *identifier;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(identifier)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[SELF(NSToolbar) insertItemWithItemIdentifier:appkit_nsstring(identifier) atIndex:(NSInteger) index];
	APPKIT_END
}

/* NSToolbarItem */
ZEND_METHOD(NSToolbarItem, initWithItemIdentifier)
{
	zend_string *identifier;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		NSToolbarItem *item = [[CALLED alloc] initWithItemIdentifier:appkit_nsstring(identifier)];
		appkit_box_objc(return_value, item);
		[item release];
	APPKIT_END
}

ANY_STR_GET(NSToolbarItem, NSToolbarItem, itemIdentifier, itemIdentifier)
ANY_STR_GET(NSToolbarItem, NSToolbarItem, label, label)
ANY_STR_SET(NSToolbarItem, NSToolbarItem, setLabel, setLabel)
ANY_OBJ_GET(NSToolbarItem, NSToolbarItem, view, view)
ANY_OBJ_SET_OR_NULL(NSToolbarItem, NSToolbarItem, setView, setView, appkit_ce_NSView, NSView *)
ANY_BOOL_GET(NSToolbarItem, NSToolbarItem, isBordered, isBordered)
ANY_BOOL_SET(NSToolbarItem, NSToolbarItem, setBordered, setBordered)
