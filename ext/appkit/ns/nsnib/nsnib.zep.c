
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

#include "ns-nib.h"
#include <stdint.h>



/**
 * NSNib Interface Builder nib wrapper.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSNib_NSNib)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSNib, NSNib, appkit, ns_nsnib_nsnib, appkit_ns_nsnib_nsnib_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSNib_NSNib, createNamed)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *nibName_param = NULL, *bundlePath_param = NULL;
	zval nibName, bundlePath;

	ZVAL_UNDEF(&nibName);
	ZVAL_UNDEF(&bundlePath);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(nibName)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(bundlePath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &nibName_param, &bundlePath_param);
	zephir_get_strval(&nibName, nibName_param);
	if (!bundlePath_param) {
		ZEPHIR_INIT_VAR(&bundlePath);
		ZVAL_STRING(&bundlePath, "");
	} else {
		zephir_get_strval(&bundlePath, bundlePath_param);
	}
	
            handle = (zend_long) ns_nib_create_named(Z_STRVAL(nibName), Z_STRVAL(bundlePath));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSNib_NSNib, wrap)
{
	zval *nsNibPtr_param = NULL;
	zend_long nsNibPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsNibPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsNibPtr_param);
	
            handle = (zend_long) ns_nib_wrap((void *)(uintptr_t) nsNibPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSNib_NSNib, destroy)
{
	zval *nib_param = NULL;
	zend_long nib;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nib)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nib_param);
	
            ns_nib_destroy((uintptr_t) nib);
        
}

PHP_METHOD(AppKit_NS_NSNib_NSNib, nsNib)
{
	zval *nib_param = NULL;
	zend_long nib, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nib)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nib_param);
	
            ptr = (zend_long)(uintptr_t) ns_nib_nsnib((uintptr_t) nib);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSNib_NSNib, instantiateWithOwner)
{
	zend_bool result = 0;
	zval *nib_param = NULL, *ownerPtr_param = NULL;
	zend_long nib, ownerPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(nib)
		Z_PARAM_LONG(ownerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &nib_param, &ownerPtr_param);
	
            int count = 0;
            result = ns_nib_instantiate_with_owner((uintptr_t) nib, (uintptr_t) ownerPtr, &count) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSNib_NSNib, instantiateWithOwnerTopLevelCount)
{
	zval *nib_param = NULL, *ownerPtr_param = NULL;
	zend_long nib, ownerPtr, count = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(nib)
		Z_PARAM_LONG(ownerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &nib_param, &ownerPtr_param);
	
            ns_nib_instantiate_with_owner((uintptr_t) nib, (uintptr_t) ownerPtr, &count);
        
	RETURN_LONG(count);
}

