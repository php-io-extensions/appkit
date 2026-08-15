
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
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"

#include "ns-menuitem.h"
#include "ns-menu.h"
#include <stdint.h>



/**
 * NSMenuItem — full menu item bind (title, state, submenu, custom view, etc.).
 * add() remains a convenience alias for NSMenu::addItem.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSMenuItem_NSMenuItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSMenuItem, NSMenuItem, appkit, ns_nsmenuitem_nsmenuitem, appkit_ns_nsmenuitem_nsmenuitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *title_param = NULL, *keyEquivalent_param = NULL;
	zval title, keyEquivalent;

	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&keyEquivalent);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(title)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(keyEquivalent)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &title_param, &keyEquivalent_param);
	zephir_get_strval(&title, title_param);
	if (!keyEquivalent_param) {
		ZEPHIR_INIT_VAR(&keyEquivalent);
		ZVAL_STRING(&keyEquivalent, "");
	} else {
		zephir_get_strval(&keyEquivalent, keyEquivalent_param);
	}
	
            handle = (zend_long) ns_menuitem_create(Z_STRVAL(title), Z_STRVAL(keyEquivalent));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, separator)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_menuitem_separator();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, sectionHeader)
{
	zend_long handle = 0;
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
	
            handle = (zend_long) ns_menuitem_section_header(Z_STRVAL(title));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, wrap)
{
	zval *nsMenuItemPtr_param = NULL;
	zend_long nsMenuItemPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsMenuItemPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsMenuItemPtr_param);
	
            handle = (zend_long) ns_menuitem_wrap((void *)(uintptr_t) nsMenuItemPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_menuitem_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, nsMenuItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_menuitem_nsmenuitem((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *item_param = NULL, *title_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_menuitem_set_title((uintptr_t) item, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getTitle)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_menuitem_get_title((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setSubtitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval subtitle;
	zval *item_param = NULL, *subtitle_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&subtitle);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(subtitle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &subtitle_param);
	zephir_get_strval(&subtitle, subtitle_param);
	
            ns_menuitem_set_subtitle((uintptr_t) item, Z_STRVAL(subtitle));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getSubtitle)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_menuitem_get_subtitle((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setKeyEquivalent)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *item_param = NULL, *key_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &key_param);
	zephir_get_strval(&key, key_param);
	
            ns_menuitem_set_key_equivalent((uintptr_t) item, Z_STRVAL(key));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getKeyEquivalent)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[64];
            buf[0] = '\0';
            if (ns_menuitem_get_key_equivalent((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setEnabled)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_menuitem_set_enabled((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isEnabled)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_menuitem_is_enabled((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setHidden)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_menuitem_set_hidden((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isHidden)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_menuitem_is_hidden((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setState)
{
	zval *item_param = NULL, *state_param = NULL;
	zend_long item, state;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &state_param);
	
            ns_menuitem_set_state((uintptr_t) item, (int) state);
        
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getState)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_menuitem_get_state((uintptr_t) item);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setTag)
{
	zval *item_param = NULL, *tag_param = NULL;
	zend_long item, tag;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &tag_param);
	
            ns_menuitem_set_tag((uintptr_t) item, (int) tag);
        
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getTag)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_menuitem_get_tag((uintptr_t) item);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setToolTip)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tip;
	zval *item_param = NULL, *tip_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&tip);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(tip)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &tip_param);
	zephir_get_strval(&tip, tip_param);
	
            ns_menuitem_set_tool_tip((uintptr_t) item, Z_STRVAL(tip));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getToolTip)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_menuitem_get_tool_tip((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setIndentationLevel)
{
	zval *item_param = NULL, *level_param = NULL;
	zend_long item, level;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(level)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &level_param);
	
            ns_menuitem_set_indentation_level((uintptr_t) item, (int) level);
        
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getIndentationLevel)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_menuitem_get_indentation_level((uintptr_t) item);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setRepresentedObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval token;
	zval *item_param = NULL, *token_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&token);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(token)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &token_param);
	zephir_get_strval(&token, token_param);
	
            ns_menuitem_set_represented_object((uintptr_t) item, Z_STRVAL(token));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, getRepresentedObject)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_menuitem_get_represented_object((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, setView)
{
	zval *item_param = NULL, *view_param = NULL;
	zend_long item, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &view_param);
	
            ns_menuitem_set_view((uintptr_t) item, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, view)
{
	zval *item_param = NULL;
	zend_long item, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            handle = (zend_long) ns_menuitem_view((uintptr_t) item);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isSeparator)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_menuitem_is_separator((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, isSectionHeader)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_menuitem_is_section_header((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, hasSubmenu)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_menuitem_has_submenu((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

/** Convenience alias for NSMenu::addItem. */
PHP_METHOD(AppKit_NS_NSMenuItem_NSMenuItem, add)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *menuTitle_param = NULL, *itemTitle_param = NULL, *keyEquivalent_param = NULL, *actionId_param = NULL;
	zval menuTitle, itemTitle, keyEquivalent, actionId;

	ZVAL_UNDEF(&menuTitle);
	ZVAL_UNDEF(&itemTitle);
	ZVAL_UNDEF(&keyEquivalent);
	ZVAL_UNDEF(&actionId);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_STR(menuTitle)
		Z_PARAM_STR(itemTitle)
		Z_PARAM_STR(keyEquivalent)
		Z_PARAM_STR(actionId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &menuTitle_param, &itemTitle_param, &keyEquivalent_param, &actionId_param);
	zephir_get_strval(&menuTitle, menuTitle_param);
	zephir_get_strval(&itemTitle, itemTitle_param);
	zephir_get_strval(&keyEquivalent, keyEquivalent_param);
	zephir_get_strval(&actionId, actionId_param);
	
            result = ns_menu_add_item(
                Z_STRVAL(menuTitle),
                Z_STRVAL(itemTitle),
                Z_STRVAL(keyEquivalent),
                Z_STRVAL(actionId)
            ) == 1;
        
	RETURN_MM_BOOL(result);
}

