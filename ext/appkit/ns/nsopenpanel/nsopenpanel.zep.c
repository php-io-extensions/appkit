
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
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"

#include "ns-openpanel.h"



/**
 * NSOpenPanel file picker (modal).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSOpenPanel_NSOpenPanel)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSOpenPanel, NSOpenPanel, appkit, ns_nsopenpanel_nsopenpanel, appkit_ns_nsopenpanel_nsopenpanel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, runModal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *directory_param = NULL;
	zval directory;

	ZVAL_UNDEF(&directory);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(directory)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &directory_param);
	if (!directory_param) {
		ZEPHIR_INIT_VAR(&directory);
		ZVAL_STRING(&directory, "");
	} else {
		zephir_get_strval(&directory, directory_param);
	}
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_openpanel_run(Z_STRVAL(directory), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

