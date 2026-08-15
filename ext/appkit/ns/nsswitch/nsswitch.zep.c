
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

#include "ns-switch.h"
#include <stdint.h>



/**
 * NSSwitch toggle control.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSwitch_NSSwitch)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSwitch, NSSwitch, appkit, ns_nsswitch_nsswitch, appkit_ns_nsswitch_nsswitch_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, create)
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
	
            handle = (zend_long) ns_switch_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, destroy)
{
	zval *toggle_param = NULL;
	zend_long toggle;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(toggle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &toggle_param);
	
            ns_switch_destroy((uintptr_t) toggle);
        
}

PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, setOn)
{
	zend_bool on;
	zval *toggle_param = NULL, *on_param = NULL;
	zend_long toggle;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(toggle)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &toggle_param, &on_param);
	
            ns_switch_set_on((uintptr_t) toggle, on ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, isOn)
{
	zend_bool result = 0;
	zval *toggle_param = NULL;
	zend_long toggle;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(toggle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &toggle_param);
	
            result = ns_switch_is_on((uintptr_t) toggle) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSwitch_NSSwitch, pollChange)
{
	zend_bool result = 0;
	zval *toggle_param = NULL;
	zend_long toggle;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(toggle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &toggle_param);
	
            result = ns_switch_poll_change((uintptr_t) toggle) == 1;
        
	RETURN_BOOL(result);
}

