
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

#include "ns-app.h"
#include <stdint.h>



/**
 * NSApplication lifecycle — Darwin only.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSApplication_NSApplication)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSApplication, NSApplication, appkit, ns_nsapplication_nsapplication, appkit_ns_nsapplication_nsapplication_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, init)
{
	zend_bool result = 0;
	
            result = ns_app_init() == 1;
        
	RETURN_BOOL(result);
}

/**
 * @return int Borrowed NSApplication* (sharedApplication), or 0
 */
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, shared)
{
	zend_long handle = 0;
	
            handle = (zend_long)(uintptr_t) ns_app_shared();
        
	RETURN_LONG(handle);
}

/**
 * Drain pending AppKit events once.
 * @return bool false when quit was requested
 */
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, poll)
{
	zend_bool result = 0;
	
            result = ns_app_poll() == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, run)
{

	
            ns_app_run();
        
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, terminate)
{

	
            ns_app_terminate();
        
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, shouldQuit)
{
	zend_bool result = 0;
	
            result = ns_app_should_quit() == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, resetQuit)
{

	
            ns_app_reset_quit();
        
}

/**
 * @return int NSApp global (sharedApplication), or 0
 */
PHP_METHOD(AppKit_NS_NSApplication_NSApplication, nsApp)
{
	zend_long handle = 0;
	
            handle = (zend_long)(uintptr_t) ns_app_nsapp();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, appKitVersionNumber)
{
	double value = 0;
	
            value = ns_app_kit_version_number();
        
	RETURN_DOUBLE(value);
}

