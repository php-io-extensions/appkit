
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

#include "ns-animation.h"
#include <stdint.h>



/**
 * NSAnimation — timed progress animation.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSAnimation_NSAnimation)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSAnimation, NSAnimation, appkit, ns_nsanimation_nsanimation, appkit_ns_nsanimation_nsanimation_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, create)
{
	zend_long curve, handle = 0;
	zval *duration_param = NULL, *curve_param = NULL;
	double duration;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(duration)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(curve)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &duration_param, &curve_param);
	duration = zephir_get_doubleval(duration_param);
	if (!curve_param) {
		curve = 0;
	} else {
		}
	
            handle = (zend_long) ns_animation_create((double) duration, (int) curve);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, wrap)
{
	zval *nsAnimationPtr_param = NULL;
	zend_long nsAnimationPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsAnimationPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsAnimationPtr_param);
	
            handle = (zend_long) ns_animation_wrap((void *)(uintptr_t) nsAnimationPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, destroy)
{
	zval *animation_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            ns_animation_destroy((uintptr_t) animation);
        
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, nsAnimation)
{
	zval *animation_param = NULL;
	zend_long animation, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            ptr = (zend_long)(uintptr_t) ns_animation_nsanimation((uintptr_t) animation);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, start)
{
	zval *animation_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            ns_animation_start((uintptr_t) animation);
        
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, stop)
{
	zval *animation_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            ns_animation_stop((uintptr_t) animation);
        
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, isAnimating)
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

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, setCurrentProgress)
{
	double progress;
	zval *animation_param = NULL, *progress_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(animation)
		Z_PARAM_ZVAL(progress)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &animation_param, &progress_param);
	progress = zephir_get_doubleval(progress_param);
	
            ns_animation_set_current_progress((uintptr_t) animation, (float) progress);
        
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getCurrentProgress)
{
	double value = 0;
	zval *animation_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            value = (double) ns_animation_get_current_progress((uintptr_t) animation);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, setDuration)
{
	double duration;
	zval *animation_param = NULL, *duration_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(animation)
		Z_PARAM_ZVAL(duration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &animation_param, &duration_param);
	duration = zephir_get_doubleval(duration_param);
	
            ns_animation_set_duration((uintptr_t) animation, (double) duration);
        
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getDuration)
{
	double value = 0;
	zval *animation_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            value = ns_animation_get_duration((uintptr_t) animation);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, setBlockingMode)
{
	zval *animation_param = NULL, *mode_param = NULL;
	zend_long animation, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(animation)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &animation_param, &mode_param);
	
            ns_animation_set_blocking_mode((uintptr_t) animation, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getBlockingMode)
{
	zval *animation_param = NULL;
	zend_long animation, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            value = (zend_long) ns_animation_get_blocking_mode((uintptr_t) animation);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, setFrameRate)
{
	double frameRate;
	zval *animation_param = NULL, *frameRate_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(animation)
		Z_PARAM_ZVAL(frameRate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &animation_param, &frameRate_param);
	frameRate = zephir_get_doubleval(frameRate_param);
	
            ns_animation_set_frame_rate((uintptr_t) animation, (float) frameRate);
        
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getFrameRate)
{
	double value = 0;
	zval *animation_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            value = (double) ns_animation_get_frame_rate((uintptr_t) animation);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, setCurve)
{
	zval *animation_param = NULL, *curve_param = NULL;
	zend_long animation, curve;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(animation)
		Z_PARAM_LONG(curve)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &animation_param, &curve_param);
	
            ns_animation_set_curve((uintptr_t) animation, (int) curve);
        
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getCurve)
{
	zval *animation_param = NULL;
	zend_long animation, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            value = (zend_long) ns_animation_get_curve((uintptr_t) animation);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getCurrentValue)
{
	double value = 0;
	zval *animation_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(animation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &animation_param);
	
            value = (double) ns_animation_get_current_value((uintptr_t) animation);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, addProgressMark)
{
	double mark;
	zval *animation_param = NULL, *mark_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(animation)
		Z_PARAM_ZVAL(mark)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &animation_param, &mark_param);
	mark = zephir_get_doubleval(mark_param);
	
            ns_animation_add_progress_mark((uintptr_t) animation, (float) mark);
        
}

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, removeProgressMark)
{
	double mark;
	zval *animation_param = NULL, *mark_param = NULL;
	zend_long animation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(animation)
		Z_PARAM_ZVAL(mark)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &animation_param, &mark_param);
	mark = zephir_get_doubleval(mark_param);
	
            ns_animation_remove_progress_mark((uintptr_t) animation, (float) mark);
        
}

