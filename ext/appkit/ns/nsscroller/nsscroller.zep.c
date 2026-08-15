
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

#include "ns-scroller.h"
#include <stdint.h>



/** NSScroller — scroll bar control (NSControl subclass). */
ZEPHIR_INIT_CLASS(AppKit_NS_NSScroller_NSScroller)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSScroller, NSScroller, appkit, ns_nsscroller_nsscroller, appkit_ns_nsscroller_nsscroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, create)
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
	
            handle = (zend_long) ns_scroller_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, wrap)
{
	zval *nsScrollerPtr_param = NULL;
	zend_long nsScrollerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsScrollerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsScrollerPtr_param);
	
            handle = (zend_long) ns_scroller_wrap((void *)(uintptr_t) nsScrollerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, destroy)
{
	zval *scroller_param = NULL;
	zend_long scroller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scroller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scroller_param);
	
            ns_scroller_destroy((uintptr_t) scroller);
        
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, nsScroller)
{
	zval *scroller_param = NULL;
	zend_long scroller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scroller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scroller_param);
	
            ptr = (zend_long)(uintptr_t) ns_scroller_nsscroller((uintptr_t) scroller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, setScrollerStyle)
{
	zval *scroller_param = NULL, *style_param = NULL;
	zend_long scroller, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scroller)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scroller_param, &style_param);
	
            ns_scroller_set_scroller_style((uintptr_t) scroller, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, getScrollerStyle)
{
	zval *scroller_param = NULL;
	zend_long scroller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scroller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scroller_param);
	
            value = (zend_long) ns_scroller_get_scroller_style((uintptr_t) scroller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, setKnobStyle)
{
	zval *scroller_param = NULL, *style_param = NULL;
	zend_long scroller, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scroller)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scroller_param, &style_param);
	
            ns_scroller_set_knob_style((uintptr_t) scroller, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, getKnobStyle)
{
	zval *scroller_param = NULL;
	zend_long scroller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scroller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scroller_param);
	
            value = (zend_long) ns_scroller_get_knob_style((uintptr_t) scroller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, setControlSize)
{
	zval *scroller_param = NULL, *size_param = NULL;
	zend_long scroller, size;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scroller)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scroller_param, &size_param);
	
            ns_scroller_set_control_size((uintptr_t) scroller, (int) size);
        
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, getControlSize)
{
	zval *scroller_param = NULL;
	zend_long scroller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scroller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scroller_param);
	
            value = (zend_long) ns_scroller_get_control_size((uintptr_t) scroller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, setKnobProportion)
{
	double proportion;
	zval *scroller_param = NULL, *proportion_param = NULL;
	zend_long scroller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scroller)
		Z_PARAM_ZVAL(proportion)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scroller_param, &proportion_param);
	proportion = zephir_get_doubleval(proportion_param);
	
            ns_scroller_set_knob_proportion((uintptr_t) scroller, proportion);
        
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, getKnobProportion)
{
	double value = 0;
	zval *scroller_param = NULL;
	zend_long scroller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scroller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scroller_param);
	
            value = ns_scroller_get_knob_proportion((uintptr_t) scroller);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, hitPart)
{
	zval *scroller_param = NULL;
	zend_long scroller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scroller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scroller_param);
	
            value = (zend_long) ns_scroller_get_hit_part((uintptr_t) scroller);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, preferredScrollerStyle)
{
	zend_long value = 0;
	
            value = (zend_long) ns_scroller_get_preferred_scroller_style();
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, scrollerWidth)
{
	double value = 0;
	zval *controlSize_param = NULL, *scrollerStyle_param = NULL;
	zend_long controlSize, scrollerStyle;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controlSize)
		Z_PARAM_LONG(scrollerStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controlSize_param, &scrollerStyle_param);
	
            value = ns_scroller_scroller_width((int) controlSize, (int) scrollerStyle);
        
	RETURN_DOUBLE(value);
}

