
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
#include "src/ns-textview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSTextView_NSTextView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextView, NSTextView, appkit, ns_nstextview_nstextview, appkit_ns_nstextview_nstextview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, initWithFrameTextContainer)
{
	zend_long container;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *container_param = NULL, _0, _1, _2, _3, _4;
	double x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &x_param, &y_param, &width_param, &height_param, &container_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_DOUBLE(&_0, x);
	ZVAL_DOUBLE(&_1, y);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_DOUBLE(&_3, height);
	ZVAL_LONG(&_4, container);
	RETURN_LONG(ns_nstextview_init_with_frame_text_container(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, initWithFrame)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3;
	double x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_DOUBLE(&_0, x);
	ZVAL_DOUBLE(&_1, y);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_DOUBLE(&_3, height);
	RETURN_LONG(ns_nstextview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, initUsingTextLayoutManager)
{
	zval *usingTextLayoutManager_param = NULL, _0;
	zend_bool usingTextLayoutManager;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(usingTextLayoutManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &usingTextLayoutManager_param);
	ZVAL_BOOL(&_0, (usingTextLayoutManager ? 1 : 0));
	RETURN_LONG(ns_nstextview_init_using_text_layout_manager(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textViewUsingTextLayoutManager)
{
	zval *usingTextLayoutManager_param = NULL, _0;
	zend_bool usingTextLayoutManager;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(usingTextLayoutManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &usingTextLayoutManager_param);
	ZVAL_BOOL(&_0, (usingTextLayoutManager ? 1 : 0));
	RETURN_LONG(ns_nstextview_text_view_using_text_layout_manager(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textContainer)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_text_container(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setTextContainer)
{
	zval *handle_param = NULL, *textContainer_param = NULL, _0, _1;
	zend_long handle, textContainer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textContainer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textContainer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textContainer);
	ns_nstextview_set_text_container(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, replaceTextContainer)
{
	zval *handle_param = NULL, *newContainer_param = NULL, _0, _1;
	zend_long handle, newContainer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newContainer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newContainer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newContainer);
	ns_nstextview_replace_text_container(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textContainerInset)
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
	ns_nstextview_text_container_inset(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setTextContainerInset)
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
	ns_nstextview_set_text_container_inset(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textContainerOrigin)
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
	ns_nstextview_text_container_origin(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, invalidateTextContainerOrigin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_invalidate_text_container_origin(&_0);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, layoutManager)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_layout_manager(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textStorage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_text_storage(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textLayoutManager)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_text_layout_manager(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textContentStorage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_text_content_storage(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setConstrainedFrameSize)
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
	ns_nstextview_set_constrained_frame_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAlignmentRange)
{
	zval *handle_param = NULL, *alignment_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2, _3;
	zend_long handle, alignment, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(alignment)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &alignment_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, alignment);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, length);
	ns_nstextview_set_alignment_range(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setBaseWritingDirectionRange)
{
	zval *handle_param = NULL, *writingDirection_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2, _3;
	zend_long handle, writingDirection, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(writingDirection)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &writingDirection_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, writingDirection);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, length);
	ns_nstextview_set_base_writing_direction_range(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, turnOffKerning)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_turn_off_kerning(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, tightenKerning)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_tighten_kerning(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, loosenKerning)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_loosen_kerning(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, useStandardKerning)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_use_standard_kerning(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, turnOffLigatures)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_turn_off_ligatures(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, useStandardLigatures)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_use_standard_ligatures(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, useAllLigatures)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_use_all_ligatures(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, raiseBaseline)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_raise_baseline(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, lowerBaseline)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_lower_baseline(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, outline)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_outline(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, performFindPanelAction)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_perform_find_panel_action(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, alignJustified)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_align_justified(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, changeColor)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_change_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, changeAttributes)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_change_attributes(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, changeDocumentBackgroundColor)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_change_document_background_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontSpacingPanel)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_order_front_spacing_panel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontLinkPanel)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_order_front_link_panel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontListPanel)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_order_front_list_panel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontTablePanel)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_order_front_table_panel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewDidMoveMarker)
{
	zval *handle_param = NULL, *ruler_param = NULL, *marker_param = NULL, _0, _1, _2;
	zend_long handle, ruler, marker;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ruler_param, &marker_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ruler);
	ZVAL_LONG(&_2, marker);
	ns_nstextview_ruler_view_did_move_marker(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewDidRemoveMarker)
{
	zval *handle_param = NULL, *ruler_param = NULL, *marker_param = NULL, _0, _1, _2;
	zend_long handle, ruler, marker;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ruler_param, &marker_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ruler);
	ZVAL_LONG(&_2, marker);
	ns_nstextview_ruler_view_did_remove_marker(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewDidAddMarker)
{
	zval *handle_param = NULL, *ruler_param = NULL, *marker_param = NULL, _0, _1, _2;
	zend_long handle, ruler, marker;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ruler_param, &marker_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ruler);
	ZVAL_LONG(&_2, marker);
	ns_nstextview_ruler_view_did_add_marker(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewShouldMoveMarker)
{
	zval *handle_param = NULL, *ruler_param = NULL, *marker_param = NULL, _0, _1, _2;
	zend_long handle, ruler, marker, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ruler_param, &marker_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ruler);
	ZVAL_LONG(&_2, marker);
	r = ns_nstextview_ruler_view_should_move_marker(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewShouldAddMarker)
{
	zval *handle_param = NULL, *ruler_param = NULL, *marker_param = NULL, _0, _1, _2;
	zend_long handle, ruler, marker, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ruler_param, &marker_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ruler);
	ZVAL_LONG(&_2, marker);
	r = ns_nstextview_ruler_view_should_add_marker(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewWillMoveMarkerToLocation)
{
	double location;
	zval *handle_param = NULL, *ruler_param = NULL, *marker_param = NULL, *location_param = NULL, _0, _1, _2, _3;
	zend_long handle, ruler, marker;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(marker)
		Z_PARAM_ZVAL(location)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &ruler_param, &marker_param, &location_param);
	location = zephir_get_doubleval(location_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ruler);
	ZVAL_LONG(&_2, marker);
	ZVAL_DOUBLE(&_3, location);
	RETURN_DOUBLE(ns_nstextview_ruler_view_will_move_marker_to_location(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewShouldRemoveMarker)
{
	zval *handle_param = NULL, *ruler_param = NULL, *marker_param = NULL, _0, _1, _2;
	zend_long handle, ruler, marker, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ruler_param, &marker_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ruler);
	ZVAL_LONG(&_2, marker);
	r = ns_nstextview_ruler_view_should_remove_marker(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewWillAddMarkerAtLocation)
{
	double location;
	zval *handle_param = NULL, *ruler_param = NULL, *marker_param = NULL, *location_param = NULL, _0, _1, _2, _3;
	zend_long handle, ruler, marker;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(marker)
		Z_PARAM_ZVAL(location)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &ruler_param, &marker_param, &location_param);
	location = zephir_get_doubleval(location_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ruler);
	ZVAL_LONG(&_2, marker);
	ZVAL_DOUBLE(&_3, location);
	RETURN_DOUBLE(ns_nstextview_ruler_view_will_add_marker_at_location(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rulerViewHandleMouseDown)
{
	zval *handle_param = NULL, *ruler_param = NULL, *event_param = NULL, _0, _1, _2;
	zend_long handle, ruler, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ruler)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ruler_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ruler);
	ZVAL_LONG(&_2, event);
	ns_nstextview_ruler_view_handle_mouse_down(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setNeedsDisplayInRectAvoidAdditionalLayout)
{
	zend_bool flag;
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *flag_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &flag_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_BOOL(&_5, (flag ? 1 : 0));
	ns_nstextview_set_needs_display_in_rect_avoid_additional_layout(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, shouldDrawInsertionPoint)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_should_draw_insertion_point(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, drawInsertionPointInRectColorTurnedOn)
{
	zend_bool flag;
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *color_param = NULL, *flag_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, color;

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
		Z_PARAM_LONG(color)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &color_param, &flag_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_LONG(&_5, color);
	ZVAL_BOOL(&_6, (flag ? 1 : 0));
	ns_nstextview_draw_insertion_point_in_rect_color_turned_on(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, drawViewBackgroundInRect)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ns_nstextview_draw_view_background_in_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateRuler)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_update_ruler(&_0);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateFontPanel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_update_font_panel(&_0);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateDragTypeRegistration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_update_drag_type_registration(&_0);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, selectionRangeForProposedRangeGranularity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *granularity_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, location, length, granularity;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(granularity)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &location_param, &length_param, &granularity_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, granularity);
	ns_nstextview_selection_range_for_proposed_range_granularity(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, clickedOnLinkAtIndex)
{
	zval *handle_param = NULL, *link_param = NULL, *charIndex_param = NULL, _0, _1, _2;
	zend_long handle, link, charIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(link)
		Z_PARAM_LONG(charIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &link_param, &charIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, link);
	ZVAL_LONG(&_2, charIndex);
	ns_nstextview_clicked_on_link_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, startSpeaking)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_start_speaking(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, stopSpeaking)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_stop_speaking(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setLayoutOrientation)
{
	zval *handle_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	ns_nstextview_set_layout_orientation(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, changeLayoutOrientation)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_change_layout_orientation(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, characterIndexForInsertionAtPoint)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	RETURN_LONG(ns_nstextview_character_index_for_insertion_at_point(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, stronglyReferencesTextStorage)
{
	zend_long r = 0;
	r = ns_nstextview_strongly_references_text_storage();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesAdaptiveColorMappingForDarkAppearance)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_uses_adaptive_color_mapping_for_dark_appearance(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesAdaptiveColorMappingForDarkAppearance)
{
	zend_bool usesAdaptiveColorMappingForDarkAppearance;
	zval *handle_param = NULL, *usesAdaptiveColorMappingForDarkAppearance_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesAdaptiveColorMappingForDarkAppearance)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesAdaptiveColorMappingForDarkAppearance_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesAdaptiveColorMappingForDarkAppearance ? 1 : 0));
	ns_nstextview_set_uses_adaptive_color_mapping_for_dark_appearance(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, complete)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_complete(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangeForUserCompletion)
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
	ns_nstextview_range_for_user_completion(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, completionsForPartialWordRangeIndexOfSelectedItem)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, result, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &location_param, &length_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nstextview_completions_for_partial_word_range_index_of_selected_item(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, insertCompletionForPartialWordRangeMovementIsFinal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool flag;
	zval word;
	zval *handle_param = NULL, *word_param = NULL, *location_param = NULL, *length_param = NULL, *movement_param = NULL, *flag_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location, length, movement;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&word);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(word)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(movement)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &word_param, &location_param, &length_param, &movement_param, &flag_param);
	zephir_get_strval(&word, word_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, movement);
	ZVAL_BOOL(&_4, (flag ? 1 : 0));
	ns_nstextview_insert_completion_for_partial_word_range_movement_is_final(&_0, &word, &_1, &_2, &_3, &_4);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, writablePasteboardTypes)
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
	ns_nstextview_writable_pasteboard_types(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, writeSelectionToPasteboardType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval type;
	zval *handle_param = NULL, *pboard_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, pboard, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&type);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pboard)
		Z_PARAM_STR(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pboard_param, &type_param);
	zephir_get_strval(&type, type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pboard);
	r = ns_nstextview_write_selection_to_pasteboard_type(&_0, &_1, &type);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, writeSelectionToPasteboardTypes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval types;
	zval *handle_param = NULL, *pboard_param = NULL, *types_param = NULL, _0, _1;
	zend_long handle, pboard, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&types);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pboard)
		Z_PARAM_ARRAY(types)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pboard_param, &types_param);
	zephir_get_arrval(&types, types_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pboard);
	r = ns_nstextview_write_selection_to_pasteboard_types(&_0, &_1, &types);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, readablePasteboardTypes)
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
	ns_nstextview_readable_pasteboard_types(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, preferredPasteboardTypeFromArrayRestrictedToTypesFromArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval availableTypes, allowedTypes;
	zval *handle_param = NULL, *availableTypes_param = NULL, *allowedTypes_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&availableTypes);
	ZVAL_UNDEF(&allowedTypes);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(availableTypes)
		Z_PARAM_ARRAY(allowedTypes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &availableTypes_param, &allowedTypes_param);
	zephir_get_arrval(&availableTypes, availableTypes_param);
	zephir_get_arrval(&allowedTypes, allowedTypes_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_preferred_pasteboard_type_from_array_restricted_to_types_from_array(&result, &_0, &availableTypes, &allowedTypes);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, readSelectionFromPasteboardType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval type;
	zval *handle_param = NULL, *pboard_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, pboard, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&type);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pboard)
		Z_PARAM_STR(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pboard_param, &type_param);
	zephir_get_strval(&type, type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pboard);
	r = ns_nstextview_read_selection_from_pasteboard_type(&_0, &_1, &type);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, readSelectionFromPasteboard)
{
	zval *handle_param = NULL, *pboard_param = NULL, _0, _1;
	zend_long handle, pboard, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pboard_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pboard);
	r = ns_nstextview_read_selection_from_pasteboard(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, registerForServices)
{

	ns_nstextview_register_for_services();
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, validRequestorForSendTypeReturnType)
{
	zval *handle_param = NULL, *sendType = NULL, sendType_sub, *returnType = NULL, returnType_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&sendType_sub);
	ZVAL_UNDEF(&returnType_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sendType)
		Z_PARAM_ZVAL(returnType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sendType, &returnType);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_valid_requestor_for_send_type_return_type(&_0, sendType, returnType));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, pasteAsPlainText)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_paste_as_plain_text(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, pasteAsRichText)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_paste_as_rich_text(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, dragSelectionWithEventOffsetSlideBack)
{
	zend_bool slideBack;
	double width, height;
	zval *handle_param = NULL, *event_param = NULL, *width_param = NULL, *height_param = NULL, *slideBack_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_BOOL(slideBack)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &event_param, &width_param, &height_param, &slideBack_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_DOUBLE(&_3, height);
	ZVAL_BOOL(&_4, (slideBack ? 1 : 0));
	r = ns_nstextview_drag_selection_with_event_offset_slide_back(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, dragImageForSelectionWithEventOrigin)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *event_param = NULL, result, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &event_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nstextview_drag_image_for_selection_with_event_origin(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, acceptableDragTypes)
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
	ns_nstextview_acceptable_drag_types(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, dragOperationForDraggingInfoType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval type;
	zval *handle_param = NULL, *dragInfo_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, dragInfo;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&type);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dragInfo)
		Z_PARAM_STR(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &dragInfo_param, &type_param);
	zephir_get_strval(&type, type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dragInfo);
	RETURN_MM_LONG(ns_nstextview_drag_operation_for_dragging_info_type(&_0, &_1, &type));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, cleanUpAfterDragOperation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_clean_up_after_drag_operation(&_0);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, selectedRanges)
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
	ns_nstextview_selected_ranges(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectedRanges)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval selectedRanges;
	zval *handle_param = NULL, *selectedRanges_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&selectedRanges);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(selectedRanges)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &selectedRanges_param);
	zephir_get_arrval(&selectedRanges, selectedRanges_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_set_selected_ranges(&_0, &selectedRanges);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectedRangesAffinityStillSelecting)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool stillSelectingFlag;
	zval ranges;
	zval *handle_param = NULL, *ranges_param = NULL, *affinity_param = NULL, *stillSelectingFlag_param = NULL, _0, _1, _2;
	zend_long handle, affinity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&ranges);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(ranges)
		Z_PARAM_LONG(affinity)
		Z_PARAM_BOOL(stillSelectingFlag)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &ranges_param, &affinity_param, &stillSelectingFlag_param);
	zephir_get_arrval(&ranges, ranges_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, affinity);
	ZVAL_BOOL(&_2, (stillSelectingFlag ? 1 : 0));
	ns_nstextview_set_selected_ranges_affinity_still_selecting(&_0, &ranges, &_1, &_2);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectedRangeAffinityStillSelecting)
{
	zend_bool stillSelectingFlag;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *affinity_param = NULL, *stillSelectingFlag_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location, length, affinity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(affinity)
		Z_PARAM_BOOL(stillSelectingFlag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &length_param, &affinity_param, &stillSelectingFlag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, affinity);
	ZVAL_BOOL(&_4, (stillSelectingFlag ? 1 : 0));
	ns_nstextview_set_selected_range_affinity_still_selecting(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, selectionAffinity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_selection_affinity(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, selectionGranularity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_selection_granularity(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectionGranularity)
{
	zval *handle_param = NULL, *selectionGranularity_param = NULL, _0, _1;
	zend_long handle, selectionGranularity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectionGranularity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectionGranularity_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectionGranularity);
	ns_nstextview_set_selection_granularity(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, selectedTextAttributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_selected_text_attributes(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectedTextAttributes)
{
	zval *handle_param = NULL, *selectedTextAttributes_param = NULL, _0, _1;
	zend_long handle, selectedTextAttributes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectedTextAttributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectedTextAttributes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectedTextAttributes);
	ns_nstextview_set_selected_text_attributes(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, insertionPointColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_insertion_point_color(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setInsertionPointColor)
{
	zval *handle_param = NULL, *insertionPointColor_param = NULL, _0, _1;
	zend_long handle, insertionPointColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(insertionPointColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &insertionPointColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, insertionPointColor);
	ns_nstextview_set_insertion_point_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateInsertionPointStateAndRestartTimer)
{
	zend_bool restartFlag;
	zval *handle_param = NULL, *restartFlag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(restartFlag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &restartFlag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (restartFlag ? 1 : 0));
	ns_nstextview_update_insertion_point_state_and_restart_timer(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, markedTextAttributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_marked_text_attributes(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setMarkedTextAttributes)
{
	zval *handle_param = NULL, *markedTextAttributes_param = NULL, _0, _1;
	zend_long handle, markedTextAttributes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(markedTextAttributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &markedTextAttributes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, markedTextAttributes);
	ns_nstextview_set_marked_text_attributes(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, linkTextAttributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_link_text_attributes(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setLinkTextAttributes)
{
	zval *handle_param = NULL, *linkTextAttributes_param = NULL, _0, _1;
	zend_long handle, linkTextAttributes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(linkTextAttributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &linkTextAttributes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, linkTextAttributes);
	ns_nstextview_set_link_text_attributes(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, displaysLinkToolTips)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_displays_link_tool_tips(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setDisplaysLinkToolTips)
{
	zend_bool displaysLinkToolTips;
	zval *handle_param = NULL, *displaysLinkToolTips_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(displaysLinkToolTips)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &displaysLinkToolTips_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (displaysLinkToolTips ? 1 : 0));
	ns_nstextview_set_displays_link_tool_tips(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, acceptsGlyphInfo)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_accepts_glyph_info(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAcceptsGlyphInfo)
{
	zend_bool acceptsGlyphInfo;
	zval *handle_param = NULL, *acceptsGlyphInfo_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(acceptsGlyphInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &acceptsGlyphInfo_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (acceptsGlyphInfo ? 1 : 0));
	ns_nstextview_set_accepts_glyph_info(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesRuler)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_uses_ruler(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesRuler)
{
	zend_bool usesRuler;
	zval *handle_param = NULL, *usesRuler_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesRuler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesRuler_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesRuler ? 1 : 0));
	ns_nstextview_set_uses_ruler(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesInspectorBar)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_uses_inspector_bar(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesInspectorBar)
{
	zend_bool usesInspectorBar;
	zval *handle_param = NULL, *usesInspectorBar_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesInspectorBar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesInspectorBar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesInspectorBar ? 1 : 0));
	ns_nstextview_set_uses_inspector_bar(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isContinuousSpellCheckingEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_continuous_spell_checking_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setContinuousSpellCheckingEnabled)
{
	zend_bool continuousSpellCheckingEnabled;
	zval *handle_param = NULL, *continuousSpellCheckingEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(continuousSpellCheckingEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &continuousSpellCheckingEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (continuousSpellCheckingEnabled ? 1 : 0));
	ns_nstextview_set_continuous_spell_checking_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleContinuousSpellChecking)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_toggle_continuous_spell_checking(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, spellCheckerDocumentTag)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_spell_checker_document_tag(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isGrammarCheckingEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_grammar_checking_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setGrammarCheckingEnabled)
{
	zend_bool grammarCheckingEnabled;
	zval *handle_param = NULL, *grammarCheckingEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(grammarCheckingEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &grammarCheckingEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (grammarCheckingEnabled ? 1 : 0));
	ns_nstextview_set_grammar_checking_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleGrammarChecking)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_toggle_grammar_checking(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSpellingStateRange)
{
	zval *handle_param = NULL, *value_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2, _3;
	zend_long handle, value, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &value_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, length);
	ns_nstextview_set_spelling_state_range(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, typingAttributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_typing_attributes(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setTypingAttributes)
{
	zval *handle_param = NULL, *typingAttributes_param = NULL, _0, _1;
	zend_long handle, typingAttributes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(typingAttributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &typingAttributes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, typingAttributes);
	ns_nstextview_set_typing_attributes(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, shouldChangeTextInRangesReplacementStrings)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval affectedRanges, replacementStrings;
	zval *handle_param = NULL, *affectedRanges_param = NULL, *replacementStrings_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&affectedRanges);
	ZVAL_UNDEF(&replacementStrings);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(affectedRanges)
		Z_PARAM_ARRAY(replacementStrings)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &affectedRanges_param, &replacementStrings_param);
	zephir_get_arrval(&affectedRanges, affectedRanges_param);
	zephir_get_arrval(&replacementStrings, replacementStrings_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_should_change_text_in_ranges_replacement_strings(&_0, &affectedRanges, &replacementStrings);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangesForUserTextChange)
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
	ns_nstextview_ranges_for_user_text_change(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangesForUserCharacterAttributeChange)
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
	ns_nstextview_ranges_for_user_character_attribute_change(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangesForUserParagraphAttributeChange)
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
	ns_nstextview_ranges_for_user_paragraph_attribute_change(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, shouldChangeTextInRangeReplacementString)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *replacementString = NULL, replacementString_sub, _0, _1, _2;
	zend_long handle, location, length, r = 0;

	ZVAL_UNDEF(&replacementString_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_ZVAL(replacementString)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &length_param, &replacementString);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	r = ns_nstextview_should_change_text_in_range_replacement_string(&_0, &_1, &_2, replacementString);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, didChangeText)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_did_change_text(&_0);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangeForUserTextChange)
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
	ns_nstextview_range_for_user_text_change(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangeForUserCharacterAttributeChange)
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
	ns_nstextview_range_for_user_character_attribute_change(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, rangeForUserParagraphAttributeChange)
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
	ns_nstextview_range_for_user_paragraph_attribute_change(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowsDocumentBackgroundColorChange)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_allows_document_background_color_change(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowsDocumentBackgroundColorChange)
{
	zend_bool allowsDocumentBackgroundColorChange;
	zval *handle_param = NULL, *allowsDocumentBackgroundColorChange_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsDocumentBackgroundColorChange)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsDocumentBackgroundColorChange_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsDocumentBackgroundColorChange ? 1 : 0));
	ns_nstextview_set_allows_document_background_color_change(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, defaultParagraphStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_default_paragraph_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setDefaultParagraphStyle)
{
	zval *handle_param = NULL, *defaultParagraphStyle_param = NULL, _0, _1;
	zend_long handle, defaultParagraphStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(defaultParagraphStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &defaultParagraphStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, defaultParagraphStyle);
	ns_nstextview_set_default_paragraph_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowsUndo)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_allows_undo(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowsUndo)
{
	zend_bool allowsUndo;
	zval *handle_param = NULL, *allowsUndo_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsUndo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsUndo_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsUndo ? 1 : 0));
	ns_nstextview_set_allows_undo(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, breakUndoCoalescing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_break_undo_coalescing(&_0);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isCoalescingUndo)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_coalescing_undo(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowsImageEditing)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_allows_image_editing(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowsImageEditing)
{
	zend_bool allowsImageEditing;
	zval *handle_param = NULL, *allowsImageEditing_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsImageEditing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsImageEditing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsImageEditing ? 1 : 0));
	ns_nstextview_set_allows_image_editing(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, showFindIndicatorForRange)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nstextview_show_find_indicator_for_range(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesRolloverButtonForSelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_uses_rollover_button_for_selection(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesRolloverButtonForSelection)
{
	zend_bool usesRolloverButtonForSelection;
	zval *handle_param = NULL, *usesRolloverButtonForSelection_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesRolloverButtonForSelection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesRolloverButtonForSelection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesRolloverButtonForSelection ? 1 : 0));
	ns_nstextview_set_uses_rollover_button_for_selection(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setDelegate)
{
	zval *handle_param = NULL, *delegate_param = NULL, _0, _1;
	zend_long handle, delegate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delegate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delegate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delegate);
	ns_nstextview_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isEditable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_editable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setEditable)
{
	zend_bool editable;
	zval *handle_param = NULL, *editable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(editable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &editable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (editable ? 1 : 0));
	ns_nstextview_set_editable(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isSelectable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_selectable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectable)
{
	zend_bool selectable;
	zval *handle_param = NULL, *selectable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(selectable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (selectable ? 1 : 0));
	ns_nstextview_set_selectable(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isRichText)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_rich_text(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setRichText)
{
	zend_bool richText;
	zval *handle_param = NULL, *richText_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(richText)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &richText_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (richText ? 1 : 0));
	ns_nstextview_set_rich_text(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, importsGraphics)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_imports_graphics(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setImportsGraphics)
{
	zend_bool importsGraphics;
	zval *handle_param = NULL, *importsGraphics_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(importsGraphics)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &importsGraphics_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (importsGraphics ? 1 : 0));
	ns_nstextview_set_imports_graphics(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, drawsBackground)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_draws_background(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setDrawsBackground)
{
	zend_bool drawsBackground;
	zval *handle_param = NULL, *drawsBackground_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(drawsBackground)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &drawsBackground_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (drawsBackground ? 1 : 0));
	ns_nstextview_set_draws_background(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, backgroundColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_background_color(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setBackgroundColor)
{
	zval *handle_param = NULL, *backgroundColor_param = NULL, _0, _1;
	zend_long handle, backgroundColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(backgroundColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &backgroundColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, backgroundColor);
	ns_nstextview_set_background_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isFieldEditor)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_field_editor(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setFieldEditor)
{
	zend_bool fieldEditor;
	zval *handle_param = NULL, *fieldEditor_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(fieldEditor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &fieldEditor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (fieldEditor ? 1 : 0));
	ns_nstextview_set_field_editor(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesFontPanel)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_uses_font_panel(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesFontPanel)
{
	zend_bool usesFontPanel;
	zval *handle_param = NULL, *usesFontPanel_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesFontPanel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesFontPanel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesFontPanel ? 1 : 0));
	ns_nstextview_set_uses_font_panel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isRulerVisible)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_ruler_visible(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setRulerVisible)
{
	zend_bool rulerVisible;
	zval *handle_param = NULL, *rulerVisible_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(rulerVisible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rulerVisible_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (rulerVisible ? 1 : 0));
	ns_nstextview_set_ruler_visible(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSelectedRange)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nstextview_set_selected_range(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowedInputSourceLocales)
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
	ns_nstextview_allowed_input_source_locales(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowedInputSourceLocales)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval allowedInputSourceLocales;
	zval *handle_param = NULL, *allowedInputSourceLocales_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&allowedInputSourceLocales);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(allowedInputSourceLocales)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &allowedInputSourceLocales_param);
	zephir_get_arrval(&allowedInputSourceLocales, allowedInputSourceLocales_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_set_allowed_input_source_locales(&_0, &allowedInputSourceLocales);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isWritingToolsActive)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_writing_tools_active(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, writingToolsBehavior)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_writing_tools_behavior(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setWritingToolsBehavior)
{
	zval *handle_param = NULL, *writingToolsBehavior_param = NULL, _0, _1;
	zend_long handle, writingToolsBehavior;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(writingToolsBehavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &writingToolsBehavior_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, writingToolsBehavior);
	ns_nstextview_set_writing_tools_behavior(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowedWritingToolsResultOptions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_allowed_writing_tools_result_options(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowedWritingToolsResultOptions)
{
	zval *handle_param = NULL, *allowedWritingToolsResultOptions_param = NULL, _0, _1;
	zend_long handle, allowedWritingToolsResultOptions;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(allowedWritingToolsResultOptions)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowedWritingToolsResultOptions_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, allowedWritingToolsResultOptions);
	ns_nstextview_set_allowed_writing_tools_result_options(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, smartInsertDeleteEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_smart_insert_delete_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setSmartInsertDeleteEnabled)
{
	zend_bool smartInsertDeleteEnabled;
	zval *handle_param = NULL, *smartInsertDeleteEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(smartInsertDeleteEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &smartInsertDeleteEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (smartInsertDeleteEnabled ? 1 : 0));
	ns_nstextview_set_smart_insert_delete_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, smartDeleteRangeForProposedRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, result, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &location_param, &length_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nstextview_smart_delete_range_for_proposed_range(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleSmartInsertDelete)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_toggle_smart_insert_delete(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, smartInsertForStringReplacingRangeBeforeStringAfterString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval pasteString;
	zval *handle_param = NULL, *pasteString_param = NULL, *location_param = NULL, *length_param = NULL, result, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&pasteString);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(pasteString)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &pasteString_param, &location_param, &length_param);
	zephir_get_strval(&pasteString, pasteString_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nstextview_smart_insert_for_string_replacing_range_before_string_after_string(&result, &_0, &pasteString, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, smartInsertBeforeStringForStringReplacingRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval pasteString;
	zval *handle_param = NULL, *pasteString_param = NULL, *location_param = NULL, *length_param = NULL, result, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&pasteString);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(pasteString)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &pasteString_param, &location_param, &length_param);
	zephir_get_strval(&pasteString, pasteString_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nstextview_smart_insert_before_string_for_string_replacing_range(&result, &_0, &pasteString, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, smartInsertAfterStringForStringReplacingRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval pasteString;
	zval *handle_param = NULL, *pasteString_param = NULL, *location_param = NULL, *length_param = NULL, result, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&pasteString);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(pasteString)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &pasteString_param, &location_param, &length_param);
	zephir_get_strval(&pasteString, pasteString_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nstextview_smart_insert_after_string_for_string_replacing_range(&result, &_0, &pasteString, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticQuoteSubstitutionEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_automatic_quote_substitution_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticQuoteSubstitutionEnabled)
{
	zend_bool automaticQuoteSubstitutionEnabled;
	zval *handle_param = NULL, *automaticQuoteSubstitutionEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(automaticQuoteSubstitutionEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &automaticQuoteSubstitutionEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (automaticQuoteSubstitutionEnabled ? 1 : 0));
	ns_nstextview_set_automatic_quote_substitution_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticQuoteSubstitution)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_toggle_automatic_quote_substitution(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticLinkDetectionEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_automatic_link_detection_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticLinkDetectionEnabled)
{
	zend_bool automaticLinkDetectionEnabled;
	zval *handle_param = NULL, *automaticLinkDetectionEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(automaticLinkDetectionEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &automaticLinkDetectionEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (automaticLinkDetectionEnabled ? 1 : 0));
	ns_nstextview_set_automatic_link_detection_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticLinkDetection)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_toggle_automatic_link_detection(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticDataDetectionEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_automatic_data_detection_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticDataDetectionEnabled)
{
	zend_bool automaticDataDetectionEnabled;
	zval *handle_param = NULL, *automaticDataDetectionEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(automaticDataDetectionEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &automaticDataDetectionEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (automaticDataDetectionEnabled ? 1 : 0));
	ns_nstextview_set_automatic_data_detection_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticDataDetection)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_toggle_automatic_data_detection(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticDashSubstitutionEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_automatic_dash_substitution_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticDashSubstitutionEnabled)
{
	zend_bool automaticDashSubstitutionEnabled;
	zval *handle_param = NULL, *automaticDashSubstitutionEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(automaticDashSubstitutionEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &automaticDashSubstitutionEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (automaticDashSubstitutionEnabled ? 1 : 0));
	ns_nstextview_set_automatic_dash_substitution_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticDashSubstitution)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_toggle_automatic_dash_substitution(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticTextReplacementEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_automatic_text_replacement_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticTextReplacementEnabled)
{
	zend_bool automaticTextReplacementEnabled;
	zval *handle_param = NULL, *automaticTextReplacementEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(automaticTextReplacementEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &automaticTextReplacementEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (automaticTextReplacementEnabled ? 1 : 0));
	ns_nstextview_set_automatic_text_replacement_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticTextReplacement)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_toggle_automatic_text_replacement(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticSpellingCorrectionEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_automatic_spelling_correction_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticSpellingCorrectionEnabled)
{
	zend_bool automaticSpellingCorrectionEnabled;
	zval *handle_param = NULL, *automaticSpellingCorrectionEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(automaticSpellingCorrectionEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &automaticSpellingCorrectionEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (automaticSpellingCorrectionEnabled ? 1 : 0));
	ns_nstextview_set_automatic_spelling_correction_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticSpellingCorrection)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_toggle_automatic_spelling_correction(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, enabledTextCheckingTypes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_enabled_text_checking_types(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setEnabledTextCheckingTypes)
{
	zval *handle_param = NULL, *enabledTextCheckingTypes_param = NULL, _0, _1;
	zend_long handle, enabledTextCheckingTypes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(enabledTextCheckingTypes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enabledTextCheckingTypes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, enabledTextCheckingTypes);
	ns_nstextview_set_enabled_text_checking_types(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, checkTextInRangeTypesOptions)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *checkingTypes_param = NULL, *options_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location, length, checkingTypes, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(checkingTypes)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &length_param, &checkingTypes_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, checkingTypes);
	ZVAL_LONG(&_4, options);
	ns_nstextview_check_text_in_range_types_options(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, handleTextCheckingResultsForRangeTypesOptionsOrthographyWordCount)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval results;
	zval *handle_param = NULL, *results_param = NULL, *location_param = NULL, *length_param = NULL, *checkingTypes_param = NULL, *options_param = NULL, *orthography_param = NULL, *wordCount_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, location, length, checkingTypes, options, orthography, wordCount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&results);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(results)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(checkingTypes)
		Z_PARAM_LONG(options)
		Z_PARAM_LONG(orthography)
		Z_PARAM_LONG(wordCount)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &handle_param, &results_param, &location_param, &length_param, &checkingTypes_param, &options_param, &orthography_param, &wordCount_param);
	zephir_get_arrval(&results, results_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, checkingTypes);
	ZVAL_LONG(&_4, options);
	ZVAL_LONG(&_5, orthography);
	ZVAL_LONG(&_6, wordCount);
	ns_nstextview_handle_text_checking_results_for_range_types_options_orthography_word_count(&_0, &results, &_1, &_2, &_3, &_4, &_5, &_6);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontSubstitutionsPanel)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_order_front_substitutions_panel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, checkTextInSelection)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_check_text_in_selection(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, checkTextInDocument)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_check_text_in_document(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesFindPanel)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_uses_find_panel(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesFindPanel)
{
	zend_bool usesFindPanel;
	zval *handle_param = NULL, *usesFindPanel_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesFindPanel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesFindPanel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesFindPanel ? 1 : 0));
	ns_nstextview_set_uses_find_panel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, usesFindBar)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_uses_find_bar(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setUsesFindBar)
{
	zend_bool usesFindBar;
	zval *handle_param = NULL, *usesFindBar_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesFindBar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesFindBar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesFindBar ? 1 : 0));
	ns_nstextview_set_uses_find_bar(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isIncrementalSearchingEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_incremental_searching_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setIncrementalSearchingEnabled)
{
	zend_bool incrementalSearchingEnabled;
	zval *handle_param = NULL, *incrementalSearchingEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(incrementalSearchingEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &incrementalSearchingEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (incrementalSearchingEnabled ? 1 : 0));
	ns_nstextview_set_incremental_searching_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, inlinePredictionType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_inline_prediction_type(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setInlinePredictionType)
{
	zval *handle_param = NULL, *inlinePredictionType_param = NULL, _0, _1;
	zend_long handle, inlinePredictionType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(inlinePredictionType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &inlinePredictionType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, inlinePredictionType);
	ns_nstextview_set_inline_prediction_type(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, mathExpressionCompletionType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_math_expression_completion_type(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setMathExpressionCompletionType)
{
	zval *handle_param = NULL, *mathExpressionCompletionType_param = NULL, _0, _1;
	zend_long handle, mathExpressionCompletionType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mathExpressionCompletionType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mathExpressionCompletionType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mathExpressionCompletionType);
	ns_nstextview_set_math_expression_completion_type(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleQuickLookPreviewPanel)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_toggle_quick_look_preview_panel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, quickLookPreviewableItemsInRanges)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval ranges;
	zval *handle_param = NULL, *ranges_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&ranges);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(ranges)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &ranges_param);
	zephir_get_arrval(&ranges, ranges_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_quick_look_previewable_items_in_ranges(&result, &_0, &ranges);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateQuickLookPreviewPanel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_update_quick_look_preview_panel(&_0);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, orderFrontSharingServicePicker)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_order_front_sharing_service_picker(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, isAutomaticTextCompletionEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_is_automatic_text_completion_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAutomaticTextCompletionEnabled)
{
	zend_bool automaticTextCompletionEnabled;
	zval *handle_param = NULL, *automaticTextCompletionEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(automaticTextCompletionEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &automaticTextCompletionEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (automaticTextCompletionEnabled ? 1 : 0));
	ns_nstextview_set_automatic_text_completion_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, toggleAutomaticTextCompletion)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_toggle_automatic_text_completion(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, allowsCharacterPickerTouchBarItem)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextview_allows_character_picker_touch_bar_item(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setAllowsCharacterPickerTouchBarItem)
{
	zend_bool allowsCharacterPickerTouchBarItem;
	zval *handle_param = NULL, *allowsCharacterPickerTouchBarItem_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsCharacterPickerTouchBarItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsCharacterPickerTouchBarItem_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsCharacterPickerTouchBarItem ? 1 : 0));
	ns_nstextview_set_allows_character_picker_touch_bar_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateTouchBarItemIdentifiers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_update_touch_bar_item_identifiers(&_0);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateTextTouchBarItems)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_update_text_touch_bar_items(&_0);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, updateCandidates)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextview_update_candidates(&_0);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, candidateListTouchBarItem)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_candidate_list_touch_bar_item(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, scrollableTextView)
{

	RETURN_LONG(ns_nstextview_scrollable_text_view());
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, fieldEditor)
{

	RETURN_LONG(ns_nstextview_field_editor());
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, scrollableDocumentContentTextView)
{

	RETURN_LONG(ns_nstextview_scrollable_document_content_text_view());
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, scrollablePlainDocumentContentTextView)
{

	RETURN_LONG(ns_nstextview_scrollable_plain_document_content_text_view());
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, textHighlightAttributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextview_text_highlight_attributes(&_0));
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setTextHighlightAttributes)
{
	zval *handle_param = NULL, *textHighlightAttributes_param = NULL, _0, _1;
	zend_long handle, textHighlightAttributes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textHighlightAttributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textHighlightAttributes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textHighlightAttributes);
	ns_nstextview_set_text_highlight_attributes(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, drawTextHighlightBackgroundForTextRangeOrigin)
{
	double x, y;
	zval *handle_param = NULL, *textRange_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3;
	zend_long handle, textRange;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textRange)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &textRange_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textRange);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ns_nstextview_draw_text_highlight_background_for_text_range_origin(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, highlight)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstextview_highlight(&_0, &_1);
}

