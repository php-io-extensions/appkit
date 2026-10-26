#include "runtime.h"
#include "controls.h"
#include "zend_closures.h"
#include "../stubs/NSWindow_arginfo.h"

_Static_assert(NSWindowCollectionBehaviorDefault == 0 && NSWindowCollectionBehaviorCanJoinAllSpaces == 1 && NSWindowCollectionBehaviorMoveToActiveSpace == 2
	&& NSWindowCollectionBehaviorManaged == 4 && NSWindowCollectionBehaviorTransient == 8 && NSWindowCollectionBehaviorStationary == 16
	&& NSWindowCollectionBehaviorParticipatesInCycle == 32 && NSWindowCollectionBehaviorIgnoresCycle == 64
	&& NSWindowCollectionBehaviorFullScreenPrimary == 128 && NSWindowCollectionBehaviorFullScreenAuxiliary == 256 && NSWindowCollectionBehaviorFullScreenNone == 512
	&& NSWindowCollectionBehaviorFullScreenAllowsTiling == 2048 && NSWindowCollectionBehaviorFullScreenDisallowsTiling == 4096
	&& NSWindowCollectionBehaviorPrimary == 65536 && NSWindowCollectionBehaviorAuxiliary == 131072 && NSWindowCollectionBehaviorCanJoinAllApplications == 262144,
	"NSWindowCollectionBehavior values moved");
_Static_assert(NSWindowTitleVisible == 0 && NSWindowTitleHidden == 1, "NSWindowTitleVisibility values moved");
_Static_assert(NSWindowOcclusionStateVisible == 2, "NSWindowOcclusionState values moved");

void appkit_register_NSWindow(int module_number)
{
	register_NSWindow_symbols(module_number);
	appkit_ce_NSWindowCollectionBehavior = register_class_NSWindowCollectionBehavior();
	appkit_ce_NSWindowTitleVisibility = register_class_NSWindowTitleVisibility();
	appkit_ce_NSWindowOcclusionState = register_class_NSWindowOcclusionState();
	appkit_ce_NSWindowStyleMask = register_class_NSWindowStyleMask();
	appkit_ce_NSBackingStoreType = register_class_NSBackingStoreType();
	appkit_ce_NSWindowOrderingMode = register_class_NSWindowOrderingMode();
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
		NSWindow *window = [[CALLED alloc] initWithContentRect:rect
			styleMask:(NSWindowStyleMask) appkit_enum_value(style_case, style_long)
			backing:(NSBackingStoreType) appkit_enum_value(backing, 0)
			defer:defer];

		appkit_box_objc(return_value, window);
		[window release];
	APPKIT_END
}

ZEND_METHOD(NSWindow, backingScaleFactor)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_DOUBLE((double) [THIS_WINDOW backingScaleFactor]);
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

ZEND_METHOD(NSWindow, canBecomeKeyWindow)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_WINDOW canBecomeKeyWindow]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, canBecomeMainWindow)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_WINDOW canBecomeMainWindow]);
	APPKIT_END
}

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

ZEND_METHOD(NSWindow, colorSpace)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_WINDOW colorSpace]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, setColorSpace)
{
	zend_object *space = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(space, appkit_ce_NSColorSpace)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_WINDOW setColorSpace:(space == NULL ? nil : (NSColorSpace *) APPKIT_ID(space))];
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

ZEND_METHOD(NSWindow, acceptsMouseMovedEvents)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_WINDOW acceptsMouseMovedEvents]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, setAcceptsMouseMovedEvents)
{
	bool accepts;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(accepts)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_WINDOW setAcceptsMouseMovedEvents:accepts];
	APPKIT_END
}

ZEND_METHOD(NSWindow, windowNumberAtPointBelowWindowWithWindowNumber)
{
	zend_object *point_obj;
	zend_long below;
	NSPoint point;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(point_obj, appkit_ce_NSPoint)
		Z_PARAM_LONG(below)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	if (!appkit_point_from(point_obj, 1, &point)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [NSWindow windowNumberAtPoint:point belowWindowWithWindowNumber:(NSInteger) below]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, makeFirstResponder)
{
	zend_object *responder = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(responder, appkit_ce_NSResponder)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_WINDOW makeFirstResponder:(responder != NULL ? (NSResponder *) APPKIT_ID(responder) : nil)]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, initialFirstResponder)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-initial-first-responder */

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_WINDOW initialFirstResponder]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, setInitialFirstResponder)
{
	zend_object *view = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(view, appkit_ce_NSView)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-set-initial-first-responder */

	APPKIT_BEGIN
		[THIS_WINDOW setInitialFirstResponder:(view != NULL ? (NSView *) APPKIT_ID(view) : nil)];
	APPKIT_END
}

ZEND_METHOD(NSWindow, selectNextKeyView)
{
	zend_object *sender = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(sender, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-select-next-key-view */

	APPKIT_BEGIN
		[THIS_WINDOW selectNextKeyView:(sender != NULL ? APPKIT_ID(sender) : nil)];
	APPKIT_END
}

ZEND_METHOD(NSWindow, selectPreviousKeyView)
{
	zend_object *sender = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(sender, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-select-previous-key-view */

	APPKIT_BEGIN
		[THIS_WINDOW selectPreviousKeyView:(sender != NULL ? APPKIT_ID(sender) : nil)];
	APPKIT_END
}

ZEND_METHOD(NSWindow, setAutorecalculatesKeyViewLoop)
{
	bool recalculates;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(recalculates)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-set-autorecalculates-key-view-loop */

	APPKIT_BEGIN
		[THIS_WINDOW setAutorecalculatesKeyViewLoop:recalculates];
	APPKIT_END
}

ZEND_METHOD(NSWindow, firstResponder)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_WINDOW firstResponder]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, beginSheetCompletionHandler)
{
	zend_object *sheet;
	zend_object *handler = NULL;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(sheet, appkit_ce_NSWindow)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(handler, zend_ce_closure)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-begin-sheet */

	APPKIT_BEGIN
		if (handler == NULL) {
			[THIS_WINDOW beginSheet:(NSWindow *) APPKIT_ID(sheet) completionHandler:nil];
		} else {
			zval callable;
			ZVAL_OBJ(&callable, handler);
			PHPAppKitBlockCallout *holder = [[[PHPAppKitBlockCallout alloc] init] autorelease];
			holder->callout = appkit_callout_new(&callable, NULL);
			appkit_callout_retain(holder->callout);

			[THIS_WINDOW beginSheet:(NSWindow *) APPKIT_ID(sheet) completionHandler:^(NSModalResponse code) {
				if (appkit_callout_can_enter(holder->callout)) {
					zval arg;
					ZVAL_LONG(&arg, (zend_long) code);
					appkit_callout_invoke(holder->callout, 1, &arg);
				}
			}];
		}
	APPKIT_END
}

ZEND_METHOD(NSWindow, endSheet)
{
	zend_object *sheet;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(sheet, appkit_ce_NSWindow)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-end-sheet */

	APPKIT_BEGIN
		[THIS_WINDOW endSheet:(NSWindow *) APPKIT_ID(sheet)];
	APPKIT_END
}

ZEND_METHOD(NSWindow, endSheetReturnCode)
{
	zend_object *sheet;
	zend_long code;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(sheet, appkit_ce_NSWindow)
		Z_PARAM_LONG(code)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-end-sheet-return-code */

	APPKIT_BEGIN
		[THIS_WINDOW endSheet:(NSWindow *) APPKIT_ID(sheet) returnCode:(NSModalResponse) code];
	APPKIT_END
}

ZEND_METHOD(NSWindow, sheets)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-sheets */

	APPKIT_BEGIN
		array_init(return_value);
		for (NSWindow *sheet in [THIS_WINDOW sheets]) {
			zval boxed;
			appkit_box_objc(&boxed, sheet);
			add_next_index_zval(return_value, &boxed);
		}
	APPKIT_END
}

ZEND_METHOD(NSWindow, attachedSheet)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-attached-sheet */

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_WINDOW attachedSheet]);
	APPKIT_END
}

ZEND_METHOD(NSWindow, sheetParent)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-sheet-parent */

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_WINDOW sheetParent]);
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

/* A size, rect or point parameter, parsed into the native value; RETURN_THROWS on a bad object. */
#define PARSE_SIZE NSSize v; zend_object *v_obj; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS(v_obj, appkit_ce_NSSize) ZEND_PARSE_PARAMETERS_END(); if (!appkit_size_from(v_obj, 1, &v)) { RETURN_THROWS(); }
#define PARSE_RECT NSRect v; zend_object *v_obj; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS(v_obj, appkit_ce_NSRect) ZEND_PARSE_PARAMETERS_END(); if (!appkit_rect_from(v_obj, 1, &v)) { RETURN_THROWS(); }
#define PARSE_POINT NSPoint v; zend_object *v_obj; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS(v_obj, appkit_ce_NSPoint) ZEND_PARSE_PARAMETERS_END(); if (!appkit_point_from(v_obj, 1, &v)) { RETURN_THROWS(); }
#define PARSE_FLAGS(ce) zend_object *v_case = NULL; zend_long v_long = 0; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS_OR_LONG(v_case, ce, v_long) ZEND_PARSE_PARAMETERS_END();

METHOD(NSWindow, setStyleMask, PARSE_FLAGS(appkit_ce_NSWindowStyleMask), [THIS_WINDOW setStyleMask:(NSWindowStyleMask) appkit_enum_value(v_case, v_long)];)

SIZE_GET(NSWindow, NSWindow, contentMinSize, contentMinSize)
METHOD(NSWindow, setContentMinSize, PARSE_SIZE, [THIS_WINDOW setContentMinSize:v];)
SIZE_GET(NSWindow, NSWindow, contentMaxSize, contentMaxSize)
METHOD(NSWindow, setContentMaxSize, PARSE_SIZE, [THIS_WINDOW setContentMaxSize:v];)
SIZE_GET(NSWindow, NSWindow, contentAspectRatio, contentAspectRatio)
METHOD(NSWindow, setContentAspectRatio, PARSE_SIZE, [THIS_WINDOW setContentAspectRatio:v];)

METHOD(NSWindow, setFrameOrigin, PARSE_POINT, [THIS_WINDOW setFrameOrigin:v];)

ZEND_METHOD(NSWindow, setFrameDisplay)
{
	zend_object *frame;
	bool display;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(frame, appkit_ce_NSRect)
		Z_PARAM_BOOL(display)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_rect_from(frame, 1, &rect)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[THIS_WINDOW setFrame:rect display:display];
	APPKIT_END
}

METHOD(NSWindow, contentRectForFrameRect, PARSE_RECT, appkit_return_rect(return_value, [THIS_WINDOW contentRectForFrameRect:v]);)
METHOD(NSWindow, frameRectForContentRect, PARSE_RECT, appkit_return_rect(return_value, [THIS_WINDOW frameRectForContentRect:v]);)
METHOD(NSWindow, convertRectToBacking, PARSE_RECT, appkit_return_rect(return_value, [THIS_WINDOW convertRectToBacking:v]);)
METHOD(NSWindow, convertRectToScreen, PARSE_RECT, appkit_return_rect(return_value, [THIS_WINDOW convertRectToScreen:v]);) /* binding:main-thread-nswindow-convert-rect-to-screen */
OBJ_SET(NSWindow, NSWindow, removeChildWindow, removeChildWindow, appkit_ce_NSWindow, NSWindow *) /* binding:main-thread-nswindow-remove-child-window */

ZEND_METHOD(NSWindow, addChildWindowOrdered)
{
	zend_object *child, *place;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(child, appkit_ce_NSWindow)
		Z_PARAM_OBJ_OF_CLASS(place, appkit_ce_NSWindowOrderingMode)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nswindow-add-child-window-ordered */

	APPKIT_BEGIN
		[THIS_WINDOW addChildWindow:(NSWindow *) APPKIT_ID(child) ordered:(NSWindowOrderingMode) appkit_enum_value(place, 0)];
	APPKIT_END
}

APPKIT_SENDER_METHOD(orderFront, orderFront)
APPKIT_SENDER_METHOD(zoom, zoom)
APPKIT_SENDER_METHOD(deminiaturize, deminiaturize)
APPKIT_SENDER_METHOD(toggleFullScreen, toggleFullScreen)
APPKIT_BOOL_GETTER(isZoomed, isZoomed)
APPKIT_BOOL_GETTER(isMiniaturized, isMiniaturized)

LONG_GET(NSWindow, NSWindow, collectionBehavior, collectionBehavior)
METHOD(NSWindow, setCollectionBehavior, PARSE_FLAGS(appkit_ce_NSWindowCollectionBehavior), [THIS_WINDOW setCollectionBehavior:(NSWindowCollectionBehavior) appkit_enum_value(v_case, v_long)];)

LONG_GET(NSWindow, NSWindow, level, level)
LONG_SET(NSWindow, NSWindow, setLevel, setLevel, NSWindowLevel)

OBJ_GET(NSWindow, NSWindow, screen, screen)

APPKIT_BOOL_GETTER(isOpaque, isOpaque)
BOOL_SET(NSWindow, NSWindow, setOpaque, setOpaque)
OBJ_GET(NSWindow, NSWindow, backgroundColor, backgroundColor)
OBJ_SET_OR_NULL(NSWindow, NSWindow, setBackgroundColor, setBackgroundColor, appkit_ce_NSColor, NSColor *)
APPKIT_BOOL_GETTER(hasShadow, hasShadow)
BOOL_SET(NSWindow, NSWindow, setHasShadow, setHasShadow)
APPKIT_BOOL_GETTER(titlebarAppearsTransparent, titlebarAppearsTransparent)
BOOL_SET(NSWindow, NSWindow, setTitlebarAppearsTransparent, setTitlebarAppearsTransparent)
ENUM_GET(NSWindow, NSWindow, titleVisibility, titleVisibility, appkit_ce_NSWindowTitleVisibility, false)
ENUM_SET(NSWindow, NSWindow, setTitleVisibility, setTitleVisibility, appkit_ce_NSWindowTitleVisibility, NSWindowTitleVisibility)
APPKIT_BOOL_GETTER(ignoresMouseEvents, ignoresMouseEvents)
BOOL_SET(NSWindow, NSWindow, setIgnoresMouseEvents, setIgnoresMouseEvents)
APPKIT_BOOL_GETTER(isMovableByWindowBackground, isMovableByWindowBackground)
BOOL_SET(NSWindow, NSWindow, setMovableByWindowBackground, setMovableByWindowBackground)
LONG_GET(NSWindow, NSWindow, occlusionState, occlusionState)
DOUBLE_GET(NSWindow, NSWindow, alphaValue, alphaValue)
DOUBLE_SET(NSWindow, NSWindow, setAlphaValue, setAlphaValue)

