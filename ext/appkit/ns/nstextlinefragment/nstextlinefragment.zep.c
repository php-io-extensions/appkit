
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

#include "ns-textlinefragment.h"
#include <stdint.h>



/**
 * NSTextLineFragment — single laid-out line.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextLineFragment_NSTextLineFragment)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextLineFragment, NSTextLineFragment, appkit, ns_nstextlinefragment_nstextlinefragment, appkit_ns_nstextlinefragment_nstextlinefragment_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextLineFragment_NSTextLineFragment, createWithString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long location, length, handle = 0;
	zval *value_param = NULL, *location_param = NULL, *length_param = NULL;
	zval value;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(value)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &value_param, &location_param, &length_param);
	zephir_get_strval(&value, value_param);
	
            handle = (zend_long) ns_textlinefragment_create_with_string(Z_STRVAL(value), (int) location, (int) length);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextLineFragment_NSTextLineFragment, wrap)
{
	zval *nsTextLineFragmentPtr_param = NULL;
	zend_long nsTextLineFragmentPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextLineFragmentPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextLineFragmentPtr_param);
	
            handle = (zend_long) ns_textlinefragment_wrap((void *)(uintptr_t) nsTextLineFragmentPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextLineFragment_NSTextLineFragment, destroy)
{
	zval *fragment_param = NULL;
	zend_long fragment;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fragment_param);
	
            ns_textlinefragment_destroy((uintptr_t) fragment);
        
}

/**
 * @return array [location, length]
 */
PHP_METHOD(AppKit_NS_NSTextLineFragment_NSTextLineFragment, characterRange)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fragment_param = NULL;
	zend_long fragment;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fragment_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int location = 0, length = 0;
            ns_textlinefragment_character_range((uintptr_t) fragment, &location, &length);
            add_next_index_long(&out, location);
            add_next_index_long(&out, length);
        
	RETURN_CTOR(&out);
}

/**
 * @return array [x, y, w, h]
 */
PHP_METHOD(AppKit_NS_NSTextLineFragment_NSTextLineFragment, typographicBounds)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fragment_param = NULL;
	zend_long fragment;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fragment_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlinefragment_typographic_bounds((uintptr_t) fragment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        
	RETURN_CTOR(&out);
}

/**
 * @return array [x, y]
 */
PHP_METHOD(AppKit_NS_NSTextLineFragment_NSTextLineFragment, glyphOrigin)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fragment_param = NULL;
	zend_long fragment;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fragment_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0;
            ns_textlinefragment_glyph_origin((uintptr_t) fragment, &x, &y);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
        
	RETURN_CTOR(&out);
}

