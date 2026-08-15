
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

#include "ns-progressindicator.h"
#include <stdint.h>



/**
 * NSProgressIndicator bar control.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSProgressIndicator_NSProgressIndicator)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSProgressIndicator, NSProgressIndicator, appkit, ns_nsprogressindicator_nsprogressindicator, appkit_ns_nsprogressindicator_nsprogressindicator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, create)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	
            handle = (zend_long) ns_progressindicator_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, destroy)
{
	zval *bar_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	
            ns_progressindicator_destroy((uintptr_t) bar);
        
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setIndeterminate)
{
	zend_bool on;
	zval *bar_param = NULL, *on_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &bar_param, &on_param);
	
            ns_progressindicator_set_indeterminate((uintptr_t) bar, on ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMin)
{
	double min;
	zval *bar_param = NULL, *min_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_ZVAL(min)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &bar_param, &min_param);
	min = zephir_get_doubleval(min_param);
	
            ns_progressindicator_set_min((uintptr_t) bar, (double) min);
        
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMax)
{
	double max;
	zval *bar_param = NULL, *max_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_ZVAL(max)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &bar_param, &max_param);
	max = zephir_get_doubleval(max_param);
	
            ns_progressindicator_set_max((uintptr_t) bar, (double) max);
        
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setValue)
{
	double value;
	zval *bar_param = NULL, *value_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &bar_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_progressindicator_set_value((uintptr_t) bar, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, getValue)
{
	double value = 0;
	zval *bar_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	
            value = ns_progressindicator_get_value((uintptr_t) bar);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, start)
{
	zval *bar_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	
            ns_progressindicator_start((uintptr_t) bar);
        
}

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, stop)
{
	zval *bar_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	
            ns_progressindicator_stop((uintptr_t) bar);
        
}

