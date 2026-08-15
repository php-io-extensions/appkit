
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

#include "ns-animationcontext.h"
#include <stdint.h>



/**
 * NSAnimationContext — implicit animation grouping and duration.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSAnimationContext_NSAnimationContext)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSAnimationContext, NSAnimationContext, appkit, ns_nsanimationcontext_nsanimationcontext, appkit_ns_nsanimationcontext_nsanimationcontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSAnimationContext_NSAnimationContext, beginGrouping)
{

	
            ns_animationcontext_begin_grouping();
        
}

PHP_METHOD(AppKit_NS_NSAnimationContext_NSAnimationContext, endGrouping)
{

	
            ns_animationcontext_end_grouping();
        
}

PHP_METHOD(AppKit_NS_NSAnimationContext_NSAnimationContext, current)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_animationcontext_current();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAnimationContext_NSAnimationContext, setDuration)
{
	double duration;
	zval *context_param = NULL, *duration_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(context)
		Z_PARAM_ZVAL(duration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &context_param, &duration_param);
	duration = zephir_get_doubleval(duration_param);
	
            ns_animationcontext_set_duration((uintptr_t) context, (double) duration);
        
}

PHP_METHOD(AppKit_NS_NSAnimationContext_NSAnimationContext, getDuration)
{
	double value = 0;
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            value = ns_animationcontext_get_duration((uintptr_t) context);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSAnimationContext_NSAnimationContext, setAllowsImplicitAnimation)
{
	zend_bool enabled;
	zval *context_param = NULL, *enabled_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(context)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &context_param, &enabled_param);
	
            ns_animationcontext_set_allows_implicit_animation((uintptr_t) context, enabled ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSAnimationContext_NSAnimationContext, getAllowsImplicitAnimation)
{
	zend_bool result = 0;
	zval *context_param = NULL;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	
            result = ns_animationcontext_get_allows_implicit_animation((uintptr_t) context) == 1;
        
	RETURN_BOOL(result);
}

