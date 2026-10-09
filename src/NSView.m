#include "runtime.h"
#include "controls.h"
#import <QuartzCore/QuartzCore.h>
#include "../stubs/NSView_arginfo.h"

_Static_assert(NSViewLayerContentsRedrawNever == 0 && NSViewLayerContentsRedrawOnSetNeedsDisplay == 1 && NSViewLayerContentsRedrawDuringViewResize == 2
	&& NSViewLayerContentsRedrawBeforeViewResize == 3 && NSViewLayerContentsRedrawCrossfade == 4, "NSViewLayerContentsRedrawPolicy values moved");

void appkit_register_NSView(int module_number)
{
	register_NSView_symbols(module_number);
	appkit_ce_NSViewLayerContentsRedrawPolicy = register_class_NSViewLayerContentsRedrawPolicy();
	appkit_ce_NSView = register_class_NSView(appkit_ce_NSResponder);
	appkit_object_setup(appkit_ce_NSView);
	appkit_map_objc_class("NSView", appkit_ce_NSView);
}

#define THIS_VIEW ((NSView *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSView, initWithFrame)
{
	zend_object *frame;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(frame, appkit_ce_NSRect)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_rect_from(frame, 1, &rect)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		NSView *view = [[(Class) appkit_called_class(execute_data) alloc] initWithFrame:rect];
		appkit_box_objc(return_value, view);
		[view release];
	APPKIT_END
}

ZEND_METHOD(NSView, frame)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_return_rect(return_value, [THIS_VIEW frame]);
	APPKIT_END
}

ZEND_METHOD(NSView, setFrame)
{
	zend_object *frame;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(frame, appkit_ce_NSRect)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_rect_from(frame, 1, &rect)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[THIS_VIEW setFrame:rect];
	APPKIT_END
}

ZEND_METHOD(NSView, window)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_VIEW window]);
	APPKIT_END
}

ZEND_METHOD(NSView, subviews)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		array_init(return_value);
		for (NSView *subview in [THIS_VIEW subviews]) {
			zval boxed;
			appkit_box_objc(&boxed, subview);
			add_next_index_zval(return_value, &boxed);
		}
	APPKIT_END
}

ZEND_METHOD(NSView, addSubview)
{
	zend_object *view;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(view, appkit_ce_NSView)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_VIEW addSubview:(NSView *) APPKIT_ID(view)];
	APPKIT_END
}

ZEND_METHOD(NSView, fittingSize)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_return_size(return_value, [THIS_VIEW fittingSize]);
	APPKIT_END
}

ZEND_METHOD(NSView, intrinsicContentSize)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_return_size(return_value, [THIS_VIEW intrinsicContentSize]);
	APPKIT_END
}

ZEND_METHOD(NSView, setLayerBackgroundColor)
{
	zend_object *color = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(color, appkit_ce_NSColor)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_VIEW setWantsLayer:YES];
		THIS_VIEW.layer.backgroundColor = color == NULL ? NULL : ((NSColor *) APPKIT_ID(color)).CGColor;
	APPKIT_END
}

ZEND_METHOD(NSView, layerContents)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		id contents = THIS_VIEW.layer.contents;
		if (contents != nil && CFGetTypeID((CFTypeRef) contents) == CGImageGetTypeID()) {
			appkit_box_cf(return_value, (CFTypeRef) contents);
		} else {
			appkit_box_objc(return_value, [contents isKindOfClass:[NSImage class]] ? contents : nil);
		}
	APPKIT_END
}

ZEND_METHOD(NSView, setLayerContents)
{
	zend_object *contents = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OR_NULL(contents)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	if (contents != NULL && !instanceof_function(contents->ce, appkit_ce_NSImage) && !instanceof_function(contents->ce, appkit_ce_CGImage)) {
		zend_argument_type_error(1, "must be of type NSImage|CGImage|null, %s given", ZSTR_VAL(contents->ce->name));
		RETURN_THROWS();
	}

	/* CALayer takes either as its contents: a CGImageRef is toll-free an id here. */
	APPKIT_BEGIN
		[THIS_VIEW setWantsLayer:YES];
		THIS_VIEW.layer.contents = contents == NULL ? nil : APPKIT_ID(contents);
	APPKIT_END
}

ZEND_METHOD(NSView, layerContentsGravity)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSString *gravity = THIS_VIEW.layer.contentsGravity;
		if (gravity == nil) {
			RETURN_NULL();
		}
		RETURN_STR(appkit_zend_string((CFStringRef) gravity));
	APPKIT_END
}

ZEND_METHOD(NSView, setLayerContentsGravity)
{
	zend_string *gravity;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(gravity)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_VIEW setWantsLayer:YES];
		THIS_VIEW.layer.contentsGravity = appkit_nsstring(gravity);
	APPKIT_END
}

ZEND_METHOD(NSView, layerMasksToBounds)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL(THIS_VIEW.layer.masksToBounds);
	APPKIT_END
}

ZEND_METHOD(NSView, setLayerMasksToBounds)
{
	bool flag;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_VIEW setWantsLayer:YES];
		THIS_VIEW.layer.masksToBounds = flag;
	APPKIT_END
}

ZEND_METHOD(NSView, visibleRect)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_return_rect(return_value, [THIS_VIEW visibleRect]);
	APPKIT_END
}

ZEND_METHOD(NSView, scrollPoint)
{
	zend_object *point;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(point, appkit_ce_NSPoint)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	zval *x = OBJ_PROP_NUM(point, 0), *y = OBJ_PROP_NUM(point, 1);
	if (Z_TYPE_P(x) != IS_DOUBLE || Z_TYPE_P(y) != IS_DOUBLE) {
		zend_argument_value_error(1, "must have every property initialized");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[THIS_VIEW scrollPoint:NSMakePoint(Z_DVAL_P(x), Z_DVAL_P(y))];
	APPKIT_END
}

ZEND_METHOD(NSView, layerBackgroundColor)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		CGColorRef color = THIS_VIEW.layer.backgroundColor;
		appkit_box_objc(return_value, color == NULL ? nil : [NSColor colorWithCGColor:color]);
	APPKIT_END
}

#define APPKIT_VIEW_PRIORITY_GET(name, sel) \
ZEND_METHOD(NSView, name) { zend_object *o; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS(o, appkit_ce_NSLayoutConstraintOrientation) ZEND_PARSE_PARAMETERS_END(); \
	APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN RETURN_DOUBLE([THIS_VIEW sel:(NSLayoutConstraintOrientation) appkit_enum_value(o, 0)]); APPKIT_END }
#define APPKIT_VIEW_PRIORITY_SET(name, sel) \
ZEND_METHOD(NSView, name) { double p; zend_object *o; ZEND_PARSE_PARAMETERS_START(2, 2) Z_PARAM_DOUBLE(p) Z_PARAM_OBJ_OF_CLASS(o, appkit_ce_NSLayoutConstraintOrientation) ZEND_PARSE_PARAMETERS_END(); \
	APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN [THIS_VIEW sel:(NSLayoutPriority) p forOrientation:(NSLayoutConstraintOrientation) appkit_enum_value(o, 0)]; APPKIT_END }

APPKIT_VIEW_PRIORITY_GET(contentHuggingPriorityForOrientation, contentHuggingPriorityForOrientation)
APPKIT_VIEW_PRIORITY_SET(setContentHuggingPriorityForOrientation, setContentHuggingPriority)
APPKIT_VIEW_PRIORITY_GET(contentCompressionResistancePriorityForOrientation, contentCompressionResistancePriorityForOrientation)
APPKIT_VIEW_PRIORITY_SET(setContentCompressionResistancePriorityForOrientation, setContentCompressionResistancePriority)

#define APPKIT_VIEW_VOID(name, sel) \
ZEND_METHOD(NSView, name) { ZEND_PARSE_PARAMETERS_NONE(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN [THIS_VIEW sel]; APPKIT_END }
#define APPKIT_VIEW_BOOL_GET(name, sel) \
ZEND_METHOD(NSView, name) { ZEND_PARSE_PARAMETERS_NONE(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN RETURN_BOOL([THIS_VIEW sel]); APPKIT_END }
#define APPKIT_VIEW_BOOL_SET(name, sel) \
ZEND_METHOD(NSView, name) { bool v; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_BOOL(v) ZEND_PARSE_PARAMETERS_END(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN [THIS_VIEW sel:v]; APPKIT_END }
#define APPKIT_VIEW_ANCHOR(name, sel) \
ZEND_METHOD(NSView, name) { ZEND_PARSE_PARAMETERS_NONE(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN appkit_box_objc(return_value, [THIS_VIEW sel]); APPKIT_END }

APPKIT_VIEW_VOID(removeFromSuperview, removeFromSuperview)
APPKIT_VIEW_VOID(layoutSubtreeIfNeeded, layoutSubtreeIfNeeded)
APPKIT_VIEW_BOOL_GET(isHidden, isHidden)
APPKIT_VIEW_BOOL_SET(setHidden, setHidden)
APPKIT_VIEW_BOOL_GET(translatesAutoresizingMaskIntoConstraints, translatesAutoresizingMaskIntoConstraints)
APPKIT_VIEW_BOOL_SET(setTranslatesAutoresizingMaskIntoConstraints, setTranslatesAutoresizingMaskIntoConstraints)
APPKIT_VIEW_BOOL_GET(wantsLayer, wantsLayer)
APPKIT_VIEW_BOOL_SET(setWantsLayer, setWantsLayer)
APPKIT_VIEW_BOOL_GET(wantsExtendedDynamicRangeOpenGLSurface, wantsExtendedDynamicRangeOpenGLSurface)
APPKIT_VIEW_BOOL_SET(setWantsExtendedDynamicRangeOpenGLSurface, setWantsExtendedDynamicRangeOpenGLSurface)
APPKIT_VIEW_BOOL_GET(wantsBestResolutionOpenGLSurface, wantsBestResolutionOpenGLSurface)
APPKIT_VIEW_BOOL_SET(setWantsBestResolutionOpenGLSurface, setWantsBestResolutionOpenGLSurface)

ZEND_METHOD(NSView, layer)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, THIS_VIEW.layer);
	APPKIT_END
}

ZEND_METHOD(NSView, setLayer)
{
	zend_object *layer = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(layer, appkit_ce_CALayer)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		if (layer == NULL) {
			/* Back to a backing layer of the view's own: AppKit makes one when wantsLayer turns on with no layer set. */
			THIS_VIEW.layer = nil;
			[THIS_VIEW setWantsLayer:NO];
			[THIS_VIEW setWantsLayer:YES];
		} else {
			[THIS_VIEW setWantsLayer:YES];
			THIS_VIEW.layer = (CALayer *) APPKIT_ID(layer);
		}
	APPKIT_END
}
APPKIT_VIEW_BOOL_GET(postsFrameChangedNotifications, postsFrameChangedNotifications)
APPKIT_VIEW_BOOL_SET(setPostsFrameChangedNotifications, setPostsFrameChangedNotifications)
APPKIT_VIEW_ANCHOR(superview, superview)
APPKIT_VIEW_BOOL_GET(isFlipped, isFlipped)

ZEND_METHOD(NSView, hitTest)
{
	zend_object *point_obj;
	NSPoint point;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(point_obj, appkit_ce_NSPoint)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_point_from(point_obj, 1, &point)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_VIEW hitTest:point]);
	APPKIT_END
}

ZEND_METHOD(NSView, convertPointFromView)
{
	zend_object *point_obj;
	zend_object *view = NULL;
	NSPoint point;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(point_obj, appkit_ce_NSPoint)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(view, appkit_ce_NSView)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_point_from(point_obj, 1, &point)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		appkit_return_point(return_value, [THIS_VIEW convertPoint:point fromView:(view != NULL ? (NSView *) APPKIT_ID(view) : nil)]);
	APPKIT_END
}
APPKIT_VIEW_ANCHOR(menu, menu)
APPKIT_VIEW_ANCHOR(widthAnchor, widthAnchor)
APPKIT_VIEW_ANCHOR(heightAnchor, heightAnchor)
APPKIT_VIEW_ANCHOR(leadingAnchor, leadingAnchor)
APPKIT_VIEW_ANCHOR(trailingAnchor, trailingAnchor)
APPKIT_VIEW_ANCHOR(topAnchor, topAnchor)
APPKIT_VIEW_ANCHOR(bottomAnchor, bottomAnchor)
APPKIT_VIEW_ANCHOR(centerXAnchor, centerXAnchor)
APPKIT_VIEW_ANCHOR(centerYAnchor, centerYAnchor)

ZEND_METHOD(NSView, setNeedsDisplay)
{
	bool flag;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_VIEW setNeedsDisplay:flag];
	APPKIT_END
}

ZEND_METHOD(NSView, needsDisplay)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_BOOL([THIS_VIEW needsDisplay]);
}

#define PARSE_RECT NSRect v; zend_object *v_obj; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS(v_obj, appkit_ce_NSRect) ZEND_PARSE_PARAMETERS_END(); if (!appkit_rect_from(v_obj, 1, &v)) { RETURN_THROWS(); }
#define PARSE_SIZE NSSize v; zend_object *v_obj; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS(v_obj, appkit_ce_NSSize) ZEND_PARSE_PARAMETERS_END(); if (!appkit_size_from(v_obj, 1, &v)) { RETURN_THROWS(); }

METHOD(NSView, bounds, PARSE_NONE, appkit_return_rect(return_value, [THIS_VIEW bounds]);)
METHOD(NSView, safeAreaRect, PARSE_NONE, appkit_return_rect(return_value, [THIS_VIEW safeAreaRect]);)
METHOD(NSView, convertRectToBacking, PARSE_RECT, appkit_return_rect(return_value, [THIS_VIEW convertRectToBacking:v]);)
METHOD(NSView, convertSizeToBacking, PARSE_SIZE, appkit_return_size(return_value, [THIS_VIEW convertSizeToBacking:v]);)
METHOD(NSView, setNeedsDisplayInRect, PARSE_RECT, [THIS_VIEW setNeedsDisplayInRect:v];)
VOID_METHOD(NSView, NSView, displayIfNeeded, displayIfNeeded)
ENUM_GET(NSView, NSView, layerContentsRedrawPolicy, layerContentsRedrawPolicy, appkit_ce_NSViewLayerContentsRedrawPolicy, false)
ENUM_SET(NSView, NSView, setLayerContentsRedrawPolicy, setLayerContentsRedrawPolicy, appkit_ce_NSViewLayerContentsRedrawPolicy, NSViewLayerContentsRedrawPolicy)

ZEND_METHOD(NSView, displayLinkWithTargetSelector)
{
	zend_object *target;
	zend_string *selector;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(target, appkit_ce_NSObject)
		Z_PARAM_STR(selector)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		if (@available(macOS 14.0, *)) {
			appkit_box_objc(return_value, [THIS_VIEW displayLinkWithTarget:APPKIT_ID(target) selector:sel_registerName(ZSTR_VAL(selector))]);
		} else {
			zend_throw_exception(appkit_ce_AppKitException, "NSView::displayLinkWithTargetSelector() needs macOS 14", 0);
			RETURN_THROWS();
		}
	APPKIT_END
}

