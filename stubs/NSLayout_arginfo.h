/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: c5d04cda482a47f72497f73cd30bfb64d6d4dc70 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_NSEdgeInsets___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, top, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, left, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, bottom, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, right, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSLayoutAnchor_constraintEqualToAnchor, 0, 1, NSLayoutConstraint, 0)
	ZEND_ARG_OBJ_INFO(0, anchor, NSLayoutAnchor, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSLayoutAnchor_constraintEqualToAnchorConstant, 0, 2, NSLayoutConstraint, 0)
	ZEND_ARG_OBJ_INFO(0, anchor, NSLayoutAnchor, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSLayoutAnchor_constraintGreaterThanOrEqualToAnchor arginfo_class_NSLayoutAnchor_constraintEqualToAnchor

#define arginfo_class_NSLayoutAnchor_constraintGreaterThanOrEqualToAnchorConstant arginfo_class_NSLayoutAnchor_constraintEqualToAnchorConstant

#define arginfo_class_NSLayoutAnchor_constraintLessThanOrEqualToAnchor arginfo_class_NSLayoutAnchor_constraintEqualToAnchor

#define arginfo_class_NSLayoutAnchor_constraintLessThanOrEqualToAnchorConstant arginfo_class_NSLayoutAnchor_constraintEqualToAnchorConstant

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSLayoutAnchor_constraintEqualToConstant, 0, 1, NSLayoutConstraint, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSLayoutAnchor_constraintGreaterThanOrEqualToConstant arginfo_class_NSLayoutAnchor_constraintEqualToConstant

#define arginfo_class_NSLayoutAnchor_constraintLessThanOrEqualToConstant arginfo_class_NSLayoutAnchor_constraintEqualToConstant

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSLayoutConstraint_activateConstraints, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, constraints, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSLayoutConstraint_deactivateConstraints arginfo_class_NSLayoutConstraint_activateConstraints

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSLayoutConstraint_isActive, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSLayoutConstraint_setActive, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, active, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSLayoutConstraint_constant, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSLayoutConstraint_setConstant, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSLayoutConstraint_priority arginfo_class_NSLayoutConstraint_constant

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSLayoutConstraint_setPriority, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSEdgeInsets, __construct);
ZEND_METHOD(NSLayoutAnchor, constraintEqualToAnchor);
ZEND_METHOD(NSLayoutAnchor, constraintEqualToAnchorConstant);
ZEND_METHOD(NSLayoutAnchor, constraintGreaterThanOrEqualToAnchor);
ZEND_METHOD(NSLayoutAnchor, constraintGreaterThanOrEqualToAnchorConstant);
ZEND_METHOD(NSLayoutAnchor, constraintLessThanOrEqualToAnchor);
ZEND_METHOD(NSLayoutAnchor, constraintLessThanOrEqualToAnchorConstant);
ZEND_METHOD(NSLayoutAnchor, constraintEqualToConstant);
ZEND_METHOD(NSLayoutAnchor, constraintGreaterThanOrEqualToConstant);
ZEND_METHOD(NSLayoutAnchor, constraintLessThanOrEqualToConstant);
ZEND_METHOD(NSLayoutConstraint, activateConstraints);
ZEND_METHOD(NSLayoutConstraint, deactivateConstraints);
ZEND_METHOD(NSLayoutConstraint, isActive);
ZEND_METHOD(NSLayoutConstraint, setActive);
ZEND_METHOD(NSLayoutConstraint, constant);
ZEND_METHOD(NSLayoutConstraint, setConstant);
ZEND_METHOD(NSLayoutConstraint, priority);
ZEND_METHOD(NSLayoutConstraint, setPriority);

static const zend_function_entry class_NSEdgeInsets_methods[] = {
	ZEND_ME(NSEdgeInsets, __construct, arginfo_class_NSEdgeInsets___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSLayoutAnchor_methods[] = {
	ZEND_ME(NSLayoutAnchor, constraintEqualToAnchor, arginfo_class_NSLayoutAnchor_constraintEqualToAnchor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutAnchor, constraintEqualToAnchorConstant, arginfo_class_NSLayoutAnchor_constraintEqualToAnchorConstant, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutAnchor, constraintGreaterThanOrEqualToAnchor, arginfo_class_NSLayoutAnchor_constraintGreaterThanOrEqualToAnchor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutAnchor, constraintGreaterThanOrEqualToAnchorConstant, arginfo_class_NSLayoutAnchor_constraintGreaterThanOrEqualToAnchorConstant, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutAnchor, constraintLessThanOrEqualToAnchor, arginfo_class_NSLayoutAnchor_constraintLessThanOrEqualToAnchor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutAnchor, constraintLessThanOrEqualToAnchorConstant, arginfo_class_NSLayoutAnchor_constraintLessThanOrEqualToAnchorConstant, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutAnchor, constraintEqualToConstant, arginfo_class_NSLayoutAnchor_constraintEqualToConstant, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutAnchor, constraintGreaterThanOrEqualToConstant, arginfo_class_NSLayoutAnchor_constraintGreaterThanOrEqualToConstant, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutAnchor, constraintLessThanOrEqualToConstant, arginfo_class_NSLayoutAnchor_constraintLessThanOrEqualToConstant, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSLayoutConstraint_methods[] = {
	ZEND_ME(NSLayoutConstraint, activateConstraints, arginfo_class_NSLayoutConstraint_activateConstraints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSLayoutConstraint, deactivateConstraints, arginfo_class_NSLayoutConstraint_deactivateConstraints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSLayoutConstraint, isActive, arginfo_class_NSLayoutConstraint_isActive, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutConstraint, setActive, arginfo_class_NSLayoutConstraint_setActive, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutConstraint, constant, arginfo_class_NSLayoutConstraint_constant, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutConstraint, setConstant, arginfo_class_NSLayoutConstraint_setConstant, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutConstraint, priority, arginfo_class_NSLayoutConstraint_priority, ZEND_ACC_PUBLIC)
	ZEND_ME(NSLayoutConstraint, setPriority, arginfo_class_NSLayoutConstraint_setPriority, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSEdgeInsets(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSEdgeInsets", class_NSEdgeInsets_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_top_default_value;
	ZVAL_DOUBLE(&property_top_default_value, 0.0);
	zend_string *property_top_name = zend_string_init("top", sizeof("top") - 1, 1);
	zend_declare_typed_property(class_entry, property_top_name, &property_top_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_top_name);

	zval property_left_default_value;
	ZVAL_DOUBLE(&property_left_default_value, 0.0);
	zend_string *property_left_name = zend_string_init("left", sizeof("left") - 1, 1);
	zend_declare_typed_property(class_entry, property_left_name, &property_left_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_left_name);

	zval property_bottom_default_value;
	ZVAL_DOUBLE(&property_bottom_default_value, 0.0);
	zend_string *property_bottom_name = zend_string_init("bottom", sizeof("bottom") - 1, 1);
	zend_declare_typed_property(class_entry, property_bottom_name, &property_bottom_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_bottom_name);

	zval property_right_default_value;
	ZVAL_DOUBLE(&property_right_default_value, 0.0);
	zend_string *property_right_name = zend_string_init("right", sizeof("right") - 1, 1);
	zend_declare_typed_property(class_entry, property_right_name, &property_right_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_right_name);

	return class_entry;
}

static zend_class_entry *register_class_NSLayoutAnchor(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSLayoutAnchor", class_NSLayoutAnchor_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSLayoutConstraint(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSLayoutConstraint", class_NSLayoutConstraint_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
