
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

#include "ns-toolbaritem.h"
#include <stdint.h>



/** NSToolbarItem — base toolbar item bind. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSToolbarItem_NSToolbarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSToolbarItem, NSToolbarItem, appkit, ns_nstoolbaritem_nstoolbaritem, appkit_ns_nstoolbaritem_nstoolbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *identifier_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	
            handle = (zend_long) ns_toolbaritem_create(Z_STRVAL(identifier));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, wrap)
{
	zval *nsToolbarItemPtr_param = NULL;
	zend_long nsToolbarItemPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsToolbarItemPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsToolbarItemPtr_param);
	
            handle = (zend_long) ns_toolbaritem_wrap((void *)(uintptr_t) nsToolbarItemPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_toolbaritem_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, nsToolbarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_toolbaritem_nstoolbaritem((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getItemIdentifier)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_toolbaritem_get_item_identifier((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setLabel)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval label;
	zval *item_param = NULL, *label_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &label_param);
	zephir_get_strval(&label, label_param);
	
            ns_toolbaritem_set_label((uintptr_t) item, Z_STRVAL(label));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getLabel)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_toolbaritem_get_label((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setPaletteLabel)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval label;
	zval *item_param = NULL, *label_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &label_param);
	zephir_get_strval(&label, label_param);
	
            ns_toolbaritem_set_palette_label((uintptr_t) item, Z_STRVAL(label));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getPaletteLabel)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_toolbaritem_get_palette_label((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setToolTip)
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
	
            ns_toolbaritem_set_tool_tip((uintptr_t) item, Z_STRVAL(tip));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getToolTip)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_toolbaritem_get_tool_tip((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setTag)
{
	zval *item_param = NULL, *tag_param = NULL;
	zend_long item, tag;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &tag_param);
	
            ns_toolbaritem_set_tag((uintptr_t) item, (int) tag);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getTag)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_toolbaritem_get_tag((uintptr_t) item);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setEnabled)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_toolbaritem_set_enabled((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isEnabled)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_toolbaritem_is_enabled((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setTitle)
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
	
            ns_toolbaritem_set_title((uintptr_t) item, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getTitle)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_toolbaritem_get_title((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setBordered)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_toolbaritem_set_bordered((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isBordered)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_toolbaritem_is_bordered((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setNavigational)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_toolbaritem_set_navigational((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isNavigational)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_toolbaritem_is_navigational((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setHidden)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_toolbaritem_set_hidden((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isHidden)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_toolbaritem_is_hidden((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setVisibilityPriority)
{
	zval *item_param = NULL, *priority_param = NULL;
	zend_long item, priority;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(priority)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &priority_param);
	
            ns_toolbaritem_set_visibility_priority((uintptr_t) item, (int) priority);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getVisibilityPriority)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_toolbaritem_get_visibility_priority((uintptr_t) item);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setAutovalidates)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_toolbaritem_set_autovalidates((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, autovalidates)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_toolbaritem_autovalidates((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, isVisible)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_toolbaritem_is_visible((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setImage)
{
	zval *item_param = NULL, *image_param = NULL;
	zend_long item, image;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &image_param);
	
            ns_toolbaritem_set_image((uintptr_t) item, (uintptr_t) image);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, setView)
{
	zval *item_param = NULL, *view_param = NULL;
	zend_long item, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &view_param);
	
            ns_toolbaritem_set_view((uintptr_t) item, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItem_NSToolbarItem, getView)
{
	zval *item_param = NULL;
	zend_long item, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            handle = (zend_long) ns_toolbaritem_get_view((uintptr_t) item);
        
	RETURN_LONG(handle);
}

