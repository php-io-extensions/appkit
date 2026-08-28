
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/ns-menu.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSMenu_NSMenu)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSMenu, NSMenu, appkit, ns_nsmenu_nsmenu, appkit_ns_nsmenu_nsmenu_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, initWithTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *title_param = NULL;
	zval title;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &title_param);
	zephir_get_strval(&title, title_param);
	RETURN_MM_LONG(ns_nsmenu_init_with_title(&title));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, title)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsmenu_title(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *handle_param = NULL, *title_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &title_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	ns_nsmenu_set_title(&_0, &title);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, popUpContextMenuWithEventForView)
{
	zval *menu_param = NULL, *event_param = NULL, *view_param = NULL, _0, _1, _2;
	zend_long menu, event, view;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(menu)
		Z_PARAM_LONG(event)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &menu_param, &event_param, &view_param);
	ZVAL_LONG(&_0, menu);
	ZVAL_LONG(&_1, event);
	ZVAL_LONG(&_2, view);
	ns_nsmenu_pop_up_context_menu_with_event_for_view(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, popUpContextMenuWithEventForViewWithFont)
{
	zval *menu_param = NULL, *event_param = NULL, *view_param = NULL, *font_param = NULL, _0, _1, _2, _3;
	zend_long menu, event, view, font;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(menu)
		Z_PARAM_LONG(event)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &menu_param, &event_param, &view_param, &font_param);
	ZVAL_LONG(&_0, menu);
	ZVAL_LONG(&_1, event);
	ZVAL_LONG(&_2, view);
	ZVAL_LONG(&_3, font);
	ns_nsmenu_pop_up_context_menu_with_event_for_view_with_font(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, popUpMenuPositioningItemAtLocationInView)
{
	double x, y;
	zval *handle_param = NULL, *item_param = NULL, *x_param = NULL, *y_param = NULL, *view_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, item, view, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &item_param, &x_param, &y_param, &view_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_LONG(&_4, view);
	r = ns_nsmenu_pop_up_menu_positioning_item_at_location_in_view(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setMenuBarVisible)
{
	zval *visible_param = NULL, _0;
	zend_bool visible;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(visible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &visible_param);
	ZVAL_BOOL(&_0, (visible ? 1 : 0));
	ns_nsmenu_set_menu_bar_visible(&_0);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, menuBarVisible)
{
	zend_long r = 0;
	r = ns_nsmenu_menu_bar_visible();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, supermenu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsmenu_supermenu(&_0));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setSupermenu)
{
	zval *handle_param = NULL, *supermenu_param = NULL, _0, _1;
	zend_long handle, supermenu;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(supermenu)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &supermenu_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, supermenu);
	ns_nsmenu_set_supermenu(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, insertItemAtIndex)
{
	zval *handle_param = NULL, *newItem_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, newItem, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newItem)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &newItem_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newItem);
	ZVAL_LONG(&_2, index);
	ns_nsmenu_insert_item_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, addItem)
{
	zval *handle_param = NULL, *newItem_param = NULL, _0, _1;
	zend_long handle, newItem;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newItem_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newItem);
	ns_nsmenu_add_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, insertItemWithTitleActionKeyEquivalentAtIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, keyEquivalent;
	zval *handle_param = NULL, *title_param = NULL, *action = NULL, action_sub, *keyEquivalent_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&action_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&keyEquivalent);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
		Z_PARAM_ZVAL(action)
		Z_PARAM_STR(keyEquivalent)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &title_param, &action, &keyEquivalent_param, &index_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&keyEquivalent, keyEquivalent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_MM_LONG(ns_nsmenu_insert_item_with_title_action_key_equivalent_at_index(&_0, &title, action, &keyEquivalent, &_1));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, addItemWithTitleActionKeyEquivalent)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, keyEquivalent;
	zval *handle_param = NULL, *title_param = NULL, *action = NULL, action_sub, *keyEquivalent_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&action_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&keyEquivalent);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
		Z_PARAM_ZVAL(action)
		Z_PARAM_STR(keyEquivalent)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &title_param, &action, &keyEquivalent_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&keyEquivalent, keyEquivalent_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsmenu_add_item_with_title_action_key_equivalent(&_0, &title, action, &keyEquivalent));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, removeItemAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ns_nsmenu_remove_item_at_index(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, removeItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ns_nsmenu_remove_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setSubmenuForItem)
{
	zval *handle_param = NULL, *menu_param = NULL, *item_param = NULL, _0, _1, _2;
	zend_long handle, menu, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(menu)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &menu_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, menu);
	ZVAL_LONG(&_2, item);
	ns_nsmenu_set_submenu_for_item(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, removeAllItems)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsmenu_remove_all_items(&_0);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, itemArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsmenu_item_array(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setItemArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval itemArray;
	zval *handle_param = NULL, *itemArray_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&itemArray);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(itemArray)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &itemArray_param);
	zephir_get_arrval(&itemArray, itemArray_param);
	ZVAL_LONG(&_0, handle);
	ns_nsmenu_set_item_array(&_0, &itemArray);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, numberOfItems)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsmenu_number_of_items(&_0));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, itemAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(ns_nsmenu_item_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	RETURN_LONG(ns_nsmenu_index_of_item(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItemWithTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *handle_param = NULL, *title_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &title_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsmenu_index_of_item_with_title(&_0, &title));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItemWithTag)
{
	zval *handle_param = NULL, *tag_param = NULL, _0, _1;
	zend_long handle, tag;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tag);
	RETURN_LONG(ns_nsmenu_index_of_item_with_tag(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItemWithRepresentedObject)
{
	zval *handle_param = NULL, *representedObject_param = NULL, _0, _1;
	zend_long handle, representedObject;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(representedObject)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &representedObject_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, representedObject);
	RETURN_LONG(ns_nsmenu_index_of_item_with_represented_object(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItemWithSubmenu)
{
	zval *handle_param = NULL, *submenu_param = NULL, _0, _1;
	zend_long handle, submenu;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(submenu)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &submenu_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, submenu);
	RETURN_LONG(ns_nsmenu_index_of_item_with_submenu(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItemWithTargetAndAction)
{
	zval *handle_param = NULL, *target_param = NULL, *action = NULL, action_sub, _0, _1;
	zend_long handle, target;

	ZVAL_UNDEF(&action_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_ZVAL(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &target_param, &action);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	RETURN_LONG(ns_nsmenu_index_of_item_with_target_and_action(&_0, &_1, action));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, itemWithTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *handle_param = NULL, *title_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &title_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsmenu_item_with_title(&_0, &title));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, itemWithTag)
{
	zval *handle_param = NULL, *tag_param = NULL, _0, _1;
	zend_long handle, tag;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tag);
	RETURN_LONG(ns_nsmenu_item_with_tag(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, autoenablesItems)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsmenu_autoenables_items(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setAutoenablesItems)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsmenu_set_autoenables_items(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, update)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsmenu_update(&_0);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, performKeyEquivalent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	r = ns_nsmenu_perform_key_equivalent(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, itemChanged)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ns_nsmenu_item_changed(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, performActionForItemAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ns_nsmenu_perform_action_for_item_at_index(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsmenu_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setDelegate)
{
	zval *handle_param = NULL, *delegate_param = NULL, _0, _1;
	zend_long handle, delegate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delegate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delegate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delegate);
	ns_nsmenu_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, menuBarHeight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsmenu_menu_bar_height(&_0));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, cancelTracking)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsmenu_cancel_tracking(&_0);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, cancelTrackingWithoutAnimation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsmenu_cancel_tracking_without_animation(&_0);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, highlightedItem)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsmenu_highlighted_item(&_0));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, minimumWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsmenu_minimum_width(&_0));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setMinimumWidth)
{
	double width;
	zval *handle_param = NULL, *width_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ns_nsmenu_set_minimum_width(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsmenu_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, font)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsmenu_font(&_0));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setFont)
{
	zval *handle_param = NULL, *font_param = NULL, _0, _1;
	zend_long handle, font;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &font_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, font);
	ns_nsmenu_set_font(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, allowsContextMenuPlugIns)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsmenu_allows_context_menu_plug_ins(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setAllowsContextMenuPlugIns)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsmenu_set_allows_context_menu_plug_ins(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, automaticallyInsertsWritingToolsItems)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsmenu_automatically_inserts_writing_tools_items(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setAutomaticallyInsertsWritingToolsItems)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsmenu_set_automatically_inserts_writing_tools_items(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, showsStateColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsmenu_shows_state_column(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setShowsStateColumn)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsmenu_set_shows_state_column(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, userInterfaceLayoutDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsmenu_user_interface_layout_direction(&_0));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setUserInterfaceLayoutDirection)
{
	zval *handle_param = NULL, *direction_param = NULL, _0, _1;
	zend_long handle, direction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &direction_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, direction);
	ns_nsmenu_set_user_interface_layout_direction(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, presentationStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsmenu_presentation_style(&_0));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setPresentationStyle)
{
	zval *handle_param = NULL, *style_param = NULL, _0, _1;
	zend_long handle, style;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &style_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, style);
	ns_nsmenu_set_presentation_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, selectionMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsmenu_selection_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setSelectionMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	ns_nsmenu_set_selection_mode(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, selectedItems)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsmenu_selected_items(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setSelectedItems)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval selectedItems;
	zval *handle_param = NULL, *selectedItems_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&selectedItems);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(selectedItems)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &selectedItems_param);
	zephir_get_arrval(&selectedItems, selectedItems_param);
	ZVAL_LONG(&_0, handle);
	ns_nsmenu_set_selected_items(&_0, &selectedItems);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, submenuAction)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nsmenu_submenu_action(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, propertiesToUpdate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsmenu_properties_to_update(&_0));
}

