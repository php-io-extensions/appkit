
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
#include "src/ns-textfield.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSTextField_NSTextField)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextField, NSTextField, appkit, ns_nstextfield_nstextfield, appkit_ns_nstextfield_nstextfield_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, placeholderString)
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
	ns_nstextfield_placeholder_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setPlaceholderString)
{
	zval *handle_param = NULL, *placeholderString = NULL, placeholderString_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&placeholderString_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(placeholderString)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &placeholderString);
	ZVAL_LONG(&_0, handle);
	ns_nstextfield_set_placeholder_string(&_0, placeholderString);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, backgroundColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextfield_background_color(&_0));
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setBackgroundColor)
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
	ns_nstextfield_set_background_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, drawsBackground)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_draws_background(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setDrawsBackground)
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
	ns_nstextfield_set_draws_background(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextfield_text_color(&_0));
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setTextColor)
{
	zval *handle_param = NULL, *textColor_param = NULL, _0, _1;
	zend_long handle, textColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textColor);
	ns_nstextfield_set_text_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, isBordered)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_is_bordered(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setBordered)
{
	zend_bool bordered;
	zval *handle_param = NULL, *bordered_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(bordered)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &bordered_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (bordered ? 1 : 0));
	ns_nstextfield_set_bordered(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, isBezeled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_is_bezeled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setBezeled)
{
	zend_bool bezeled;
	zval *handle_param = NULL, *bezeled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(bezeled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &bezeled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (bezeled ? 1 : 0));
	ns_nstextfield_set_bezeled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, isEditable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_is_editable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setEditable)
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
	ns_nstextfield_set_editable(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, isSelectable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_is_selectable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setSelectable)
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
	ns_nstextfield_set_selectable(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, selectText)
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
	ns_nstextfield_select_text(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextfield_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setDelegate)
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
	ns_nstextfield_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textShouldBeginEditing)
{
	zval *handle_param = NULL, *textObject_param = NULL, _0, _1;
	zend_long handle, textObject, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textObject)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textObject_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textObject);
	r = ns_nstextfield_text_should_begin_editing(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textShouldEndEditing)
{
	zval *handle_param = NULL, *textObject_param = NULL, _0, _1;
	zend_long handle, textObject, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textObject)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textObject_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textObject);
	r = ns_nstextfield_text_should_end_editing(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textDidBeginEditing)
{
	zval *handle_param = NULL, *notification_param = NULL, _0, _1;
	zend_long handle, notification;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(notification)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &notification_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, notification);
	ns_nstextfield_text_did_begin_editing(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textDidEndEditing)
{
	zval *handle_param = NULL, *notification_param = NULL, _0, _1;
	zend_long handle, notification;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(notification)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &notification_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, notification);
	ns_nstextfield_text_did_end_editing(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textDidChange)
{
	zval *handle_param = NULL, *notification_param = NULL, _0, _1;
	zend_long handle, notification;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(notification)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &notification_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, notification);
	ns_nstextfield_text_did_change(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, acceptsFirstResponder)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_accepts_first_responder(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, bezelStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextfield_bezel_style(&_0));
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setBezelStyle)
{
	zval *handle_param = NULL, *bezelStyle_param = NULL, _0, _1;
	zend_long handle, bezelStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(bezelStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &bezelStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, bezelStyle);
	ns_nstextfield_set_bezel_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, preferredMaxLayoutWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nstextfield_preferred_max_layout_width(&_0));
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setPreferredMaxLayoutWidth)
{
	double preferredMaxLayoutWidth;
	zval *handle_param = NULL, *preferredMaxLayoutWidth_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(preferredMaxLayoutWidth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &preferredMaxLayoutWidth_param);
	preferredMaxLayoutWidth = zephir_get_doubleval(preferredMaxLayoutWidth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, preferredMaxLayoutWidth);
	ns_nstextfield_set_preferred_max_layout_width(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, maximumNumberOfLines)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextfield_maximum_number_of_lines(&_0));
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setMaximumNumberOfLines)
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
	ns_nstextfield_set_maximum_number_of_lines(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, allowsDefaultTighteningForTruncation)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_allows_default_tightening_for_truncation(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAllowsDefaultTighteningForTruncation)
{
	zend_bool allowsDefaultTighteningForTruncation;
	zval *handle_param = NULL, *allowsDefaultTighteningForTruncation_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsDefaultTighteningForTruncation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsDefaultTighteningForTruncation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsDefaultTighteningForTruncation ? 1 : 0));
	ns_nstextfield_set_allows_default_tightening_for_truncation(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, lineBreakStrategy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextfield_line_break_strategy(&_0));
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setLineBreakStrategy)
{
	zval *handle_param = NULL, *lineBreakStrategy_param = NULL, _0, _1;
	zend_long handle, lineBreakStrategy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lineBreakStrategy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &lineBreakStrategy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lineBreakStrategy);
	ns_nstextfield_set_line_break_strategy(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, allowsWritingTools)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_allows_writing_tools(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAllowsWritingTools)
{
	zend_bool allowsWritingTools;
	zval *handle_param = NULL, *allowsWritingTools_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsWritingTools)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsWritingTools_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsWritingTools ? 1 : 0));
	ns_nstextfield_set_allows_writing_tools(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, allowsWritingToolsAffordance)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_allows_writing_tools_affordance(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAllowsWritingToolsAffordance)
{
	zend_bool allowsWritingToolsAffordance;
	zval *handle_param = NULL, *allowsWritingToolsAffordance_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsWritingToolsAffordance)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsWritingToolsAffordance_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsWritingToolsAffordance ? 1 : 0));
	ns_nstextfield_set_allows_writing_tools_affordance(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, isAutomaticTextCompletionEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_is_automatic_text_completion_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAutomaticTextCompletionEnabled)
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
	ns_nstextfield_set_automatic_text_completion_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, allowsCharacterPickerTouchBarItem)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_allows_character_picker_touch_bar_item(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAllowsCharacterPickerTouchBarItem)
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
	ns_nstextfield_set_allows_character_picker_touch_bar_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, labelWithString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *stringValue_param = NULL;
	zval stringValue;

	ZVAL_UNDEF(&stringValue);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(stringValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &stringValue_param);
	zephir_get_strval(&stringValue, stringValue_param);
	RETURN_MM_LONG(ns_nstextfield_label_with_string(&stringValue));
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, wrappingLabelWithString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *stringValue_param = NULL;
	zval stringValue;

	ZVAL_UNDEF(&stringValue);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(stringValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &stringValue_param);
	zephir_get_strval(&stringValue, stringValue_param);
	RETURN_MM_LONG(ns_nstextfield_wrapping_label_with_string(&stringValue));
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textFieldWithString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *stringValue_param = NULL;
	zval stringValue;

	ZVAL_UNDEF(&stringValue);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(stringValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &stringValue_param);
	zephir_get_strval(&stringValue, stringValue_param);
	RETURN_MM_LONG(ns_nstextfield_text_field_with_string(&stringValue));
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, allowsEditingTextAttributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_allows_editing_text_attributes(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAllowsEditingTextAttributes)
{
	zend_bool allowsEditingTextAttributes;
	zval *handle_param = NULL, *allowsEditingTextAttributes_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsEditingTextAttributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsEditingTextAttributes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsEditingTextAttributes ? 1 : 0));
	ns_nstextfield_set_allows_editing_text_attributes(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, importsGraphics)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextfield_imports_graphics(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setImportsGraphics)
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
	ns_nstextfield_set_imports_graphics(&_0, &_1);
}

