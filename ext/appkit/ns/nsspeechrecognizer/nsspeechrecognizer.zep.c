
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

#include "ns-speechrecognizer.h"
#include <stdint.h>



/**
 * NSSpeechRecognizer — spoken command recognition.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSpeechRecognizer, NSSpeechRecognizer, appkit, ns_nsspeechrecognizer_nsspeechrecognizer, appkit_ns_nsspeechrecognizer_nsspeechrecognizer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_speechrecognizer_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, wrap)
{
	zval *nsSpeechRecognizerPtr_param = NULL;
	zend_long nsSpeechRecognizerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSpeechRecognizerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSpeechRecognizerPtr_param);
	
            handle = (zend_long) ns_speechrecognizer_wrap((void *)(uintptr_t) nsSpeechRecognizerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, destroy)
{
	zval *recognizer_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            ns_speechrecognizer_destroy((uintptr_t) recognizer);
        
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, nsSpeechRecognizer)
{
	zval *recognizer_param = NULL;
	zend_long recognizer, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            ptr = (zend_long)(uintptr_t) ns_speechrecognizer_nsspeechrecognizer((uintptr_t) recognizer);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, startListening)
{
	zval *recognizer_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            ns_speechrecognizer_start_listening((uintptr_t) recognizer);
        
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, stopListening)
{
	zval *recognizer_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            ns_speechrecognizer_stop_listening((uintptr_t) recognizer);
        
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, setCommands)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval commands;
	zval *recognizer_param = NULL, *commands_param = NULL;
	zend_long recognizer;

	ZVAL_UNDEF(&commands);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(recognizer)
		Z_PARAM_ARRAY(commands)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &recognizer_param, &commands_param);
	zephir_get_arrval(&commands, commands_param);
	
            const char *items[256];
            int count = 0;
            zval *entry;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(commands), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                items[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_speechrecognizer_set_commands((uintptr_t) recognizer, items, count);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, commandsCount)
{
	zval *recognizer_param = NULL;
	zend_long recognizer, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            count = ns_speechrecognizer_commands_count((uintptr_t) recognizer);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, commandAt)
{
	zval *recognizer_param = NULL, *index_param = NULL;
	zend_long recognizer, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(recognizer)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &recognizer_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechrecognizer_command_at((uintptr_t) recognizer, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, displayedCommandsTitle)
{
	zval *recognizer_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechrecognizer_displayed_commands_title((uintptr_t) recognizer, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, setDisplayedCommandsTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *recognizer_param = NULL, *title_param = NULL;
	zend_long recognizer;

	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(recognizer)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &recognizer_param, &title_param);
	zephir_get_strval(&title, title_param);
	
            ns_speechrecognizer_set_displayed_commands_title((uintptr_t) recognizer, Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, listensInForegroundOnly)
{
	zend_bool result = 0;
	zval *recognizer_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            result = ns_speechrecognizer_listens_in_foreground_only((uintptr_t) recognizer) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, setListensInForegroundOnly)
{
	zend_bool flag;
	zval *recognizer_param = NULL, *flag_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(recognizer)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &recognizer_param, &flag_param);
	
            ns_speechrecognizer_set_listens_in_foreground_only((uintptr_t) recognizer, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, blocksOtherRecognizers)
{
	zend_bool result = 0;
	zval *recognizer_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	
            result = ns_speechrecognizer_blocks_other_recognizers((uintptr_t) recognizer) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSpeechRecognizer_NSSpeechRecognizer, setBlocksOtherRecognizers)
{
	zend_bool flag;
	zval *recognizer_param = NULL, *flag_param = NULL;
	zend_long recognizer;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(recognizer)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &recognizer_param, &flag_param);
	
            ns_speechrecognizer_set_blocks_other_recognizers((uintptr_t) recognizer, flag ? 1 : 0);
        
}

