
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

#include "ns-menutoolbaritem.h"
#include <stdint.h>



/** NSMenuToolbarItem — toolbar item with attached NSMenu (macOS 10.15+). */
ZEPHIR_INIT_CLASS(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSMenuToolbarItem, NSMenuToolbarItem, appkit, ns_nsmenutoolbaritem_nsmenutoolbaritem, appkit_ns_nsmenutoolbaritem_nsmenutoolbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, create)
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
	
            handle = (zend_long) ns_menutoolbaritem_create(Z_STRVAL(identifier));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, wrap)
{
	zval *nsMenuToolbarItemPtr_param = NULL;
	zend_long nsMenuToolbarItemPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsMenuToolbarItemPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsMenuToolbarItemPtr_param);
	
            handle = (zend_long) ns_menutoolbaritem_wrap((void *)(uintptr_t) nsMenuToolbarItemPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_menutoolbaritem_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, nsMenuToolbarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_menutoolbaritem_nsmenutoolbaritem((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, setShowsIndicator)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	
            ns_menutoolbaritem_set_shows_indicator((uintptr_t) item, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, showsIndicator)
{
	zend_bool result = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            result = ns_menutoolbaritem_shows_indicator((uintptr_t) item) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, setLabel)
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
	
            ns_menutoolbaritem_set_label((uintptr_t) item, Z_STRVAL(label));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, getLabel)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_menutoolbaritem_get_label((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, setToolTip)
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
	
            ns_menutoolbaritem_set_tool_tip((uintptr_t) item, Z_STRVAL(tip));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSMenuToolbarItem_NSMenuToolbarItem, getToolTip)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_menutoolbaritem_get_tool_tip((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

