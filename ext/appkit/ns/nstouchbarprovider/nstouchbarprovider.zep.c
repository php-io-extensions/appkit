
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



ZEPHIR_INIT_CLASS(AppKit_NS_NSTouchBarProvider_NSTouchBarProvider)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTouchBarProvider, NSTouchBarProvider, appkit, ns_nstouchbarprovider_nstouchbarprovider, appkit_ns_nstouchbarprovider_nstouchbarprovider_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTouchBarProvider_NSTouchBarProvider, attach)
{
	zend_bool result = 0;
	zval *handle_param = NULL;
	zend_long handle;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	
            result = ns_protocol_attach((uintptr_t) handle, "NSTouchBarProvider") == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTouchBarProvider_NSTouchBarProvider, poll)
{

	
            char protocol[128];
            char selector[256];
            char arg1[4096];
            uintptr_t sender = 0;
            long long arg0 = 0;
            protocol[0] = selector[0] = arg1[0] = '\0';
            zval event;
            array_init(&event);
            if (ns_protocol_poll("NSTouchBarProvider", protocol, (int) sizeof(protocol), selector, (int) sizeof(selector), &sender, &arg0, arg1, (int) sizeof(arg1))) {
                add_assoc_string(&event, "protocol", protocol);
                add_assoc_string(&event, "selector", selector);
                add_assoc_long(&event, "sender", (zend_long) sender);
                add_assoc_long(&event, "arg0", (zend_long) arg0);
                add_assoc_string(&event, "arg1", arg1);
            }
            RETURN_ZVAL(&event, 0, 0);
        
	array_init(return_value);
	return;
}

