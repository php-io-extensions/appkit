
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

#include "ns-texttable.h"
#include <stdint.h>



/**
 * NSTextTable — table block for attributed text.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextTable_NSTextTable)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextTable, NSTextTable, appkit, ns_nstexttable_nstexttable, appkit_ns_nstexttable_nstexttable_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_texttable_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, wrap)
{
	zval *nsTextTablePtr_param = NULL;
	zend_long nsTextTablePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextTablePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextTablePtr_param);
	
            handle = (zend_long) ns_texttable_wrap((void *)(uintptr_t) nsTextTablePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, destroy)
{
	zval *table_param = NULL;
	zend_long table;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            ns_texttable_destroy((uintptr_t) table);
        
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setNumberOfColumns)
{
	zval *table_param = NULL, *columns_param = NULL;
	zend_long table, columns;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(table)
		Z_PARAM_LONG(columns)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &table_param, &columns_param);
	
            ns_texttable_set_number_of_columns((uintptr_t) table, (int) columns);
        
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, getNumberOfColumns)
{
	zval *table_param = NULL;
	zend_long table, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            value = (zend_long) ns_texttable_get_number_of_columns((uintptr_t) table);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setLayoutAlgorithm)
{
	zval *table_param = NULL, *algorithm_param = NULL;
	zend_long table, algorithm;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(table)
		Z_PARAM_LONG(algorithm)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &table_param, &algorithm_param);
	
            ns_texttable_set_layout_algorithm((uintptr_t) table, (int) algorithm);
        
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, getLayoutAlgorithm)
{
	zval *table_param = NULL;
	zend_long table, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            value = (zend_long) ns_texttable_get_layout_algorithm((uintptr_t) table);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setCollapsesBorders)
{
	zend_bool flag;
	zval *table_param = NULL, *flag_param = NULL;
	zend_long table;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(table)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &table_param, &flag_param);
	
            ns_texttable_set_collapses_borders((uintptr_t) table, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, collapsesBorders)
{
	zend_bool result = 0;
	zval *table_param = NULL;
	zend_long table;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            result = ns_texttable_collapses_borders((uintptr_t) table) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setHidesEmptyCells)
{
	zend_bool flag;
	zval *table_param = NULL, *flag_param = NULL;
	zend_long table;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(table)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &table_param, &flag_param);
	
            ns_texttable_set_hides_empty_cells((uintptr_t) table, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, hidesEmptyCells)
{
	zend_bool result = 0;
	zval *table_param = NULL;
	zend_long table;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            result = ns_texttable_hides_empty_cells((uintptr_t) table) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setContentWidth)
{
	double width;
	zval *table_param = NULL, *width_param = NULL, *type_param = NULL;
	zend_long table, type;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(table)
		Z_PARAM_ZVAL(width)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &table_param, &width_param, &type_param);
	width = zephir_get_doubleval(width_param);
	
            ns_texttable_set_content_width((uintptr_t) table, (double) width, (int) type);
        
}

/**
 * @return array [width, type]
 */
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, getContentWidth)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *table_param = NULL;
	zend_long table;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &table_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double width = 0.0;
            int type = 0;
            ns_texttable_get_content_width((uintptr_t) table, &width, &type);
            add_next_index_double(&out, width);
            add_next_index_long(&out, type);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setVerticalAlignment)
{
	zval *table_param = NULL, *alignment_param = NULL;
	zend_long table, alignment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(table)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &table_param, &alignment_param);
	
            ns_texttable_set_vertical_alignment((uintptr_t) table, (int) alignment);
        
}

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, getVerticalAlignment)
{
	zval *table_param = NULL;
	zend_long table, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            value = (zend_long) ns_texttable_get_vertical_alignment((uintptr_t) table);
        
	RETURN_LONG(value);
}

