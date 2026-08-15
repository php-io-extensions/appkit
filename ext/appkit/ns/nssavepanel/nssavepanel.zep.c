
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

#include "ns-savepanel.h"



/**
 * NSSavePanel file save dialog (modal).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSavePanel_NSSavePanel)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSavePanel, NSSavePanel, appkit, ns_nssavepanel_nssavepanel, appkit_ns_nssavepanel_nssavepanel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, runModal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *directory_param = NULL, *name_param = NULL;
	zval directory, name;

	ZVAL_UNDEF(&directory);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(directory)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 2, &directory_param, &name_param);
	if (!directory_param) {
		ZEPHIR_INIT_VAR(&directory);
		ZVAL_STRING(&directory, "");
	} else {
		zephir_get_strval(&directory, directory_param);
	}
	if (!name_param) {
		ZEPHIR_INIT_VAR(&name);
		ZVAL_STRING(&name, "");
	} else {
		zephir_get_strval(&name, name_param);
	}
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_savepanel_run(Z_STRVAL(directory), Z_STRVAL(name), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

