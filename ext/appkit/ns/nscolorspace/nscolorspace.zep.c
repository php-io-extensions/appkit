
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

#include "ns-colorspace.h"
#include <stdint.h>



/**
 * NSColorSpace — sRGB, P3, device, and ICC color spaces.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSColorSpace_NSColorSpace)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSColorSpace, NSColorSpace, appkit, ns_nscolorspace_nscolorspace, appkit_ns_nscolorspace_nscolorspace_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, wrap)
{
	zval *nsColorSpacePtr_param = NULL;
	zend_long nsColorSpacePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsColorSpacePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsColorSpacePtr_param);
	
            handle = (zend_long) ns_colorspace_wrap((void *)(uintptr_t) nsColorSpacePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, destroy)
{
	zval *space_param = NULL;
	zend_long space;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(space)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &space_param);
	
            ns_colorspace_destroy((uintptr_t) space);
        
}

/**
 * Standard space kind integer — see OKF nscolorspace.md.
 */
PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, standard)
{
	zval *kind_param = NULL;
	zend_long kind, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(kind)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &kind_param);
	
            handle = (zend_long) ns_colorspace_standard((int) kind);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, model)
{
	zval *space_param = NULL;
	zend_long space, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(space)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &space_param);
	
            value = (zend_long) ns_colorspace_model((uintptr_t) space);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, numberOfColorComponents)
{
	zval *space_param = NULL;
	zend_long space, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(space)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &space_param);
	
            value = (zend_long) ns_colorspace_number_of_color_components((uintptr_t) space);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, localizedName)
{
	zval *space_param = NULL;
	zend_long space;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(space)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &space_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_colorspace_localized_name((uintptr_t) space, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, availableCount)
{
	zval *model_param = NULL;
	zend_long model, count = 0;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(model)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &model_param);
	if (!model_param) {
		model = -1;
	} else {
		}
	
            count = (zend_long) ns_colorspace_available_count((int) model);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, availableAt)
{
	zval *index_param = NULL, *model_param = NULL;
	zend_long index, model, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(index)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(model)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &index_param, &model_param);
	if (!model_param) {
		model = -1;
	} else {
		}
	
            handle = (zend_long) ns_colorspace_available_at((int) model, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, nsColorSpace)
{
	zval *space_param = NULL;
	zend_long space, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(space)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &space_param);
	
            ptr = (zend_long)(uintptr_t) ns_colorspace_nscolorspace((uintptr_t) space);
        
	RETURN_LONG(ptr);
}

