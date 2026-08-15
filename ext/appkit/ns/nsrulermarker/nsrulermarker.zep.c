
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

#include "ns-rulermarker.h"
#include <stdint.h>



/** NSRulerMarker — draggable marker on an NSRulerView. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSRulerMarker_NSRulerMarker)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSRulerMarker, NSRulerMarker, appkit, ns_nsrulermarker_nsrulermarker, appkit_ns_nsrulermarker_nsrulermarker_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, create)
{
	double location;
	zval *ruler_param = NULL, *location_param = NULL;
	zend_long ruler, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ruler)
		Z_PARAM_ZVAL(location)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &ruler_param, &location_param);
	location = zephir_get_doubleval(location_param);
	
            handle = (zend_long) ns_rulermarker_create((uintptr_t) ruler, location);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, wrap)
{
	zval *nsRulerMarkerPtr_param = NULL;
	zend_long nsRulerMarkerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsRulerMarkerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsRulerMarkerPtr_param);
	
            handle = (zend_long) ns_rulermarker_wrap((void *)(uintptr_t) nsRulerMarkerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, destroy)
{
	zval *marker_param = NULL;
	zend_long marker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &marker_param);
	
            ns_rulermarker_destroy((uintptr_t) marker);
        
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, nsRulerMarker)
{
	zval *marker_param = NULL;
	zend_long marker, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &marker_param);
	
            ptr = (zend_long)(uintptr_t) ns_rulermarker_nsrulermarker((uintptr_t) marker);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, setLocation)
{
	double location;
	zval *marker_param = NULL, *location_param = NULL;
	zend_long marker;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(marker)
		Z_PARAM_ZVAL(location)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &marker_param, &location_param);
	location = zephir_get_doubleval(location_param);
	
            ns_rulermarker_set_location((uintptr_t) marker, location);
        
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, getLocation)
{
	double value = 0;
	zval *marker_param = NULL;
	zend_long marker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &marker_param);
	
            value = ns_rulermarker_get_location((uintptr_t) marker);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, setMovable)
{
	zend_bool flag;
	zval *marker_param = NULL, *flag_param = NULL;
	zend_long marker;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(marker)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &marker_param, &flag_param);
	
            ns_rulermarker_set_movable((uintptr_t) marker, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, isMovable)
{
	zend_bool result = 0;
	zval *marker_param = NULL;
	zend_long marker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &marker_param);
	
            result = ns_rulermarker_is_movable((uintptr_t) marker) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, setRemovable)
{
	zend_bool flag;
	zval *marker_param = NULL, *flag_param = NULL;
	zend_long marker;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(marker)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &marker_param, &flag_param);
	
            ns_rulermarker_set_removable((uintptr_t) marker, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, isRemovable)
{
	zend_bool result = 0;
	zval *marker_param = NULL;
	zend_long marker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &marker_param);
	
            result = ns_rulermarker_is_removable((uintptr_t) marker) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, thicknessRequired)
{
	double value = 0;
	zval *marker_param = NULL;
	zend_long marker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &marker_param);
	
            value = ns_rulermarker_thickness_required((uintptr_t) marker);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, isDragging)
{
	zend_bool result = 0;
	zval *marker_param = NULL;
	zend_long marker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &marker_param);
	
            result = ns_rulermarker_is_dragging((uintptr_t) marker) == 1;
        
	RETURN_BOOL(result);
}

