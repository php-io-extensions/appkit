
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

#include "ns-ciimagerep.h"
#include <stdint.h>



/**
 * NSCIImageRep — Core Image backed image representation.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCIImageRep_NSCIImageRep)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCIImageRep, NSCIImageRep, appkit, ns_nsciimagerep_nsciimagerep, appkit_ns_nsciimagerep_nsciimagerep_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCIImageRep_NSCIImageRep, wrap)
{
	zval *nsCIImageRepPtr_param = NULL;
	zend_long nsCIImageRepPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsCIImageRepPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsCIImageRepPtr_param);
	
            handle = (zend_long) ns_ciimagerep_wrap((void *)(uintptr_t) nsCIImageRepPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCIImageRep_NSCIImageRep, destroy)
{
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ns_ciimagerep_destroy((uintptr_t) rep);
        
}

PHP_METHOD(AppKit_NS_NSCIImageRep_NSCIImageRep, nsCIImageRep)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_ciimagerep_nsciimagerep((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSCIImageRep_NSCIImageRep, withCIImage)
{
	zval *ciImagePtr_param = NULL;
	zend_long ciImagePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ciImagePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ciImagePtr_param);
	
            handle = (zend_long) ns_ciimagerep_with_ciimage((uintptr_t) ciImagePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCIImageRep_NSCIImageRep, ciImage)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_ciimagerep_ciimage((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

