
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

#include "ns-paragraphstyle.h"
#include <stdint.h>



/**
 * NSParagraphStyle / NSMutableParagraphStyle — paragraph attributes.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSParagraphStyle_NSParagraphStyle)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSParagraphStyle, NSParagraphStyle, appkit, ns_nsparagraphstyle_nsparagraphstyle, appkit_ns_nsparagraphstyle_nsparagraphstyle_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, defaultParagraphStyle)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_paragraphstyle_default();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_paragraphstyle_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, wrap)
{
	zval *nsParagraphStylePtr_param = NULL;
	zend_long nsParagraphStylePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsParagraphStylePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsParagraphStylePtr_param);
	
            handle = (zend_long) ns_paragraphstyle_wrap((void *)(uintptr_t) nsParagraphStylePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, destroy)
{
	zval *style_param = NULL;
	zend_long style;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &style_param);
	
            ns_paragraphstyle_destroy((uintptr_t) style);
        
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getLineSpacing)
{
	double value = 0;
	zval *style_param = NULL;
	zend_long style;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &style_param);
	
            value = ns_paragraphstyle_line_spacing((uintptr_t) style);
        
	RETURN_DOUBLE((double) (value));
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setLineSpacing)
{
	double value;
	zval *style_param = NULL, *value_param = NULL;
	zend_long style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(style)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &style_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_paragraphstyle_set_line_spacing((uintptr_t) style, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getLineBreakMode)
{
	zval *style_param = NULL;
	zend_long style, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &style_param);
	
            value = (zend_long) ns_paragraphstyle_line_break_mode((uintptr_t) style);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setLineBreakMode)
{
	zval *style_param = NULL, *mode_param = NULL;
	zend_long style, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(style)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &style_param, &mode_param);
	
            ns_paragraphstyle_set_line_break_mode((uintptr_t) style, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getAlignment)
{
	zval *style_param = NULL;
	zend_long style, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &style_param);
	
            value = (zend_long) ns_paragraphstyle_alignment((uintptr_t) style);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setAlignment)
{
	zval *style_param = NULL, *alignment_param = NULL;
	zend_long style, alignment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(style)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &style_param, &alignment_param);
	
            ns_paragraphstyle_set_alignment((uintptr_t) style, (int) alignment);
        
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setParagraphStyle)
{
	zval *style_param = NULL, *sourceStyle_param = NULL;
	zend_long style, sourceStyle;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(style)
		Z_PARAM_LONG(sourceStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &style_param, &sourceStyle_param);
	
            ns_paragraphstyle_set_paragraph_style((uintptr_t) style, (uintptr_t) sourceStyle);
        
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setHeadIndent)
{
	double value;
	zval *style_param = NULL, *value_param = NULL;
	zend_long style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(style)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &style_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_paragraphstyle_set_head_indent((uintptr_t) style, (double) value);
        
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getHeadIndent)
{
	double value = 0;
	zval *style_param = NULL;
	zend_long style;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &style_param);
	
            value = ns_paragraphstyle_head_indent((uintptr_t) style);
        
	RETURN_DOUBLE((double) (value));
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, setHyphenationFactor)
{
	double value;
	zval *style_param = NULL, *value_param = NULL;
	zend_long style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(style)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &style_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_paragraphstyle_set_hyphenation_factor((uintptr_t) style, (float) value);
        
}

PHP_METHOD(AppKit_NS_NSParagraphStyle_NSParagraphStyle, getHyphenationFactor)
{
	double value = 0;
	zval *style_param = NULL;
	zend_long style;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &style_param);
	
            value = ns_paragraphstyle_hyphenation_factor((uintptr_t) style);
        
	RETURN_DOUBLE(value);
}

