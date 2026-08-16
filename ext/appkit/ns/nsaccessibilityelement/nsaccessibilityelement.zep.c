
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

#include "ns-accessibilityelement.h"
#include <stdint.h>



ZEPHIR_INIT_CLASS(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSAccessibilityElement, NSAccessibilityElement, appkit, ns_nsaccessibilityelement_nsaccessibilityelement, appkit_ns_nsaccessibilityelement_nsaccessibilityelement_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, create)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long parent, handle = 0;
	double x, y, width, height;
	zval *role_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *label_param = NULL, *parent_param = NULL;
	zval role, label;

	ZVAL_UNDEF(&role);
	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(5, 7)
		Z_PARAM_STR(role)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(label)
		Z_PARAM_LONG(parent)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 2, &role_param, &x_param, &y_param, &width_param, &height_param, &label_param, &parent_param);
	zephir_get_strval(&role, role_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	if (!label_param) {
		ZEPHIR_INIT_VAR(&label);
		ZVAL_STRING(&label, "");
	} else {
		zephir_get_strval(&label, label_param);
	}
	if (!parent_param) {
		parent = 0;
	} else {
		}
	
            handle = (zend_long) ns_accessibilityelement_create(Z_STRVAL(role), x, y, width, height, Z_STRVAL(label), (uintptr_t) parent);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, wrap)
{
	zval *nsAccessibilityElementPtr_param = NULL;
	zend_long nsAccessibilityElementPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsAccessibilityElementPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsAccessibilityElementPtr_param);
	
            handle = (zend_long) ns_accessibilityelement_wrap((void *)(uintptr_t) nsAccessibilityElementPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, destroy)
{
	zval *element_param = NULL;
	zend_long element;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &element_param);
	
            ns_accessibilityelement_destroy((uintptr_t) element);
        
}

PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, nsAccessibilityElement)
{
	zval *element_param = NULL;
	zend_long element, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &element_param);
	
            ptr = (zend_long)(uintptr_t) ns_accessibilityelement_nsaccessibilityelement((uintptr_t) element);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, addChild)
{
	zval *element_param = NULL, *child_param = NULL;
	zend_long element, child;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(element)
		Z_PARAM_LONG(child)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &element_param, &child_param);
	
            ns_accessibilityelement_add_child((uintptr_t) element, (uintptr_t) child);
        
}

PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, setFrameInParent)
{
	double x, y, width, height;
	zval *element_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long element;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(element)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &element_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_accessibilityelement_set_frame_in_parent((uintptr_t) element, x, y, width, height);
        
}

PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, frameInParent)
{
	zval *element_param = NULL;
	zend_long element;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &element_param);
	
            double x = 0, y = 0, w = 0, h = 0;
            zval frame;
            array_init(&frame);
            if (ns_accessibilityelement_frame_in_parent((uintptr_t) element, &x, &y, &w, &h)) {
                add_next_index_double(&frame, x);
                add_next_index_double(&frame, y);
                add_next_index_double(&frame, w);
                add_next_index_double(&frame, h);
            }
            RETURN_ZVAL(&frame, 0, 0);
        
	array_init(return_value);
	return;
}

