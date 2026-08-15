
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

#include "ns-epsimagerep.h"
#include <stdint.h>



/**
 * NSEPSImageRep — EPS image representation (deprecated; nil on macOS 14+).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSEPSImageRep_NSEPSImageRep)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSEPSImageRep, NSEPSImageRep, appkit, ns_nsepsimagerep_nsepsimagerep, appkit_ns_nsepsimagerep_nsepsimagerep_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, wrap)
{
	zval *nsEPSImageRepPtr_param = NULL;
	zend_long nsEPSImageRepPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsEPSImageRepPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsEPSImageRepPtr_param);
	
            handle = (zend_long) ns_epsimagerep_wrap((void *)(uintptr_t) nsEPSImageRepPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, destroy)
{
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ns_epsimagerep_destroy((uintptr_t) rep);
        
}

PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, nsEPSImageRep)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_epsimagerep_nsepsimagerep((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, withData)
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
	
            handle = (zend_long) ns_epsimagerep_with_data(Z_STRVAL(data), Z_STRLEN(data));
        
	RETURN_MM_LONG(handle);
}

/**
 * @return array [x, y, width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, getBoundingBox)
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
            if (ns_epsimagerep_get_bounding_box((uintptr_t) rep, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, epsRepresentation)
{
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            char *buf = NULL;
            size_t len = 0;
            if (ns_epsimagerep_get_eps_representation((uintptr_t) rep, &buf, &len) && buf && len > 0) {
                RETVAL_STRINGL(buf, len);
                ns_epsimagerep_free_buffer(buf);
                return;
            }
            ns_epsimagerep_free_buffer(buf);
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

