/*
 * appkit: 1:1 bindings of AppKit and the CoreFoundation run-loop API AppKit
 * runs on, as PHP classes named after their native counterparts.
 */

#include "runtime.h"
#include "ext/standard/info.h"
#include "ext/spl/spl_exceptions.h"

#import <AppKit/AppKit.h>

#include "../stubs/appkit_arginfo.h"

ZEND_DECLARE_MODULE_GLOBALS(appkit)

zend_class_entry *appkit_ce_AppKitException;
zend_class_entry *appkit_ce_NSObject;
zend_class_entry *appkit_ce_NSResponder;
zend_class_entry *appkit_ce_NSApplication;
zend_class_entry *appkit_ce_NSApplicationActivationPolicy;
zend_class_entry *appkit_ce_NSEvent;
zend_class_entry *appkit_ce_NSEventType;
zend_class_entry *appkit_ce_NSEventMask;
zend_class_entry *appkit_ce_NSEventModifierFlags;
zend_class_entry *appkit_ce_NSDate;
zend_class_entry *appkit_ce_NSPoint;
zend_class_entry *appkit_ce_CFType;
zend_class_entry *appkit_ce_CFRunLoop;
zend_class_entry *appkit_ce_CFRunLoopRunResult;
zend_class_entry *appkit_ce_CFRunLoopSource;
zend_class_entry *appkit_ce_CFFileDescriptor;

static PHP_GINIT_FUNCTION(appkit)
{
#if defined(COMPILE_DL_APPKIT) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	zend_hash_init(&appkit_globals->boxes, 32, NULL, NULL, 1);
	appkit_globals->callouts = NULL;
}

static PHP_GSHUTDOWN_FUNCTION(appkit)
{
	zend_hash_destroy(&appkit_globals->boxes);
}

PHP_MINIT_FUNCTION(appkit)
{
	register_appkit_symbols(module_number);
	appkit_ce_AppKitException = register_class_AppKitException(spl_ce_RuntimeException);

	appkit_register_NSObject();
	appkit_register_NSResponder();
	appkit_register_NSApplication();
	appkit_register_NSEvent();
	appkit_register_NSDate();
	appkit_register_NSPoint();

	appkit_register_CFType();
	appkit_register_CFRunLoop();
	appkit_register_CFFileDescriptor();

	return SUCCESS;
}

PHP_RINIT_FUNCTION(appkit)
{
#if defined(COMPILE_DL_APPKIT) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(appkit)
{
	appkit_callouts_detach_all();
	return SUCCESS;
}

PHP_MINFO_FUNCTION(appkit)
{
	php_info_print_table_start();
	php_info_print_table_row(2, "appkit support", "enabled");
	php_info_print_table_row(2, "Version", PHP_APPKIT_VERSION);
	php_info_print_table_row(2, "macOS", [[[NSProcessInfo processInfo] operatingSystemVersionString] UTF8String]);
	php_info_print_table_end();
}

zend_module_entry appkit_module_entry = {
	STANDARD_MODULE_HEADER,
	"appkit",
	NULL,
	PHP_MINIT(appkit),
	NULL,
	PHP_RINIT(appkit),
	PHP_RSHUTDOWN(appkit),
	PHP_MINFO(appkit),
	PHP_APPKIT_VERSION,
	PHP_MODULE_GLOBALS(appkit),
	PHP_GINIT(appkit),
	PHP_GSHUTDOWN(appkit),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_APPKIT
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(appkit)
#endif
