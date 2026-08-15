
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

#include "ns-colorwell.h"
#include <stdint.h>



/**
 * NSColorWell color picker control.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSColorWell_NSColorWell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSColorWell, NSColorWell, appkit, ns_nscolorwell_nscolorwell, appkit_ns_nscolorwell_nscolorwell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, create)
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
	
            handle = (zend_long) ns_colorwell_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, destroy)
{
	zval *well_param = NULL;
	zend_long well;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(well)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &well_param);
	
            ns_colorwell_destroy((uintptr_t) well);
        
}

PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, setRgba)
{
	zval *well_param = NULL, *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL;
	zend_long well, r, g, b, a;

	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(well)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &well_param, &r_param, &g_param, &b_param, &a_param);
	if (!a_param) {
		a = 255;
	} else {
		}
	
            ns_colorwell_set_rgba((uintptr_t) well, (int) r, (int) g, (int) b, (int) a);
        
}

PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, getRgba)
{
	zval *well_param = NULL;
	zend_long well;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(well)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &well_param);
	
            int r = 0, g = 0, b = 0, a = 0;
            zval packed;
            array_init(&packed);
            if (ns_colorwell_get_rgba((uintptr_t) well, &r, &g, &b, &a)) {
                add_next_index_long(&packed, r);
                add_next_index_long(&packed, g);
                add_next_index_long(&packed, b);
                add_next_index_long(&packed, a);
            }
            RETURN_ZVAL(&packed, 0, 0);
        
	array_init(return_value);
	return;
}

PHP_METHOD(AppKit_NS_NSColorWell_NSColorWell, pollChange)
{
	zend_bool result = 0;
	zval *well_param = NULL;
	zend_long well;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(well)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &well_param);
	
            result = ns_colorwell_poll_change((uintptr_t) well) == 1;
        
	RETURN_BOOL(result);
}

