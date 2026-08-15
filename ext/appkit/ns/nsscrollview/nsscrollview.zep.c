
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

#include "ns-scrollview.h"
#include <stdint.h>



/**
 * NSScrollView scrollable document container.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSScrollView_NSScrollView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSScrollView, NSScrollView, appkit, ns_nsscrollview_nsscrollview, appkit_ns_nsscrollview_nsscrollview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, create)
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
	
            handle = (zend_long) ns_scrollview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, destroy)
{
	zval *scroll_param = NULL;
	zend_long scroll;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scroll)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scroll_param);
	
            ns_scrollview_destroy((uintptr_t) scroll);
        
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setDocumentView)
{
	zval *scroll_param = NULL, *child_param = NULL;
	zend_long scroll, child;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(scroll)
		Z_PARAM_LONG(child)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scroll_param, &child_param);
	
            ns_scrollview_set_document_view((uintptr_t) scroll, (uintptr_t) child);
        
}

