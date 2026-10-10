#include "runtime.h"
#include "../stubs/NSMenu_arginfo.h"

void appkit_register_NSMenu(void)
{
	appkit_ce_NSControlStateValue = register_class_NSControlStateValue();

	appkit_ce_NSMenu = register_class_NSMenu(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSMenu);
	appkit_map_objc_class("NSMenu", appkit_ce_NSMenu);

	appkit_ce_NSMenuItem = register_class_NSMenuItem(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSMenuItem);
	appkit_map_objc_class("NSMenuItem", appkit_ce_NSMenuItem);
}

#define THIS_MENU ((NSMenu *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))
#define THIS_ITEM ((NSMenuItem *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

/* ---- NSMenu ------------------------------------------------------------ */

ZEND_METHOD(NSMenu, initWithTitle)
{
	zend_string *title;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSMenu *menu = [[NSMenu alloc] initWithTitle:appkit_nsstring(title)];

		appkit_box_objc(return_value, menu);
		[menu release];
	APPKIT_END
}

ZEND_METHOD(NSMenu, title)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_STR(appkit_zend_string((CFStringRef) [THIS_MENU title]));
	APPKIT_END
}

ZEND_METHOD(NSMenu, setTitle)
{
	zend_string *title;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_MENU setTitle:appkit_nsstring(title)];
	APPKIT_END
}

ZEND_METHOD(NSMenu, addItem)
{
	zend_object *item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(item, appkit_ce_NSMenuItem)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_MENU addItem:(NSMenuItem *) APPKIT_ID(item)];
	APPKIT_END
}

ZEND_METHOD(NSMenu, insertItemAtIndex)
{
	zend_object *item;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(item, appkit_ce_NSMenuItem)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_MENU insertItem:(NSMenuItem *) APPKIT_ID(item) atIndex:(NSInteger) index];
	APPKIT_END
}

ZEND_METHOD(NSMenu, removeItem)
{
	zend_object *item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(item, appkit_ce_NSMenuItem)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_MENU removeItem:(NSMenuItem *) APPKIT_ID(item)];
	APPKIT_END
}

ZEND_METHOD(NSMenu, removeAllItems)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_MENU removeAllItems];
	APPKIT_END
}

ZEND_METHOD(NSMenu, numberOfItems)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_MENU numberOfItems]);
	APPKIT_END
}

ZEND_METHOD(NSMenu, itemAtIndex)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_MENU itemAtIndex:(NSInteger) index]);
	APPKIT_END
}

ZEND_METHOD(NSMenu, indexOfItem)
{
	zend_object *item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(item, appkit_ce_NSMenuItem)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_MENU indexOfItem:(NSMenuItem *) APPKIT_ID(item)]);
	APPKIT_END
}

ZEND_METHOD(NSMenu, autoenablesItems)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_MENU autoenablesItems]);
	APPKIT_END
}

ZEND_METHOD(NSMenu, setAutoenablesItems)
{
	bool autoenables;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(autoenables)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_MENU setAutoenablesItems:autoenables];
	APPKIT_END
}

ZEND_METHOD(NSMenu, performActionForItemAtIndex)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_MENU performActionForItemAtIndex:(NSInteger) index];
	APPKIT_END
}

ZEND_METHOD(NSMenu, popUpMenuPositioningItemAtLocationInView)
{
	zend_object *item = NULL;
	zend_object *location_obj;
	zend_object *view = NULL;
	NSPoint location;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(item, appkit_ce_NSMenuItem)
		Z_PARAM_OBJ_OF_CLASS(location_obj, appkit_ce_NSPoint)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(view, appkit_ce_NSView)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_point_from(location_obj, 2, &location)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		RETVAL_BOOL([THIS_MENU popUpMenuPositioningItem:(item == NULL ? nil : (NSMenuItem *) APPKIT_ID(item))
		                                     atLocation:location
		                                         inView:(view == NULL ? nil : (NSView *) APPKIT_ID(view))]);
	APPKIT_END
}

ZEND_METHOD(NSMenu, cancelTracking)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_MENU cancelTracking];
	APPKIT_END
}

/* ---- NSMenuItem -------------------------------------------------------- */

ZEND_METHOD(NSMenuItem, initWithTitleActionKeyEquivalent)
{
	zend_string *title;
	zend_string *selector = NULL;
	zend_string *key_equivalent;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(title)
		Z_PARAM_STR_OR_NULL(selector)
		Z_PARAM_STR(key_equivalent)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSMenuItem *item = [[NSMenuItem alloc] initWithTitle:appkit_nsstring(title)
			action:(selector != NULL ? sel_registerName(ZSTR_VAL(selector)) : NULL)
			keyEquivalent:appkit_nsstring(key_equivalent)];

		appkit_box_objc(return_value, item);
		[item release];
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, separatorItem)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSMenuItem separatorItem]);
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, title)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_STR(appkit_zend_string((CFStringRef) [THIS_ITEM title]));
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, setTitle)
{
	zend_string *title;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_ITEM setTitle:appkit_nsstring(title)];
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, isSeparatorItem)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_ITEM isSeparatorItem]);
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, hasSubmenu)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_ITEM hasSubmenu]);
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, submenu)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_ITEM submenu]);
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, setSubmenu)
{
	zend_object *submenu = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(submenu, appkit_ce_NSMenu)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_ITEM setSubmenu:(submenu != NULL ? (NSMenu *) APPKIT_ID(submenu) : nil)];
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, menu)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_ITEM menu]);
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, target)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_ITEM target]);
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, setTarget)
{
	zend_object *target = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(target, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_ITEM setTarget:(target != NULL ? APPKIT_ID(target) : nil)];
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, action)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		SEL action = [THIS_ITEM action];

		if (action == NULL) {
			RETURN_NULL();
		}
		RETURN_STRING(sel_getName(action));
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, setAction)
{
	zend_string *action = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR_OR_NULL(action)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_ITEM setAction:(action != NULL ? sel_registerName(ZSTR_VAL(action)) : NULL)];
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, state)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_return_enum(return_value, appkit_ce_NSControlStateValue, (zend_long) [THIS_ITEM state], true);
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, setState)
{
	zend_object *state_case = NULL;
	zend_long state_long = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(state_case, appkit_ce_NSControlStateValue, state_long)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_ITEM setState:(NSControlStateValue) appkit_enum_value(state_case, state_long)];
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, isEnabled)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_ITEM isEnabled]);
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, setEnabled)
{
	bool enabled;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_ITEM setEnabled:enabled];
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, keyEquivalent)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_STR(appkit_zend_string((CFStringRef) [THIS_ITEM keyEquivalent]));
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, setKeyEquivalent)
{
	zend_string *key_equivalent;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(key_equivalent)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_ITEM setKeyEquivalent:appkit_nsstring(key_equivalent)];
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, keyEquivalentModifierMask)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_ITEM keyEquivalentModifierMask]);
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, setKeyEquivalentModifierMask)
{
	zend_object *mask_case = NULL;
	zend_long mask_long = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(mask_case, appkit_ce_NSEventModifierFlags, mask_long)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_ITEM setKeyEquivalentModifierMask:(NSEventModifierFlags) appkit_enum_value(mask_case, mask_long)];
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, tag)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_ITEM tag]);
	APPKIT_END
}

ZEND_METHOD(NSMenuItem, setTag)
{
	zend_long tag;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_ITEM setTag:(NSInteger) tag];
	APPKIT_END
}
