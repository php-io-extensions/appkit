
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

#include "ns-splitview.h"
#include <stdint.h>



/**
 * NSSplitView resizable split pane container.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSplitView_NSSplitView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSplitView, NSSplitView, appkit, ns_nssplitview_nssplitview, appkit_ns_nssplitview_nssplitview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, create)
{
	zend_bool vertical;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *vertical_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(vertical)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &x_param, &y_param, &width_param, &height_param, &vertical_param);
	if (!vertical_param) {
		vertical = 1;
	} else {
		}
	
            handle = (zend_long) ns_splitview_create((double) x, (double) y, (double) width, (double) height, vertical ? 1 : 0);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, destroy)
{
	zval *split_param = NULL;
	zend_long split;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(split)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &split_param);
	
            ns_splitview_destroy((uintptr_t) split);
        
}

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, addSubview)
{
	zval *split_param = NULL, *child_param = NULL;
	zend_long split, child;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(split)
		Z_PARAM_LONG(child)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &split_param, &child_param);
	
            ns_splitview_add_subview((uintptr_t) split, (uintptr_t) child);
        
}

