
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

#include "ns-tablecellview.h"
#include <stdint.h>



/**
 * NSTableCellView content cell for NSTableView.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTableCellView_NSTableCellView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTableCellView, NSTableCellView, appkit, ns_nstablecellview_nstablecellview, appkit_ns_nstablecellview_nstablecellview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, create)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	
            handle = (zend_long) ns_tablecellview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, wrap)
{
	zval *nsTableCellViewPtr_param = NULL;
	zend_long nsTableCellViewPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTableCellViewPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTableCellViewPtr_param);
	
            handle = (zend_long) ns_tablecellview_wrap((void *)(uintptr_t) nsTableCellViewPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, destroy)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            ns_tablecellview_destroy((uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *cell_param = NULL, *text_param = NULL;
	zend_long cell;

	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &cell_param, &text_param);
	zephir_get_strval(&text, text_param);
	
            ns_tablecellview_set_text((uintptr_t) cell, Z_STRVAL(text));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, getText)
{
	zval *cell_param = NULL;
	zend_long cell;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_tablecellview_get_text((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setImage)
{
	zval *cell_param = NULL, *image_param = NULL;
	zend_long cell, image;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(cell)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &cell_param, &image_param);
	
            ns_tablecellview_set_image((uintptr_t) cell, (uintptr_t) image);
        
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, textField)
{
	zval *cell_param = NULL;
	zend_long cell, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            handle = (zend_long) ns_tablecellview_text_field((uintptr_t) cell);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, imageView)
{
	zval *cell_param = NULL;
	zend_long cell, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cell_param);
	
            handle = (zend_long) ns_tablecellview_image_view((uintptr_t) cell);
        
	RETURN_LONG(handle);
}

