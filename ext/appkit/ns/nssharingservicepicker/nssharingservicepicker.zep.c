
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

#include "ns-sharingservicepicker.h"
#include <stdint.h>



/** NSSharingServicePicker — share menu picker anchored to a view. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSharingServicePicker_NSSharingServicePicker)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSharingServicePicker, NSSharingServicePicker, appkit, ns_nssharingservicepicker_nssharingservicepicker, appkit_ns_nssharingservicepicker_nssharingservicepicker_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSharingServicePicker_NSSharingServicePicker, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *strings_param = NULL;
	zval strings;

	ZVAL_UNDEF(&strings);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(strings)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &strings_param);
	zephir_get_arrval(&strings, strings_param);
	
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(strings), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            handle = (zend_long) ns_sharingservicepicker_create(cstrings, count);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSharingServicePicker_NSSharingServicePicker, wrap)
{
	zval *nsSharingServicePickerPtr_param = NULL;
	zend_long nsSharingServicePickerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSharingServicePickerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSharingServicePickerPtr_param);
	
            handle = (zend_long) ns_sharingservicepicker_wrap((void *)(uintptr_t) nsSharingServicePickerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSharingServicePicker_NSSharingServicePicker, destroy)
{
	zval *picker_param = NULL;
	zend_long picker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            ns_sharingservicepicker_destroy((uintptr_t) picker);
        
}

PHP_METHOD(AppKit_NS_NSSharingServicePicker_NSSharingServicePicker, nsSharingServicePicker)
{
	zval *picker_param = NULL;
	zend_long picker, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            ptr = (zend_long)(uintptr_t) ns_sharingservicepicker_nssharingservicepicker((uintptr_t) picker);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSharingServicePicker_NSSharingServicePicker, showRelativeToRect)
{
	double x, y, width, height;
	zval *picker_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *view_param = NULL, *preferredEdge_param = NULL;
	zend_long picker, view, preferredEdge;

	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(picker)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(preferredEdge)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &picker_param, &x_param, &y_param, &width_param, &height_param, &view_param, &preferredEdge_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_sharingservicepicker_show_relative_to_rect(
                (uintptr_t) picker, x, y, width, height, (uintptr_t) view, preferredEdge
            );
        
}

PHP_METHOD(AppKit_NS_NSSharingServicePicker_NSSharingServicePicker, close)
{
	zval *picker_param = NULL;
	zend_long picker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            ns_sharingservicepicker_close((uintptr_t) picker);
        
}

PHP_METHOD(AppKit_NS_NSSharingServicePicker_NSSharingServicePicker, pollChosenService)
{
	zval *picker_param = NULL;
	zend_long picker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_sharingservicepicker_poll_chosen_service((uintptr_t) picker, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSharingServicePicker_NSSharingServicePicker, standardShareMenuItem)
{
	zval *picker_param = NULL;
	zend_long picker, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(picker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &picker_param);
	
            handle = (zend_long) ns_sharingservicepicker_standard_share_menu_item((uintptr_t) picker);
        
	RETURN_LONG(handle);
}

