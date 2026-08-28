
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
#include "src/ns-scrollview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSScrollView_NSScrollView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSScrollView, NSScrollView, appkit, ns_nsscrollview_nsscrollview, appkit_ns_nsscrollview_nsscrollview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, initWithFrame)
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
	RETURN_LONG(ns_nsscrollview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, documentVisibleRect)
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
	ns_nsscrollview_document_visible_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, contentSize)
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
	ns_nsscrollview_content_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, documentView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_document_view(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setDocumentView)
{
	zval *handle_param = NULL, *documentView_param = NULL, _0, _1;
	zend_long handle, documentView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(documentView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &documentView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, documentView);
	ns_nsscrollview_set_document_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, contentView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_content_view(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setContentView)
{
	zval *handle_param = NULL, *contentView_param = NULL, _0, _1;
	zend_long handle, contentView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(contentView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &contentView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, contentView);
	ns_nsscrollview_set_content_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, documentCursor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_document_cursor(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setDocumentCursor)
{
	zval *handle_param = NULL, *documentCursor_param = NULL, _0, _1;
	zend_long handle, documentCursor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(documentCursor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &documentCursor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, documentCursor);
	ns_nsscrollview_set_document_cursor(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, borderType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_border_type(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setBorderType)
{
	zval *handle_param = NULL, *borderType_param = NULL, _0, _1;
	zend_long handle, borderType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(borderType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &borderType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, borderType);
	ns_nsscrollview_set_border_type(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, backgroundColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_background_color(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setBackgroundColor)
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
	ns_nsscrollview_set_background_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, drawsBackground)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsscrollview_draws_background(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setDrawsBackground)
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
	ns_nsscrollview_set_draws_background(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, hasVerticalScroller)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsscrollview_has_vertical_scroller(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setHasVerticalScroller)
{
	zend_bool hasVerticalScroller;
	zval *handle_param = NULL, *hasVerticalScroller_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(hasVerticalScroller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hasVerticalScroller_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (hasVerticalScroller ? 1 : 0));
	ns_nsscrollview_set_has_vertical_scroller(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, hasHorizontalScroller)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsscrollview_has_horizontal_scroller(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setHasHorizontalScroller)
{
	zend_bool hasHorizontalScroller;
	zval *handle_param = NULL, *hasHorizontalScroller_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(hasHorizontalScroller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hasHorizontalScroller_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (hasHorizontalScroller ? 1 : 0));
	ns_nsscrollview_set_has_horizontal_scroller(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, verticalScroller)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_vertical_scroller(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setVerticalScroller)
{
	zval *handle_param = NULL, *verticalScroller_param = NULL, _0, _1;
	zend_long handle, verticalScroller;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(verticalScroller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &verticalScroller_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, verticalScroller);
	ns_nsscrollview_set_vertical_scroller(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, horizontalScroller)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_horizontal_scroller(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setHorizontalScroller)
{
	zval *handle_param = NULL, *horizontalScroller_param = NULL, _0, _1;
	zend_long handle, horizontalScroller;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(horizontalScroller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &horizontalScroller_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, horizontalScroller);
	ns_nsscrollview_set_horizontal_scroller(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, autohidesScrollers)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsscrollview_autohides_scrollers(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setAutohidesScrollers)
{
	zend_bool autohidesScrollers;
	zval *handle_param = NULL, *autohidesScrollers_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(autohidesScrollers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &autohidesScrollers_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (autohidesScrollers ? 1 : 0));
	ns_nsscrollview_set_autohides_scrollers(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, horizontalLineScroll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsscrollview_horizontal_line_scroll(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setHorizontalLineScroll)
{
	double horizontalLineScroll;
	zval *handle_param = NULL, *horizontalLineScroll_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(horizontalLineScroll)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &horizontalLineScroll_param);
	horizontalLineScroll = zephir_get_doubleval(horizontalLineScroll_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, horizontalLineScroll);
	ns_nsscrollview_set_horizontal_line_scroll(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, verticalLineScroll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsscrollview_vertical_line_scroll(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setVerticalLineScroll)
{
	double verticalLineScroll;
	zval *handle_param = NULL, *verticalLineScroll_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(verticalLineScroll)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &verticalLineScroll_param);
	verticalLineScroll = zephir_get_doubleval(verticalLineScroll_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, verticalLineScroll);
	ns_nsscrollview_set_vertical_line_scroll(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, lineScroll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsscrollview_line_scroll(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setLineScroll)
{
	double lineScroll;
	zval *handle_param = NULL, *lineScroll_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(lineScroll)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &lineScroll_param);
	lineScroll = zephir_get_doubleval(lineScroll_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, lineScroll);
	ns_nsscrollview_set_line_scroll(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, horizontalPageScroll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsscrollview_horizontal_page_scroll(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setHorizontalPageScroll)
{
	double horizontalPageScroll;
	zval *handle_param = NULL, *horizontalPageScroll_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(horizontalPageScroll)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &horizontalPageScroll_param);
	horizontalPageScroll = zephir_get_doubleval(horizontalPageScroll_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, horizontalPageScroll);
	ns_nsscrollview_set_horizontal_page_scroll(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, verticalPageScroll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsscrollview_vertical_page_scroll(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setVerticalPageScroll)
{
	double verticalPageScroll;
	zval *handle_param = NULL, *verticalPageScroll_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(verticalPageScroll)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &verticalPageScroll_param);
	verticalPageScroll = zephir_get_doubleval(verticalPageScroll_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, verticalPageScroll);
	ns_nsscrollview_set_vertical_page_scroll(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, pageScroll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsscrollview_page_scroll(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setPageScroll)
{
	double pageScroll;
	zval *handle_param = NULL, *pageScroll_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pageScroll)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pageScroll_param);
	pageScroll = zephir_get_doubleval(pageScroll_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pageScroll);
	ns_nsscrollview_set_page_scroll(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, scrollsDynamically)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsscrollview_scrolls_dynamically(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setScrollsDynamically)
{
	zend_bool scrollsDynamically;
	zval *handle_param = NULL, *scrollsDynamically_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(scrollsDynamically)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scrollsDynamically_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (scrollsDynamically ? 1 : 0));
	ns_nsscrollview_set_scrolls_dynamically(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, tile)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsscrollview_tile(&_0);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, reflectScrolledClipView)
{
	zval *handle_param = NULL, *clipView_param = NULL, _0, _1;
	zend_long handle, clipView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(clipView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &clipView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, clipView);
	ns_nsscrollview_reflect_scrolled_clip_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, scrollWheel)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsscrollview_scroll_wheel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, scrollerStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_scroller_style(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setScrollerStyle)
{
	zval *handle_param = NULL, *scrollerStyle_param = NULL, _0, _1;
	zend_long handle, scrollerStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(scrollerStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scrollerStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scrollerStyle);
	ns_nsscrollview_set_scroller_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, scrollerKnobStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_scroller_knob_style(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setScrollerKnobStyle)
{
	zval *handle_param = NULL, *scrollerKnobStyle_param = NULL, _0, _1;
	zend_long handle, scrollerKnobStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(scrollerKnobStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scrollerKnobStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scrollerKnobStyle);
	ns_nsscrollview_set_scroller_knob_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, flashScrollers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsscrollview_flash_scrollers(&_0);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, horizontalScrollElasticity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_horizontal_scroll_elasticity(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setHorizontalScrollElasticity)
{
	zval *handle_param = NULL, *horizontalScrollElasticity_param = NULL, _0, _1;
	zend_long handle, horizontalScrollElasticity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(horizontalScrollElasticity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &horizontalScrollElasticity_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, horizontalScrollElasticity);
	ns_nsscrollview_set_horizontal_scroll_elasticity(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, verticalScrollElasticity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_vertical_scroll_elasticity(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setVerticalScrollElasticity)
{
	zval *handle_param = NULL, *verticalScrollElasticity_param = NULL, _0, _1;
	zend_long handle, verticalScrollElasticity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(verticalScrollElasticity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &verticalScrollElasticity_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, verticalScrollElasticity);
	ns_nsscrollview_set_vertical_scroll_elasticity(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, usesPredominantAxisScrolling)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsscrollview_uses_predominant_axis_scrolling(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setUsesPredominantAxisScrolling)
{
	zend_bool usesPredominantAxisScrolling;
	zval *handle_param = NULL, *usesPredominantAxisScrolling_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesPredominantAxisScrolling)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesPredominantAxisScrolling_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesPredominantAxisScrolling ? 1 : 0));
	ns_nsscrollview_set_uses_predominant_axis_scrolling(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, allowsMagnification)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsscrollview_allows_magnification(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setAllowsMagnification)
{
	zend_bool allowsMagnification;
	zval *handle_param = NULL, *allowsMagnification_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsMagnification)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsMagnification_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsMagnification ? 1 : 0));
	ns_nsscrollview_set_allows_magnification(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, magnification)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsscrollview_magnification(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setMagnification)
{
	double magnification;
	zval *handle_param = NULL, *magnification_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(magnification)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &magnification_param);
	magnification = zephir_get_doubleval(magnification_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, magnification);
	ns_nsscrollview_set_magnification(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, maxMagnification)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsscrollview_max_magnification(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setMaxMagnification)
{
	double maxMagnification;
	zval *handle_param = NULL, *maxMagnification_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(maxMagnification)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maxMagnification_param);
	maxMagnification = zephir_get_doubleval(maxMagnification_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, maxMagnification);
	ns_nsscrollview_set_max_magnification(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, minMagnification)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsscrollview_min_magnification(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setMinMagnification)
{
	double minMagnification;
	zval *handle_param = NULL, *minMagnification_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(minMagnification)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &minMagnification_param);
	minMagnification = zephir_get_doubleval(minMagnification_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, minMagnification);
	ns_nsscrollview_set_min_magnification(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, magnifyToFitRect)
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
	ns_nsscrollview_magnify_to_fit_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setMagnificationCenteredAtPoint)
{
	double magnification, x, y;
	zval *handle_param = NULL, *magnification_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(magnification)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &magnification_param, &x_param, &y_param);
	magnification = zephir_get_doubleval(magnification_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, magnification);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ns_nsscrollview_set_magnification_centered_at_point(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, addFloatingSubviewForAxis)
{
	zval *handle_param = NULL, *view_param = NULL, *axis_param = NULL, _0, _1, _2;
	zend_long handle, view, axis;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(axis)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &view_param, &axis_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, view);
	ZVAL_LONG(&_2, axis);
	ns_nsscrollview_add_floating_subview_for_axis(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, automaticallyAdjustsContentInsets)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsscrollview_automatically_adjusts_content_insets(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setAutomaticallyAdjustsContentInsets)
{
	zend_bool automaticallyAdjustsContentInsets;
	zval *handle_param = NULL, *automaticallyAdjustsContentInsets_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(automaticallyAdjustsContentInsets)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &automaticallyAdjustsContentInsets_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (automaticallyAdjustsContentInsets ? 1 : 0));
	ns_nsscrollview_set_automatically_adjusts_content_insets(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, contentInsets)
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
	ns_nsscrollview_content_insets(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setContentInsets)
{
	double top, left, bottom, right;
	zval *handle_param = NULL, *top_param = NULL, *left_param = NULL, *bottom_param = NULL, *right_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(right)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &top_param, &left_param, &bottom_param, &right_param);
	top = zephir_get_doubleval(top_param);
	left = zephir_get_doubleval(left_param);
	bottom = zephir_get_doubleval(bottom_param);
	right = zephir_get_doubleval(right_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, top);
	ZVAL_DOUBLE(&_2, left);
	ZVAL_DOUBLE(&_3, bottom);
	ZVAL_DOUBLE(&_4, right);
	ns_nsscrollview_set_content_insets(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, scrollerInsets)
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
	ns_nsscrollview_scroller_insets(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setScrollerInsets)
{
	double top, left, bottom, right;
	zval *handle_param = NULL, *top_param = NULL, *left_param = NULL, *bottom_param = NULL, *right_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(right)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &top_param, &left_param, &bottom_param, &right_param);
	top = zephir_get_doubleval(top_param);
	left = zephir_get_doubleval(left_param);
	bottom = zephir_get_doubleval(bottom_param);
	right = zephir_get_doubleval(right_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, top);
	ZVAL_DOUBLE(&_2, left);
	ZVAL_DOUBLE(&_3, bottom);
	ZVAL_DOUBLE(&_4, right);
	ns_nsscrollview_set_scroller_insets(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, rulersVisible)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsscrollview_rulers_visible(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setRulersVisible)
{
	zend_bool rulersVisible;
	zval *handle_param = NULL, *rulersVisible_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(rulersVisible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rulersVisible_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (rulersVisible ? 1 : 0));
	ns_nsscrollview_set_rulers_visible(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, hasHorizontalRuler)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsscrollview_has_horizontal_ruler(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setHasHorizontalRuler)
{
	zend_bool hasHorizontalRuler;
	zval *handle_param = NULL, *hasHorizontalRuler_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(hasHorizontalRuler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hasHorizontalRuler_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (hasHorizontalRuler ? 1 : 0));
	ns_nsscrollview_set_has_horizontal_ruler(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, hasVerticalRuler)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsscrollview_has_vertical_ruler(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setHasVerticalRuler)
{
	zend_bool hasVerticalRuler;
	zval *handle_param = NULL, *hasVerticalRuler_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(hasVerticalRuler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hasVerticalRuler_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (hasVerticalRuler ? 1 : 0));
	ns_nsscrollview_set_has_vertical_ruler(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, horizontalRulerView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_horizontal_ruler_view(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setHorizontalRulerView)
{
	zval *handle_param = NULL, *horizontalRulerView_param = NULL, _0, _1;
	zend_long handle, horizontalRulerView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(horizontalRulerView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &horizontalRulerView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, horizontalRulerView);
	ns_nsscrollview_set_horizontal_ruler_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, verticalRulerView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_vertical_ruler_view(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setVerticalRulerView)
{
	zval *handle_param = NULL, *verticalRulerView_param = NULL, _0, _1;
	zend_long handle, verticalRulerView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(verticalRulerView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &verticalRulerView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, verticalRulerView);
	ns_nsscrollview_set_vertical_ruler_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, findBarPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsscrollview_find_bar_position(&_0));
}

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setFindBarPosition)
{
	zval *handle_param = NULL, *findBarPosition_param = NULL, _0, _1;
	zend_long handle, findBarPosition;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(findBarPosition)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &findBarPosition_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, findBarPosition);
	ns_nsscrollview_set_find_bar_position(&_0, &_1);
}

