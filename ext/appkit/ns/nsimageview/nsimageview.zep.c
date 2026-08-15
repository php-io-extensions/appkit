
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

#include "ns-imageview.h"
#include <stdint.h>



/**
 * NSImageView image display control.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSImageView_NSImageView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSImageView, NSImageView, appkit, ns_nsimageview_nsimageview, appkit_ns_nsimageview_nsimageview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, create)
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
	
            handle = (zend_long) ns_imageview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, destroy)
{
	zval *view_param = NULL;
	zend_long view;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            ns_imageview_destroy((uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setPath)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *view_param = NULL, *path_param = NULL;
	zend_long view;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(view)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &view_param, &path_param);
	zephir_get_strval(&path, path_param);
	
            result = ns_imageview_set_path((uintptr_t) view, Z_STRVAL(path)) == 1;
        
	RETURN_MM_BOOL(result);
}

