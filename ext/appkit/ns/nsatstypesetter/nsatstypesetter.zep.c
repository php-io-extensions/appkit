
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
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"

#include "ns-atstypesetter.h"
#include <stdint.h>



/**
 * NSATSTypesetter — ATS shared typesetter.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSATSTypesetter_NSATSTypesetter)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSATSTypesetter, NSATSTypesetter, appkit, ns_nsatstypesetter_nsatstypesetter, appkit_ns_nsatstypesetter_nsatstypesetter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSATSTypesetter_NSATSTypesetter, sharedTypesetter)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_atstypesetter_shared_typesetter();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSATSTypesetter_NSATSTypesetter, wrap)
{
	zval *nsATSTypesetterPtr_param = NULL;
	zend_long nsATSTypesetterPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsATSTypesetterPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsATSTypesetterPtr_param);
	
            handle = (zend_long) ns_atstypesetter_wrap((void *)(uintptr_t) nsATSTypesetterPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSATSTypesetter_NSATSTypesetter, destroy)
{
	zval *typesetter_param = NULL;
	zend_long typesetter;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(typesetter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &typesetter_param);
	
            ns_atstypesetter_destroy((uintptr_t) typesetter);
        
}

