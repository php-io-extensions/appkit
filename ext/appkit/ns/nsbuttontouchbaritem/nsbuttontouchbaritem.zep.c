
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

#include "ns-buttontouchbaritem.h"
#include <stdint.h>



/** NSButtonTouchBarItem */
ZEPHIR_INIT_CLASS(AppKit_NS_NSButtonTouchBarItem_NSButtonTouchBarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSButtonTouchBarItem, NSButtonTouchBarItem, appkit, ns_nsbuttontouchbaritem_nsbuttontouchbaritem, appkit_ns_nsbuttontouchbaritem_nsbuttontouchbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSButtonTouchBarItem_NSButtonTouchBarItem, buttonWithTitle)
{
	zend_long h = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *identifier_param = NULL, *title_param = NULL;
	zval identifier, title;

	ZVAL_UNDEF(&identifier);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(identifier)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &identifier_param, &title_param);
	zephir_get_strval(&identifier, identifier_param);
	zephir_get_strval(&title, title_param);
	 h = (zend_long) ns_buttontouchbaritem_button_with_title(Z_STRVAL(identifier), Z_STRVAL(title)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSButtonTouchBarItem_NSButtonTouchBarItem, buttonWithImage)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long image, h = 0;
	zval *identifier_param = NULL, *image_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(identifier)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &identifier_param, &image_param);
	zephir_get_strval(&identifier, identifier_param);
	 h = (zend_long) ns_buttontouchbaritem_button_with_image(Z_STRVAL(identifier), (uintptr_t) image); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSButtonTouchBarItem_NSButtonTouchBarItem, wrap)
{
	zval *ptr_param = NULL;
	zend_long ptr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ptr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ptr_param);
	 handle = (zend_long) ns_buttontouchbaritem_wrap((void *)(uintptr_t) ptr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSButtonTouchBarItem_NSButtonTouchBarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_buttontouchbaritem_destroy((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSButtonTouchBarItem_NSButtonTouchBarItem, nsButtonTouchBarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ptr = (zend_long)(uintptr_t) ns_buttontouchbaritem_nsbuttontouchbaritem((uintptr_t) item); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSButtonTouchBarItem_NSButtonTouchBarItem, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *item_param = NULL, *title_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &title_param);
	zephir_get_strval(&title, title_param);
	 ns_buttontouchbaritem_set_title((uintptr_t) item, Z_STRVAL(title)); 
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSButtonTouchBarItem_NSButtonTouchBarItem, pollAction)
{
	zend_bool r = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 r = ns_buttontouchbaritem_poll_action((uintptr_t) item) == 1; 
	RETURN_BOOL(r);
}

