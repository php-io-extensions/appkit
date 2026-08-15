
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

#include "ns-tableheaderview.h"
#include <stdint.h>



/**
 * NSTableHeaderView for NSTableView.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTableHeaderView_NSTableHeaderView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTableHeaderView, NSTableHeaderView, appkit, ns_nstableheaderview_nstableheaderview, appkit_ns_nstableheaderview_nstableheaderview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, create)
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
	
            handle = (zend_long) ns_tableheaderview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, wrap)
{
	zval *nsTableHeaderViewPtr_param = NULL;
	zend_long nsTableHeaderViewPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTableHeaderViewPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTableHeaderViewPtr_param);
	
            handle = (zend_long) ns_tableheaderview_wrap((void *)(uintptr_t) nsTableHeaderViewPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, destroy)
{
	zval *header_param = NULL;
	zend_long header;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(header)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &header_param);
	
            ns_tableheaderview_destroy((uintptr_t) header);
        
}

PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, setTableView)
{
	zval *header_param = NULL, *table_param = NULL;
	zend_long header, table;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(header)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &header_param, &table_param);
	
            ns_tableheaderview_set_table_view((uintptr_t) header, (uintptr_t) table);
        
}

PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, tableView)
{
	zval *header_param = NULL;
	zend_long header, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(header)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &header_param);
	
            handle = (zend_long) ns_tableheaderview_table_view((uintptr_t) header);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableHeaderView_NSTableHeaderView, headerHeight)
{
	double value = 0;
	zval *header_param = NULL;
	zend_long header;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(header)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &header_param);
	
            value = ns_tableheaderview_header_height((uintptr_t) header);
        
	RETURN_DOUBLE(value);
}

