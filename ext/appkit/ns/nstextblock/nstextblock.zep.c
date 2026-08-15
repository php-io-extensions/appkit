
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

#include "ns-textblock.h"
#include <stdint.h>



/**
 * NSTextBlock — base text block layout object.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextBlock_NSTextBlock)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextBlock, NSTextBlock, appkit, ns_nstextblock_nstextblock, appkit_ns_nstextblock_nstextblock_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_textblock_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, wrap)
{
	zval *nsTextBlockPtr_param = NULL;
	zend_long nsTextBlockPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextBlockPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextBlockPtr_param);
	
            handle = (zend_long) ns_textblock_wrap((void *)(uintptr_t) nsTextBlockPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, destroy)
{
	zval *block_param = NULL;
	zend_long block;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(block)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &block_param);
	
            ns_textblock_destroy((uintptr_t) block);
        
}

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, setContentWidth)
{
	double width;
	zval *block_param = NULL, *width_param = NULL, *valueType_param = NULL;
	zend_long block, valueType;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(block)
		Z_PARAM_ZVAL(width)
		Z_PARAM_LONG(valueType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &block_param, &width_param, &valueType_param);
	width = zephir_get_doubleval(width_param);
	
            ns_textblock_set_content_width((uintptr_t) block, (double) width, (int) valueType);
        
}

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, getContentWidth)
{
	double value = 0;
	zval *block_param = NULL;
	zend_long block;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(block)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &block_param);
	
            value = ns_textblock_content_width((uintptr_t) block);
        
	RETURN_DOUBLE((double) (value));
}

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, setVerticalAlignment)
{
	zval *block_param = NULL, *alignment_param = NULL;
	zend_long block, alignment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(block)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &block_param, &alignment_param);
	
            ns_textblock_set_vertical_alignment((uintptr_t) block, (int) alignment);
        
}

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, getVerticalAlignment)
{
	zval *block_param = NULL;
	zend_long block, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(block)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &block_param);
	
            value = (zend_long) ns_textblock_get_vertical_alignment((uintptr_t) block);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, setBackgroundColor)
{
	zval *block_param = NULL, *colorHandle_param = NULL;
	zend_long block, colorHandle;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(block)
		Z_PARAM_LONG(colorHandle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &block_param, &colorHandle_param);
	
            ns_textblock_set_background_color((uintptr_t) block, (uintptr_t) colorHandle);
        
}

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, setValue)
{
	double val;
	zval *block_param = NULL, *val_param = NULL, *valueType_param = NULL, *dimension_param = NULL;
	zend_long block, valueType, dimension;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(block)
		Z_PARAM_ZVAL(val)
		Z_PARAM_LONG(valueType)
		Z_PARAM_LONG(dimension)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &block_param, &val_param, &valueType_param, &dimension_param);
	val = zephir_get_doubleval(val_param);
	
            ns_textblock_set_value((uintptr_t) block, (double) val, (int) valueType, (int) dimension);
        
}

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, getValue)
{
	double value = 0;
	zval *block_param = NULL, *dimension_param = NULL;
	zend_long block, dimension;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(block)
		Z_PARAM_LONG(dimension)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &block_param, &dimension_param);
	
            value = ns_textblock_value_for_dimension((uintptr_t) block, (int) dimension);
        
	RETURN_DOUBLE((double) (value));
}

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, setLayerWidth)
{
	double val;
	zval *block_param = NULL, *val_param = NULL, *valueType_param = NULL, *layer_param = NULL, *edge_param = NULL;
	zend_long block, valueType, layer, edge;

	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(block)
		Z_PARAM_ZVAL(val)
		Z_PARAM_LONG(valueType)
		Z_PARAM_LONG(layer)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(edge)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &block_param, &val_param, &valueType_param, &layer_param, &edge_param);
	val = zephir_get_doubleval(val_param);
	if (!edge_param) {
		edge = -1;
	} else {
		}
	
            ns_textblock_set_width((uintptr_t) block, (double) val, (int) valueType, (int) layer, (int) edge);
        
}

