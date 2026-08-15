
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

#include "ns-viewanimation.h"
#include "ns-animation.h"
#include <stdint.h>



/**
 * NSViewAnimation — fade and frame animations for views/windows.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSViewAnimation_NSViewAnimation)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSViewAnimation, NSViewAnimation, appkit, ns_nsviewanimation_nsviewanimation, appkit_ns_nsviewanimation_nsviewanimation_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, createFadeIn)
{
	double duration;
	zend_bool isWindow;
	zval *targetHandle_param = NULL, *isWindow_param = NULL, *duration_param = NULL;
	zend_long targetHandle, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(targetHandle)
		Z_PARAM_BOOL(isWindow)
		Z_PARAM_ZVAL(duration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &targetHandle_param, &isWindow_param, &duration_param);
	duration = zephir_get_doubleval(duration_param);
	
            handle = (zend_long) ns_viewanimation_create_fade((uintptr_t) targetHandle, isWindow ? 1 : 0, 0, (double) duration);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, createFadeOut)
{
	double duration;
	zend_bool isWindow;
	zval *targetHandle_param = NULL, *isWindow_param = NULL, *duration_param = NULL;
	zend_long targetHandle, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(targetHandle)
		Z_PARAM_BOOL(isWindow)
		Z_PARAM_ZVAL(duration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &targetHandle_param, &isWindow_param, &duration_param);
	duration = zephir_get_doubleval(duration_param);
	
            handle = (zend_long) ns_viewanimation_create_fade((uintptr_t) targetHandle, isWindow ? 1 : 0, 1, (double) duration);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, createWithFrames)
{
	double startX, startY, startW, startH, endX, endY, endW, endH, duration;
	zend_bool isWindow;
	zval *targetHandle_param = NULL, *isWindow_param = NULL, *startX_param = NULL, *startY_param = NULL, *startW_param = NULL, *startH_param = NULL, *endX_param = NULL, *endY_param = NULL, *endW_param = NULL, *endH_param = NULL, *duration_param = NULL;
	zend_long targetHandle, handle = 0;

	ZEND_PARSE_PARAMETERS_START(11, 11)
		Z_PARAM_LONG(targetHandle)
		Z_PARAM_BOOL(isWindow)
		Z_PARAM_ZVAL(startX)
		Z_PARAM_ZVAL(startY)
		Z_PARAM_ZVAL(startW)
		Z_PARAM_ZVAL(startH)
		Z_PARAM_ZVAL(endX)
		Z_PARAM_ZVAL(endY)
		Z_PARAM_ZVAL(endW)
		Z_PARAM_ZVAL(endH)
		Z_PARAM_ZVAL(duration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(11, 0, &targetHandle_param, &isWindow_param, &startX_param, &startY_param, &startW_param, &startH_param, &endX_param, &endY_param, &endW_param, &endH_param, &duration_param);
	startX = zephir_get_doubleval(startX_param);
	startY = zephir_get_doubleval(startY_param);
	startW = zephir_get_doubleval(startW_param);
	startH = zephir_get_doubleval(startH_param);
	endX = zephir_get_doubleval(endX_param);
	endY = zephir_get_doubleval(endY_param);
	endW = zephir_get_doubleval(endW_param);
	endH = zephir_get_doubleval(endH_param);
	duration = zephir_get_doubleval(duration_param);
	
            handle = (zend_long) ns_viewanimation_create_frame(
                (uintptr_t) targetHandle,
                isWindow ? 1 : 0,
                (double) startX, (double) startY, (double) startW, (double) startH,
                (double) endX, (double) endY, (double) endW, (double) endH,
                (double) duration
            );
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, wrap)
{
	zval *nsViewAnimationPtr_param = NULL;
	zend_long nsViewAnimationPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsViewAnimationPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsViewAnimationPtr_param);
	
            handle = (zend_long) ns_viewanimation_wrap((void *)(uintptr_t) nsViewAnimationPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, destroy)
{
	zval *animation_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            ns_viewanimation_destroy((uintptr_t) animation);
        
}

PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, nsViewAnimation)
{
	zval *animation_param = NULL;
	zend_long animation, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            ptr = (zend_long)(uintptr_t) ns_viewanimation_nsviewanimation((uintptr_t) animation);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, start)
{
	zval *animation_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            ns_animation_start((uintptr_t) animation);
        
}

PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, stop)
{
	zval *animation_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            ns_animation_stop((uintptr_t) animation);
        
}

PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, isAnimating)
{
	zend_bool result = 0;
	zval *animation_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            result = ns_animation_is_animating((uintptr_t) animation) == 1;
        
	RETURN_BOOL(result);
}

