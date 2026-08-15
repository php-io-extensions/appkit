
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

#include "ns-customimagerep.h"
#include <stdint.h>



/**
 * NSCustomImageRep — delegate or block-driven custom drawing image rep.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCustomImageRep_NSCustomImageRep)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCustomImageRep, NSCustomImageRep, appkit, ns_nscustomimagerep_nscustomimagerep, appkit_ns_nscustomimagerep_nscustomimagerep_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, wrap)
{
	zval *nsCustomImageRepPtr_param = NULL;
	zend_long nsCustomImageRepPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsCustomImageRepPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsCustomImageRepPtr_param);
	
            handle = (zend_long) ns_customimagerep_wrap((void *)(uintptr_t) nsCustomImageRepPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, destroy)
{
	zval *rep_param = NULL;
	zend_long rep;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ns_customimagerep_destroy((uintptr_t) rep);
        
}

PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, nsCustomImageRep)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_customimagerep_nscustomimagerep((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

/**
 * Creates a no-op drawing rep suitable as a placeholder host.
 */
PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, create)
{
	zend_long handle = 0;
	zend_bool flipped;
	zval *width_param = NULL, *height_param = NULL, *flipped_param = NULL;
	double width, height;

	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(flipped)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &width_param, &height_param, &flipped_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	if (!flipped_param) {
		flipped = 1;
	} else {
		}
	
            handle = (zend_long) ns_customimagerep_create((double) width, (double) height, flipped ? 1 : 0);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, drawSelector)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_customimagerep_draw_selector((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, delegate)
{
	zval *rep_param = NULL;
	zend_long rep, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rep_param);
	
            ptr = (zend_long)(uintptr_t) ns_customimagerep_delegate((uintptr_t) rep);
        
	RETURN_LONG(ptr);
}

