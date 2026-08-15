
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

#include "ns-tablerowview.h"
#include <stdint.h>



/**
 * NSTableRowView row chrome for NSTableView.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTableRowView_NSTableRowView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTableRowView, NSTableRowView, appkit, ns_nstablerowview_nstablerowview, appkit_ns_nstablerowview_nstablerowview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, create)
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
	
            handle = (zend_long) ns_tablerowview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, wrap)
{
	zval *nsTableRowViewPtr_param = NULL;
	zend_long nsTableRowViewPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTableRowViewPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTableRowViewPtr_param);
	
            handle = (zend_long) ns_tablerowview_wrap((void *)(uintptr_t) nsTableRowViewPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, destroy)
{
	zval *row_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            ns_tablerowview_destroy((uintptr_t) row);
        
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setEmphasized)
{
	zend_bool flag;
	zval *row_param = NULL, *flag_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &row_param, &flag_param);
	
            ns_tablerowview_set_emphasized((uintptr_t) row, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isEmphasized)
{
	zend_bool result = 0;
	zval *row_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            result = ns_tablerowview_is_emphasized((uintptr_t) row) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setSelected)
{
	zend_bool flag;
	zval *row_param = NULL, *flag_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &row_param, &flag_param);
	
            ns_tablerowview_set_selected((uintptr_t) row, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isSelected)
{
	zend_bool result = 0;
	zval *row_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            result = ns_tablerowview_is_selected((uintptr_t) row) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setGroupRowStyle)
{
	zend_bool flag;
	zval *row_param = NULL, *flag_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &row_param, &flag_param);
	
            ns_tablerowview_set_group_row_style((uintptr_t) row, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isGroupRowStyle)
{
	zend_bool result = 0;
	zval *row_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            result = ns_tablerowview_is_group_row_style((uintptr_t) row) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setFloating)
{
	zend_bool flag;
	zval *row_param = NULL, *flag_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &row_param, &flag_param);
	
            ns_tablerowview_set_floating((uintptr_t) row, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isFloating)
{
	zend_bool result = 0;
	zval *row_param = NULL;
	zend_long row;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            result = ns_tablerowview_is_floating((uintptr_t) row) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, interiorBackgroundStyle)
{
	zval *row_param = NULL;
	zend_long row, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &row_param);
	
            value = (zend_long) ns_tablerowview_interior_background_style((uintptr_t) row);
        
	RETURN_LONG(value);
}

