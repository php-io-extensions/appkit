
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

#include "ns-pdfimagerep.h"
#include <stdint.h>



/**
 * NSPDFImageRep — PDF page image representation.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPDFImageRep_NSPDFImageRep)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPDFImageRep, NSPDFImageRep, appkit, ns_nspdfimagerep_nspdfimagerep, appkit_ns_nspdfimagerep_nspdfimagerep_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, wrap)
{
	zval *nsPDFImageRepPtr_param = NULL;
	zend_long nsPDFImageRepPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsPDFImageRepPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsPDFImageRepPtr_param);
	
            handle = (zend_long) ns_pdfimagerep_wrap((void *)(uintptr_t) nsPDFImageRepPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, destroy)
{
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ns_pdfimagerep_destroy((uintptr_t) rep);
        
}

PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, nsPDFImageRep)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_pdfimagerep_nspdfimagerep((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, withData)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *data_param = NULL;
	zval data;

	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &data_param);
	zephir_get_strval(&data, data_param);
	
            handle = (zend_long) ns_pdfimagerep_with_data(Z_STRVAL(data), Z_STRLEN(data));
        
	RETURN_MM_LONG(handle);
}

/**
 * @return array [x, y, width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, getBounds)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rep_param = NULL;
	zend_long rep;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &rep_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_pdfimagerep_get_bounds((uintptr_t) rep, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, pdfRepresentation)
{
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            char *buf = NULL;
            size_t len = 0;
            if (ns_pdfimagerep_get_pdf_representation((uintptr_t) rep, &buf, &len) && buf && len > 0) {
                RETVAL_STRINGL(buf, len);
                ns_pdfimagerep_free_buffer(buf);
                return;
            }
            ns_pdfimagerep_free_buffer(buf);
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, currentPage)
{
	zval *rep_param = NULL;
	zend_long rep, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = (zend_long) ns_pdfimagerep_current_page((uintptr_t) rep);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, setCurrentPage)
{
	zval *rep_param = NULL, *page_param = NULL;
	zend_long rep, page;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(rep)
		Z_PARAM_LONG(page)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &rep_param, &page_param);
	
            ns_pdfimagerep_set_current_page((uintptr_t) rep, (int) page);
        
}

PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, pageCount)
{
	zval *rep_param = NULL;
	zend_long rep, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            value = (zend_long) ns_pdfimagerep_page_count((uintptr_t) rep);
        
	RETURN_LONG(value);
}

