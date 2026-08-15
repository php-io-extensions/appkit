
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

#include "ns-stackview.h"
#include <stdint.h>



/**
 * NSStackView auto-layout stack container.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSStackView_NSStackView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStackView, NSStackView, appkit, ns_nsstackview_nsstackview, appkit_ns_nsstackview_nsstackview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, create)
{
	zend_bool vertical;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *vertical_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(vertical)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &x_param, &y_param, &width_param, &height_param, &vertical_param);
	if (!vertical_param) {
		vertical = 1;
	} else {
		}
	
            handle = (zend_long) ns_stackview_create((double) x, (double) y, (double) width, (double) height, vertical ? 1 : 0);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, destroy)
{
	zval *stack_param = NULL;
	zend_long stack;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(stack)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &stack_param);
	
            ns_stackview_destroy((uintptr_t) stack);
        
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setSpacing)
{
	double spacing;
	zval *stack_param = NULL, *spacing_param = NULL;
	zend_long stack;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(stack)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &stack_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	
            ns_stackview_set_spacing((uintptr_t) stack, (double) spacing);
        
}

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, addArrangedSubview)
{
	zval *stack_param = NULL, *child_param = NULL;
	zend_long stack, child;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(stack)
		Z_PARAM_LONG(child)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &stack_param, &child_param);
	
            ns_stackview_add_arranged_subview((uintptr_t) stack, (uintptr_t) child);
        
}

