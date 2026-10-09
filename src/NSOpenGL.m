#include "runtime.h"
#import <AppKit/NSOpenGL.h>
#import <AppKit/NSOpenGLView.h>
#include "../stubs/NSOpenGL_arginfo.h"

/* The whole NSOpenGLContextParameter enum is deprecated; checking its values is not a use of it. */
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
_Static_assert(NSOpenGLContextParameterSwapRectangle == 200 && NSOpenGLContextParameterSwapRectangleEnable == 201
	&& NSOpenGLContextParameterRasterizationEnable == 221 && NSOpenGLContextParameterSwapInterval == 222
	&& NSOpenGLContextParameterSurfaceOrder == 235 && NSOpenGLContextParameterSurfaceOpacity == 236
	&& NSOpenGLContextParameterStateValidation == 301 && NSOpenGLContextParameterSurfaceBackingSize == 304
	&& NSOpenGLContextParameterSurfaceSurfaceVolatile == 306 && NSOpenGLContextParameterReclaimResources == 308
	&& NSOpenGLContextParameterCurrentRendererID == 309 && NSOpenGLContextParameterGPUVertexProcessing == 310
	&& NSOpenGLContextParameterGPUFragmentProcessing == 311 && NSOpenGLContextParameterHasDrawable == 314
	&& NSOpenGLContextParameterMPSwapsInFlight == 315, "NSOpenGLContextParameter values moved");
#pragma clang diagnostic pop

/* The most ints any NSOpenGLContextParameter takes: SWAP_RECTANGLE's four. */
#define APPKIT_GL_PARAMETER_MAX 4

void appkit_register_NSOpenGL(int module_number)
{
	register_NSOpenGL_symbols(module_number);

	appkit_ce_NSOpenGLContextParameter = register_class_NSOpenGLContextParameter();

	appkit_ce_NSOpenGLPixelFormat = register_class_NSOpenGLPixelFormat(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSOpenGLPixelFormat);
	appkit_map_objc_class("NSOpenGLPixelFormat", appkit_ce_NSOpenGLPixelFormat);

	appkit_ce_NSOpenGLContext = register_class_NSOpenGLContext(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSOpenGLContext);
	appkit_map_objc_class("NSOpenGLContext", appkit_ce_NSOpenGLContext);

	appkit_ce_NSOpenGLView = register_class_NSOpenGLView(appkit_ce_NSView);
	appkit_object_setup(appkit_ce_NSOpenGLView);
	appkit_map_objc_class("NSOpenGLView", appkit_ce_NSOpenGLView);
}

#define THIS_CONTEXT ((NSOpenGLContext *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))
#define THIS_GL_VIEW ((NSOpenGLView *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

/* ---- NSOpenGLPixelFormat ------------------------------------------------- */

ZEND_METHOD(NSOpenGLPixelFormat, initWithAttributes)
{
	HashTable *list;
	zval *entry;
	uint32_t count, at = 0;
	NSOpenGLPixelFormatAttribute *attribs;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(list)
	ZEND_PARSE_PARAMETERS_END();

	count = zend_hash_num_elements(list);
	attribs = ecalloc(count + 1, sizeof(NSOpenGLPixelFormatAttribute));
	ZEND_HASH_FOREACH_VAL(list, entry) {
		ZVAL_DEREF(entry);
		if (Z_TYPE_P(entry) != IS_LONG || Z_LVAL_P(entry) < 0 || Z_LVAL_P(entry) > UINT32_MAX) {
			efree(attribs);
			zend_argument_value_error(1, "must hold NSOpenGLPixelFormatAttribute values (ints from 0 to 4294967295)");
			RETURN_THROWS();
		}
		attribs[at++] = (NSOpenGLPixelFormatAttribute) Z_LVAL_P(entry);
	} ZEND_HASH_FOREACH_END();
	if (count == 0 || attribs[count - 1] != 0) {
		efree(attribs);
		zend_argument_value_error(1, "must end in 0");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		NSOpenGLPixelFormat *format = [[(Class) appkit_called_class(execute_data) alloc] initWithAttributes:attribs];
		efree(attribs);
		attribs = NULL;
		if (format == nil) {
			RETURN_NULL();
		}
		appkit_box_objc(return_value, format);
		[format release];
	APPKIT_END
}

/* ---- NSOpenGLContext ----------------------------------------------------- */

ZEND_METHOD(NSOpenGLContext, initWithFormatShareContext)
{
	zend_object *format_obj, *share_obj = NULL;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(format_obj, appkit_ce_NSOpenGLPixelFormat)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(share_obj, appkit_ce_NSOpenGLContext)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		NSOpenGLContext *context = [[(Class) appkit_called_class(execute_data) alloc]
			initWithFormat:(NSOpenGLPixelFormat *) APPKIT_ID(format_obj)
			shareContext:share_obj != NULL ? (NSOpenGLContext *) APPKIT_ID(share_obj) : nil];
		if (context == nil) {
			RETURN_NULL();
		}
		appkit_box_objc(return_value, context);
		[context release];
	APPKIT_END
}

ZEND_METHOD(NSOpenGLContext, makeCurrentContext)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		[THIS_CONTEXT makeCurrentContext];
	APPKIT_END
}

ZEND_METHOD(NSOpenGLContext, clearCurrentContext)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		[NSOpenGLContext clearCurrentContext];
	APPKIT_END
}

ZEND_METHOD(NSOpenGLContext, currentContext)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSOpenGLContext currentContext]);
	APPKIT_END
}

ZEND_METHOD(NSOpenGLContext, CGLContextObj)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) (uintptr_t) [THIS_CONTEXT CGLContextObj]);
}

ZEND_METHOD(NSOpenGLContext, flushBuffer)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		[THIS_CONTEXT flushBuffer];
	APPKIT_END
}

ZEND_METHOD(NSOpenGLContext, update)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_CONTEXT update];
	APPKIT_END
}

ZEND_METHOD(NSOpenGLContext, view)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_CONTEXT view]);
	APPKIT_END
}

ZEND_METHOD(NSOpenGLContext, setView)
{
	zend_object *view = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(view, appkit_ce_NSView)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_CONTEXT setView:view != NULL ? (NSView *) APPKIT_ID(view) : nil];
	APPKIT_END
}

/* ---- NSOpenGLView -------------------------------------------------------- */

ZEND_METHOD(NSOpenGLView, initWithFramePixelFormat)
{
	zend_object *frame, *format_obj = NULL;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(frame, appkit_ce_NSRect)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(format_obj, appkit_ce_NSOpenGLPixelFormat)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_rect_from(frame, 1, &rect)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		NSOpenGLView *view = [[(Class) appkit_called_class(execute_data) alloc]
			initWithFrame:rect pixelFormat:format_obj != NULL ? (NSOpenGLPixelFormat *) APPKIT_ID(format_obj) : nil];
		if (view == nil) {
			zend_throw_exception(appkit_ce_AppKitException, "NSOpenGLView made no view for that pixel format", 0);
			RETURN_THROWS();
		}
		appkit_box_objc(return_value, view);
		[view release];
	APPKIT_END
}

ZEND_METHOD(NSOpenGLView, openGLContext)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_GL_VIEW openGLContext]);
	APPKIT_END
}

ZEND_METHOD(NSOpenGLView, setOpenGLContext)
{
	zend_object *context = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(context, appkit_ce_NSOpenGLContext)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_GL_VIEW setOpenGLContext:context != NULL ? (NSOpenGLContext *) APPKIT_ID(context) : nil];
	APPKIT_END
}

ZEND_METHOD(NSOpenGLView, pixelFormat)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_GL_VIEW pixelFormat]);
	APPKIT_END
}

ZEND_METHOD(NSOpenGLView, wantsBestResolutionOpenGLSurface)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_BOOL([THIS_GL_VIEW wantsBestResolutionOpenGLSurface]);
}

ZEND_METHOD(NSOpenGLView, setWantsBestResolutionOpenGLSurface)
{
	bool flag;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_GL_VIEW setWantsBestResolutionOpenGLSurface:flag];
	APPKIT_END
}

ZEND_METHOD(NSOpenGLContext, setValuesForParameter)
{
	HashTable *values;
	zend_object *parameter;
	GLint native[APPKIT_GL_PARAMETER_MAX] = { 0 };
	uint32_t count = 0;
	zval *value;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ARRAY_HT(values)
		Z_PARAM_OBJ_OF_CLASS(parameter, appkit_ce_NSOpenGLContextParameter)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	if (zend_hash_num_elements(values) > APPKIT_GL_PARAMETER_MAX) {
		zend_argument_value_error(1, "must hold at most %d ints", APPKIT_GL_PARAMETER_MAX);
		RETURN_THROWS();
	}
	ZEND_HASH_FOREACH_VAL(values, value) {
		if (Z_TYPE_P(value) != IS_LONG || Z_LVAL_P(value) < INT32_MIN || Z_LVAL_P(value) > INT32_MAX) {
			zend_argument_type_error(1, "must be a list of 32-bit ints");
			RETURN_THROWS();
		}
		native[count++] = (GLint) Z_LVAL_P(value);
	} ZEND_HASH_FOREACH_END();

	APPKIT_BEGIN
		[THIS_CONTEXT setValues:native forParameter:(NSOpenGLContextParameter) appkit_enum_value(parameter, 0)];
	APPKIT_END
}

ZEND_METHOD(NSOpenGLContext, getValuesForParameter)
{
	zend_object *parameter;
	zend_long count;
	GLint native[APPKIT_GL_PARAMETER_MAX] = { 0 };

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(parameter, appkit_ce_NSOpenGLContextParameter)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	if (count < 1 || count > APPKIT_GL_PARAMETER_MAX) {
		zend_argument_value_error(2, "must be between 1 and %d", APPKIT_GL_PARAMETER_MAX);
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[THIS_CONTEXT getValues:native forParameter:(NSOpenGLContextParameter) appkit_enum_value(parameter, 0)];
		array_init_size(return_value, (uint32_t) count);
		for (zend_long i = 0; i < count; i++) {
			add_next_index_long(return_value, (zend_long) native[i]);
		}
	APPKIT_END
}

