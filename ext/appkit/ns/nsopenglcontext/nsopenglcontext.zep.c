
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
#include "src/ns-openglcontext.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSOpenGLContext_NSOpenGLContext)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSOpenGLContext, NSOpenGLContext, appkit, ns_nsopenglcontext_nsopenglcontext, appkit_ns_nsopenglcontext_nsopenglcontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, initWithFormatShareContext)
{
	zval *format_param = NULL, *share_param = NULL, _0, _1;
	zend_long format, share;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(format)
		Z_PARAM_LONG(share)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &format_param, &share_param);
	ZVAL_LONG(&_0, format);
	ZVAL_LONG(&_1, share);
	RETURN_LONG(ns_nsopenglcontext_init_with_format_share_context(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, initWithCGLContextObj)
{
	zval *context_param = NULL, _0;
	zend_long context;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	ZVAL_LONG(&_0, context);
	RETURN_LONG(ns_nsopenglcontext_init_with_cgl_context_obj(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsopenglcontext_pixel_format(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, view)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsopenglcontext_view(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setView)
{
	zval *handle_param = NULL, *view_param = NULL, _0, _1;
	zend_long handle, view;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &view_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, view);
	ns_nsopenglcontext_set_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setFullScreen)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsopenglcontext_set_full_screen(&_0);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setOffScreenWidthHeightRowbytes)
{
	zval *handle_param = NULL, *baseaddr_param = NULL, *width_param = NULL, *height_param = NULL, *rowbytes_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, baseaddr, width, height, rowbytes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(baseaddr)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(rowbytes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &baseaddr_param, &width_param, &height_param, &rowbytes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, baseaddr);
	ZVAL_LONG(&_2, width);
	ZVAL_LONG(&_3, height);
	ZVAL_LONG(&_4, rowbytes);
	ns_nsopenglcontext_set_off_screen_width_height_rowbytes(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, clearDrawable)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsopenglcontext_clear_drawable(&_0);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, update)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsopenglcontext_update(&_0);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, flushBuffer)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsopenglcontext_flush_buffer(&_0);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, makeCurrentContext)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsopenglcontext_make_current_context(&_0);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, clearCurrentContext)
{

	ns_nsopenglcontext_clear_current_context();
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, currentContext)
{

	RETURN_LONG(ns_nsopenglcontext_current_context());
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, copyAttributesFromContextWithMask)
{
	zval *handle_param = NULL, *context_param = NULL, *mask_param = NULL, _0, _1, _2;
	zend_long handle, context, mask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(context)
		Z_PARAM_LONG(mask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &context_param, &mask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, context);
	ZVAL_LONG(&_2, mask);
	ns_nsopenglcontext_copy_attributes_from_context_with_mask(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setValuesForParameter)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval vals;
	zval *handle_param = NULL, *vals_param = NULL, *param_param = NULL, _0, _1;
	zend_long handle, param;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&vals);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(vals)
		Z_PARAM_LONG(param)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &vals_param, &param_param);
	zephir_get_arrval(&vals, vals_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, param);
	ns_nsopenglcontext_set_values_for_parameter(&_0, &vals, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, getValuesForParameter)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *param_param = NULL, result, _0, _1;
	zend_long handle, param;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(param)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &param_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, param);
	ns_nsopenglcontext_get_values_for_parameter(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, currentVirtualScreen)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsopenglcontext_current_virtual_screen(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setCurrentVirtualScreen)
{
	zval *handle_param = NULL, *currentVirtualScreen_param = NULL, _0, _1;
	zend_long handle, currentVirtualScreen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(currentVirtualScreen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &currentVirtualScreen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, currentVirtualScreen);
	ns_nsopenglcontext_set_current_virtual_screen(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, createTextureFromViewInternalFormat)
{
	zval *handle_param = NULL, *target_param = NULL, *view_param = NULL, *format_param = NULL, _0, _1, _2, _3;
	zend_long handle, target, view, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &target_param, &view_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, view);
	ZVAL_LONG(&_3, format);
	ns_nsopenglcontext_create_texture_from_view_internal_format(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, CGLContextObj)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsopenglcontext_cgl_context_obj(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setPixelBufferCubeMapFaceMipMapLevelCurrentVirtualScreen)
{
	zval *handle_param = NULL, *pixelBuffer_param = NULL, *face_param = NULL, *level_param = NULL, *screen_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, pixelBuffer, face, level, screen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixelBuffer)
		Z_PARAM_LONG(face)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &pixelBuffer_param, &face_param, &level_param, &screen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixelBuffer);
	ZVAL_LONG(&_2, face);
	ZVAL_LONG(&_3, level);
	ZVAL_LONG(&_4, screen);
	ns_nsopenglcontext_set_pixel_buffer_cube_map_face_mip_map_level_current_virtual_screen(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelBuffer)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsopenglcontext_pixel_buffer(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelBufferCubeMapFace)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsopenglcontext_pixel_buffer_cube_map_face(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelBufferMipMapLevel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsopenglcontext_pixel_buffer_mip_map_level(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setTextureImageToPixelBufferColorBuffer)
{
	zval *handle_param = NULL, *pixelBuffer_param = NULL, *source_param = NULL, _0, _1, _2;
	zend_long handle, pixelBuffer, source;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixelBuffer)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pixelBuffer_param, &source_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixelBuffer);
	ZVAL_LONG(&_2, source);
	ns_nsopenglcontext_set_texture_image_to_pixel_buffer_color_buffer(&_0, &_1, &_2);
}

