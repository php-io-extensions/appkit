
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
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"

#include "ns-typesetter.h"
#include <stdint.h>



/**
 * NSTypesetter — shared system typesetter.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTypesetter_NSTypesetter)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTypesetter, NSTypesetter, appkit, ns_nstypesetter_nstypesetter, appkit_ns_nstypesetter_nstypesetter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, sharedSystemTypesetter)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_typesetter_shared_system_typesetter();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, sharedSystemTypesetterForBehavior)
{
	zval *behavior_param = NULL;
	zend_long behavior, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(behavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &behavior_param);
	
            handle = (zend_long) ns_typesetter_shared_system_typesetter_for_behavior((int) behavior);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, defaultTypesetterBehavior)
{
	zend_long value = 0;
	
            value = (zend_long) ns_typesetter_default_typesetter_behavior();
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, wrap)
{
	zval *nsTypesetterPtr_param = NULL;
	zend_long nsTypesetterPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTypesetterPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTypesetterPtr_param);
	
            handle = (zend_long) ns_typesetter_wrap((void *)(uintptr_t) nsTypesetterPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, destroy)
{
	zval *typesetter_param = NULL;
	zend_long typesetter;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(typesetter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &typesetter_param);
	
            ns_typesetter_destroy((uintptr_t) typesetter);
        
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, usesFontLeading)
{
	zend_bool result = 0;
	zval *typesetter_param = NULL;
	zend_long typesetter;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(typesetter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &typesetter_param);
	
            result = ns_typesetter_uses_font_leading((uintptr_t) typesetter) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, setUsesFontLeading)
{
	zend_bool flag;
	zval *typesetter_param = NULL, *flag_param = NULL;
	zend_long typesetter;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(typesetter)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &typesetter_param, &flag_param);
	
            ns_typesetter_set_uses_font_leading((uintptr_t) typesetter, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, getTypesetterBehavior)
{
	zval *typesetter_param = NULL;
	zend_long typesetter, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(typesetter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &typesetter_param);
	
            value = (zend_long) ns_typesetter_typesetter_behavior((uintptr_t) typesetter);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, setTypesetterBehavior)
{
	zval *typesetter_param = NULL, *behavior_param = NULL;
	zend_long typesetter, behavior;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(typesetter)
		Z_PARAM_LONG(behavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &typesetter_param, &behavior_param);
	
            ns_typesetter_set_typesetter_behavior((uintptr_t) typesetter, (int) behavior);
        
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, getHyphenationFactor)
{
	double value = 0;
	zval *typesetter_param = NULL;
	zend_long typesetter;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(typesetter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &typesetter_param);
	
            value = ns_typesetter_hyphenation_factor((uintptr_t) typesetter);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, setHyphenationFactor)
{
	double factor;
	zval *typesetter_param = NULL, *factor_param = NULL;
	zend_long typesetter;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(typesetter)
		Z_PARAM_ZVAL(factor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &typesetter_param, &factor_param);
	factor = zephir_get_doubleval(factor_param);
	
            ns_typesetter_set_hyphenation_factor((uintptr_t) typesetter, (float) factor);
        
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, getLineFragmentPadding)
{
	double value = 0;
	zval *typesetter_param = NULL;
	zend_long typesetter;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(typesetter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &typesetter_param);
	
            value = ns_typesetter_line_fragment_padding((uintptr_t) typesetter);
        
	RETURN_DOUBLE((double) (value));
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, setLineFragmentPadding)
{
	double padding;
	zval *typesetter_param = NULL, *padding_param = NULL;
	zend_long typesetter;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(typesetter)
		Z_PARAM_ZVAL(padding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &typesetter_param, &padding_param);
	padding = zephir_get_doubleval(padding_param);
	
            ns_typesetter_set_line_fragment_padding((uintptr_t) typesetter, (double) padding);
        
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, bidiProcessingEnabled)
{
	zend_bool result = 0;
	zval *typesetter_param = NULL;
	zend_long typesetter;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(typesetter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &typesetter_param);
	
            result = ns_typesetter_bidi_processing_enabled((uintptr_t) typesetter) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, setBidiProcessingEnabled)
{
	zend_bool flag;
	zval *typesetter_param = NULL, *flag_param = NULL;
	zend_long typesetter;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(typesetter)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &typesetter_param, &flag_param);
	
            ns_typesetter_set_bidi_processing_enabled((uintptr_t) typesetter, flag ? 1 : 0);
        
}

