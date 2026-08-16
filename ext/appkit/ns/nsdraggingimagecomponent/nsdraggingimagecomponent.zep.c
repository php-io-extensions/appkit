
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

#include "ns-draggingimagecomponent.h"
#include <stdint.h>



/** NSDraggingImageComponent — composited drag image layer. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSDraggingImageComponent_NSDraggingImageComponent)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDraggingImageComponent, NSDraggingImageComponent, appkit, ns_nsdraggingimagecomponent_nsdraggingimagecomponent, appkit_ns_nsdraggingimagecomponent_nsdraggingimagecomponent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDraggingImageComponent_NSDraggingImageComponent, withKey)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *key_param = NULL;
	zval key;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &key_param);
	zephir_get_strval(&key, key_param);
	
            handle = (zend_long) ns_draggingimagecomponent_with_key(Z_STRVAL(key));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDraggingImageComponent_NSDraggingImageComponent, wrap)
{
	zval *nsDraggingImageComponentPtr_param = NULL;
	zend_long nsDraggingImageComponentPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsDraggingImageComponentPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsDraggingImageComponentPtr_param);
	
            handle = (zend_long) ns_draggingimagecomponent_wrap((void *)(uintptr_t) nsDraggingImageComponentPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDraggingImageComponent_NSDraggingImageComponent, destroy)
{
	zval *component_param = NULL;
	zend_long component;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(component)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &component_param);
	
            ns_draggingimagecomponent_destroy((uintptr_t) component);
        
}

PHP_METHOD(AppKit_NS_NSDraggingImageComponent_NSDraggingImageComponent, nsDraggingImageComponent)
{
	zval *component_param = NULL;
	zend_long component, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(component)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &component_param);
	
            ptr = (zend_long)(uintptr_t) ns_draggingimagecomponent_nsdraggingimagecomponent((uintptr_t) component);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDraggingImageComponent_NSDraggingImageComponent, getKey)
{
	zval *component_param = NULL;
	zend_long component;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(component)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &component_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_draggingimagecomponent_key((uintptr_t) component, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDraggingImageComponent_NSDraggingImageComponent, setKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *component_param = NULL, *key_param = NULL;
	zend_long component;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(component)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &component_param, &key_param);
	zephir_get_strval(&key, key_param);
	
            ns_draggingimagecomponent_set_key((uintptr_t) component, Z_STRVAL(key));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDraggingImageComponent_NSDraggingImageComponent, setContents)
{
	zval *component_param = NULL, *contentsPtr_param = NULL;
	zend_long component, contentsPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(component)
		Z_PARAM_LONG(contentsPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &component_param, &contentsPtr_param);
	
            ns_draggingimagecomponent_set_contents((uintptr_t) component, (void *)(uintptr_t) contentsPtr);
        
}

PHP_METHOD(AppKit_NS_NSDraggingImageComponent_NSDraggingImageComponent, getContents)
{
	zval *component_param = NULL;
	zend_long component, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(component)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &component_param);
	
            ptr = (zend_long)(uintptr_t) ns_draggingimagecomponent_contents((uintptr_t) component);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDraggingImageComponent_NSDraggingImageComponent, frameRect)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *component_param = NULL;
	zend_long component;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(component)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &component_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_draggingimagecomponent_get_frame((uintptr_t) component, &x, &y, &w, &h);
            add_assoc_double(&out, "x", x);
            add_assoc_double(&out, "y", y);
            add_assoc_double(&out, "width", w);
            add_assoc_double(&out, "height", h);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSDraggingImageComponent_NSDraggingImageComponent, setFrameRect)
{
	double x, y, width, height;
	zval *component_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long component;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(component)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &component_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_draggingimagecomponent_set_frame((uintptr_t) component, x, y, width, height);
        
}

