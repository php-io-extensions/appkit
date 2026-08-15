
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

#include "ns-tableview.h"
#include <stdint.h>



/**
 * NSTableView single-column list table.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTableView_NSTableView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTableView, NSTableView, appkit, ns_nstableview_nstableview, appkit_ns_nstableview_nstableview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, create)
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
	
            handle = (zend_long) ns_tableview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, destroy)
{
	zval *table_param = NULL;
	zend_long table;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            ns_tableview_destroy((uintptr_t) table);
        
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, clearRows)
{
	zval *table_param = NULL;
	zend_long table;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            ns_tableview_clear_rows((uintptr_t) table);
        
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, addRow)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *table_param = NULL, *value_param = NULL;
	zend_long table;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(table)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &table_param, &value_param);
	zephir_get_strval(&value, value_param);
	
            ns_tableview_add_row((uintptr_t) table, Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowCount)
{
	zval *table_param = NULL;
	zend_long table, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            value = (zend_long) ns_tableview_row_count((uintptr_t) table);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, getSelected)
{
	zval *table_param = NULL;
	zend_long table, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            value = (zend_long) ns_tableview_get_selected((uintptr_t) table);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setSelected)
{
	zval *table_param = NULL, *row_param = NULL;
	zend_long table, row;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(table)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &table_param, &row_param);
	
            ns_tableview_set_selected((uintptr_t) table, (int) row);
        
}

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, pollChange)
{
	zend_bool result = 0;
	zval *table_param = NULL;
	zend_long table;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            result = ns_tableview_poll_change((uintptr_t) table) == 1;
        
	RETURN_BOOL(result);
}

