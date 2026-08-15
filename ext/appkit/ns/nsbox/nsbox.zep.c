
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

#include "ns-box.h"
#include <stdint.h>



/**
 * NSBox titled container view.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSBox_NSBox)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSBox, NSBox, appkit, ns_nsbox_nsbox, appkit_ns_nsbox_nsbox_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSBox_NSBox, create)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *title_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &x_param, &y_param, &width_param, &height_param, &title_param);
	if (!title_param) {
		ZEPHIR_INIT_VAR(&title);
		ZVAL_STRING(&title, "");
	} else {
		zephir_get_strval(&title, title_param);
	}
	
            handle = (zend_long) ns_box_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(title));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBox_NSBox, destroy)
{
	zval *box_param = NULL;
	zend_long box;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(box)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &box_param);
	
            ns_box_destroy((uintptr_t) box);
        
}

PHP_METHOD(AppKit_NS_NSBox_NSBox, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *box_param = NULL, *title_param = NULL;
	zend_long box;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(box)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &box_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_box_set_title((uintptr_t) box, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSBox_NSBox, addSubview)
{
	zval *box_param = NULL, *child_param = NULL;
	zend_long box, child;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(box)
		Z_PARAM_LONG(child)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &box_param, &child_param);
	
            ns_box_add_subview((uintptr_t) box, (uintptr_t) child);
        
}

