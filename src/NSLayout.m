#include "runtime.h"
#include "../stubs/NSLayout_arginfo.h"

void appkit_register_NSLayout(void)
{
	appkit_ce_NSEdgeInsets = register_class_NSEdgeInsets();

	appkit_ce_NSLayoutAnchor = register_class_NSLayoutAnchor(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSLayoutAnchor);
	appkit_map_objc_class("NSLayoutAnchor", appkit_ce_NSLayoutAnchor);
	appkit_map_objc_class("NSLayoutDimension", appkit_ce_NSLayoutAnchor);
	appkit_map_objc_class("NSLayoutXAxisAnchor", appkit_ce_NSLayoutAnchor);
	appkit_map_objc_class("NSLayoutYAxisAnchor", appkit_ce_NSLayoutAnchor);

	appkit_ce_NSLayoutConstraint = register_class_NSLayoutConstraint(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSLayoutConstraint);
	appkit_map_objc_class("NSLayoutConstraint", appkit_ce_NSLayoutConstraint);
}

bool appkit_edge_insets_from(zend_object *insets, uint32_t arg_num, NSEdgeInsets *out)
{
	double v[4];

	for (int i = 0; i < 4; i++) {
		zval *prop = OBJ_PROP_NUM(insets, i);

		if (Z_TYPE_P(prop) != IS_DOUBLE) {
			zend_argument_value_error(arg_num, "must have every property set");
			return false;
		}
		v[i] = Z_DVAL_P(prop);
	}
	*out = NSEdgeInsetsMake(v[0], v[1], v[2], v[3]);
	return true;
}

ZEND_METHOD(NSEdgeInsets, __construct)
{
	double top = 0.0;
	double left = 0.0;
	double bottom = 0.0;
	double right = 0.0;

	ZEND_PARSE_PARAMETERS_START(0, 4)
		Z_PARAM_OPTIONAL
		Z_PARAM_DOUBLE(top)
		Z_PARAM_DOUBLE(left)
		Z_PARAM_DOUBLE(bottom)
		Z_PARAM_DOUBLE(right)
	ZEND_PARSE_PARAMETERS_END();

	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 0), top);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 1), left);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 2), bottom);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 3), right);
}

#define THIS_ANCHOR ((NSLayoutAnchor *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))
#define THIS_CONSTRAINT ((NSLayoutConstraint *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSLayoutAnchor, constraintEqualToAnchor)
{
	zend_object *anchor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(anchor, appkit_ce_NSLayoutAnchor)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_ANCHOR constraintEqualToAnchor:(NSLayoutAnchor *) APPKIT_ID(anchor)]);
	APPKIT_END
}

ZEND_METHOD(NSLayoutAnchor, constraintEqualToAnchorConstant)
{
	zend_object *anchor;
	double constant;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(anchor, appkit_ce_NSLayoutAnchor)
		Z_PARAM_DOUBLE(constant)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_ANCHOR constraintEqualToAnchor:(NSLayoutAnchor *) APPKIT_ID(anchor) constant:constant]);
	APPKIT_END
}

#define APPKIT_ANCHOR_TO_ANCHOR(name, sel) \
ZEND_METHOD(NSLayoutAnchor, name) \
{ \
	zend_object *anchor; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_OBJ_OF_CLASS(anchor, appkit_ce_NSLayoutAnchor) \
	ZEND_PARSE_PARAMETERS_END(); \
	APPKIT_REQUIRE_MAIN_THREAD(); \
	APPKIT_BEGIN \
		appkit_box_objc(return_value, [THIS_ANCHOR sel:(NSLayoutAnchor *) APPKIT_ID(anchor)]); \
	APPKIT_END \
}

#define APPKIT_ANCHOR_TO_ANCHOR_CONSTANT(name, sel) \
ZEND_METHOD(NSLayoutAnchor, name) \
{ \
	zend_object *anchor; \
	double constant; \
	ZEND_PARSE_PARAMETERS_START(2, 2) \
		Z_PARAM_OBJ_OF_CLASS(anchor, appkit_ce_NSLayoutAnchor) \
		Z_PARAM_DOUBLE(constant) \
	ZEND_PARSE_PARAMETERS_END(); \
	APPKIT_REQUIRE_MAIN_THREAD(); \
	APPKIT_BEGIN \
		appkit_box_objc(return_value, [THIS_ANCHOR sel:(NSLayoutAnchor *) APPKIT_ID(anchor) constant:constant]); \
	APPKIT_END \
}

APPKIT_ANCHOR_TO_ANCHOR(constraintGreaterThanOrEqualToAnchor, constraintGreaterThanOrEqualToAnchor)
APPKIT_ANCHOR_TO_ANCHOR_CONSTANT(constraintGreaterThanOrEqualToAnchorConstant, constraintGreaterThanOrEqualToAnchor)
APPKIT_ANCHOR_TO_ANCHOR(constraintLessThanOrEqualToAnchor, constraintLessThanOrEqualToAnchor)
APPKIT_ANCHOR_TO_ANCHOR_CONSTANT(constraintLessThanOrEqualToAnchorConstant, constraintLessThanOrEqualToAnchor)

/* Only an NSLayoutDimension answers the constant-only constraints; an axis anchor would raise NSInvalidArgumentException. */
static bool appkit_require_dimension(zend_execute_data *execute_data)
{
	if ([THIS_ANCHOR isKindOfClass:[NSLayoutDimension class]]) {
		return true;
	}

	zend_throw_exception_ex(appkit_ce_AppKitException, 0, "NSLayoutAnchor::%s() needs a dimension anchor (widthAnchor or heightAnchor), %s given",
		ZSTR_VAL(EX(func)->common.function_name), object_getClassName(THIS_ANCHOR));
	return false;
}

ZEND_METHOD(NSLayoutAnchor, constraintEqualToConstant)
{
	double constant;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(constant)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_require_dimension(execute_data)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		appkit_box_objc(return_value, [(NSLayoutDimension *) THIS_ANCHOR constraintEqualToConstant:constant]);
	APPKIT_END
}

ZEND_METHOD(NSLayoutAnchor, constraintGreaterThanOrEqualToConstant)
{
	double constant;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(constant)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_require_dimension(execute_data)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		appkit_box_objc(return_value, [(NSLayoutDimension *) THIS_ANCHOR constraintGreaterThanOrEqualToConstant:constant]);
	APPKIT_END
}

ZEND_METHOD(NSLayoutAnchor, constraintLessThanOrEqualToConstant)
{
	double constant;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(constant)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_require_dimension(execute_data)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		appkit_box_objc(return_value, [(NSLayoutDimension *) THIS_ANCHOR constraintLessThanOrEqualToConstant:constant]);
	APPKIT_END
}

/* A PHP array of NSLayoutConstraint wrappers as an autoreleased NSArray; nil after a type error. */
static NSArray *appkit_constraints_from(HashTable *ht, uint32_t arg_num)
{
	NSMutableArray *constraints = [NSMutableArray arrayWithCapacity:zend_hash_num_elements(ht)];
	zval *value;

	ZEND_HASH_FOREACH_VAL(ht, value) {
		ZVAL_DEREF(value);
		if (Z_TYPE_P(value) != IS_OBJECT || !instanceof_function(Z_OBJCE_P(value), appkit_ce_NSLayoutConstraint)) {
			zend_argument_type_error(arg_num, "must contain only NSLayoutConstraint objects, %s given", zend_zval_value_name(value));
			return nil;
		}
		[constraints addObject:APPKIT_ID(Z_OBJ_P(value))];
	} ZEND_HASH_FOREACH_END();

	return constraints;
}

ZEND_METHOD(NSLayoutConstraint, activateConstraints)
{
	HashTable *ht;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(ht)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSArray *constraints = appkit_constraints_from(ht, 1);
		if (constraints == nil) {
			RETURN_THROWS();
		}
		[NSLayoutConstraint activateConstraints:constraints];
	APPKIT_END
}

ZEND_METHOD(NSLayoutConstraint, deactivateConstraints)
{
	HashTable *ht;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(ht)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSArray *constraints = appkit_constraints_from(ht, 1);
		if (constraints == nil) {
			RETURN_THROWS();
		}
		[NSLayoutConstraint deactivateConstraints:constraints];
	APPKIT_END
}

ZEND_METHOD(NSLayoutConstraint, isActive)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_CONSTRAINT isActive]);
	APPKIT_END
}

ZEND_METHOD(NSLayoutConstraint, setActive)
{
	bool active;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(active)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_CONSTRAINT setActive:active];
	APPKIT_END
}

ZEND_METHOD(NSLayoutConstraint, constant)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_DOUBLE([THIS_CONSTRAINT constant]);
	APPKIT_END
}

ZEND_METHOD(NSLayoutConstraint, setConstant)
{
	double constant;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(constant)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_CONSTRAINT setConstant:constant];
	APPKIT_END
}

ZEND_METHOD(NSLayoutConstraint, priority)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_DOUBLE([THIS_CONSTRAINT priority]);
	APPKIT_END
}

ZEND_METHOD(NSLayoutConstraint, setPriority)
{
	double priority;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(priority)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_CONSTRAINT setPriority:(NSLayoutPriority) priority];
	APPKIT_END
}

void appkit_return_edge_insets(zval *rv, NSEdgeInsets insets)
{
	object_init_ex(rv, appkit_ce_NSEdgeInsets);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(rv), 0), insets.top);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(rv), 1), insets.left);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(rv), 2), insets.bottom);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(rv), 3), insets.right);
}

/* A PHP array of NSView wrappers as an autoreleased NSArray; a null element becomes null_placeholder when one is given. nil after a type error. */
NSArray *appkit_view_array(HashTable *ht, uint32_t arg_num, id null_placeholder)
{
	NSMutableArray *views = [NSMutableArray arrayWithCapacity:zend_hash_num_elements(ht)];
	zval *value;

	ZEND_HASH_FOREACH_VAL(ht, value) {
		ZVAL_DEREF(value);
		if (null_placeholder != nil && Z_TYPE_P(value) == IS_NULL) {
			[views addObject:null_placeholder];
		} else if (Z_TYPE_P(value) == IS_OBJECT && instanceof_function(Z_OBJCE_P(value), appkit_ce_NSView)) {
			[views addObject:APPKIT_ID(Z_OBJ_P(value))];
		} else {
			zend_argument_type_error(arg_num, null_placeholder != nil ? "must contain only NSView objects or null, %s given" : "must contain only NSView objects, %s given", zend_zval_value_name(value));
			return nil;
		}
	} ZEND_HASH_FOREACH_END();

	return views;
}
