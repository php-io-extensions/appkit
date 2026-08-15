
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_APPKIT_H
#define PHP_APPKIT_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_APPKIT_NAME        "appkit"
#define PHP_APPKIT_VERSION     "0.1.0"
#define PHP_APPKIT_EXTNAME     "appkit"
#define PHP_APPKIT_AUTHOR      "Project Saturn Studios, LLC"
#define PHP_APPKIT_ZEPVERSION  "0.19.0-$Id$"
#define PHP_APPKIT_DESCRIPTION "PHP-Controllable Darwin AppKit Extension"



ZEND_BEGIN_MODULE_GLOBALS(appkit)

	int initialized;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
ZEND_END_MODULE_GLOBALS(appkit)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(appkit)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(appkit, v)
#else
	#define ZEPHIR_GLOBAL(v) (appkit_globals.v)
#endif

#ifdef ZTS
	ZEND_TSRMLS_CACHE_EXTERN()
	#define ZEPHIR_VGLOBAL ((zend_appkit_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(appkit_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(appkit_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def appkit_globals
#define zend_zephir_globals_def zend_appkit_globals

extern zend_module_entry appkit_module_entry;
#define phpext_appkit_ptr &appkit_module_entry

#endif
