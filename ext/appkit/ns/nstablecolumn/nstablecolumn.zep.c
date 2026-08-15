
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

#include "ns-tablecolumn.h"
#include <stdint.h>



/**
 * NSTableColumn for NSTableView.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTableColumn_NSTableColumn)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTableColumn, NSTableColumn, appkit, ns_nstablecolumn_nstablecolumn, appkit_ns_nstablecolumn_nstablecolumn_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, create)
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
	
            handle = (zend_long) ns_tablecolumn_create(Z_STRVAL(value));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, wrap)
{
	zval *nsTableColumnPtr_param = NULL;
	zend_long nsTableColumnPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTableColumnPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTableColumnPtr_param);
	
            handle = (zend_long) ns_tablecolumn_wrap((void *)(uintptr_t) nsTableColumnPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, destroy)
{
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            ns_tablecolumn_destroy((uintptr_t) column);
        
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, nsTableColumn)
{
	zval *column_param = NULL;
	zend_long column, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            ptr = (zend_long)(uintptr_t) ns_tablecolumn_nstablecolumn((uintptr_t) column);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *column_param = NULL, *identifier_param = NULL;
	zend_long column;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &column_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	
            ns_tablecolumn_set_identifier((uintptr_t) column, Z_STRVAL(identifier));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getIdentifier)
{
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_tablecolumn_get_identifier((uintptr_t) column, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *column_param = NULL, *title_param = NULL;
	zend_long column;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &column_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_tablecolumn_set_title((uintptr_t) column, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getTitle)
{
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_tablecolumn_get_title((uintptr_t) column, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setWidth)
{
	double width;
	zval *column_param = NULL, *width_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &width_param);
	width = zephir_get_doubleval(width_param);
	
            ns_tablecolumn_set_width((uintptr_t) column, (double) width);
        
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getWidth)
{
	double value = 0;
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            value = ns_tablecolumn_get_width((uintptr_t) column);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setMinWidth)
{
	double width;
	zval *column_param = NULL, *width_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &width_param);
	width = zephir_get_doubleval(width_param);
	
            ns_tablecolumn_set_min_width((uintptr_t) column, (double) width);
        
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getMinWidth)
{
	double value = 0;
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            value = ns_tablecolumn_get_min_width((uintptr_t) column);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setMaxWidth)
{
	double width;
	zval *column_param = NULL, *width_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &width_param);
	width = zephir_get_doubleval(width_param);
	
            ns_tablecolumn_set_max_width((uintptr_t) column, (double) width);
        
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getMaxWidth)
{
	double value = 0;
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            value = ns_tablecolumn_get_max_width((uintptr_t) column);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setHidden)
{
	zend_bool flag;
	zval *column_param = NULL, *flag_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &flag_param);
	
            ns_tablecolumn_set_hidden((uintptr_t) column, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, isHidden)
{
	zend_bool result = 0;
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            result = ns_tablecolumn_is_hidden((uintptr_t) column) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setEditable)
{
	zend_bool flag;
	zval *column_param = NULL, *flag_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &flag_param);
	
            ns_tablecolumn_set_editable((uintptr_t) column, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, isEditable)
{
	zend_bool result = 0;
	zval *column_param = NULL;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            result = ns_tablecolumn_is_editable((uintptr_t) column) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setResizingMask)
{
	zval *column_param = NULL, *mask_param = NULL;
	zend_long column, mask;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(mask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &column_param, &mask_param);
	
            ns_tablecolumn_set_resizing_mask((uintptr_t) column, (int) mask);
        
}

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getResizingMask)
{
	zval *column_param = NULL;
	zend_long column, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &column_param);
	
            value = (zend_long) ns_tablecolumn_get_resizing_mask((uintptr_t) column);
        
	RETURN_LONG(value);
}

