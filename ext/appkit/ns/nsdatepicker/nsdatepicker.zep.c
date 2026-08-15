
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

#include "ns-datepicker.h"
#include <stdint.h>



/**
 * NSDatePicker date/time control.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSDatePicker_NSDatePicker)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDatePicker, NSDatePicker, appkit, ns_nsdatepicker_nsdatepicker, appkit_ns_nsdatepicker_nsdatepicker_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, create)
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
	
            handle = (zend_long) ns_datepicker_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, destroy)
{
	zval *picker_param = NULL;
	zend_long picker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            ns_datepicker_destroy((uintptr_t) picker);
        
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, setTimestamp)
{
	zval *picker_param = NULL, *timestamp_param = NULL;
	zend_long picker, timestamp;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(picker)
		Z_PARAM_LONG(timestamp)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &picker_param, &timestamp_param);
	
            ns_datepicker_set_timestamp((uintptr_t) picker, (long) timestamp);
        
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, getTimestamp)
{
	zval *picker_param = NULL;
	zend_long picker, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            value = (zend_long) ns_datepicker_get_timestamp((uintptr_t) picker);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSDatePicker_NSDatePicker, pollChange)
{
	zend_bool result = 0;
	zval *picker_param = NULL;
	zend_long picker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            result = ns_datepicker_poll_change((uintptr_t) picker) == 1;
        
	RETURN_BOOL(result);
}

