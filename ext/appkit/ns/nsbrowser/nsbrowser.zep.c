
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

#include "ns-browser.h"
#include <stdint.h>



/**
 * NSBrowser column-path browser.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSBrowser_NSBrowser)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSBrowser, NSBrowser, appkit, ns_nsbrowser_nsbrowser, appkit_ns_nsbrowser_nsbrowser_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, create)
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
	
            handle = (zend_long) ns_browser_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, destroy)
{
	zval *browser_param = NULL;
	zend_long browser;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(browser)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &browser_param);
	
            ns_browser_destroy((uintptr_t) browser);
        
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, setPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *browser_param = NULL, *path_param = NULL;
	zend_long browser;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(browser)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &browser_param, &path_param);
	zephir_get_strval(&path, path_param);
	
            ns_browser_set_path((uintptr_t) browser, Z_STRVAL(path));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, getPath)
{
	zval *browser_param = NULL;
	zend_long browser;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(browser)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &browser_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_browser_get_path((uintptr_t) browser, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, setMaxVisibleColumns)
{
	zval *browser_param = NULL, *count_param = NULL;
	zend_long browser, count;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(browser)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &browser_param, &count_param);
	
            ns_browser_set_max_visible_columns((uintptr_t) browser, (int) count);
        
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, getMaxVisibleColumns)
{
	zval *browser_param = NULL;
	zend_long browser, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(browser)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &browser_param);
	
            value = (zend_long) ns_browser_get_max_visible_columns((uintptr_t) browser);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, lastColumn)
{
	zval *browser_param = NULL;
	zend_long browser, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(browser)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &browser_param);
	
            value = (zend_long) ns_browser_last_column((uintptr_t) browser);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, reloadColumn)
{
	zval *browser_param = NULL, *column_param = NULL;
	zend_long browser, column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(browser)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &browser_param, &column_param);
	
            ns_browser_reload_column((uintptr_t) browser, (int) column);
        
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, setTakesTitleFromPreviousColumn)
{
	zend_bool flag;
	zval *browser_param = NULL, *flag_param = NULL;
	zend_long browser;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(browser)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &browser_param, &flag_param);
	
            ns_browser_set_takes_title_from_previous_column((uintptr_t) browser, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, takesTitleFromPreviousColumn)
{
	zend_bool result = 0;
	zval *browser_param = NULL;
	zend_long browser;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(browser)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &browser_param);
	
            result = ns_browser_takes_title_from_previous_column((uintptr_t) browser) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, selectedRowInColumn)
{
	zval *browser_param = NULL, *column_param = NULL;
	zend_long browser, column, value = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(browser)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &browser_param, &column_param);
	
            value = (zend_long) ns_browser_selected_row_in_column((uintptr_t) browser, (int) column);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, selectRowInColumn)
{
	zval *browser_param = NULL, *row_param = NULL, *column_param = NULL;
	zend_long browser, row, column;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(browser)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &browser_param, &row_param, &column_param);
	
            ns_browser_select_row_in_column((uintptr_t) browser, (int) row, (int) column);
        
}

