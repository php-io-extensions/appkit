
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

#include "ns-stepper.h"
#include <stdint.h>



/**
 * NSStepper value control.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSStepper_NSStepper)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStepper, NSStepper, appkit, ns_nsstepper_nsstepper, appkit_ns_nsstepper_nsstepper_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, create)
{
	double min, max;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *min_param = NULL, *max_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 6)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(min)
		Z_PARAM_ZVAL(max)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 2, &x_param, &y_param, &width_param, &height_param, &min_param, &max_param);
	if (!min_param) {
		min = 0.0;
	} else {
		min = zephir_get_doubleval(min_param);
	}
	if (!max_param) {
		max = 100.0;
	} else {
		max = zephir_get_doubleval(max_param);
	}
	
            handle = (zend_long) ns_stepper_create(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                (double) min,
                (double) max
            );
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, destroy)
{
	zval *stepper_param = NULL;
	zend_long stepper;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(stepper)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &stepper_param);
	
            ns_stepper_destroy((uintptr_t) stepper);
        
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setValue)
{
	double value;
	zval *stepper_param = NULL, *value_param = NULL;
	zend_long stepper;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(stepper)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &stepper_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_stepper_set_value((uintptr_t) stepper, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, getValue)
{
	double value = 0;
	zval *stepper_param = NULL;
	zend_long stepper;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(stepper)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &stepper_param);
	
            value = ns_stepper_get_value((uintptr_t) stepper);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, pollChange)
{
	zend_bool result = 0;
	zval *stepper_param = NULL;
	zend_long stepper;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(stepper)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &stepper_param);
	
            result = ns_stepper_poll_change((uintptr_t) stepper) == 1;
        
	RETURN_BOOL(result);
}

