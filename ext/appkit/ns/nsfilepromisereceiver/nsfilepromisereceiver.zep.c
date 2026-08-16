
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
#include "kernel/object.h"
#include "kernel/operators.h"

#include "ns-filepromisereceiver.h"
#include <stdint.h>



/** NSFilePromiseReceiver — promised file drag destination. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSFilePromiseReceiver_NSFilePromiseReceiver)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSFilePromiseReceiver, NSFilePromiseReceiver, appkit, ns_nsfilepromisereceiver_nsfilepromisereceiver, appkit_ns_nsfilepromisereceiver_nsfilepromisereceiver_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSFilePromiseReceiver_NSFilePromiseReceiver, readableDraggedTypes)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&out);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int count = ns_filepromisereceiver_readable_dragged_types_count();
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_filepromisereceiver_readable_dragged_type_at(i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSFilePromiseReceiver_NSFilePromiseReceiver, wrap)
{
	zval *nsFilePromiseReceiverPtr_param = NULL;
	zend_long nsFilePromiseReceiverPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsFilePromiseReceiverPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsFilePromiseReceiverPtr_param);
	
            handle = (zend_long) ns_filepromisereceiver_wrap((void *)(uintptr_t) nsFilePromiseReceiverPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFilePromiseReceiver_NSFilePromiseReceiver, destroy)
{
	zval *receiver_param = NULL;
	zend_long receiver;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(receiver)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &receiver_param);
	
            ns_filepromisereceiver_destroy((uintptr_t) receiver);
        
}

PHP_METHOD(AppKit_NS_NSFilePromiseReceiver_NSFilePromiseReceiver, nsFilePromiseReceiver)
{
	zval *receiver_param = NULL;
	zend_long receiver, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(receiver)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &receiver_param);
	
            ptr = (zend_long)(uintptr_t) ns_filepromisereceiver_nsfilepromisereceiver((uintptr_t) receiver);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSFilePromiseReceiver_NSFilePromiseReceiver, fileTypes)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *receiver_param = NULL;
	zend_long receiver;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(receiver)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &receiver_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int count = ns_filepromisereceiver_file_types_count((uintptr_t) receiver);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_filepromisereceiver_file_type_at((uintptr_t) receiver, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSFilePromiseReceiver_NSFilePromiseReceiver, fileNames)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *receiver_param = NULL;
	zend_long receiver;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(receiver)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &receiver_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int count = ns_filepromisereceiver_file_names_count((uintptr_t) receiver);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_filepromisereceiver_file_name_at((uintptr_t) receiver, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSFilePromiseReceiver_NSFilePromiseReceiver, receiveAtDestination)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval destinationDir;
	zval *receiver_param = NULL, *destinationDir_param = NULL;
	zend_long receiver;

	ZVAL_UNDEF(&destinationDir);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(receiver)
		Z_PARAM_STR(destinationDir)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &receiver_param, &destinationDir_param);
	zephir_get_strval(&destinationDir, destinationDir_param);
	
            ns_filepromisereceiver_receive_at_destination((uintptr_t) receiver, Z_STRVAL(destinationDir));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSFilePromiseReceiver_NSFilePromiseReceiver, pollReceivedFile)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *receiver_param = NULL;
	zend_long receiver;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(receiver)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &receiver_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            char url[4096];
            int errorFlag = 0;
            url[0] = '\0';
            if (ns_filepromisereceiver_poll_received_file((uintptr_t) receiver, url, (int) sizeof(url), &errorFlag)) {
                add_assoc_string(&out, "url", url);
                add_assoc_bool(&out, "error", errorFlag ? 1 : 0);
            }
        
	RETURN_CTOR(&out);
}

