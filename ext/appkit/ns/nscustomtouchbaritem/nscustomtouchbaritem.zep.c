
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

#include "ns-customtouchbaritem.h"
#include <stdint.h>



/** NSCustomTouchBarItem */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCustomTouchBarItem_NSCustomTouchBarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCustomTouchBarItem, NSCustomTouchBarItem, appkit, ns_nscustomtouchbaritem_nscustomtouchbaritem, appkit_ns_nscustomtouchbaritem_nscustomtouchbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCustomTouchBarItem_NSCustomTouchBarItem, create)
{
	zend_long h = 0;
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
	 h = (zend_long) ns_customtouchbaritem_create(Z_STRVAL(identifier)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSCustomTouchBarItem_NSCustomTouchBarItem, wrap)
{
	zval *ptr_param = NULL;
	zend_long ptr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ptr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ptr_param);
	 handle = (zend_long) ns_customtouchbaritem_wrap((void *)(uintptr_t) ptr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCustomTouchBarItem_NSCustomTouchBarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_customtouchbaritem_destroy((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSCustomTouchBarItem_NSCustomTouchBarItem, nsCustomTouchBarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ptr = (zend_long)(uintptr_t) ns_customtouchbaritem_nscustomtouchbaritem((uintptr_t) item); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSCustomTouchBarItem_NSCustomTouchBarItem, setView)
{
	zval *item_param = NULL, *view_param = NULL;
	zend_long item, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &view_param);
	 ns_customtouchbaritem_set_view((uintptr_t) item, (uintptr_t) view); 
}

PHP_METHOD(AppKit_NS_NSCustomTouchBarItem_NSCustomTouchBarItem, getView)
{
	zval *item_param = NULL;
	zend_long item, h = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 h = (zend_long) ns_customtouchbaritem_get_view((uintptr_t) item); 
	RETURN_LONG(h);
}

PHP_METHOD(AppKit_NS_NSCustomTouchBarItem_NSCustomTouchBarItem, setCustomizationLabel)
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
	 ns_customtouchbaritem_set_customization_label((uintptr_t) item, Z_STRVAL(label)); 
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCustomTouchBarItem_NSCustomTouchBarItem, getCustomizationLabel)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 char buf[4096]; buf[0] = '\0'; if (ns_customtouchbaritem_get_customization_label((uintptr_t) item, buf, (int) sizeof(buf))) { RETURN_STRING(buf); } RETURN_EMPTY_STRING(); 
	RETURN_STRING("");
}

