
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

#include "ns-pickertouchbaritem.h"
#include <stdint.h>



/** NSPickerTouchBarItem */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPickerTouchBarItem_NSPickerTouchBarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPickerTouchBarItem, NSPickerTouchBarItem, appkit, ns_nspickertouchbaritem_nspickertouchbaritem, appkit_ns_nspickertouchbaritem_nspickertouchbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPickerTouchBarItem_NSPickerTouchBarItem, pickerWithLabels)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long selectionMode, h = 0;
	zval labels;
	zval *identifier_param = NULL, *labels_param = NULL, *selectionMode_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZVAL_UNDEF(&labels);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(identifier)
		Z_PARAM_ARRAY(labels)
		Z_PARAM_LONG(selectionMode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &identifier_param, &labels_param, &selectionMode_param);
	zephir_get_strval(&identifier, identifier_param);
	zephir_get_arrval(&labels, labels_param);
	
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(labels), entry) {
                if (count >= 256) { break; }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
        h = (zend_long) ns_pickertouchbaritem_picker_with_labels(Z_STRVAL(identifier), cstrings, count, (int) selectionMode);
    
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSPickerTouchBarItem_NSPickerTouchBarItem, wrap)
{
	zval *ptr_param = NULL;
	zend_long ptr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ptr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ptr_param);
	 handle = (zend_long) ns_pickertouchbaritem_wrap((void *)(uintptr_t) ptr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPickerTouchBarItem_NSPickerTouchBarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_pickertouchbaritem_destroy((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSPickerTouchBarItem_NSPickerTouchBarItem, nsPickerTouchBarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ptr = (zend_long)(uintptr_t) ns_pickertouchbaritem_nspickertouchbaritem((uintptr_t) item); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPickerTouchBarItem_NSPickerTouchBarItem, setSelectedIndex)
{
	zval *item_param = NULL, *index_param = NULL;
	zend_long item, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &index_param);
	 ns_pickertouchbaritem_set_selected_index((uintptr_t) item, (int) index); 
}

PHP_METHOD(AppKit_NS_NSPickerTouchBarItem_NSPickerTouchBarItem, getSelectedIndex)
{
	zval *item_param = NULL;
	zend_long item, v = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 v = (zend_long) ns_pickertouchbaritem_get_selected_index((uintptr_t) item); 
	RETURN_LONG(v);
}

PHP_METHOD(AppKit_NS_NSPickerTouchBarItem_NSPickerTouchBarItem, pollAction)
{
	zend_bool r = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 r = ns_pickertouchbaritem_poll_action((uintptr_t) item) == 1; 
	RETURN_BOOL(r);
}

