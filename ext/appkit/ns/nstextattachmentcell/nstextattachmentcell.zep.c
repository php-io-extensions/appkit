
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

#include "ns-textattachmentcell.h"
#include <stdint.h>



/**
 * NSTextAttachmentCell — cell drawn for an NSTextAttachment.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextAttachmentCell_NSTextAttachmentCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextAttachmentCell, NSTextAttachmentCell, appkit, ns_nstextattachmentcell_nstextattachmentcell, appkit_ns_nstextattachmentcell_nstextattachmentcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextAttachmentCell_NSTextAttachmentCell, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_textattachmentcell_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextAttachmentCell_NSTextAttachmentCell, wrap)
{
	zval *nsTextAttachmentCellPtr_param = NULL;
	zend_long nsTextAttachmentCellPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextAttachmentCellPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextAttachmentCellPtr_param);
	
            handle = (zend_long) ns_textattachmentcell_wrap((void *)(uintptr_t) nsTextAttachmentCellPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextAttachmentCell_NSTextAttachmentCell, destroy)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_textattachmentcell_destroy((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSTextAttachmentCell_NSTextAttachmentCell, setAttachment)
{
	zval *cell_param = NULL, *attachment_param = NULL;
	zend_long cell, attachment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(attachment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &attachment_param);
	
            ns_textattachmentcell_set_attachment((uintptr_t) cell, (uintptr_t) attachment);
        
}

PHP_METHOD(AppKit_NS_NSTextAttachmentCell_NSTextAttachmentCell, getAttachment)
{
	zval *cell_param = NULL;
	zend_long cell, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            handle = (zend_long) ns_textattachmentcell_get_attachment((uintptr_t) cell);
        
	RETURN_LONG(handle);
}

/**
 * @return array [width, height]
 */
PHP_METHOD(AppKit_NS_NSTextAttachmentCell_NSTextAttachmentCell, cellSize)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *cell_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &cell_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0.0, h = 0.0;
            ns_textattachmentcell_cell_size((uintptr_t) cell, &w, &h);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        
	RETURN_CTOR(&out);
}

/**
 * @return array [x, y]
 */
PHP_METHOD(AppKit_NS_NSTextAttachmentCell_NSTextAttachmentCell, cellBaselineOffset)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *cell_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &cell_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0;
            ns_textattachmentcell_cell_baseline_offset((uintptr_t) cell, &x, &y);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
        
	RETURN_CTOR(&out);
}

