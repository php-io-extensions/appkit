/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: f546b185d34065a2892f6ce2d185c27cf5d82df0 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSMenu_initWithTitle, 0, 1, NSMenu, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenu_title, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenu_setTitle, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenu_addItem, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, newItem, NSMenuItem, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenu_insertItemAtIndex, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, newItem, NSMenuItem, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenu_removeItem, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, item, NSMenuItem, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenu_removeAllItems, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenu_numberOfItems, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSMenu_itemAtIndex, 0, 1, NSMenuItem, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenu_indexOfItem, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, item, NSMenuItem, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenu_autoenablesItems, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenu_setAutoenablesItems, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, autoenablesItems, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenu_performActionForItemAtIndex, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSMenuItem_initWithTitleActionKeyEquivalent, 0, 3, NSMenuItem, 0)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, charCode, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSMenuItem_separatorItem, 0, 0, NSMenuItem, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSMenuItem_title arginfo_class_NSMenu_title

#define arginfo_class_NSMenuItem_setTitle arginfo_class_NSMenu_setTitle

#define arginfo_class_NSMenuItem_isSeparatorItem arginfo_class_NSMenu_autoenablesItems

#define arginfo_class_NSMenuItem_hasSubmenu arginfo_class_NSMenu_autoenablesItems

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSMenuItem_submenu, 0, 0, NSMenu, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenuItem_setSubmenu, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, submenu, NSMenu, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSMenuItem_menu arginfo_class_NSMenuItem_submenu

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSMenuItem_target, 0, 0, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenuItem_setTarget, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, target, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenuItem_action, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenuItem_setAction, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_NSMenuItem_state, 0, 0, NSControlStateValue, MAY_BE_LONG)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenuItem_setState, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, state, NSControlStateValue, MAY_BE_LONG, NULL)
ZEND_END_ARG_INFO()

#define arginfo_class_NSMenuItem_isEnabled arginfo_class_NSMenu_autoenablesItems

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenuItem_setEnabled, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSMenuItem_keyEquivalent arginfo_class_NSMenu_title

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenuItem_setKeyEquivalent, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, keyEquivalent, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSMenuItem_keyEquivalentModifierMask arginfo_class_NSMenu_numberOfItems

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenuItem_setKeyEquivalentModifierMask, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, mask, NSEventModifierFlags, MAY_BE_LONG, NULL)
ZEND_END_ARG_INFO()

#define arginfo_class_NSMenuItem_tag arginfo_class_NSMenu_numberOfItems

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMenuItem_setTag, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSMenu, initWithTitle);
ZEND_METHOD(NSMenu, title);
ZEND_METHOD(NSMenu, setTitle);
ZEND_METHOD(NSMenu, addItem);
ZEND_METHOD(NSMenu, insertItemAtIndex);
ZEND_METHOD(NSMenu, removeItem);
ZEND_METHOD(NSMenu, removeAllItems);
ZEND_METHOD(NSMenu, numberOfItems);
ZEND_METHOD(NSMenu, itemAtIndex);
ZEND_METHOD(NSMenu, indexOfItem);
ZEND_METHOD(NSMenu, autoenablesItems);
ZEND_METHOD(NSMenu, setAutoenablesItems);
ZEND_METHOD(NSMenu, performActionForItemAtIndex);
ZEND_METHOD(NSMenuItem, initWithTitleActionKeyEquivalent);
ZEND_METHOD(NSMenuItem, separatorItem);
ZEND_METHOD(NSMenuItem, title);
ZEND_METHOD(NSMenuItem, setTitle);
ZEND_METHOD(NSMenuItem, isSeparatorItem);
ZEND_METHOD(NSMenuItem, hasSubmenu);
ZEND_METHOD(NSMenuItem, submenu);
ZEND_METHOD(NSMenuItem, setSubmenu);
ZEND_METHOD(NSMenuItem, menu);
ZEND_METHOD(NSMenuItem, target);
ZEND_METHOD(NSMenuItem, setTarget);
ZEND_METHOD(NSMenuItem, action);
ZEND_METHOD(NSMenuItem, setAction);
ZEND_METHOD(NSMenuItem, state);
ZEND_METHOD(NSMenuItem, setState);
ZEND_METHOD(NSMenuItem, isEnabled);
ZEND_METHOD(NSMenuItem, setEnabled);
ZEND_METHOD(NSMenuItem, keyEquivalent);
ZEND_METHOD(NSMenuItem, setKeyEquivalent);
ZEND_METHOD(NSMenuItem, keyEquivalentModifierMask);
ZEND_METHOD(NSMenuItem, setKeyEquivalentModifierMask);
ZEND_METHOD(NSMenuItem, tag);
ZEND_METHOD(NSMenuItem, setTag);

static const zend_function_entry class_NSMenu_methods[] = {
	ZEND_ME(NSMenu, initWithTitle, arginfo_class_NSMenu_initWithTitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSMenu, title, arginfo_class_NSMenu_title, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenu, setTitle, arginfo_class_NSMenu_setTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenu, addItem, arginfo_class_NSMenu_addItem, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenu, insertItemAtIndex, arginfo_class_NSMenu_insertItemAtIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenu, removeItem, arginfo_class_NSMenu_removeItem, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenu, removeAllItems, arginfo_class_NSMenu_removeAllItems, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenu, numberOfItems, arginfo_class_NSMenu_numberOfItems, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenu, itemAtIndex, arginfo_class_NSMenu_itemAtIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenu, indexOfItem, arginfo_class_NSMenu_indexOfItem, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenu, autoenablesItems, arginfo_class_NSMenu_autoenablesItems, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenu, setAutoenablesItems, arginfo_class_NSMenu_setAutoenablesItems, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenu, performActionForItemAtIndex, arginfo_class_NSMenu_performActionForItemAtIndex, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSMenuItem_methods[] = {
	ZEND_ME(NSMenuItem, initWithTitleActionKeyEquivalent, arginfo_class_NSMenuItem_initWithTitleActionKeyEquivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSMenuItem, separatorItem, arginfo_class_NSMenuItem_separatorItem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSMenuItem, title, arginfo_class_NSMenuItem_title, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, setTitle, arginfo_class_NSMenuItem_setTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, isSeparatorItem, arginfo_class_NSMenuItem_isSeparatorItem, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, hasSubmenu, arginfo_class_NSMenuItem_hasSubmenu, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, submenu, arginfo_class_NSMenuItem_submenu, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, setSubmenu, arginfo_class_NSMenuItem_setSubmenu, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, menu, arginfo_class_NSMenuItem_menu, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, target, arginfo_class_NSMenuItem_target, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, setTarget, arginfo_class_NSMenuItem_setTarget, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, action, arginfo_class_NSMenuItem_action, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, setAction, arginfo_class_NSMenuItem_setAction, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, state, arginfo_class_NSMenuItem_state, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, setState, arginfo_class_NSMenuItem_setState, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, isEnabled, arginfo_class_NSMenuItem_isEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, setEnabled, arginfo_class_NSMenuItem_setEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, keyEquivalent, arginfo_class_NSMenuItem_keyEquivalent, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, setKeyEquivalent, arginfo_class_NSMenuItem_setKeyEquivalent, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, keyEquivalentModifierMask, arginfo_class_NSMenuItem_keyEquivalentModifierMask, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, setKeyEquivalentModifierMask, arginfo_class_NSMenuItem_setKeyEquivalentModifierMask, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, tag, arginfo_class_NSMenuItem_tag, ZEND_ACC_PUBLIC)
	ZEND_ME(NSMenuItem, setTag, arginfo_class_NSMenuItem_setTag, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSControlStateValue(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSControlStateValue", IS_LONG, NULL);

	zval enum_case_MIXED_value;
	ZVAL_LONG(&enum_case_MIXED_value, -1);
	zend_enum_add_case_cstr(class_entry, "MIXED", &enum_case_MIXED_value);

	zval enum_case_OFF_value;
	ZVAL_LONG(&enum_case_OFF_value, 0);
	zend_enum_add_case_cstr(class_entry, "OFF", &enum_case_OFF_value);

	zval enum_case_ON_value;
	ZVAL_LONG(&enum_case_ON_value, 1);
	zend_enum_add_case_cstr(class_entry, "ON", &enum_case_ON_value);

	return class_entry;
}

static zend_class_entry *register_class_NSMenu(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSMenu", class_NSMenu_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSMenuItem(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSMenuItem", class_NSMenuItem_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
