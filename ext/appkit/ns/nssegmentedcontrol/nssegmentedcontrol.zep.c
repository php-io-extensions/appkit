
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

#include "ns-segmentedcontrol.h"
#include <stdint.h>



/**
 * NSSegmentedControl multi-segment picker.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSegmentedControl_NSSegmentedControl)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSegmentedControl, NSSegmentedControl, appkit, ns_nssegmentedcontrol_nssegmentedcontrol, appkit_ns_nssegmentedcontrol_nssegmentedcontrol_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, create)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *count_param = NULL;
	zend_long x, y, width, height, count, handle = 0;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &x_param, &y_param, &width_param, &height_param, &count_param);
	
            handle = (zend_long) ns_segmentedcontrol_create(
                (double) x,
                (double) y,
                (double) width,
                (double) height,
                (int) count
            );
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, destroy)
{
	zval *control_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            ns_segmentedcontrol_destroy((uintptr_t) control);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setLabel)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *control_param = NULL, *index_param = NULL, *title_param = NULL;
	zend_long control, index;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(control)
		Z_PARAM_LONG(index)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &control_param, &index_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_segmentedcontrol_set_label((uintptr_t) control, (int) index, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelected)
{
	zval *control_param = NULL, *index_param = NULL;
	zend_long control, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &control_param, &index_param);
	
            ns_segmentedcontrol_set_selected((uintptr_t) control, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, getSelected)
{
	zval *control_param = NULL;
	zend_long control, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            value = (zend_long) ns_segmentedcontrol_get_selected((uintptr_t) control);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, pollChange)
{
	zend_bool result = 0;
	zval *control_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            result = ns_segmentedcontrol_poll_change((uintptr_t) control) == 1;
        
	RETURN_BOOL(result);
}

