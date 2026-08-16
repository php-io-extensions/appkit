
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

#include "ns-draggingitem.h"
#include <stdint.h>



/** NSDraggingItem — drag session item with pasteboard writer and image. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSDraggingItem_NSDraggingItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDraggingItem, NSDraggingItem, appkit, ns_nsdraggingitem_nsdraggingitem, appkit_ns_nsdraggingitem_nsdraggingitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, createWithString)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL;
	zval value;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &value_param);
	zephir_get_strval(&value, value_param);
	
            handle = (zend_long) ns_draggingitem_create_with_string(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, wrap)
{
	zval *nsDraggingItemPtr_param = NULL;
	zend_long nsDraggingItemPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsDraggingItemPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsDraggingItemPtr_param);
	
            handle = (zend_long) ns_draggingitem_wrap((void *)(uintptr_t) nsDraggingItemPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_draggingitem_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, nsDraggingItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_draggingitem_nsdraggingitem((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, getItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_draggingitem_item((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, getDraggingFrame)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *item_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &item_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_draggingitem_get_dragging_frame((uintptr_t) item, &x, &y, &w, &h);
            add_assoc_double(&out, "x", x);
            add_assoc_double(&out, "y", y);
            add_assoc_double(&out, "width", w);
            add_assoc_double(&out, "height", h);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, setDraggingFrame)
{
	double x, y, width, height;
	zval *item_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(item)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &item_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_draggingitem_set_dragging_frame((uintptr_t) item, x, y, width, height);
        
}

PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, setDraggingFrameContents)
{
	double x, y, width, height;
	zval *item_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *contentsPtr_param = NULL;
	zend_long item, contentsPtr;

	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(item)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(contentsPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &item_param, &x_param, &y_param, &width_param, &height_param, &contentsPtr_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_draggingitem_set_dragging_frame_contents(
                (uintptr_t) item, x, y, width, height, (void *)(uintptr_t) contentsPtr
            );
        
}

PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, imageComponentsCount)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_draggingitem_image_components_count((uintptr_t) item);
        
	RETURN_LONG(value);
}

