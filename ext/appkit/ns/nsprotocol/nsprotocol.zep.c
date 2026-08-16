
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

#include "ns-protocol.h"
#include <stdint.h>



/**
 * AppKit @protocol poll/callback surface.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSProtocol_NSProtocol)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSProtocol, NSProtocol, appkit, ns_nsprotocol_nsprotocol, appkit_ns_nsprotocol_nsprotocol_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSProtocol_NSProtocol, attach)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval protocolName;
	zval *handle_param = NULL, *protocolName_param = NULL;
	zend_long handle;

	ZVAL_UNDEF(&protocolName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(protocolName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &protocolName_param);
	zephir_get_strval(&protocolName, protocolName_param);
	
            result = ns_protocol_attach((uintptr_t) handle, Z_STRVAL(protocolName)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSProtocol_NSProtocol, poll)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *protocolName_param = NULL;
	zval protocolName;

	ZVAL_UNDEF(&protocolName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(protocolName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &protocolName_param);
	zephir_get_strval(&protocolName, protocolName_param);
	
            char protocol[128];
            char selector[256];
            char arg1[4096];
            uintptr_t sender = 0;
            long long arg0 = 0;
            protocol[0] = selector[0] = arg1[0] = '\0';
            zval event;
            array_init(&event);
            if (ns_protocol_poll(Z_STRVAL(protocolName), protocol, (int) sizeof(protocol), selector, (int) sizeof(selector), &sender, &arg0, arg1, (int) sizeof(arg1))) {
                add_assoc_string(&event, "protocol", protocol);
                add_assoc_string(&event, "selector", selector);
                add_assoc_long(&event, "sender", (zend_long) sender);
                add_assoc_long(&event, "arg0", (zend_long) arg0);
                add_assoc_string(&event, "arg1", arg1);
            }
            RETURN_ZVAL(&event, 0, 0);
        
	array_init(return_value);
	RETURN_MM();
}

PHP_METHOD(AppKit_NS_NSProtocol_NSProtocol, knownCount)
{
	zend_long count = 0;
	
            count = ns_protocol_known_count();
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSProtocol_NSProtocol, knownAt)
{
	zval *index_param = NULL;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	
            char buf[256];
            buf[0] = '\0';
            if (ns_protocol_known_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

