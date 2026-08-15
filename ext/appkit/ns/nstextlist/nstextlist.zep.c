
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

#include "ns-textlist.h"
#include <stdint.h>



/**
 * NSTextList — list marker format for attributed text.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextList_NSTextList)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextList, NSTextList, appkit, ns_nstextlist_nstextlist, appkit_ns_nstextlist_nstextlist_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextList_NSTextList, create)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long options, startingItemNumber, handle = 0;
	zval *markerFormat_param = NULL, *options_param = NULL, *startingItemNumber_param = NULL;
	zval markerFormat;

	ZVAL_UNDEF(&markerFormat);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(markerFormat)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(options)
		Z_PARAM_LONG(startingItemNumber)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &markerFormat_param, &options_param, &startingItemNumber_param);
	zephir_get_strval(&markerFormat, markerFormat_param);
	if (!options_param) {
		options = 0;
	} else {
		}
	if (!startingItemNumber_param) {
		startingItemNumber = 1;
	} else {
		}
	
            handle = (zend_long) ns_textlist_create(Z_STRVAL(markerFormat), (int) options, (int) startingItemNumber);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextList_NSTextList, wrap)
{
	zval *nsTextListPtr_param = NULL;
	zend_long nsTextListPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextListPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextListPtr_param);
	
            handle = (zend_long) ns_textlist_wrap((void *)(uintptr_t) nsTextListPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextList_NSTextList, destroy)
{
	zval *list_param = NULL;
	zend_long list;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &list_param);
	
            ns_textlist_destroy((uintptr_t) list);
        
}

PHP_METHOD(AppKit_NS_NSTextList_NSTextList, markerForItemNumber)
{
	zval *list_param = NULL, *itemNumber_param = NULL;
	zend_long list, itemNumber;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(list)
		Z_PARAM_LONG(itemNumber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &list_param, &itemNumber_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_textlist_marker_for_item_number((uintptr_t) list, (int) itemNumber, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTextList_NSTextList, isOrdered)
{
	zend_bool result = 0;
	zval *list_param = NULL;
	zend_long list;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &list_param);
	
            result = ns_textlist_is_ordered((uintptr_t) list) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextList_NSTextList, setStartingItemNumber)
{
	zval *list_param = NULL, *number_param = NULL;
	zend_long list, number;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(list)
		Z_PARAM_LONG(number)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &list_param, &number_param);
	
            ns_textlist_set_starting_item_number((uintptr_t) list, (int) number);
        
}

PHP_METHOD(AppKit_NS_NSTextList_NSTextList, getStartingItemNumber)
{
	zval *list_param = NULL;
	zend_long list, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &list_param);
	
            value = (zend_long) ns_textlist_get_starting_item_number((uintptr_t) list);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextList_NSTextList, getMarkerFormat)
{
	zval *list_param = NULL;
	zend_long list;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &list_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_textlist_get_marker_format((uintptr_t) list, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

