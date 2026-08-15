
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
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"

#include "ns-textparagraph.h"
#include <stdint.h>



/**
 * NSTextParagraph — paragraph text element.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextParagraph_NSTextParagraph)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextParagraph, NSTextParagraph, appkit, ns_nstextparagraph_nstextparagraph, appkit_ns_nstextparagraph_nstextparagraph_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextParagraph_NSTextParagraph, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *value_param = NULL;
	zval value;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &value_param);
	if (!value_param) {
		ZEPHIR_INIT_VAR(&value);
		ZVAL_STRING(&value, "");
	} else {
		zephir_get_strval(&value, value_param);
	}
	
            handle = (zend_long) ns_textparagraph_create(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextParagraph_NSTextParagraph, wrap)
{
	zval *nsTextParagraphPtr_param = NULL;
	zend_long nsTextParagraphPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextParagraphPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextParagraphPtr_param);
	
            handle = (zend_long) ns_textparagraph_wrap((void *)(uintptr_t) nsTextParagraphPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextParagraph_NSTextParagraph, destroy)
{
	zval *paragraph_param = NULL;
	zend_long paragraph;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(paragraph)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &paragraph_param);
	
            ns_textparagraph_destroy((uintptr_t) paragraph);
        
}

PHP_METHOD(AppKit_NS_NSTextParagraph_NSTextParagraph, getAttributedString)
{
	zval *paragraph_param = NULL;
	zend_long paragraph;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(paragraph)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &paragraph_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_textparagraph_get_attributed_string((uintptr_t) paragraph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTextParagraph_NSTextParagraph, paragraphContentRangePtr)
{
	zval *paragraph_param = NULL;
	zend_long paragraph, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(paragraph)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &paragraph_param);
	
            ptr = (zend_long) ns_textparagraph_paragraph_content_range_ptr((uintptr_t) paragraph);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTextParagraph_NSTextParagraph, paragraphSeparatorRangePtr)
{
	zval *paragraph_param = NULL;
	zend_long paragraph, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(paragraph)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &paragraph_param);
	
            ptr = (zend_long) ns_textparagraph_paragraph_separator_range_ptr((uintptr_t) paragraph);
        
	RETURN_LONG(ptr);
}

