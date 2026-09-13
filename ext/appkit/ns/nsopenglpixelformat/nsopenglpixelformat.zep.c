
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
#include "src/ns-openglpixelformat.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSOpenGLPixelFormat_NSOpenGLPixelFormat)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSOpenGLPixelFormat, NSOpenGLPixelFormat, appkit, ns_nsopenglpixelformat_nsopenglpixelformat, appkit_ns_nsopenglpixelformat_nsopenglpixelformat_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSOpenGLPixelFormat_NSOpenGLPixelFormat, initWithCGLPixelFormatObj)
{
	zval *format_param = NULL, _0;
	zend_long format;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &format_param);
	ZVAL_LONG(&_0, format);
	RETURN_LONG(ns_nsopenglpixelformat_init_with_cgl_pixel_format_obj(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLPixelFormat_NSOpenGLPixelFormat, initWithAttributes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *attribs_param = NULL;
	zval attribs;

	ZVAL_UNDEF(&attribs);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(attribs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &attribs_param);
	zephir_get_arrval(&attribs, attribs_param);
	RETURN_MM_LONG(ns_nsopenglpixelformat_init_with_attributes(&attribs));
}

PHP_METHOD(AppKit_NS_NSOpenGLPixelFormat_NSOpenGLPixelFormat, getValuesForAttributeForVirtualScreen)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *attrib_param = NULL, *screen_param = NULL, result, _0, _1, _2;
	zend_long handle, attrib, screen;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attrib)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &attrib_param, &screen_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attrib);
	ZVAL_LONG(&_2, screen);
	ns_nsopenglpixelformat_get_values_for_attribute_for_virtual_screen(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSOpenGLPixelFormat_NSOpenGLPixelFormat, numberOfVirtualScreens)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsopenglpixelformat_number_of_virtual_screens(&_0));
}

PHP_METHOD(AppKit_NS_NSOpenGLPixelFormat_NSOpenGLPixelFormat, CGLPixelFormatObj)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsopenglpixelformat_cgl_pixel_format_obj(&_0));
}

