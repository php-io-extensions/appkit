
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

#include "ns-textinputcontext.h"
#include <stdint.h>



/**
 * NSTextInputContext — input method / marked text context.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextInputContext_NSTextInputContext)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextInputContext, NSTextInputContext, appkit, ns_nstextinputcontext_nstextinputcontext, appkit_ns_nstextinputcontext_nstextinputcontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, current)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_textinputcontext_current();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, create)
{
	zval *clientPtr_param = NULL;
	zend_long clientPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(clientPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &clientPtr_param);
	
            handle = (zend_long) ns_textinputcontext_create((void *)(uintptr_t) clientPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, wrap)
{
	zval *nsTextInputContextPtr_param = NULL;
	zend_long nsTextInputContextPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextInputContextPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextInputContextPtr_param);
	
            handle = (zend_long) ns_textinputcontext_wrap((void *)(uintptr_t) nsTextInputContextPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, destroy)
{
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ns_textinputcontext_destroy((uintptr_t) context);
        
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, nsTextInputContext)
{
	zval *context_param = NULL;
	zend_long context, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ptr = (zend_long)(uintptr_t) ns_textinputcontext_nstextinputcontext((uintptr_t) context);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, client)
{
	zval *context_param = NULL;
	zend_long context, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ptr = (zend_long)(uintptr_t) ns_textinputcontext_client((uintptr_t) context);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, setAcceptsGlyphInfo)
{
	zend_bool flag;
	zval *context_param = NULL, *flag_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(context)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &context_param, &flag_param);
	
            ns_textinputcontext_set_accepts_glyph_info((uintptr_t) context, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, acceptsGlyphInfo)
{
	zend_bool result = 0;
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            result = ns_textinputcontext_accepts_glyph_info((uintptr_t) context) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, activate)
{
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ns_textinputcontext_activate((uintptr_t) context);
        
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, deactivate)
{
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ns_textinputcontext_deactivate((uintptr_t) context);
        
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, handleEvent)
{
	zend_bool result = 0;
	zval *context_param = NULL, *nseventPtr_param = NULL;
	zend_long context, nseventPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(context)
		Z_PARAM_LONG(nseventPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &context_param, &nseventPtr_param);
	
            result = ns_textinputcontext_handle_event((uintptr_t) context, (void *)(uintptr_t) nseventPtr) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, discardMarkedText)
{
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ns_textinputcontext_discard_marked_text((uintptr_t) context);
        
}

PHP_METHOD(AppKit_NS_NSTextInputContext_NSTextInputContext, invalidateCharacterCoordinates)
{
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            ns_textinputcontext_invalidate_character_coordinates((uintptr_t) context);
        
}

