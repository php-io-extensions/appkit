
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
#include "src/ns-openglview.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSOpenGLView_NSOpenGLView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSOpenGLView, NSOpenGLView, appkit, ns_nsopenglview_nsopenglview, appkit_ns_nsopenglview_nsopenglview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, defaultPixelFormat)
{

	RETURN_LONG(ns_nsopenglview_default_pixel_format());
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, initWithFramePixelFormat)
{
	zend_long format;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *format_param = NULL, _0, _1, _2, _3, _4;
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
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &x_param, &y_param, &width_param, &height_param, &format_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_DOUBLE(&_0, x);
	ZVAL_DOUBLE(&_1, y);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_DOUBLE(&_3, height);
	ZVAL_LONG(&_4, format);
	RETURN_LONG(ns_nsopenglview_init_with_frame_pixel_format(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, openGLContext)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsopenglview_open_gl_context(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, setOpenGLContext)
{
	zval *handle_param = NULL, *openGLContext_param = NULL, _0, _1;
	zend_long handle, openGLContext;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(openGLContext)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &openGLContext_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, openGLContext);
	ns_nsopenglview_set_open_gl_context(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, clearGLContext)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsopenglview_clear_gl_context(&_0);
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, update)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsopenglview_update(&_0);
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, reshape)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsopenglview_reshape(&_0);
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, pixelFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsopenglview_pixel_format(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, setPixelFormat)
{
	zval *handle_param = NULL, *pixelFormat_param = NULL, _0, _1;
	zend_long handle, pixelFormat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixelFormat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pixelFormat_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixelFormat);
	ns_nsopenglview_set_pixel_format(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, prepareOpenGL)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsopenglview_prepare_open_gl(&_0);
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, wantsBestResolutionOpenGLSurface)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsopenglview_wants_best_resolution_open_gl_surface(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, setWantsBestResolutionOpenGLSurface)
{
	zend_bool wantsBestResolutionOpenGLSurface;
	zval *handle_param = NULL, *wantsBestResolutionOpenGLSurface_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(wantsBestResolutionOpenGLSurface)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &wantsBestResolutionOpenGLSurface_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (wantsBestResolutionOpenGLSurface ? 1 : 0));
	ns_nsopenglview_set_wants_best_resolution_open_gl_surface(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, wantsExtendedDynamicRangeOpenGLSurface)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsopenglview_wants_extended_dynamic_range_open_gl_surface(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, setWantsExtendedDynamicRangeOpenGLSurface)
{
	zend_bool wantsExtendedDynamicRangeOpenGLSurface;
	zval *handle_param = NULL, *wantsExtendedDynamicRangeOpenGLSurface_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(wantsExtendedDynamicRangeOpenGLSurface)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &wantsExtendedDynamicRangeOpenGLSurface_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (wantsExtendedDynamicRangeOpenGLSurface ? 1 : 0));
	ns_nsopenglview_set_wants_extended_dynamic_range_open_gl_surface(&_0, &_1);
}

