
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

#include "ns-colorsampler.h"
#include <stdint.h>



/**
 * NSColorSampler — screen color sampling UI (macOS 10.15+).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSColorSampler_NSColorSampler)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSColorSampler, NSColorSampler, appkit, ns_nscolorsampler_nscolorsampler, appkit_ns_nscolorsampler_nscolorsampler_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSColorSampler_NSColorSampler, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_colorsampler_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorSampler_NSColorSampler, destroy)
{
	zval *sampler_param = NULL;
	zend_long sampler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sampler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sampler_param);
	
            ns_colorsampler_destroy((uintptr_t) sampler);
        
}

PHP_METHOD(AppKit_NS_NSColorSampler_NSColorSampler, show)
{
	zval *sampler_param = NULL;
	zend_long sampler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sampler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sampler_param);
	
            ns_colorsampler_show((uintptr_t) sampler);
        
}

/**
 * Poll async result as [status, colorHandle].
 * status: 0 pending, 1 selected, 2 cancelled. colorHandle is 0 unless selected.
 */
PHP_METHOD(AppKit_NS_NSColorSampler_NSColorSampler, poll)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *sampler_param = NULL;
	zend_long sampler;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sampler)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &sampler_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            uintptr_t color = 0;
            int status = ns_colorsampler_poll((uintptr_t) sampler, &color);
            add_next_index_long(&out, status);
            add_next_index_long(&out, (zend_long) color);
        
	RETURN_CTOR(&out);
}

