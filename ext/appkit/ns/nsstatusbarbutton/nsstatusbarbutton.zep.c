
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

#include "ns-statusbarbutton.h"
#include <stdint.h>



/**
 * NSStatusBarButton for NSStatusItem.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSStatusBarButton_NSStatusBarButton)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStatusBarButton, NSStatusBarButton, appkit, ns_nsstatusbarbutton_nsstatusbarbutton, appkit_ns_nsstatusbarbutton_nsstatusbarbutton_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, wrap)
{
	zval *nsStatusBarButtonPtr_param = NULL;
	zend_long nsStatusBarButtonPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsStatusBarButtonPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsStatusBarButtonPtr_param);
	
            handle = (zend_long) ns_statusbarbutton_wrap((void *)(uintptr_t) nsStatusBarButtonPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, fromStatusItem)
{
	zval *item_param = NULL;
	zend_long item, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            handle = (zend_long) ns_statusbarbutton_from_status_item((uintptr_t) item);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, destroy)
{
	zval *button_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            ns_statusbarbutton_destroy((uintptr_t) button);
        
}

PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *button_param = NULL, *title_param = NULL;
	zend_long button;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(button)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &button_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_statusbarbutton_set_title((uintptr_t) button, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, getTitle)
{
	zval *button_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_statusbarbutton_get_title((uintptr_t) button, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, setAppearsDisabled)
{
	zend_bool flag;
	zval *button_param = NULL, *flag_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(button)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &button_param, &flag_param);
	
            ns_statusbarbutton_set_appears_disabled((uintptr_t) button, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, appearsDisabled)
{
	zend_bool result = 0;
	zval *button_param = NULL;
	zend_long button;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	
            result = ns_statusbarbutton_appears_disabled((uintptr_t) button) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSStatusBarButton_NSStatusBarButton, setImage)
{
	zval *button_param = NULL, *image_param = NULL;
	zend_long button, image;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &button_param, &image_param);
	
            ns_statusbarbutton_set_image((uintptr_t) button, (uintptr_t) image);
        
}

