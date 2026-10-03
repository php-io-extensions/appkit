#include "runtime.h"
#import <QuartzCore/QuartzCore.h>
#include "../stubs/NSView_arginfo.h"

void appkit_register_NSView(int module_number)
{
	register_NSView_symbols(module_number);
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
		appkit_box_objc(return_value, [contents isKindOfClass:[NSImage class]] ? contents : nil);
	APPKIT_END
}

ZEND_METHOD(NSView, setLayerContents)
{
	zend_object *image = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(image, appkit_ce_NSImage)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_VIEW setWantsLayer:YES];
		THIS_VIEW.layer.contents = image == NULL ? nil : APPKIT_ID(image);
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
APPKIT_VIEW_BOOL_GET(postsFrameChangedNotifications, postsFrameChangedNotifications)
APPKIT_VIEW_BOOL_SET(setPostsFrameChangedNotifications, setPostsFrameChangedNotifications)
APPKIT_VIEW_ANCHOR(superview, superview)
APPKIT_VIEW_ANCHOR(menu, menu)
APPKIT_VIEW_ANCHOR(widthAnchor, widthAnchor)
APPKIT_VIEW_ANCHOR(heightAnchor, heightAnchor)
APPKIT_VIEW_ANCHOR(leadingAnchor, leadingAnchor)
APPKIT_VIEW_ANCHOR(trailingAnchor, trailingAnchor)
APPKIT_VIEW_ANCHOR(topAnchor, topAnchor)
APPKIT_VIEW_ANCHOR(bottomAnchor, bottomAnchor)
APPKIT_VIEW_ANCHOR(centerXAnchor, centerXAnchor)
APPKIT_VIEW_ANCHOR(centerYAnchor, centerYAnchor)
