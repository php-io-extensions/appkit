
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

#include "ns-textcontainer.h"
#include <stdint.h>



/**
 * NSTextContainer — region where text is laid out.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextContainer_NSTextContainer)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextContainer, NSTextContainer, appkit, ns_nstextcontainer_nstextcontainer, appkit_ns_nstextcontainer_nstextcontainer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, create)
{
	zend_long handle = 0;
	zval *width_param = NULL, *height_param = NULL;
	double width, height;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            handle = (zend_long) ns_textcontainer_create((double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, wrap)
{
	zval *nsTextContainerPtr_param = NULL;
	zend_long nsTextContainerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextContainerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextContainerPtr_param);
	
            handle = (zend_long) ns_textcontainer_wrap((void *)(uintptr_t) nsTextContainerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, destroy)
{
	zval *container_param = NULL;
	zend_long container;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &container_param);
	
            ns_textcontainer_destroy((uintptr_t) container);
        
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, nsTextContainer)
{
	zval *container_param = NULL;
	zend_long container, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &container_param);
	
            ptr = (zend_long)(uintptr_t) ns_textcontainer_nstextcontainer((uintptr_t) container);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setSize)
{
	double width, height;
	zval *container_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long container;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(container)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &container_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_textcontainer_set_size((uintptr_t) container, (double) width, (double) height);
        
}

/**
 * @return array [width, height]
 */
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, getSize)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *container_param = NULL;
	zend_long container;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &container_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0.0, h = 0.0;
            ns_textcontainer_get_size((uintptr_t) container, &w, &h);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setLineBreakMode)
{
	zval *container_param = NULL, *mode_param = NULL;
	zend_long container, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(container)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &container_param, &mode_param);
	
            ns_textcontainer_set_line_break_mode((uintptr_t) container, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, getLineBreakMode)
{
	zval *container_param = NULL;
	zend_long container, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &container_param);
	
            value = (zend_long) ns_textcontainer_get_line_break_mode((uintptr_t) container);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setLineFragmentPadding)
{
	double padding;
	zval *container_param = NULL, *padding_param = NULL;
	zend_long container;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(container)
		Z_PARAM_ZVAL(padding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &container_param, &padding_param);
	padding = zephir_get_doubleval(padding_param);
	
            ns_textcontainer_set_line_fragment_padding((uintptr_t) container, (double) padding);
        
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, getLineFragmentPadding)
{
	double value = 0;
	zval *container_param = NULL;
	zend_long container;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &container_param);
	
            value = ns_textcontainer_get_line_fragment_padding((uintptr_t) container);
        
	RETURN_DOUBLE((double) (value));
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setMaximumNumberOfLines)
{
	zval *container_param = NULL, *lines_param = NULL;
	zend_long container, lines;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(container)
		Z_PARAM_LONG(lines)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &container_param, &lines_param);
	
            ns_textcontainer_set_maximum_number_of_lines((uintptr_t) container, (int) lines);
        
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, getMaximumNumberOfLines)
{
	zval *container_param = NULL;
	zend_long container, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &container_param);
	
            value = (zend_long) ns_textcontainer_get_maximum_number_of_lines((uintptr_t) container);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setWidthTracksTextView)
{
	zend_bool flag;
	zval *container_param = NULL, *flag_param = NULL;
	zend_long container;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(container)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &container_param, &flag_param);
	
            ns_textcontainer_set_width_tracks_text_view((uintptr_t) container, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, widthTracksTextView)
{
	zend_bool result = 0;
	zval *container_param = NULL;
	zend_long container;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &container_param);
	
            result = ns_textcontainer_width_tracks_text_view((uintptr_t) container) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setHeightTracksTextView)
{
	zend_bool flag;
	zval *container_param = NULL, *flag_param = NULL;
	zend_long container;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(container)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &container_param, &flag_param);
	
            ns_textcontainer_set_height_tracks_text_view((uintptr_t) container, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, heightTracksTextView)
{
	zend_bool result = 0;
	zval *container_param = NULL;
	zend_long container;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &container_param);
	
            result = ns_textcontainer_height_tracks_text_view((uintptr_t) container) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, isSimpleRectangularTextContainer)
{
	zend_bool result = 0;
	zval *container_param = NULL;
	zend_long container;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &container_param);
	
            result = ns_textcontainer_is_simple_rectangular((uintptr_t) container) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, replaceLayoutManager)
{
	zval *container_param = NULL, *layoutManager_param = NULL;
	zend_long container, layoutManager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(container)
		Z_PARAM_LONG(layoutManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &container_param, &layoutManager_param);
	
            ns_textcontainer_replace_layout_manager((uintptr_t) container, (uintptr_t) layoutManager);
        
}

