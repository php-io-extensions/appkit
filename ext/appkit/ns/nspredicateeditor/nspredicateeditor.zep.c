
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

#include "ns-predicateeditor.h"
#include <stdint.h>



/**
 * NSPredicateEditor rule-based predicate UI.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPredicateEditor_NSPredicateEditor)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPredicateEditor, NSPredicateEditor, appkit, ns_nspredicateeditor_nspredicateeditor, appkit_ns_nspredicateeditor_nspredicateeditor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, create)
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
	
            handle = (zend_long) ns_predicateeditor_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, destroy)
{
	zval *editor_param = NULL;
	zend_long editor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(editor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &editor_param);
	
            ns_predicateeditor_destroy((uintptr_t) editor);
        
}

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, setEditable)
{
	zend_bool flag;
	zval *editor_param = NULL, *flag_param = NULL;
	zend_long editor;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(editor)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &editor_param, &flag_param);
	
            ns_predicateeditor_set_editable((uintptr_t) editor, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, isEditable)
{
	zend_bool result = 0;
	zval *editor_param = NULL;
	zend_long editor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(editor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &editor_param);
	
            result = ns_predicateeditor_is_editable((uintptr_t) editor) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, numberOfRows)
{
	zval *editor_param = NULL;
	zend_long editor, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(editor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &editor_param);
	
            value = (zend_long) ns_predicateeditor_number_of_rows((uintptr_t) editor);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, addRow)
{
	zval *editor_param = NULL;
	zend_long editor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(editor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &editor_param);
	
            ns_predicateeditor_add_row((uintptr_t) editor);
        
}

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, removeRowAt)
{
	zval *editor_param = NULL, *index_param = NULL;
	zend_long editor, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(editor)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &editor_param, &index_param);
	
            ns_predicateeditor_remove_row_at((uintptr_t) editor, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, setNestingMode)
{
	zval *editor_param = NULL, *mode_param = NULL;
	zend_long editor, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(editor)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &editor_param, &mode_param);
	
            ns_predicateeditor_set_nesting_mode((uintptr_t) editor, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, getNestingMode)
{
	zval *editor_param = NULL;
	zend_long editor, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(editor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &editor_param);
	
            value = (zend_long) ns_predicateeditor_get_nesting_mode((uintptr_t) editor);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, setCanRemoveAllRows)
{
	zend_bool flag;
	zval *editor_param = NULL, *flag_param = NULL;
	zend_long editor;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(editor)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &editor_param, &flag_param);
	
            ns_predicateeditor_set_can_remove_all_rows((uintptr_t) editor, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, canRemoveAllRows)
{
	zend_bool result = 0;
	zval *editor_param = NULL;
	zend_long editor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(editor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &editor_param);
	
            result = ns_predicateeditor_can_remove_all_rows((uintptr_t) editor) == 1;
        
	RETURN_BOOL(result);
}

