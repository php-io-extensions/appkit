
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

#include "ns-alignmentfeedbackfilter.h"
#include <stdint.h>



/**
 * NSAlignmentFeedbackFilter — alignment haptic feedback during drag.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSAlignmentFeedbackFilter, NSAlignmentFeedbackFilter, appkit, ns_nsalignmentfeedbackfilter_nsalignmentfeedbackfilter, appkit_ns_nsalignmentfeedbackfilter_nsalignmentfeedbackfilter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_alignmentfeedbackfilter_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, wrap)
{
	zval *nsAlignmentFeedbackFilterPtr_param = NULL;
	zend_long nsAlignmentFeedbackFilterPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsAlignmentFeedbackFilterPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsAlignmentFeedbackFilterPtr_param);
	
            handle = (zend_long) ns_alignmentfeedbackfilter_wrap((void *)(uintptr_t) nsAlignmentFeedbackFilterPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, destroy)
{
	zval *filter_param = NULL;
	zend_long filter;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(filter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &filter_param);
	
            ns_alignmentfeedbackfilter_destroy((uintptr_t) filter);
        
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, nsAlignmentFeedbackFilter)
{
	zval *filter_param = NULL;
	zend_long filter, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(filter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &filter_param);
	
            ptr = (zend_long)(uintptr_t) ns_alignmentfeedbackfilter_nsalignmentfeedbackfilter((uintptr_t) filter);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, inputEventMask)
{
	zend_long mask = 0;
	
            mask = (zend_long) ns_alignmentfeedbackfilter_input_event_mask();
        
	RETURN_LONG(mask);
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, updateWithEvent)
{
	zval *filter_param = NULL, *nsEventPtr_param = NULL;
	zend_long filter, nsEventPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(filter)
		Z_PARAM_LONG(nsEventPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &filter_param, &nsEventPtr_param);
	
            ns_alignmentfeedbackfilter_update_with_event((uintptr_t) filter, (void *)(uintptr_t) nsEventPtr);
        
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, updateWithPanRecognizer)
{
	zval *filter_param = NULL, *recognizer_param = NULL;
	zend_long filter, recognizer;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(filter)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &filter_param, &recognizer_param);
	
            ns_alignmentfeedbackfilter_update_with_pan_recognizer((uintptr_t) filter, (uintptr_t) recognizer);
        
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, tokenForMovement)
{
	double prevX, prevY, alignedX, alignedY, defaultX, defaultY;
	zval *filter_param = NULL, *view_param = NULL, *prevX_param = NULL, *prevY_param = NULL, *alignedX_param = NULL, *alignedY_param = NULL, *defaultX_param = NULL, *defaultY_param = NULL;
	zend_long filter, view, token = 0;

	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(filter)
		Z_PARAM_LONG(view)
		Z_PARAM_ZVAL(prevX)
		Z_PARAM_ZVAL(prevY)
		Z_PARAM_ZVAL(alignedX)
		Z_PARAM_ZVAL(alignedY)
		Z_PARAM_ZVAL(defaultX)
		Z_PARAM_ZVAL(defaultY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &filter_param, &view_param, &prevX_param, &prevY_param, &alignedX_param, &alignedY_param, &defaultX_param, &defaultY_param);
	prevX = zephir_get_doubleval(prevX_param);
	prevY = zephir_get_doubleval(prevY_param);
	alignedX = zephir_get_doubleval(alignedX_param);
	alignedY = zephir_get_doubleval(alignedY_param);
	defaultX = zephir_get_doubleval(defaultX_param);
	defaultY = zephir_get_doubleval(defaultY_param);
	
            token = (zend_long) ns_alignmentfeedbackfilter_token_for_movement(
                (uintptr_t) filter, (uintptr_t) view, prevX, prevY, alignedX, alignedY, defaultX, defaultY);
        
	RETURN_LONG(token);
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, tokenForHorizontalMovement)
{
	double previousX, alignedX, defaultX;
	zval *filter_param = NULL, *view_param = NULL, *previousX_param = NULL, *alignedX_param = NULL, *defaultX_param = NULL;
	zend_long filter, view, token = 0;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(filter)
		Z_PARAM_LONG(view)
		Z_PARAM_ZVAL(previousX)
		Z_PARAM_ZVAL(alignedX)
		Z_PARAM_ZVAL(defaultX)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &filter_param, &view_param, &previousX_param, &alignedX_param, &defaultX_param);
	previousX = zephir_get_doubleval(previousX_param);
	alignedX = zephir_get_doubleval(alignedX_param);
	defaultX = zephir_get_doubleval(defaultX_param);
	
            token = (zend_long) ns_alignmentfeedbackfilter_token_for_horizontal_movement(
                (uintptr_t) filter, (uintptr_t) view, previousX, alignedX, defaultX);
        
	RETURN_LONG(token);
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, tokenForVerticalMovement)
{
	double previousY, alignedY, defaultY;
	zval *filter_param = NULL, *view_param = NULL, *previousY_param = NULL, *alignedY_param = NULL, *defaultY_param = NULL;
	zend_long filter, view, token = 0;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(filter)
		Z_PARAM_LONG(view)
		Z_PARAM_ZVAL(previousY)
		Z_PARAM_ZVAL(alignedY)
		Z_PARAM_ZVAL(defaultY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &filter_param, &view_param, &previousY_param, &alignedY_param, &defaultY_param);
	previousY = zephir_get_doubleval(previousY_param);
	alignedY = zephir_get_doubleval(alignedY_param);
	defaultY = zephir_get_doubleval(defaultY_param);
	
            token = (zend_long) ns_alignmentfeedbackfilter_token_for_vertical_movement(
                (uintptr_t) filter, (uintptr_t) view, previousY, alignedY, defaultY);
        
	RETURN_LONG(token);
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, performFeedback)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tokens;
	zval *filter_param = NULL, *tokens_param = NULL, *performanceTime_param = NULL;
	zend_long filter, performanceTime;

	ZVAL_UNDEF(&tokens);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(filter)
		Z_PARAM_ARRAY(tokens)
		Z_PARAM_LONG(performanceTime)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &filter_param, &tokens_param, &performanceTime_param);
	zephir_get_arrval(&tokens, tokens_param);
	
            zval *entry;
            uintptr_t handles[64];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(tokens), entry) {
                if (count >= 64) {
                    break;
                }
                convert_to_long(entry);
                handles[count++] = (uintptr_t) Z_LVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_alignmentfeedbackfilter_perform_feedback((uintptr_t) filter, handles, count, (int) performanceTime);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSAlignmentFeedbackFilter_NSAlignmentFeedbackFilter, destroyToken)
{
	zval *token_param = NULL;
	zend_long token;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(token)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &token_param);
	
            ns_alignmentfeedbackfilter_destroy_token((uintptr_t) token);
        
}

