
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

#include "ns-runningapplication.h"
#include <stdint.h>



/**
 * NSRunningApplication process instance metadata and activation.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSRunningApplication_NSRunningApplication)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSRunningApplication, NSRunningApplication, appkit, ns_nsrunningapplication_nsrunningapplication, appkit_ns_nsrunningapplication_nsrunningapplication_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, current)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_runningapplication_current();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, wrap)
{
	zval *nsRunningApplicationPtr_param = NULL;
	zend_long nsRunningApplicationPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsRunningApplicationPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsRunningApplicationPtr_param);
	
            handle = (zend_long) ns_runningapplication_wrap((void *)(uintptr_t) nsRunningApplicationPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, destroy)
{
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            ns_runningapplication_destroy((uintptr_t) application);
        
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, nsRunningApplication)
{
	zval *application_param = NULL;
	zend_long application, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            ptr = (zend_long)(uintptr_t) ns_runningapplication_nsrunningapplication((uintptr_t) application);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, withProcessIdentifier)
{
	zval *pid_param = NULL;
	zend_long pid, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pid)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pid_param);
	
            handle = (zend_long) ns_runningapplication_with_process_identifier((pid_t) pid);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, withBundleIdentifierCount)
{
	zend_long count = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *bundleId_param = NULL;
	zval bundleId;

	ZVAL_UNDEF(&bundleId);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(bundleId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &bundleId_param);
	zephir_get_strval(&bundleId, bundleId_param);
	
            count = ns_runningapplication_with_bundle_identifier_count(Z_STRVAL(bundleId));
        
	RETURN_MM_LONG(count);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, withBundleIdentifierAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long index, handle = 0;
	zval *bundleId_param = NULL, *index_param = NULL;
	zval bundleId;

	ZVAL_UNDEF(&bundleId);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(bundleId)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &bundleId_param, &index_param);
	zephir_get_strval(&bundleId, bundleId_param);
	
            handle = (zend_long) ns_runningapplication_with_bundle_identifier_at(Z_STRVAL(bundleId), (int) index);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, terminateAutomaticallyTerminableApplications)
{

	
            ns_runningapplication_terminate_automatically_terminable_applications();
        
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, isTerminated)
{
	zend_bool result = 0;
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            result = ns_runningapplication_is_terminated((uintptr_t) application) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, isFinishedLaunching)
{
	zend_bool result = 0;
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            result = ns_runningapplication_is_finished_launching((uintptr_t) application) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, isHidden)
{
	zend_bool result = 0;
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            result = ns_runningapplication_is_hidden((uintptr_t) application) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, isActive)
{
	zend_bool result = 0;
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            result = ns_runningapplication_is_active((uintptr_t) application) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, ownsMenuBar)
{
	zend_bool result = 0;
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            result = ns_runningapplication_owns_menu_bar((uintptr_t) application) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, activationPolicy)
{
	zval *application_param = NULL;
	zend_long application, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            value = ns_runningapplication_activation_policy((uintptr_t) application);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, processIdentifier)
{
	zval *application_param = NULL;
	zend_long application, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            value = ns_runningapplication_process_identifier((uintptr_t) application);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, localizedName)
{
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_runningapplication_localized_name((uintptr_t) application, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, bundleIdentifier)
{
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_runningapplication_bundle_identifier((uintptr_t) application, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, bundleURL)
{
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_runningapplication_bundle_url((uintptr_t) application, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, executableURL)
{
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_runningapplication_executable_url((uintptr_t) application, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, icon)
{
	zval *application_param = NULL;
	zend_long application, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            handle = (zend_long) ns_runningapplication_icon((uintptr_t) application);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, hide)
{
	zend_bool result = 0;
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            result = ns_runningapplication_hide((uintptr_t) application) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, unhide)
{
	zend_bool result = 0;
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            result = ns_runningapplication_unhide((uintptr_t) application) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, activateWithOptions)
{
	zend_bool result = 0;
	zval *application_param = NULL, *options_param = NULL;
	zend_long application, options;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(application)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &application_param, &options_param);
	
            result = ns_runningapplication_activate_with_options((uintptr_t) application, (unsigned) options) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, terminate)
{
	zend_bool result = 0;
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            result = ns_runningapplication_terminate((uintptr_t) application) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSRunningApplication_NSRunningApplication, forceTerminate)
{
	zend_bool result = 0;
	zval *application_param = NULL;
	zend_long application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &application_param);
	
            result = ns_runningapplication_force_terminate((uintptr_t) application) == 1;
        
	RETURN_BOOL(result);
}

