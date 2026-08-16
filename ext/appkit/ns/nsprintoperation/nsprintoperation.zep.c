
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

#include "ns-printoperation.h"
#include <stdint.h>



/**
 * NSPrintOperation — print, PDF, and EPS output operations.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPrintOperation_NSPrintOperation)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPrintOperation, NSPrintOperation, appkit, ns_nsprintoperation_nsprintoperation, appkit_ns_nsprintoperation_nsprintoperation_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, wrap)
{
	zval *nsPrintOperationPtr_param = NULL;
	zend_long nsPrintOperationPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsPrintOperationPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsPrintOperationPtr_param);
	
            handle = (zend_long) ns_printoperation_wrap((void *)(uintptr_t) nsPrintOperationPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, destroy)
{
	zval *operation_param = NULL;
	zend_long operation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            ns_printoperation_destroy((uintptr_t) operation);
        
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, nsPrintOperation)
{
	zval *operation_param = NULL;
	zend_long operation, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            ptr = (zend_long)(uintptr_t) ns_printoperation_nsprintoperation((uintptr_t) operation);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, printOperationWithView)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_printoperation_with_view((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, printOperationWithViewPrintInfo)
{
	zval *view_param = NULL, *printInfo_param = NULL;
	zend_long view, printInfo, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &view_param, &printInfo_param);
	
            handle = (zend_long) ns_printoperation_with_view_print_info((uintptr_t) view, (uintptr_t) printInfo);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, pdfOperationWithViewRectPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	double x, y, width, height;
	zval *view_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *path_param = NULL, *printInfo_param = NULL;
	zend_long view, printInfo, handle = 0;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(view)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_STR(path)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &view_param, &x_param, &y_param, &width_param, &height_param, &path_param, &printInfo_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	zephir_get_strval(&path, path_param);
	
            handle = (zend_long) ns_printoperation_pdf_with_view_rect_path(
                (uintptr_t) view, x, y, width, height, Z_STRVAL(path), (uintptr_t) printInfo
            );
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, epsOperationWithViewRectPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	double x, y, width, height;
	zval *view_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *path_param = NULL, *printInfo_param = NULL;
	zend_long view, printInfo, handle = 0;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(view)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_STR(path)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &view_param, &x_param, &y_param, &width_param, &height_param, &path_param, &printInfo_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	zephir_get_strval(&path, path_param);
	
            handle = (zend_long) ns_printoperation_eps_with_view_rect_path(
                (uintptr_t) view, x, y, width, height, Z_STRVAL(path), (uintptr_t) printInfo
            );
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, currentOperation)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_printoperation_current_operation();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setCurrentOperation)
{
	zval *operation_param = NULL;
	zend_long operation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            ns_printoperation_set_current_operation((uintptr_t) operation);
        
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, isCopyingOperation)
{
	zend_bool result = 0;
	zval *operation_param = NULL;
	zend_long operation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            result = ns_printoperation_is_copying_operation((uintptr_t) operation) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, preferredRenderingQuality)
{
	zval *operation_param = NULL;
	zend_long operation, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            value = (zend_long) ns_printoperation_preferred_rendering_quality((uintptr_t) operation);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, jobTitle)
{
	zval *operation_param = NULL;
	zend_long operation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_printoperation_job_title((uintptr_t) operation, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setJobTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *operation_param = NULL, *title_param = NULL;
	zend_long operation;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(operation)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &operation_param, &title_param);
	if (!title_param) {
		ZEPHIR_INIT_VAR(&title);
		ZVAL_STRING(&title, "");
	} else {
		zephir_get_strval(&title, title_param);
	}
	
            ns_printoperation_set_job_title((uintptr_t) operation, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, showsPrintPanel)
{
	zend_bool result = 0;
	zval *operation_param = NULL;
	zend_long operation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            result = ns_printoperation_shows_print_panel((uintptr_t) operation) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setShowsPrintPanel)
{
	zend_bool shows;
	zval *operation_param = NULL, *shows_param = NULL;
	zend_long operation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(operation)
		Z_PARAM_BOOL(shows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &operation_param, &shows_param);
	
            ns_printoperation_set_shows_print_panel((uintptr_t) operation, shows ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, showsProgressPanel)
{
	zend_bool result = 0;
	zval *operation_param = NULL;
	zend_long operation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            result = ns_printoperation_shows_progress_panel((uintptr_t) operation) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setShowsProgressPanel)
{
	zend_bool shows;
	zval *operation_param = NULL, *shows_param = NULL;
	zend_long operation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(operation)
		Z_PARAM_BOOL(shows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &operation_param, &shows_param);
	
            ns_printoperation_set_shows_progress_panel((uintptr_t) operation, shows ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, printPanel)
{
	zval *operation_param = NULL;
	zend_long operation, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            handle = (zend_long) ns_printoperation_print_panel((uintptr_t) operation);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setPrintPanel)
{
	zval *operation_param = NULL, *panel_param = NULL;
	zend_long operation, panel;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(operation)
		Z_PARAM_LONG(panel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &operation_param, &panel_param);
	
            ns_printoperation_set_print_panel((uintptr_t) operation, (uintptr_t) panel);
        
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, pageOrder)
{
	zval *operation_param = NULL;
	zend_long operation, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            value = (zend_long) ns_printoperation_page_order((uintptr_t) operation);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setPageOrder)
{
	zval *operation_param = NULL, *pageOrder_param = NULL;
	zend_long operation, pageOrder;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(operation)
		Z_PARAM_LONG(pageOrder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &operation_param, &pageOrder_param);
	
            ns_printoperation_set_page_order((uintptr_t) operation, (int) pageOrder);
        
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, runOperation)
{
	zend_bool result = 0;
	zval *operation_param = NULL;
	zend_long operation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            result = ns_printoperation_run_operation((uintptr_t) operation) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, runOperationModalForWindow)
{
	zend_bool result = 0;
	zval *operation_param = NULL, *window_param = NULL;
	zend_long operation, window;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(operation)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &operation_param, &window_param);
	
            result = ns_printoperation_run_operation_modal_for_window((uintptr_t) operation, (uintptr_t) window) == 1;
        
	RETURN_BOOL(result);
}

/**
 * @return int Borrowed NSView pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, view)
{
	zval *operation_param = NULL;
	zend_long operation, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            ptr = (zend_long)(uintptr_t) ns_printoperation_view((uintptr_t) operation);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, printInfo)
{
	zval *operation_param = NULL;
	zend_long operation, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            handle = (zend_long) ns_printoperation_print_info((uintptr_t) operation);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setPrintInfo)
{
	zval *operation_param = NULL, *printInfo_param = NULL;
	zend_long operation, printInfo;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(operation)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &operation_param, &printInfo_param);
	
            ns_printoperation_set_print_info((uintptr_t) operation, (uintptr_t) printInfo);
        
}

/**
 * @return array [location, length] or empty array
 */
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, pageRange)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *operation_param = NULL;
	zend_long operation;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &operation_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            long location = 0, length = 0;
            if (ns_printoperation_page_range((uintptr_t) operation, &location, &length)) {
                add_next_index_long(&out, location);
                add_next_index_long(&out, length);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, currentPage)
{
	zval *operation_param = NULL;
	zend_long operation, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(operation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &operation_param);
	
            value = (zend_long) ns_printoperation_current_page((uintptr_t) operation);
        
	RETURN_LONG(value);
}

