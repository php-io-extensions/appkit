/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 17fa59ef50905bb321df9fd1da0c1a2618c25a52 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_isVertical, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_setVertical, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, vertical, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSSplitView_dividerStyle, 0, 0, NSSplitViewDividerStyle, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_setDividerStyle, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, style, NSSplitViewDividerStyle, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_dividerThickness, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSSplitView_arrangesAllSubviews arginfo_class_NSSplitView_isVertical

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_setArrangesAllSubviews, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, arranges, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_addArrangedSubview, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_insertArrangedSubviewAtIndex, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSSplitView_removeArrangedSubview arginfo_class_NSSplitView_addArrangedSubview

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_arrangedSubviews, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_setPositionOfDividerAtIndex, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_adjustSubviews, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_isSubviewCollapsed, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_holdingPriorityForSubviewAtIndex, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSplitView_setHoldingPriorityForSubviewAtIndex, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTabView_addTabViewItem, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, item, NSTabViewItem, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTabView_insertTabViewItemAtIndex, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, tabViewItem, NSTabViewItem, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSTabView_removeTabViewItem arginfo_class_NSTabView_addTabViewItem

#define arginfo_class_NSTabView_tabViewItems arginfo_class_NSSplitView_arrangedSubviews

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTabView_numberOfTabViewItems, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTabView_indexOfTabViewItemWithIdentifier, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTabView_selectTabViewItemWithIdentifier, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSTabView_selectedTabViewItem, 0, 0, NSTabViewItem, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSTabView_delegate, 0, 0, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTabView_setDelegate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, delegate, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTabViewItem_initWithIdentifier, 0, 1, IS_STATIC, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTabViewItem_identifier, 0, 0, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTabViewItem_label, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTabViewItem_setLabel, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSTabViewItem_view, 0, 0, NSView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSTabViewItem_setView, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSTabViewItem_tabView, 0, 0, NSTabView, 1)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSSplitView, isVertical);
ZEND_METHOD(NSSplitView, setVertical);
ZEND_METHOD(NSSplitView, dividerStyle);
ZEND_METHOD(NSSplitView, setDividerStyle);
ZEND_METHOD(NSSplitView, dividerThickness);
ZEND_METHOD(NSSplitView, arrangesAllSubviews);
ZEND_METHOD(NSSplitView, setArrangesAllSubviews);
ZEND_METHOD(NSSplitView, addArrangedSubview);
ZEND_METHOD(NSSplitView, insertArrangedSubviewAtIndex);
ZEND_METHOD(NSSplitView, removeArrangedSubview);
ZEND_METHOD(NSSplitView, arrangedSubviews);
ZEND_METHOD(NSSplitView, setPositionOfDividerAtIndex);
ZEND_METHOD(NSSplitView, adjustSubviews);
ZEND_METHOD(NSSplitView, isSubviewCollapsed);
ZEND_METHOD(NSSplitView, holdingPriorityForSubviewAtIndex);
ZEND_METHOD(NSSplitView, setHoldingPriorityForSubviewAtIndex);
ZEND_METHOD(NSTabView, addTabViewItem);
ZEND_METHOD(NSTabView, insertTabViewItemAtIndex);
ZEND_METHOD(NSTabView, removeTabViewItem);
ZEND_METHOD(NSTabView, tabViewItems);
ZEND_METHOD(NSTabView, numberOfTabViewItems);
ZEND_METHOD(NSTabView, indexOfTabViewItemWithIdentifier);
ZEND_METHOD(NSTabView, selectTabViewItemWithIdentifier);
ZEND_METHOD(NSTabView, selectedTabViewItem);
ZEND_METHOD(NSTabView, delegate);
ZEND_METHOD(NSTabView, setDelegate);
ZEND_METHOD(NSTabViewItem, initWithIdentifier);
ZEND_METHOD(NSTabViewItem, identifier);
ZEND_METHOD(NSTabViewItem, label);
ZEND_METHOD(NSTabViewItem, setLabel);
ZEND_METHOD(NSTabViewItem, view);
ZEND_METHOD(NSTabViewItem, setView);
ZEND_METHOD(NSTabViewItem, tabView);

static const zend_function_entry class_NSSplitView_methods[] = {
	ZEND_ME(NSSplitView, isVertical, arginfo_class_NSSplitView_isVertical, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, setVertical, arginfo_class_NSSplitView_setVertical, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, dividerStyle, arginfo_class_NSSplitView_dividerStyle, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, setDividerStyle, arginfo_class_NSSplitView_setDividerStyle, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, dividerThickness, arginfo_class_NSSplitView_dividerThickness, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, arrangesAllSubviews, arginfo_class_NSSplitView_arrangesAllSubviews, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, setArrangesAllSubviews, arginfo_class_NSSplitView_setArrangesAllSubviews, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, addArrangedSubview, arginfo_class_NSSplitView_addArrangedSubview, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, insertArrangedSubviewAtIndex, arginfo_class_NSSplitView_insertArrangedSubviewAtIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, removeArrangedSubview, arginfo_class_NSSplitView_removeArrangedSubview, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, arrangedSubviews, arginfo_class_NSSplitView_arrangedSubviews, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, setPositionOfDividerAtIndex, arginfo_class_NSSplitView_setPositionOfDividerAtIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, adjustSubviews, arginfo_class_NSSplitView_adjustSubviews, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, isSubviewCollapsed, arginfo_class_NSSplitView_isSubviewCollapsed, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, holdingPriorityForSubviewAtIndex, arginfo_class_NSSplitView_holdingPriorityForSubviewAtIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSplitView, setHoldingPriorityForSubviewAtIndex, arginfo_class_NSSplitView_setHoldingPriorityForSubviewAtIndex, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSTabView_methods[] = {
	ZEND_ME(NSTabView, addTabViewItem, arginfo_class_NSTabView_addTabViewItem, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabView, insertTabViewItemAtIndex, arginfo_class_NSTabView_insertTabViewItemAtIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabView, removeTabViewItem, arginfo_class_NSTabView_removeTabViewItem, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabView, tabViewItems, arginfo_class_NSTabView_tabViewItems, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabView, numberOfTabViewItems, arginfo_class_NSTabView_numberOfTabViewItems, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabView, indexOfTabViewItemWithIdentifier, arginfo_class_NSTabView_indexOfTabViewItemWithIdentifier, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabView, selectTabViewItemWithIdentifier, arginfo_class_NSTabView_selectTabViewItemWithIdentifier, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabView, selectedTabViewItem, arginfo_class_NSTabView_selectedTabViewItem, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabView, delegate, arginfo_class_NSTabView_delegate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabView, setDelegate, arginfo_class_NSTabView_setDelegate, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSTabViewItem_methods[] = {
	ZEND_ME(NSTabViewItem, initWithIdentifier, arginfo_class_NSTabViewItem_initWithIdentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSTabViewItem, identifier, arginfo_class_NSTabViewItem_identifier, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabViewItem, label, arginfo_class_NSTabViewItem_label, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabViewItem, setLabel, arginfo_class_NSTabViewItem_setLabel, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabViewItem, view, arginfo_class_NSTabViewItem_view, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabViewItem, setView, arginfo_class_NSTabViewItem_setView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSTabViewItem, tabView, arginfo_class_NSTabViewItem_tabView, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_NSSplitView_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("NSSplitViewDidResizeSubviewsNotification", appkit_cfstring_constant((CFStringRef) NSSplitViewDidResizeSubviewsNotification), CONST_PERSISTENT);
}

static zend_class_entry *register_class_NSSplitViewDividerStyle(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSSplitViewDividerStyle", IS_LONG, NULL);

	zval enum_case_THICK_value;
	ZVAL_LONG(&enum_case_THICK_value, 1);
	zend_enum_add_case_cstr(class_entry, "THICK", &enum_case_THICK_value);

	zval enum_case_THIN_value;
	ZVAL_LONG(&enum_case_THIN_value, 2);
	zend_enum_add_case_cstr(class_entry, "THIN", &enum_case_THIN_value);

	zval enum_case_PANE_SPLITTER_value;
	ZVAL_LONG(&enum_case_PANE_SPLITTER_value, 3);
	zend_enum_add_case_cstr(class_entry, "PANE_SPLITTER", &enum_case_PANE_SPLITTER_value);

	return class_entry;
}

static zend_class_entry *register_class_NSSplitView(zend_class_entry *class_entry_NSView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSSplitView", class_NSSplitView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSTabView(zend_class_entry *class_entry_NSView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSTabView", class_NSTabView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSTabViewItem(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSTabViewItem", class_NSTabViewItem_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
