/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 00f1a4dea988719f3b61549b7c3c307dd65831ac */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbar_initWithIdentifier, 0, 1, IS_STATIC, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbar_identifier, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSToolbar_delegate, 0, 0, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbar_setDelegate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, delegate, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSToolbar_displayMode, 0, 0, NSToolbarDisplayMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbar_setDisplayMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, displayMode, NSToolbarDisplayMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbar_isVisible, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbar_setVisible, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSToolbar_allowsUserCustomization arginfo_class_NSToolbar_isVisible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbar_setAllowsUserCustomization, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, allowsUserCustomization, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbar_insertItemWithItemIdentifierAtIndex, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, itemIdentifier, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbar_removeItemAtIndex, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbar_selectedItemIdentifier, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbar_setSelectedItemIdentifier, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selectedItemIdentifier, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbarItem_initWithItemIdentifier, 0, 1, IS_STATIC, 0)
	ZEND_ARG_TYPE_INFO(0, itemIdentifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSToolbarItem_itemIdentifier arginfo_class_NSToolbar_identifier

#define arginfo_class_NSToolbarItem_label arginfo_class_NSToolbar_identifier

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbarItem_setLabel, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSToolbarItem_view, 0, 0, NSView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbarItem_setView, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSToolbarItem_isBordered arginfo_class_NSToolbar_isVisible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSToolbarItem_setBordered, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, bordered, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSToolbar, initWithIdentifier);
ZEND_METHOD(NSToolbar, identifier);
ZEND_METHOD(NSToolbar, delegate);
ZEND_METHOD(NSToolbar, setDelegate);
ZEND_METHOD(NSToolbar, displayMode);
ZEND_METHOD(NSToolbar, setDisplayMode);
ZEND_METHOD(NSToolbar, isVisible);
ZEND_METHOD(NSToolbar, setVisible);
ZEND_METHOD(NSToolbar, allowsUserCustomization);
ZEND_METHOD(NSToolbar, setAllowsUserCustomization);
ZEND_METHOD(NSToolbar, insertItemWithItemIdentifierAtIndex);
ZEND_METHOD(NSToolbar, removeItemAtIndex);
ZEND_METHOD(NSToolbar, selectedItemIdentifier);
ZEND_METHOD(NSToolbar, setSelectedItemIdentifier);
ZEND_METHOD(NSToolbarItem, initWithItemIdentifier);
ZEND_METHOD(NSToolbarItem, itemIdentifier);
ZEND_METHOD(NSToolbarItem, label);
ZEND_METHOD(NSToolbarItem, setLabel);
ZEND_METHOD(NSToolbarItem, view);
ZEND_METHOD(NSToolbarItem, setView);
ZEND_METHOD(NSToolbarItem, isBordered);
ZEND_METHOD(NSToolbarItem, setBordered);

static const zend_function_entry class_NSToolbar_methods[] = {
	ZEND_ME(NSToolbar, initWithIdentifier, arginfo_class_NSToolbar_initWithIdentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSToolbar, identifier, arginfo_class_NSToolbar_identifier, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, delegate, arginfo_class_NSToolbar_delegate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, setDelegate, arginfo_class_NSToolbar_setDelegate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, displayMode, arginfo_class_NSToolbar_displayMode, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, setDisplayMode, arginfo_class_NSToolbar_setDisplayMode, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, isVisible, arginfo_class_NSToolbar_isVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, setVisible, arginfo_class_NSToolbar_setVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, allowsUserCustomization, arginfo_class_NSToolbar_allowsUserCustomization, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, setAllowsUserCustomization, arginfo_class_NSToolbar_setAllowsUserCustomization, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, insertItemWithItemIdentifierAtIndex, arginfo_class_NSToolbar_insertItemWithItemIdentifierAtIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, removeItemAtIndex, arginfo_class_NSToolbar_removeItemAtIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, selectedItemIdentifier, arginfo_class_NSToolbar_selectedItemIdentifier, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbar, setSelectedItemIdentifier, arginfo_class_NSToolbar_setSelectedItemIdentifier, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSToolbarItem_methods[] = {
	ZEND_ME(NSToolbarItem, initWithItemIdentifier, arginfo_class_NSToolbarItem_initWithItemIdentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSToolbarItem, itemIdentifier, arginfo_class_NSToolbarItem_itemIdentifier, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbarItem, label, arginfo_class_NSToolbarItem_label, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbarItem, setLabel, arginfo_class_NSToolbarItem_setLabel, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbarItem, view, arginfo_class_NSToolbarItem_view, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbarItem, setView, arginfo_class_NSToolbarItem_setView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbarItem, isBordered, arginfo_class_NSToolbarItem_isBordered, ZEND_ACC_PUBLIC)
	ZEND_ME(NSToolbarItem, setBordered, arginfo_class_NSToolbarItem_setBordered, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_NSToolbar_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("NSToolbarFlexibleSpaceItemIdentifier", appkit_cfstring_constant((CFStringRef) NSToolbarFlexibleSpaceItemIdentifier), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("NSToolbarSpaceItemIdentifier", appkit_cfstring_constant((CFStringRef) NSToolbarSpaceItemIdentifier), CONST_PERSISTENT);
}

static zend_class_entry *register_class_NSToolbarDisplayMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSToolbarDisplayMode", IS_LONG, NULL);

	zval enum_case_DEFAULT_value;
	ZVAL_LONG(&enum_case_DEFAULT_value, 0);
	zend_enum_add_case_cstr(class_entry, "DEFAULT", &enum_case_DEFAULT_value);

	zval enum_case_ICON_AND_LABEL_value;
	ZVAL_LONG(&enum_case_ICON_AND_LABEL_value, 1);
	zend_enum_add_case_cstr(class_entry, "ICON_AND_LABEL", &enum_case_ICON_AND_LABEL_value);

	zval enum_case_ICON_ONLY_value;
	ZVAL_LONG(&enum_case_ICON_ONLY_value, 2);
	zend_enum_add_case_cstr(class_entry, "ICON_ONLY", &enum_case_ICON_ONLY_value);

	zval enum_case_LABEL_ONLY_value;
	ZVAL_LONG(&enum_case_LABEL_ONLY_value, 3);
	zend_enum_add_case_cstr(class_entry, "LABEL_ONLY", &enum_case_LABEL_ONLY_value);

	return class_entry;
}

static zend_class_entry *register_class_NSWindowToolbarStyle(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSWindowToolbarStyle", IS_LONG, NULL);

	zval enum_case_AUTOMATIC_value;
	ZVAL_LONG(&enum_case_AUTOMATIC_value, 0);
	zend_enum_add_case_cstr(class_entry, "AUTOMATIC", &enum_case_AUTOMATIC_value);

	zval enum_case_EXPANDED_value;
	ZVAL_LONG(&enum_case_EXPANDED_value, 1);
	zend_enum_add_case_cstr(class_entry, "EXPANDED", &enum_case_EXPANDED_value);

	zval enum_case_PREFERENCE_value;
	ZVAL_LONG(&enum_case_PREFERENCE_value, 2);
	zend_enum_add_case_cstr(class_entry, "PREFERENCE", &enum_case_PREFERENCE_value);

	zval enum_case_UNIFIED_value;
	ZVAL_LONG(&enum_case_UNIFIED_value, 3);
	zend_enum_add_case_cstr(class_entry, "UNIFIED", &enum_case_UNIFIED_value);

	zval enum_case_UNIFIED_COMPACT_value;
	ZVAL_LONG(&enum_case_UNIFIED_COMPACT_value, 4);
	zend_enum_add_case_cstr(class_entry, "UNIFIED_COMPACT", &enum_case_UNIFIED_COMPACT_value);

	return class_entry;
}

static zend_class_entry *register_class_NSToolbar(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSToolbar", class_NSToolbar_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSToolbarItem(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSToolbarItem", class_NSToolbarItem_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
