
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

#include "ns-clipview.h"
#include <stdint.h>



/** NSClipView — scrollable document clip region. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSClipView_NSClipView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSClipView, NSClipView, appkit, ns_nsclipview_nsclipview, appkit_ns_nsclipview_nsclipview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, create)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	
            handle = (zend_long) ns_clipview_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, wrap)
{
	zval *nsClipViewPtr_param = NULL;
	zend_long nsClipViewPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsClipViewPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsClipViewPtr_param);
	
            handle = (zend_long) ns_clipview_wrap((void *)(uintptr_t) nsClipViewPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, destroy)
{
	zval *clip_param = NULL;
	zend_long clip;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(clip)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &clip_param);
	
            ns_clipview_destroy((uintptr_t) clip);
        
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, nsClipView)
{
	zval *clip_param = NULL;
	zend_long clip, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(clip)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &clip_param);
	
            ptr = (zend_long)(uintptr_t) ns_clipview_nsclipview((uintptr_t) clip);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setDocumentView)
{
	zval *clip_param = NULL, *child_param = NULL;
	zend_long clip, child;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(clip)
		Z_PARAM_LONG(child)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &clip_param, &child_param);
	
            ns_clipview_set_document_view((uintptr_t) clip, (uintptr_t) child);
        
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, documentView)
{
	zval *clip_param = NULL;
	zend_long clip, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(clip)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &clip_param);
	
            handle = (zend_long) ns_clipview_document_view((uintptr_t) clip);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setDrawsBackground)
{
	zend_bool flag;
	zval *clip_param = NULL, *flag_param = NULL;
	zend_long clip;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(clip)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &clip_param, &flag_param);
	
            ns_clipview_set_draws_background((uintptr_t) clip, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, drawsBackground)
{
	zend_bool result = 0;
	zval *clip_param = NULL;
	zend_long clip;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(clip)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &clip_param);
	
            result = ns_clipview_draws_background((uintptr_t) clip) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, scrollToPoint)
{
	double x, y;
	zval *clip_param = NULL, *x_param = NULL, *y_param = NULL;
	zend_long clip;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(clip)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &clip_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	
            ns_clipview_scroll_to_point((uintptr_t) clip, x, y);
        
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setContentInsets)
{
	double top, left, bottom, right;
	zval *clip_param = NULL, *top_param = NULL, *left_param = NULL, *bottom_param = NULL, *right_param = NULL;
	zend_long clip;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(clip)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(right)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &clip_param, &top_param, &left_param, &bottom_param, &right_param);
	top = zephir_get_doubleval(top_param);
	left = zephir_get_doubleval(left_param);
	bottom = zephir_get_doubleval(bottom_param);
	right = zephir_get_doubleval(right_param);
	
            ns_clipview_set_content_insets((uintptr_t) clip, top, left, bottom, right);
        
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setAutomaticallyAdjustsContentInsets)
{
	zend_bool flag;
	zval *clip_param = NULL, *flag_param = NULL;
	zend_long clip;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(clip)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &clip_param, &flag_param);
	
            ns_clipview_set_automatically_adjusts_content_insets((uintptr_t) clip, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, automaticallyAdjustsContentInsets)
{
	zend_bool result = 0;
	zval *clip_param = NULL;
	zend_long clip;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(clip)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &clip_param);
	
            result = ns_clipview_automatically_adjusts_content_insets((uintptr_t) clip) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, documentVisibleRect)
{
	zval *clip_param = NULL;
	zend_long clip;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(clip)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &clip_param);
	
            double x = 0, y = 0, w = 0, h = 0;
            ns_clipview_get_document_visible_rect((uintptr_t) clip, &x, &y, &w, &h);
            array_init(return_value);
            add_assoc_double(return_value, "x", x);
            add_assoc_double(return_value, "y", y);
            add_assoc_double(return_value, "width", w);
            add_assoc_double(return_value, "height", h);
            return;
        
	array_init(return_value);
	return;
}

