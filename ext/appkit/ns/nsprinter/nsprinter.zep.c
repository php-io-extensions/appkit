
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

#include "ns-printer.h"
#include <stdint.h>



/**
 * NSPrinter — available printers and device metadata.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPrinter_NSPrinter)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPrinter, NSPrinter, appkit, ns_nsprinter_nsprinter, appkit_ns_nsprinter_nsprinter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, wrap)
{
	zval *nsPrinterPtr_param = NULL;
	zend_long nsPrinterPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsPrinterPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsPrinterPtr_param);
	
            handle = (zend_long) ns_printer_wrap((void *)(uintptr_t) nsPrinterPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, destroy)
{
	zval *printer_param = NULL;
	zend_long printer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printer_param);
	
            ns_printer_destroy((uintptr_t) printer);
        
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, nsPrinter)
{
	zval *printer_param = NULL;
	zend_long printer, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printer_param);
	
            ptr = (zend_long)(uintptr_t) ns_printer_nsprinter((uintptr_t) printer);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, namesCount)
{
	zend_long count = 0;
	
            count = (zend_long) ns_printer_names_count();
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, nameAt)
{
	zval *index_param = NULL;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_printer_names_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, typesCount)
{
	zend_long count = 0;
	
            count = (zend_long) ns_printer_types_count();
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, typeAt)
{
	zval *index_param = NULL;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_printer_types_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, withName)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	
            handle = (zend_long) ns_printer_with_name(Z_STRVAL(name));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, withType)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *type_param = NULL;
	zval type;

	ZVAL_UNDEF(&type);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &type_param);
	zephir_get_strval(&type, type_param);
	
            handle = (zend_long) ns_printer_with_type(Z_STRVAL(type));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, name)
{
	zval *printer_param = NULL;
	zend_long printer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printer_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_printer_name((uintptr_t) printer, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, type)
{
	zval *printer_param = NULL;
	zend_long printer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printer_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_printer_type((uintptr_t) printer, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, languageLevel)
{
	zval *printer_param = NULL;
	zend_long printer, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printer_param);
	
            value = (zend_long) ns_printer_language_level((uintptr_t) printer);
        
	RETURN_LONG(value);
}

/**
 * @return array [width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, pageSizeForPaper)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval paperName;
	zval *printer_param = NULL, *paperName_param = NULL;
	zend_long printer;

	ZVAL_UNDEF(&paperName);
	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(printer)
		Z_PARAM_STR(paperName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &printer_param, &paperName_param);
	zephir_get_strval(&paperName, paperName_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0, h = 0;
            if (ns_printer_page_size_for_paper((uintptr_t) printer, Z_STRVAL(paperName), &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, deviceIsPrinter)
{
	zend_bool result = 0;
	zval *printer_param = NULL;
	zend_long printer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(printer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &printer_param);
	
            result = ns_printer_device_is_printer((uintptr_t) printer) == 1;
        
	RETURN_BOOL(result);
}

