#include "runtime.h"
#include "../stubs/NSWindow_arginfo.h"

void appkit_register_NSWindow(void)
{
	appkit_ce_NSWindowStyleMask = register_class_NSWindowStyleMask();
	appkit_ce_NSBackingStoreType = register_class_NSBackingStoreType();
	appkit_ce_NSWindow = register_class_NSWindow(appkit_ce_NSResponder);
	appkit_object_setup(appkit_ce_NSWindow);
	appkit_map_objc_class("NSWindow", appkit_ce_NSWindow);
}

#define THIS_WINDOW ((NSWindow *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

/* A nullable NSObject parameter as an id. */
#define APPKIT_OPTIONAL_ID(zobj) ((zobj) != NULL ? APPKIT_ID(zobj) : nil)

ZEND_METHOD(NSWindow, initWithContentRectStyleMaskBackingDefer)
{
	zend_object *rect_obj;
	zend_object *style_case = NULL;
	zend_long style_long = 0;
	zend_object *backing;
	bool defer;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_OBJ_OF_CLASS(rect_obj, appkit_ce_NSRect)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(style_case, appkit_ce_NSWindowStyleMask, style_long)
		Z_PARAM_OBJ_OF_CLASS(backing, appkit_ce_NSBackingStoreType)
		Z_PARAM_BOOL(defer)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	if (!appkit_rect_from(rect_obj, 1, &rect)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		NSWindow *window = [[NSWindow alloc] initWithContentRect:rect
			styleMask:(NSWindowStyleMask) appkit_enum_value(style_case, style_long)
			backing:(NSBackingStoreType) appkit_enum_value(backing, 0)
			defer:defer];

		appkit_box_objc(return_value, window);
		[window release];
	APPKIT_END
}

ZEND_METHOD(NSWindow, title)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_STR(appkit_zend_string((CFStringRef) [THIS_WINDOW title]));
	APPKIT_END
}

ZEND_METHOD(NSWindow, setTitle)
{
	zend_string *title;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_WINDOW setTitle:appkit_nsstring(title)];
	APPKIT_END
}

#define APPKIT_SENDER_METHOD(name, selector) \
ZEND_METHOD(NSWindow, name) \
{ \
	zend_object *sender = NULL; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(sender, appkit_ce_NSObject) \
	ZEND_PARSE_PARAMETERS_END(); \
	APPKIT_REQUIRE_MAIN_THREAD(); \
	APPKIT_BEGIN \
		[THIS_WINDOW selector:APPKIT_OPTIONAL_ID(sender)]; \
	APPKIT_END \
}

APPKIT_SENDER_METHOD(makeKeyAndOrderFront, makeKeyAndOrderFront)
APPKIT_SENDER_METHOD(orderOut, orderOut)
APPKIT_SENDER_METHOD(performClose, performClose)
APPKIT_SENDER_METHOD(miniaturize, miniaturize)

#define APPKIT_VOID_METHOD(name, selector) \
ZEND_METHOD(NSWindow, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	APPKIT_REQUIRE_MAIN_THREAD(); \
	APPKIT_BEGIN \
		[THIS_WINDOW selector]; \
	APPKIT_END \
}

APPKIT_VOID_METHOD(close, close)
APPKIT_VOID_METHOD(center, center)
APPKIT_VOID_METHOD(makeKeyWindow, makeKeyWindow)

#define APPKIT_BOOL_GETTER(name, selector) \
ZEND_METHOD(NSWindow, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	APPKIT_REQUIRE_MAIN_THREAD(); \
	APPKIT_BEGIN \
		RETURN_BOOL([THIS_WINDOW selector]); \
	APPKIT_END \
}

APPKIT_BOOL_GETTER(isVisible, isVisible)
APPKIT_BOOL_GETTER(isKeyWindow, isKeyWindow)
APPKIT_BOOL_GETTER(isMainWindow, isMainWindow)
APPKIT_BOOL_GETTER(isReleasedWhenClosed, isReleasedWhenClosed)

ZEND_METHOD(NSWindow, delegate)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, (id) [THIS_WINDOW delegate]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, setDelegate)
{
	zend_object *delegate = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(delegate, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_WINDOW setDelegate:(id<NSWindowDelegate>) APPKIT_OPTIONAL_ID(delegate)];
	APPKIT_END
}

ZEND_METHOD(NSWindow, setReleasedWhenClosed)
{
	bool released;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(released)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_WINDOW setReleasedWhenClosed:released];
	APPKIT_END
}

ZEND_METHOD(NSWindow, contentView)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_WINDOW contentView]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, setContentView)
{
	zend_object *view = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(view, appkit_ce_NSView)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_WINDOW setContentView:(NSView *) APPKIT_OPTIONAL_ID(view)];
	APPKIT_END
}

ZEND_METHOD(NSWindow, windowNumber)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_WINDOW windowNumber]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, frame)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_return_rect(return_value, [THIS_WINDOW frame]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, setContentSize)
{
	zend_object *size_obj;
	NSSize size;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(size_obj, appkit_ce_NSSize)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	if (!appkit_size_from(size_obj, 1, &size)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[THIS_WINDOW setContentSize:size];
	APPKIT_END
}

ZEND_METHOD(NSWindow, styleMask)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_WINDOW styleMask]);
	APPKIT_END
}
