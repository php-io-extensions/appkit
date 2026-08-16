
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

#include "ns-printinfo.h"
#include <stdint.h>



/**
 * NSPrintInfo — page setup and print job attributes.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPrintInfo_NSPrintInfo)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPrintInfo, NSPrintInfo, appkit, ns_nsprintinfo_nsprintinfo, appkit_ns_nsprintinfo_nsprintinfo_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, wrap)
{
	zval *nsPrintInfoPtr_param = NULL;
	zend_long nsPrintInfoPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsPrintInfoPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsPrintInfoPtr_param);
	
            handle = (zend_long) ns_printinfo_wrap((void *)(uintptr_t) nsPrintInfoPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, destroy)
{
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            ns_printinfo_destroy((uintptr_t) printInfo);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, nsPrintInfo)
{
	zval *printInfo_param = NULL;
	zend_long printInfo, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            ptr = (zend_long)(uintptr_t) ns_printinfo_nsprintinfo((uintptr_t) printInfo);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_printinfo_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, shared)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_printinfo_shared();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setShared)
{
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            ns_printinfo_set_shared((void *)(uintptr_t) printInfo);
        
}

/**
 * @return int Borrowed NSPrinter pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, defaultPrinter)
{
	zend_long ptr = 0;
	
            ptr = (zend_long)(uintptr_t) ns_printinfo_default_printer();
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, paperName)
{
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_printinfo_paper_name((uintptr_t) printInfo, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setPaperName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *printInfo_param = NULL, *name_param = NULL;
	zend_long printInfo;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &printInfo_param, &name_param);
	zephir_get_strval(&name, name_param);
	
            ns_printinfo_set_paper_name((uintptr_t) printInfo, Z_STRVAL(name));
        
	ZEPHIR_MM_RESTORE();
}

/**
 * @return array [width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, paperSize)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &printInfo_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0, h = 0;
            if (ns_printinfo_paper_size((uintptr_t) printInfo, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setPaperSize)
{
	double width, height;
	zval *printInfo_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &printInfo_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_printinfo_set_paper_size((uintptr_t) printInfo, width, height);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, orientation)
{
	zval *printInfo_param = NULL;
	zend_long printInfo, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            value = (zend_long) ns_printinfo_orientation((uintptr_t) printInfo);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setOrientation)
{
	zval *printInfo_param = NULL, *orientation_param = NULL;
	zend_long printInfo, orientation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &orientation_param);
	
            ns_printinfo_set_orientation((uintptr_t) printInfo, (int) orientation);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, scalingFactor)
{
	double value = 0;
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            value = ns_printinfo_scaling_factor((uintptr_t) printInfo);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setScalingFactor)
{
	double factor;
	zval *printInfo_param = NULL, *factor_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_ZVAL(factor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &factor_param);
	factor = zephir_get_doubleval(factor_param);
	
            ns_printinfo_set_scaling_factor((uintptr_t) printInfo, factor);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, leftMargin)
{
	double value = 0;
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            value = ns_printinfo_left_margin((uintptr_t) printInfo);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setLeftMargin)
{
	double value;
	zval *printInfo_param = NULL, *value_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_printinfo_set_left_margin((uintptr_t) printInfo, value);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, rightMargin)
{
	double value = 0;
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            value = ns_printinfo_right_margin((uintptr_t) printInfo);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setRightMargin)
{
	double value;
	zval *printInfo_param = NULL, *value_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_printinfo_set_right_margin((uintptr_t) printInfo, value);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, topMargin)
{
	double value = 0;
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            value = ns_printinfo_top_margin((uintptr_t) printInfo);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setTopMargin)
{
	double value;
	zval *printInfo_param = NULL, *value_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_printinfo_set_top_margin((uintptr_t) printInfo, value);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, bottomMargin)
{
	double value = 0;
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            value = ns_printinfo_bottom_margin((uintptr_t) printInfo);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setBottomMargin)
{
	double value;
	zval *printInfo_param = NULL, *value_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &value_param);
	value = zephir_get_doubleval(value_param);
	
            ns_printinfo_set_bottom_margin((uintptr_t) printInfo, value);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, isHorizontallyCentered)
{
	zend_bool result = 0;
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            result = ns_printinfo_is_horizontally_centered((uintptr_t) printInfo) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setHorizontallyCentered)
{
	zend_bool centered;
	zval *printInfo_param = NULL, *centered_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_BOOL(centered)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &centered_param);
	
            ns_printinfo_set_horizontally_centered((uintptr_t) printInfo, centered ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, isVerticallyCentered)
{
	zend_bool result = 0;
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            result = ns_printinfo_is_vertically_centered((uintptr_t) printInfo) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setVerticallyCentered)
{
	zend_bool centered;
	zval *printInfo_param = NULL, *centered_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_BOOL(centered)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &centered_param);
	
            ns_printinfo_set_vertically_centered((uintptr_t) printInfo, centered ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, horizontalPagination)
{
	zval *printInfo_param = NULL;
	zend_long printInfo, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            value = (zend_long) ns_printinfo_horizontal_pagination((uintptr_t) printInfo);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setHorizontalPagination)
{
	zval *printInfo_param = NULL, *mode_param = NULL;
	zend_long printInfo, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &mode_param);
	
            ns_printinfo_set_horizontal_pagination((uintptr_t) printInfo, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, verticalPagination)
{
	zval *printInfo_param = NULL;
	zend_long printInfo, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            value = (zend_long) ns_printinfo_vertical_pagination((uintptr_t) printInfo);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setVerticalPagination)
{
	zval *printInfo_param = NULL, *mode_param = NULL;
	zend_long printInfo, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &mode_param);
	
            ns_printinfo_set_vertical_pagination((uintptr_t) printInfo, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, jobDisposition)
{
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_printinfo_job_disposition((uintptr_t) printInfo, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setJobDisposition)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval disposition;
	zval *printInfo_param = NULL, *disposition_param = NULL;
	zend_long printInfo;

	ZVAL_UNDEF(&disposition);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_STR(disposition)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &printInfo_param, &disposition_param);
	zephir_get_strval(&disposition, disposition_param);
	
            ns_printinfo_set_job_disposition((uintptr_t) printInfo, Z_STRVAL(disposition));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, printer)
{
	zval *printInfo_param = NULL;
	zend_long printInfo, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            handle = (zend_long) ns_printinfo_printer((uintptr_t) printInfo);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setPrinter)
{
	zval *printInfo_param = NULL, *printer_param = NULL;
	zend_long printInfo, printer;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_LONG(printer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &printer_param);
	
            ns_printinfo_set_printer((uintptr_t) printInfo, (uintptr_t) printer);
        
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setUpPrintOperationDefaultValues)
{
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            ns_printinfo_set_up_print_operation_default_values((uintptr_t) printInfo);
        
}

/**
 * @return array [x, y, width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, imageablePageBounds)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &printInfo_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0, y = 0, w = 0, h = 0;
            if (ns_printinfo_imageable_page_bounds((uintptr_t) printInfo, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, localizedPaperName)
{
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_printinfo_localized_paper_name((uintptr_t) printInfo, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, isSelectionOnly)
{
	zend_bool result = 0;
	zval *printInfo_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printInfo_param);
	
            result = ns_printinfo_is_selection_only((uintptr_t) printInfo) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setSelectionOnly)
{
	zend_bool selectionOnly;
	zval *printInfo_param = NULL, *selectionOnly_param = NULL;
	zend_long printInfo;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printInfo)
		Z_PARAM_BOOL(selectionOnly)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &printInfo_param, &selectionOnly_param);
	
            ns_printinfo_set_selection_only((uintptr_t) printInfo, selectionOnly ? 1 : 0);
        
}

