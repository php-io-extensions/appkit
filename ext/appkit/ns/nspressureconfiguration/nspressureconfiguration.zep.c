
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

#include "ns-pressureconfiguration.h"
#include <stdint.h>



/**
 * NSPressureConfiguration — Force Touch trackpad pressure behavior.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPressureConfiguration_NSPressureConfiguration)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPressureConfiguration, NSPressureConfiguration, appkit, ns_nspressureconfiguration_nspressureconfiguration, appkit_ns_nspressureconfiguration_nspressureconfiguration_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPressureConfiguration_NSPressureConfiguration, create)
{
	zval *pressureBehavior_param = NULL;
	zend_long pressureBehavior, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pressureBehavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pressureBehavior_param);
	
            handle = (zend_long) ns_pressureconfiguration_create((int) pressureBehavior);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPressureConfiguration_NSPressureConfiguration, wrap)
{
	zval *nsPressureConfigurationPtr_param = NULL;
	zend_long nsPressureConfigurationPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsPressureConfigurationPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsPressureConfigurationPtr_param);
	
            handle = (zend_long) ns_pressureconfiguration_wrap((void *)(uintptr_t) nsPressureConfigurationPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPressureConfiguration_NSPressureConfiguration, destroy)
{
	zval *configuration_param = NULL;
	zend_long configuration;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &configuration_param);
	
            ns_pressureconfiguration_destroy((uintptr_t) configuration);
        
}

PHP_METHOD(AppKit_NS_NSPressureConfiguration_NSPressureConfiguration, nsPressureConfiguration)
{
	zval *configuration_param = NULL;
	zend_long configuration, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &configuration_param);
	
            ptr = (zend_long)(uintptr_t) ns_pressureconfiguration_nspressureconfiguration((uintptr_t) configuration);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSPressureConfiguration_NSPressureConfiguration, pressureBehavior)
{
	zval *configuration_param = NULL;
	zend_long configuration, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &configuration_param);
	
            value = (zend_long) ns_pressureconfiguration_pressure_behavior((uintptr_t) configuration);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPressureConfiguration_NSPressureConfiguration, set)
{
	zval *configuration_param = NULL;
	zend_long configuration;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &configuration_param);
	
            ns_pressureconfiguration_set((uintptr_t) configuration);
        
}

PHP_METHOD(AppKit_NS_NSPressureConfiguration_NSPressureConfiguration, setOnView)
{
	zval *view_param = NULL, *configuration_param = NULL;
	zend_long view, configuration;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &view_param, &configuration_param);
	
            ns_view_set_pressure_configuration((uintptr_t) view, (uintptr_t) configuration);
        
}

PHP_METHOD(AppKit_NS_NSPressureConfiguration_NSPressureConfiguration, viewConfiguration)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_pressure_configuration((uintptr_t) view);
        
	RETURN_LONG(handle);
}

