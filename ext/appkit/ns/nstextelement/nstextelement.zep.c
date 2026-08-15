
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

#include "ns-textelement.h"
#include <stdint.h>



/**
 * NSTextElement — TextKit 2 content element.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextElement_NSTextElement)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextElement, NSTextElement, appkit, ns_nstextelement_nstextelement, appkit_ns_nstextelement_nstextelement_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, wrap)
{
	zval *nsTextElementPtr_param = NULL;
	zend_long nsTextElementPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextElementPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextElementPtr_param);
	
            handle = (zend_long) ns_textelement_wrap((void *)(uintptr_t) nsTextElementPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, destroy)
{
	zval *element_param = NULL;
	zend_long element;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &element_param);
	
            ns_textelement_destroy((uintptr_t) element);
        
}

PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, isRepresentedElement)
{
	zend_bool result = 0;
	zval *element_param = NULL;
	zend_long element;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &element_param);
	
            result = ns_textelement_is_represented_element((uintptr_t) element) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, childElementsCount)
{
	zval *element_param = NULL;
	zend_long element, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &element_param);
	
            value = (zend_long) ns_textelement_child_elements_count((uintptr_t) element);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, elementRangePtr)
{
	zval *element_param = NULL;
	zend_long element, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &element_param);
	
            ptr = (zend_long) ns_textelement_element_range_ptr((uintptr_t) element);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, textContentManager)
{
	zval *element_param = NULL;
	zend_long element, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &element_param);
	
            handle = (zend_long) ns_textelement_text_content_manager((uintptr_t) element);
        
	RETURN_LONG(handle);
}

