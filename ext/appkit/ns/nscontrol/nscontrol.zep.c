
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

#include "ns-control.h"
#include <stdint.h>



/**
 * NSControl — shared control API for any NSControl subclass view-box handle
 * (NSButton, NSTextField, NSSlider, etc.).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSControl_NSControl)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSControl, NSControl, appkit, ns_nscontrol_nscontrol, appkit_ns_nscontrol_nscontrol_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, setEnabled)
{
	zend_bool enabled;
	zval *control_param = NULL, *enabled_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &control_param, &enabled_param);
	
            ns_control_set_enabled((uintptr_t) control, enabled ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, isEnabled)
{
	zend_bool result = 0;
	zval *control_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            result = ns_control_is_enabled((uintptr_t) control) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, setStringValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *control_param = NULL, *value_param = NULL;
	zend_long control;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &control_param, &value_param);
	zephir_get_strval(&value, value_param);
	
            ns_control_set_string((uintptr_t) control, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, getStringValue)
{
	zval *control_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_control_get_string((uintptr_t) control, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, setIntValue)
{
	zval *control_param = NULL, *value_param = NULL;
	zend_long control, value;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &control_param, &value_param);
	
            ns_control_set_int_value((uintptr_t) control, (int) value);
        
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, getIntValue)
{
	zval *control_param = NULL;
	zend_long control, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            value = (zend_long) ns_control_get_int_value((uintptr_t) control);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, setTag)
{
	zval *control_param = NULL, *tag_param = NULL;
	zend_long control, tag;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &control_param, &tag_param);
	
            ns_control_set_tag((uintptr_t) control, (int) tag);
        
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, getTag)
{
	zval *control_param = NULL;
	zend_long control, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            value = (zend_long) ns_control_get_tag((uintptr_t) control);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, performClick)
{
	zval *control_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            ns_control_perform_click((uintptr_t) control);
        
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, setContinuous)
{
	zend_bool continuous;
	zval *control_param = NULL, *continuous_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_BOOL(continuous)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &control_param, &continuous_param);
	
            ns_control_set_continuous((uintptr_t) control, continuous ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, isContinuous)
{
	zend_bool result = 0;
	zval *control_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            result = ns_control_is_continuous((uintptr_t) control) == 1;
        
	RETURN_BOOL(result);
}

/**
 * NSControlStateValue: -1 mixed, 0 off, 1 on.
 */
PHP_METHOD(AppKit_NS_NSControl_NSControl, setState)
{
	zval *control_param = NULL, *state_param = NULL;
	zend_long control, state;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &control_param, &state_param);
	
            ns_control_set_state((uintptr_t) control, (int) state);
        
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, getState)
{
	zval *control_param = NULL;
	zend_long control, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            value = (zend_long) ns_control_get_state((uintptr_t) control);
        
	RETURN_LONG(value);
}

/**
 * NSControlSize: 0 regular, 1 small, 2 mini, 3 large.
 */
PHP_METHOD(AppKit_NS_NSControl_NSControl, setControlSize)
{
	zval *control_param = NULL, *size_param = NULL;
	zend_long control, size;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &control_param, &size_param);
	
            ns_control_set_control_size((uintptr_t) control, (int) size);
        
}

PHP_METHOD(AppKit_NS_NSControl_NSControl, getControlSize)
{
	zval *control_param = NULL;
	zend_long control, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            value = (zend_long) ns_control_get_control_size((uintptr_t) control);
        
	RETURN_LONG(value);
}

