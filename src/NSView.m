#include "runtime.h"
#include "controls.h"
#import <QuartzCore/QuartzCore.h>
#include "../stubs/NSView_arginfo.h"

_Static_assert(NSViewLayerContentsRedrawNever == 0 && NSViewLayerContentsRedrawOnSetNeedsDisplay == 1 && NSViewLayerContentsRedrawDuringViewResize == 2
	&& NSViewLayerContentsRedrawBeforeViewResize == 3 && NSViewLayerContentsRedrawCrossfade == 4, "NSViewLayerContentsRedrawPolicy values moved");

void appkit_register_NSView(int module_number)
{
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
APPKIT_VIEW_BOOL_GET(isHiddenOrHasHiddenAncestor, isHiddenOrHasHiddenAncestor) /* binding:main-thread-nsview-is-hidden-or-has-hidden-ancestor */
APPKIT_VIEW_ANCHOR(nextKeyView, nextKeyView) /* binding:main-thread-nsview-next-key-view */

ZEND_METHOD(NSView, setNextKeyView)
{
	zend_object *next = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(next, appkit_ce_NSView)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nsview-set-next-key-view */

	APPKIT_BEGIN
		[THIS_VIEW setNextKeyView:(next != NULL ? (NSView *) APPKIT_ID(next) : nil)];
	APPKIT_END
}
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
		THIS_VIEW.layer = layer != NULL ? (CALayer *) APPKIT_ID(layer) : nil;
	APPKIT_END
}
APPKIT_VIEW_BOOL_GET(postsFrameChangedNotifications, postsFrameChangedNotifications)
APPKIT_VIEW_BOOL_SET(setPostsFrameChangedNotifications, setPostsFrameChangedNotifications)
APPKIT_VIEW_BOOL_GET(postsBoundsChangedNotifications, postsBoundsChangedNotifications)
APPKIT_VIEW_BOOL_SET(setPostsBoundsChangedNotifications, setPostsBoundsChangedNotifications)
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
		appkit_box_objc(return_value, [THIS_VIEW displayLinkWithTarget:APPKIT_ID(target) selector:sel_registerName(ZSTR_VAL(selector))]);
	APPKIT_END
}

