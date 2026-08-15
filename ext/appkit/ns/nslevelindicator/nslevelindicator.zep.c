
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

#include "ns-levelindicator.h"
#include <stdint.h>



/**
 * NSLevelIndicator capacity / rating control.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSLevelIndicator_NSLevelIndicator)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSLevelIndicator, NSLevelIndicator, appkit, ns_nslevelindicator_nslevelindicator, appkit_ns_nslevelindicator_nslevelindicator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, create)
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
	
            handle = (zend_long) ns_levelindicator_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, destroy)
{
	zval *indicator_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            ns_levelindicator_destroy((uintptr_t) indicator);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setLevelIndicatorStyle)
{
	zval *indicator_param = NULL, *style_param = NULL;
	zend_long indicator, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &style_param);
	
            ns_levelindicator_set_level_indicator_style((uintptr_t) indicator, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getLevelIndicatorStyle)
{
	zval *indicator_param = NULL;
	zend_long indicator, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            value = (zend_long) ns_levelindicator_get_level_indicator_style((uintptr_t) indicator);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setEditable)
{
	zend_bool flag;
	zval *indicator_param = NULL, *flag_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &flag_param);
	
            ns_levelindicator_set_editable((uintptr_t) indicator, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, isEditable)
{
	zend_bool result = 0;
	zval *indicator_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            result = ns_levelindicator_is_editable((uintptr_t) indicator) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setMinValue)
{
	double value;
	zval *indicator_param = NULL, *value_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_levelindicator_set_min_value((uintptr_t) indicator, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getMinValue)
{
	double value = 0;
	zval *indicator_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            value = ns_levelindicator_get_min_value((uintptr_t) indicator);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setMaxValue)
{
	double value;
	zval *indicator_param = NULL, *value_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_levelindicator_set_max_value((uintptr_t) indicator, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getMaxValue)
{
	double value = 0;
	zval *indicator_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            value = ns_levelindicator_get_max_value((uintptr_t) indicator);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setWarningValue)
{
	double value;
	zval *indicator_param = NULL, *value_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_levelindicator_set_warning_value((uintptr_t) indicator, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getWarningValue)
{
	double value = 0;
	zval *indicator_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            value = ns_levelindicator_get_warning_value((uintptr_t) indicator);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setCriticalValue)
{
	double value;
	zval *indicator_param = NULL, *value_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_levelindicator_set_critical_value((uintptr_t) indicator, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getCriticalValue)
{
	double value = 0;
	zval *indicator_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            value = ns_levelindicator_get_critical_value((uintptr_t) indicator);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setDoubleValue)
{
	double value;
	zval *indicator_param = NULL, *value_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_levelindicator_set_double_value((uintptr_t) indicator, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getDoubleValue)
{
	double value = 0;
	zval *indicator_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            value = ns_levelindicator_get_double_value((uintptr_t) indicator);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setNumberOfTickMarks)
{
	zval *indicator_param = NULL, *count_param = NULL;
	zend_long indicator, count;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &count_param);
	
            ns_levelindicator_set_number_of_tick_marks((uintptr_t) indicator, (int) count);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getNumberOfTickMarks)
{
	zval *indicator_param = NULL;
	zend_long indicator, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            value = (zend_long) ns_levelindicator_get_number_of_tick_marks((uintptr_t) indicator);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setNumberOfMajorTickMarks)
{
	zval *indicator_param = NULL, *count_param = NULL;
	zend_long indicator, count;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &count_param);
	
            ns_levelindicator_set_number_of_major_tick_marks((uintptr_t) indicator, (int) count);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getNumberOfMajorTickMarks)
{
	zval *indicator_param = NULL;
	zend_long indicator, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            value = (zend_long) ns_levelindicator_get_number_of_major_tick_marks((uintptr_t) indicator);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setDrawsTieredCapacityLevels)
{
	zend_bool flag;
	zval *indicator_param = NULL, *flag_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &flag_param);
	
            ns_levelindicator_set_draws_tiered_capacity_levels((uintptr_t) indicator, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, drawsTieredCapacityLevels)
{
	zend_bool result = 0;
	zval *indicator_param = NULL;
	zend_long indicator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            result = ns_levelindicator_draws_tiered_capacity_levels((uintptr_t) indicator) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setPlaceholderVisibility)
{
	zval *indicator_param = NULL, *visibility_param = NULL;
	zend_long indicator, visibility;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(indicator)
		Z_PARAM_LONG(visibility)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &indicator_param, &visibility_param);
	
            ns_levelindicator_set_placeholder_visibility((uintptr_t) indicator, (int) visibility);
        
}

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getPlaceholderVisibility)
{
	zval *indicator_param = NULL;
	zend_long indicator, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(indicator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &indicator_param);
	
            value = (zend_long) ns_levelindicator_get_placeholder_visibility((uintptr_t) indicator);
        
	RETURN_LONG(value);
}

