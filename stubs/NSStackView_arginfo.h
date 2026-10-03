/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: ab694a991e9f8493f7cf4949a693283e328eca65 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_stackViewWithViews, 0, 1, IS_STATIC, 0)
	ZEND_ARG_TYPE_INFO(0, views, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSStackView_orientation, 0, 0, NSUserInterfaceLayoutOrientation, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_setOrientation, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, orientation, NSUserInterfaceLayoutOrientation, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_spacing, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_setSpacing, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSStackView_edgeInsets, 0, 0, NSEdgeInsets, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_setEdgeInsets, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, insets, NSEdgeInsets, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSStackView_alignment, 0, 0, NSLayoutAttribute, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_setAlignment, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, alignment, NSLayoutAttribute, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSStackView_distribution, 0, 0, NSStackViewDistribution, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_setDistribution, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, distribution, NSStackViewDistribution, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_addArrangedSubview, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_insertArrangedSubviewAtIndex, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSStackView_removeArrangedSubview arginfo_class_NSStackView_addArrangedSubview

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_arrangedSubviews, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_customSpacingAfterView, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_setCustomSpacingAfterView, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSStackView_visibilityPriorityForView arginfo_class_NSStackView_customSpacingAfterView

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_setVisibilityPriorityForView, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_huggingPriorityForOrientation, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, orientation, NSLayoutConstraintOrientation, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSStackView_setHuggingPriorityForOrientation, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, orientation, NSLayoutConstraintOrientation, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSStackView, stackViewWithViews);
ZEND_METHOD(NSStackView, orientation);
ZEND_METHOD(NSStackView, setOrientation);
ZEND_METHOD(NSStackView, spacing);
ZEND_METHOD(NSStackView, setSpacing);
ZEND_METHOD(NSStackView, edgeInsets);
ZEND_METHOD(NSStackView, setEdgeInsets);
ZEND_METHOD(NSStackView, alignment);
ZEND_METHOD(NSStackView, setAlignment);
ZEND_METHOD(NSStackView, distribution);
ZEND_METHOD(NSStackView, setDistribution);
ZEND_METHOD(NSStackView, addArrangedSubview);
ZEND_METHOD(NSStackView, insertArrangedSubviewAtIndex);
ZEND_METHOD(NSStackView, removeArrangedSubview);
ZEND_METHOD(NSStackView, arrangedSubviews);
ZEND_METHOD(NSStackView, customSpacingAfterView);
ZEND_METHOD(NSStackView, setCustomSpacingAfterView);
ZEND_METHOD(NSStackView, visibilityPriorityForView);
ZEND_METHOD(NSStackView, setVisibilityPriorityForView);
ZEND_METHOD(NSStackView, huggingPriorityForOrientation);
ZEND_METHOD(NSStackView, setHuggingPriorityForOrientation);

static const zend_function_entry class_NSStackView_methods[] = {
	ZEND_ME(NSStackView, stackViewWithViews, arginfo_class_NSStackView_stackViewWithViews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSStackView, orientation, arginfo_class_NSStackView_orientation, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, setOrientation, arginfo_class_NSStackView_setOrientation, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, spacing, arginfo_class_NSStackView_spacing, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, setSpacing, arginfo_class_NSStackView_setSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, edgeInsets, arginfo_class_NSStackView_edgeInsets, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, setEdgeInsets, arginfo_class_NSStackView_setEdgeInsets, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, alignment, arginfo_class_NSStackView_alignment, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, setAlignment, arginfo_class_NSStackView_setAlignment, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, distribution, arginfo_class_NSStackView_distribution, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, setDistribution, arginfo_class_NSStackView_setDistribution, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, addArrangedSubview, arginfo_class_NSStackView_addArrangedSubview, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, insertArrangedSubviewAtIndex, arginfo_class_NSStackView_insertArrangedSubviewAtIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, removeArrangedSubview, arginfo_class_NSStackView_removeArrangedSubview, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, arrangedSubviews, arginfo_class_NSStackView_arrangedSubviews, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, customSpacingAfterView, arginfo_class_NSStackView_customSpacingAfterView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, setCustomSpacingAfterView, arginfo_class_NSStackView_setCustomSpacingAfterView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, visibilityPriorityForView, arginfo_class_NSStackView_visibilityPriorityForView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, setVisibilityPriorityForView, arginfo_class_NSStackView_setVisibilityPriorityForView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, huggingPriorityForOrientation, arginfo_class_NSStackView_huggingPriorityForOrientation, ZEND_ACC_PUBLIC)
	ZEND_ME(NSStackView, setHuggingPriorityForOrientation, arginfo_class_NSStackView_setHuggingPriorityForOrientation, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSUserInterfaceLayoutOrientation(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSUserInterfaceLayoutOrientation", IS_LONG, NULL);

	zval enum_case_HORIZONTAL_value;
	ZVAL_LONG(&enum_case_HORIZONTAL_value, 0);
	zend_enum_add_case_cstr(class_entry, "HORIZONTAL", &enum_case_HORIZONTAL_value);

	zval enum_case_VERTICAL_value;
	ZVAL_LONG(&enum_case_VERTICAL_value, 1);
	zend_enum_add_case_cstr(class_entry, "VERTICAL", &enum_case_VERTICAL_value);

	return class_entry;
}

static zend_class_entry *register_class_NSLayoutConstraintOrientation(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSLayoutConstraintOrientation", IS_LONG, NULL);

	zval enum_case_HORIZONTAL_value;
	ZVAL_LONG(&enum_case_HORIZONTAL_value, 0);
	zend_enum_add_case_cstr(class_entry, "HORIZONTAL", &enum_case_HORIZONTAL_value);

	zval enum_case_VERTICAL_value;
	ZVAL_LONG(&enum_case_VERTICAL_value, 1);
	zend_enum_add_case_cstr(class_entry, "VERTICAL", &enum_case_VERTICAL_value);

	return class_entry;
}

static zend_class_entry *register_class_NSStackViewGravity(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSStackViewGravity", IS_LONG, NULL);

	zval enum_case_TOP_value;
	ZVAL_LONG(&enum_case_TOP_value, 1);
	zend_enum_add_case_cstr(class_entry, "TOP", &enum_case_TOP_value);

	zval enum_case_CENTER_value;
	ZVAL_LONG(&enum_case_CENTER_value, 2);
	zend_enum_add_case_cstr(class_entry, "CENTER", &enum_case_CENTER_value);

	zval enum_case_BOTTOM_value;
	ZVAL_LONG(&enum_case_BOTTOM_value, 3);
	zend_enum_add_case_cstr(class_entry, "BOTTOM", &enum_case_BOTTOM_value);

	return class_entry;
}

static zend_class_entry *register_class_NSLayoutAttribute(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSLayoutAttribute", IS_LONG, NULL);

	zval enum_case_NOT_AN_ATTRIBUTE_value;
	ZVAL_LONG(&enum_case_NOT_AN_ATTRIBUTE_value, 0);
	zend_enum_add_case_cstr(class_entry, "NOT_AN_ATTRIBUTE", &enum_case_NOT_AN_ATTRIBUTE_value);

	zval enum_case_LEFT_value;
	ZVAL_LONG(&enum_case_LEFT_value, 1);
	zend_enum_add_case_cstr(class_entry, "LEFT", &enum_case_LEFT_value);

	zval enum_case_RIGHT_value;
	ZVAL_LONG(&enum_case_RIGHT_value, 2);
	zend_enum_add_case_cstr(class_entry, "RIGHT", &enum_case_RIGHT_value);

	zval enum_case_TOP_value;
	ZVAL_LONG(&enum_case_TOP_value, 3);
	zend_enum_add_case_cstr(class_entry, "TOP", &enum_case_TOP_value);

	zval enum_case_BOTTOM_value;
	ZVAL_LONG(&enum_case_BOTTOM_value, 4);
	zend_enum_add_case_cstr(class_entry, "BOTTOM", &enum_case_BOTTOM_value);

	zval enum_case_LEADING_value;
	ZVAL_LONG(&enum_case_LEADING_value, 5);
	zend_enum_add_case_cstr(class_entry, "LEADING", &enum_case_LEADING_value);

	zval enum_case_TRAILING_value;
	ZVAL_LONG(&enum_case_TRAILING_value, 6);
	zend_enum_add_case_cstr(class_entry, "TRAILING", &enum_case_TRAILING_value);

	zval enum_case_WIDTH_value;
	ZVAL_LONG(&enum_case_WIDTH_value, 7);
	zend_enum_add_case_cstr(class_entry, "WIDTH", &enum_case_WIDTH_value);

	zval enum_case_HEIGHT_value;
	ZVAL_LONG(&enum_case_HEIGHT_value, 8);
	zend_enum_add_case_cstr(class_entry, "HEIGHT", &enum_case_HEIGHT_value);

	zval enum_case_CENTER_X_value;
	ZVAL_LONG(&enum_case_CENTER_X_value, 9);
	zend_enum_add_case_cstr(class_entry, "CENTER_X", &enum_case_CENTER_X_value);

	zval enum_case_CENTER_Y_value;
	ZVAL_LONG(&enum_case_CENTER_Y_value, 10);
	zend_enum_add_case_cstr(class_entry, "CENTER_Y", &enum_case_CENTER_Y_value);

	zval enum_case_LAST_BASELINE_value;
	ZVAL_LONG(&enum_case_LAST_BASELINE_value, 11);
	zend_enum_add_case_cstr(class_entry, "LAST_BASELINE", &enum_case_LAST_BASELINE_value);

	zval enum_case_FIRST_BASELINE_value;
	ZVAL_LONG(&enum_case_FIRST_BASELINE_value, 12);
	zend_enum_add_case_cstr(class_entry, "FIRST_BASELINE", &enum_case_FIRST_BASELINE_value);

	return class_entry;
}

static zend_class_entry *register_class_NSStackViewDistribution(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSStackViewDistribution", IS_LONG, NULL);

	zval enum_case_GRAVITY_AREAS_value;
	ZVAL_LONG(&enum_case_GRAVITY_AREAS_value, -1);
	zend_enum_add_case_cstr(class_entry, "GRAVITY_AREAS", &enum_case_GRAVITY_AREAS_value);

	zval enum_case_FILL_value;
	ZVAL_LONG(&enum_case_FILL_value, 0);
	zend_enum_add_case_cstr(class_entry, "FILL", &enum_case_FILL_value);

	zval enum_case_FILL_EQUALLY_value;
	ZVAL_LONG(&enum_case_FILL_EQUALLY_value, 1);
	zend_enum_add_case_cstr(class_entry, "FILL_EQUALLY", &enum_case_FILL_EQUALLY_value);

	zval enum_case_FILL_PROPORTIONALLY_value;
	ZVAL_LONG(&enum_case_FILL_PROPORTIONALLY_value, 2);
	zend_enum_add_case_cstr(class_entry, "FILL_PROPORTIONALLY", &enum_case_FILL_PROPORTIONALLY_value);

	zval enum_case_EQUAL_SPACING_value;
	ZVAL_LONG(&enum_case_EQUAL_SPACING_value, 3);
	zend_enum_add_case_cstr(class_entry, "EQUAL_SPACING", &enum_case_EQUAL_SPACING_value);

	zval enum_case_EQUAL_CENTERING_value;
	ZVAL_LONG(&enum_case_EQUAL_CENTERING_value, 4);
	zend_enum_add_case_cstr(class_entry, "EQUAL_CENTERING", &enum_case_EQUAL_CENTERING_value);

	return class_entry;
}

static zend_class_entry *register_class_NSStackView(zend_class_entry *class_entry_NSView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSStackView", class_NSStackView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
