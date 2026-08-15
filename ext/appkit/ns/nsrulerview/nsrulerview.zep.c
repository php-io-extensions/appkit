
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

#include "ns-rulerview.h"
#include <stdint.h>



/** NSRulerView — horizontal or vertical ruler for scroll views. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSRulerView_NSRulerView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSRulerView, NSRulerView, appkit, ns_nsrulerview_nsrulerview, appkit_ns_nsrulerview_nsrulerview_method_entry, 0);

	return SUCCESS;
}

/** orientation: 0 horizontal, 1 vertical (NSRulerOrientation). */
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, create)
{
	zval *orientation_param = NULL;
	zend_long orientation, handle = 0;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &orientation_param);
	if (!orientation_param) {
		orientation = 0;
	} else {
		}
	
            handle = (zend_long) ns_rulerview_create((int) orientation);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, wrap)
{
	zval *nsRulerViewPtr_param = NULL;
	zend_long nsRulerViewPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsRulerViewPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsRulerViewPtr_param);
	
            handle = (zend_long) ns_rulerview_wrap((void *)(uintptr_t) nsRulerViewPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, destroy)
{
	zval *ruler_param = NULL;
	zend_long ruler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ruler_param);
	
            ns_rulerview_destroy((uintptr_t) ruler);
        
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, nsRulerView)
{
	zval *ruler_param = NULL;
	zend_long ruler, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ruler_param);
	
            ptr = (zend_long)(uintptr_t) ns_rulerview_nsrulerview((uintptr_t) ruler);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setOrientation)
{
	zval *ruler_param = NULL, *orientation_param = NULL;
	zend_long ruler, orientation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &ruler_param, &orientation_param);
	
            ns_rulerview_set_orientation((uintptr_t) ruler, (int) orientation);
        
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, getOrientation)
{
	zval *ruler_param = NULL;
	zend_long ruler, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ruler_param);
	
            value = (zend_long) ns_rulerview_get_orientation((uintptr_t) ruler);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setRuleThickness)
{
	double thickness;
	zval *ruler_param = NULL, *thickness_param = NULL;
	zend_long ruler;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ruler)
		Z_PARAM_ZVAL(thickness)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &ruler_param, &thickness_param);
	thickness = zephir_get_doubleval(thickness_param);
	
            ns_rulerview_set_rule_thickness((uintptr_t) ruler, thickness);
        
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, getRuleThickness)
{
	double value = 0;
	zval *ruler_param = NULL;
	zend_long ruler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ruler_param);
	
            value = ns_rulerview_get_rule_thickness((uintptr_t) ruler);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setMeasurementUnits)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval units;
	zval *ruler_param = NULL, *units_param = NULL;
	zend_long ruler;

	ZVAL_UNDEF(&units);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ruler)
		Z_PARAM_STR(units)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &ruler_param, &units_param);
	zephir_get_strval(&units, units_param);
	
            ns_rulerview_set_measurement_units((uintptr_t) ruler, Z_STRVAL(units));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, getMeasurementUnits)
{
	zval *ruler_param = NULL;
	zend_long ruler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ruler_param);
	
            char buf[256];
            buf[0] = '\0';
            if (ns_rulerview_get_measurement_units((uintptr_t) ruler, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setOriginOffset)
{
	double offset;
	zval *ruler_param = NULL, *offset_param = NULL;
	zend_long ruler;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ruler)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &ruler_param, &offset_param);
	offset = zephir_get_doubleval(offset_param);
	
            ns_rulerview_set_origin_offset((uintptr_t) ruler, offset);
        
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, getOriginOffset)
{
	double value = 0;
	zval *ruler_param = NULL;
	zend_long ruler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ruler_param);
	
            value = ns_rulerview_get_origin_offset((uintptr_t) ruler);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setClientView)
{
	zval *ruler_param = NULL, *view_param = NULL;
	zend_long ruler, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &ruler_param, &view_param);
	
            ns_rulerview_set_client_view((uintptr_t) ruler, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, clientView)
{
	zval *ruler_param = NULL;
	zend_long ruler, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ruler_param);
	
            handle = (zend_long) ns_rulerview_client_view((uintptr_t) ruler);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setAccessoryView)
{
	zval *ruler_param = NULL, *view_param = NULL;
	zend_long ruler, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &ruler_param, &view_param);
	
            ns_rulerview_set_accessory_view((uintptr_t) ruler, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, accessoryView)
{
	zval *ruler_param = NULL;
	zend_long ruler, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ruler_param);
	
            handle = (zend_long) ns_rulerview_accessory_view((uintptr_t) ruler);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, addMarker)
{
	zval *ruler_param = NULL, *marker_param = NULL;
	zend_long ruler, marker;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &ruler_param, &marker_param);
	
            ns_rulerview_add_marker((uintptr_t) ruler, (uintptr_t) marker);
        
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, removeMarker)
{
	zval *ruler_param = NULL, *marker_param = NULL;
	zend_long ruler, marker;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &ruler_param, &marker_param);
	
            ns_rulerview_remove_marker((uintptr_t) ruler, (uintptr_t) marker);
        
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, invalidateHashMarks)
{
	zval *ruler_param = NULL;
	zend_long ruler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ruler_param);
	
            ns_rulerview_invalidate_hash_marks((uintptr_t) ruler);
        
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, baselineLocation)
{
	double value = 0;
	zval *ruler_param = NULL;
	zend_long ruler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ruler_param);
	
            value = ns_rulerview_baseline_location((uintptr_t) ruler);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, requiredThickness)
{
	double value = 0;
	zval *ruler_param = NULL;
	zend_long ruler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ruler_param);
	
            value = ns_rulerview_required_thickness((uintptr_t) ruler);
        
	RETURN_DOUBLE(value);
}

