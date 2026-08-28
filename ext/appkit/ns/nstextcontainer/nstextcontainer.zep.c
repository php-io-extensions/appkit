
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
#include "src/ns-textcontainer.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSTextContainer_NSTextContainer)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextContainer, NSTextContainer, appkit, ns_nstextcontainer_nstextcontainer, appkit_ns_nstextcontainer_nstextcontainer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, initWithSize)
{
	zval *width_param = NULL, *height_param = NULL, _0, _1;
	double width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_DOUBLE(&_0, width);
	ZVAL_DOUBLE(&_1, height);
	RETURN_LONG(ns_nstextcontainer_init_with_size(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, textLayoutManager)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextcontainer_text_layout_manager(&_0));
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nstextcontainer_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setSize)
{
	double width, height;
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_DOUBLE(&_2, height);
	ns_nstextcontainer_set_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, lineBreakMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextcontainer_line_break_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setLineBreakMode)
{
	zval *handle_param = NULL, *lineBreakMode_param = NULL, _0, _1;
	zend_long handle, lineBreakMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lineBreakMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &lineBreakMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lineBreakMode);
	ns_nstextcontainer_set_line_break_mode(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, lineFragmentPadding)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nstextcontainer_line_fragment_padding(&_0));
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setLineFragmentPadding)
{
	double lineFragmentPadding;
	zval *handle_param = NULL, *lineFragmentPadding_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(lineFragmentPadding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &lineFragmentPadding_param);
	lineFragmentPadding = zephir_get_doubleval(lineFragmentPadding_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, lineFragmentPadding);
	ns_nstextcontainer_set_line_fragment_padding(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, maximumNumberOfLines)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextcontainer_maximum_number_of_lines(&_0));
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setMaximumNumberOfLines)
{
	zval *handle_param = NULL, *maximumNumberOfLines_param = NULL, _0, _1;
	zend_long handle, maximumNumberOfLines;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maximumNumberOfLines)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maximumNumberOfLines_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maximumNumberOfLines);
	ns_nstextcontainer_set_maximum_number_of_lines(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, lineFragmentRectForProposedRectAtIndexWritingDirectionRemainingRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *characterIndex_param = NULL, *baseWritingDirection_param = NULL, result, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, characterIndex, baseWritingDirection;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(characterIndex)
		Z_PARAM_LONG(baseWritingDirection)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &characterIndex_param, &baseWritingDirection_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_LONG(&_5, characterIndex);
	ZVAL_LONG(&_6, baseWritingDirection);
	ns_nstextcontainer_line_fragment_rect_for_proposed_rect_at_index_writing_direction_remaining_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, isSimpleRectangularTextContainer)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextcontainer_is_simple_rectangular_text_container(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, widthTracksTextView)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextcontainer_width_tracks_text_view(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setWidthTracksTextView)
{
	zend_bool widthTracksTextView;
	zval *handle_param = NULL, *widthTracksTextView_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(widthTracksTextView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &widthTracksTextView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (widthTracksTextView ? 1 : 0));
	ns_nstextcontainer_set_width_tracks_text_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, heightTracksTextView)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextcontainer_height_tracks_text_view(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setHeightTracksTextView)
{
	zend_bool heightTracksTextView;
	zval *handle_param = NULL, *heightTracksTextView_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(heightTracksTextView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &heightTracksTextView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (heightTracksTextView ? 1 : 0));
	ns_nstextcontainer_set_height_tracks_text_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, layoutManager)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextcontainer_layout_manager(&_0));
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setLayoutManager)
{
	zval *handle_param = NULL, *layoutManager_param = NULL, _0, _1;
	zend_long handle, layoutManager;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(layoutManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &layoutManager_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layoutManager);
	ns_nstextcontainer_set_layout_manager(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, replaceLayoutManager)
{
	zval *handle_param = NULL, *newLayoutManager_param = NULL, _0, _1;
	zend_long handle, newLayoutManager;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newLayoutManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newLayoutManager_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newLayoutManager);
	ns_nstextcontainer_replace_layout_manager(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, exclusionPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nstextcontainer_exclusion_paths(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setExclusionPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval exclusionPaths;
	zval *handle_param = NULL, *exclusionPaths_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&exclusionPaths);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(exclusionPaths)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &exclusionPaths_param);
	zephir_get_arrval(&exclusionPaths, exclusionPaths_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextcontainer_set_exclusion_paths(&_0, &exclusionPaths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, textView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextcontainer_text_view(&_0));
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setTextView)
{
	zval *handle_param = NULL, *textView_param = NULL, _0, _1;
	zend_long handle, textView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textView);
	ns_nstextcontainer_set_text_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, initWithContainerSize)
{
	zval *width_param = NULL, *height_param = NULL, _0, _1;
	double width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_DOUBLE(&_0, width);
	ZVAL_DOUBLE(&_1, height);
	RETURN_LONG(ns_nstextcontainer_init_with_container_size(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, containerSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nstextcontainer_container_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setContainerSize)
{
	double width, height;
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_DOUBLE(&_2, height);
	ns_nstextcontainer_set_container_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, lineFragmentRectForProposedRectSweepDirectionMovementDirectionRemainingRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *sweepDirection_param = NULL, *movementDirection_param = NULL, result, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, sweepDirection, movementDirection;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(sweepDirection)
		Z_PARAM_LONG(movementDirection)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &sweepDirection_param, &movementDirection_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_LONG(&_5, sweepDirection);
	ZVAL_LONG(&_6, movementDirection);
	ns_nstextcontainer_line_fragment_rect_for_proposed_rect_sweep_direction_movement_direction_remaining_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6);
	RETURN_CCTOR(&result);
}

