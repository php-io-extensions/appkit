#include "runtime.h"
#include "controls.h"
#include "../stubs/NSStackView_arginfo.h"

_Static_assert(NSUserInterfaceLayoutOrientationVertical == 1, "NSUserInterfaceLayoutOrientation values moved");
_Static_assert(NSLayoutConstraintOrientationVertical == 1, "NSLayoutConstraintOrientation values moved");
_Static_assert(NSStackViewGravityTop == 1 && NSStackViewGravityCenter == 2 && NSStackViewGravityBottom == 3, "NSStackViewGravity values moved");
_Static_assert(NSLayoutAttributeNotAnAttribute == 0 && NSLayoutAttributeLeft == 1 && NSLayoutAttributeRight == 2 && NSLayoutAttributeTop == 3 && NSLayoutAttributeBottom == 4, "NSLayoutAttribute values moved");
_Static_assert(NSLayoutAttributeLeading == 5 && NSLayoutAttributeTrailing == 6 && NSLayoutAttributeWidth == 7 && NSLayoutAttributeHeight == 8
	&& NSLayoutAttributeCenterX == 9 && NSLayoutAttributeCenterY == 10 && NSLayoutAttributeLastBaseline == 11 && NSLayoutAttributeFirstBaseline == 12, "NSLayoutAttribute values moved");
_Static_assert(NSStackViewDistributionGravityAreas == -1 && NSStackViewDistributionFill == 0 && NSStackViewDistributionFillEqually == 1
	&& NSStackViewDistributionFillProportionally == 2 && NSStackViewDistributionEqualSpacing == 3 && NSStackViewDistributionEqualCentering == 4, "NSStackViewDistribution values moved");

void appkit_register_NSStackView(void)
{
	appkit_ce_NSUserInterfaceLayoutOrientation = register_class_NSUserInterfaceLayoutOrientation();
	appkit_ce_NSLayoutConstraintOrientation = register_class_NSLayoutConstraintOrientation();
	appkit_ce_NSStackViewGravity = register_class_NSStackViewGravity();
	appkit_ce_NSLayoutAttribute = register_class_NSLayoutAttribute();
	appkit_ce_NSStackViewDistribution = register_class_NSStackViewDistribution();

	appkit_ce_NSStackView = register_class_NSStackView(appkit_ce_NSView);
	appkit_object_setup(appkit_ce_NSStackView);
	appkit_map_objc_class("NSStackView", appkit_ce_NSStackView);
}

#define THIS_STACK ((NSStackView *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSStackView, stackViewWithViews)
{
	HashTable *ht;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(ht)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSArray *views = appkit_view_array(ht, 1, nil);
		if (views == nil) {
			RETURN_THROWS();
		}
		appkit_box_objc(return_value, [CALLED stackViewWithViews:views]);
	APPKIT_END
}

#define APPKIT_STACK_ENUM_GET(name, sel, ce) \
ZEND_METHOD(NSStackView, name) { ZEND_PARSE_PARAMETERS_NONE(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN appkit_return_enum(return_value, ce, (zend_long) [THIS_STACK sel], false); APPKIT_END }
#define APPKIT_STACK_ENUM_SET(name, sel, ce, type) \
ZEND_METHOD(NSStackView, name) { zend_object *v; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS(v, ce) ZEND_PARSE_PARAMETERS_END(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN [THIS_STACK sel:(type) appkit_enum_value(v, 0)]; APPKIT_END }
#define APPKIT_STACK_DOUBLE_GET(name, sel) \
ZEND_METHOD(NSStackView, name) { ZEND_PARSE_PARAMETERS_NONE(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN RETURN_DOUBLE([THIS_STACK sel]); APPKIT_END }
#define APPKIT_STACK_DOUBLE_SET(name, sel) \
ZEND_METHOD(NSStackView, name) { double v; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_DOUBLE(v) ZEND_PARSE_PARAMETERS_END(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN [THIS_STACK sel:v]; APPKIT_END }
#define APPKIT_STACK_VIEW_ARG(name, sel) \
ZEND_METHOD(NSStackView, name) { zend_object *v; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS(v, appkit_ce_NSView) ZEND_PARSE_PARAMETERS_END(); APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN [THIS_STACK sel:(NSView *) APPKIT_ID(v)]; APPKIT_END }

APPKIT_STACK_ENUM_GET(orientation, orientation, appkit_ce_NSUserInterfaceLayoutOrientation)
APPKIT_STACK_ENUM_SET(setOrientation, setOrientation, appkit_ce_NSUserInterfaceLayoutOrientation, NSUserInterfaceLayoutOrientation)
APPKIT_STACK_ENUM_GET(alignment, alignment, appkit_ce_NSLayoutAttribute)
APPKIT_STACK_ENUM_SET(setAlignment, setAlignment, appkit_ce_NSLayoutAttribute, NSLayoutAttribute)
APPKIT_STACK_ENUM_GET(distribution, distribution, appkit_ce_NSStackViewDistribution)
APPKIT_STACK_ENUM_SET(setDistribution, setDistribution, appkit_ce_NSStackViewDistribution, NSStackViewDistribution)
APPKIT_STACK_DOUBLE_GET(spacing, spacing)
APPKIT_STACK_DOUBLE_SET(setSpacing, setSpacing)
APPKIT_STACK_VIEW_ARG(addArrangedSubview, addArrangedSubview)
APPKIT_STACK_VIEW_ARG(removeArrangedSubview, removeArrangedSubview)

ZEND_METHOD(NSStackView, edgeInsets)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_return_edge_insets(return_value, [THIS_STACK edgeInsets]);
	APPKIT_END
}

ZEND_METHOD(NSStackView, setEdgeInsets)
{
	zend_object *insets;
	NSEdgeInsets value;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(insets, appkit_ce_NSEdgeInsets)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_edge_insets_from(insets, 1, &value)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[THIS_STACK setEdgeInsets:value];
	APPKIT_END
}

ZEND_METHOD(NSStackView, insertArrangedSubviewAtIndex)
{
	zend_object *view;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(view, appkit_ce_NSView)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_STACK insertArrangedSubview:(NSView *) APPKIT_ID(view) atIndex:(NSInteger) index];
	APPKIT_END
}

ZEND_METHOD(NSStackView, arrangedSubviews)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		array_init(return_value);
		for (NSView *view in [THIS_STACK arrangedSubviews]) {
			zval boxed;
			appkit_box_objc(&boxed, view);
			add_next_index_zval(return_value, &boxed);
		}
	APPKIT_END
}

ZEND_METHOD(NSStackView, setCustomSpacingAfterView)
{
	double spacing;
	zend_object *view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(spacing)
		Z_PARAM_OBJ_OF_CLASS(view, appkit_ce_NSView)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_STACK setCustomSpacing:spacing afterView:(NSView *) APPKIT_ID(view)];
	APPKIT_END
}

ZEND_METHOD(NSStackView, setVisibilityPriorityForView)
{
	double priority;
	zend_object *view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(priority)
		Z_PARAM_OBJ_OF_CLASS(view, appkit_ce_NSView)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_STACK setVisibilityPriority:(NSStackViewVisibilityPriority) priority forView:(NSView *) APPKIT_ID(view)];
	APPKIT_END
}

ZEND_METHOD(NSStackView, setHuggingPriorityForOrientation)
{
	double priority;
	zend_object *orientation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(priority)
		Z_PARAM_OBJ_OF_CLASS(orientation, appkit_ce_NSLayoutConstraintOrientation)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_STACK setHuggingPriority:(NSLayoutPriority) priority forOrientation:(NSLayoutConstraintOrientation) appkit_enum_value(orientation, 0)];
	APPKIT_END
}

METHOD(NSStackView, customSpacingAfterView, PARSE_OBJ(appkit_ce_NSView), RETURN_DOUBLE([SELF(NSStackView) customSpacingAfterView:(NSView *) APPKIT_ID(v)]);)
METHOD(NSStackView, visibilityPriorityForView, PARSE_OBJ(appkit_ce_NSView), RETURN_DOUBLE([SELF(NSStackView) visibilityPriorityForView:(NSView *) APPKIT_ID(v)]);)
METHOD(NSStackView, huggingPriorityForOrientation, PARSE_OBJ(appkit_ce_NSLayoutConstraintOrientation),
	RETURN_DOUBLE([SELF(NSStackView) huggingPriorityForOrientation:(NSLayoutConstraintOrientation) appkit_enum_value(v, 0)]);)
