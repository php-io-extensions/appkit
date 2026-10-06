#include "runtime.h"
#import <AppKit/NSOpenGL.h>
#import <AppKit/NSOpenGLView.h>
#include "../stubs/NSOpenGL_arginfo.h"

void appkit_register_NSOpenGL(int module_number)
{
	register_NSOpenGL_symbols(module_number);

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
