/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: df003d37eacc8e68485903829d6b80f425297251 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenGLPixelFormat_initWithAttributes, 0, 1, IS_STATIC, 1)
	ZEND_ARG_TYPE_INFO(0, attribs, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenGLContext_initWithFormatShareContext, 0, 2, IS_STATIC, 1)
	ZEND_ARG_OBJ_INFO(0, format, NSOpenGLPixelFormat, 0)
	ZEND_ARG_OBJ_INFO(0, share, NSOpenGLContext, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenGLContext_makeCurrentContext, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSOpenGLContext_clearCurrentContext arginfo_class_NSOpenGLContext_makeCurrentContext

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSOpenGLContext_currentContext, 0, 0, NSOpenGLContext, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenGLContext_CGLContextObj, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSOpenGLContext_flushBuffer arginfo_class_NSOpenGLContext_makeCurrentContext

#define arginfo_class_NSOpenGLContext_update arginfo_class_NSOpenGLContext_makeCurrentContext

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSOpenGLContext_view, 0, 0, NSView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenGLContext_setView, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenGLView_initWithFramePixelFormat, 0, 2, IS_STATIC, 0)
	ZEND_ARG_OBJ_INFO(0, frame, NSRect, 0)
	ZEND_ARG_OBJ_INFO(0, format, NSOpenGLPixelFormat, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSOpenGLView_openGLContext arginfo_class_NSOpenGLContext_currentContext

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenGLView_setOpenGLContext, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, context, NSOpenGLContext, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSOpenGLView_pixelFormat, 0, 0, NSOpenGLPixelFormat, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenGLView_wantsBestResolutionOpenGLSurface, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenGLView_setWantsBestResolutionOpenGLSurface, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSOpenGLPixelFormat, initWithAttributes);
ZEND_METHOD(NSOpenGLContext, initWithFormatShareContext);
ZEND_METHOD(NSOpenGLContext, makeCurrentContext);
ZEND_METHOD(NSOpenGLContext, clearCurrentContext);
ZEND_METHOD(NSOpenGLContext, currentContext);
ZEND_METHOD(NSOpenGLContext, CGLContextObj);
ZEND_METHOD(NSOpenGLContext, flushBuffer);
ZEND_METHOD(NSOpenGLContext, update);
ZEND_METHOD(NSOpenGLContext, view);
ZEND_METHOD(NSOpenGLContext, setView);
ZEND_METHOD(NSOpenGLView, initWithFramePixelFormat);
ZEND_METHOD(NSOpenGLView, openGLContext);
ZEND_METHOD(NSOpenGLView, setOpenGLContext);
ZEND_METHOD(NSOpenGLView, pixelFormat);
ZEND_METHOD(NSOpenGLView, wantsBestResolutionOpenGLSurface);
ZEND_METHOD(NSOpenGLView, setWantsBestResolutionOpenGLSurface);

static const zend_function_entry class_NSOpenGLPixelFormat_methods[] = {
	ZEND_ME(NSOpenGLPixelFormat, initWithAttributes, arginfo_class_NSOpenGLPixelFormat_initWithAttributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSOpenGLContext_methods[] = {
	ZEND_ME(NSOpenGLContext, initWithFormatShareContext, arginfo_class_NSOpenGLContext_initWithFormatShareContext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSOpenGLContext, makeCurrentContext, arginfo_class_NSOpenGLContext_makeCurrentContext, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenGLContext, clearCurrentContext, arginfo_class_NSOpenGLContext_clearCurrentContext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSOpenGLContext, currentContext, arginfo_class_NSOpenGLContext_currentContext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSOpenGLContext, CGLContextObj, arginfo_class_NSOpenGLContext_CGLContextObj, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenGLContext, flushBuffer, arginfo_class_NSOpenGLContext_flushBuffer, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenGLContext, update, arginfo_class_NSOpenGLContext_update, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenGLContext, view, arginfo_class_NSOpenGLContext_view, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenGLContext, setView, arginfo_class_NSOpenGLContext_setView, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSOpenGLView_methods[] = {
	ZEND_ME(NSOpenGLView, initWithFramePixelFormat, arginfo_class_NSOpenGLView_initWithFramePixelFormat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSOpenGLView, openGLContext, arginfo_class_NSOpenGLView_openGLContext, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenGLView, setOpenGLContext, arginfo_class_NSOpenGLView_setOpenGLContext, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenGLView, pixelFormat, arginfo_class_NSOpenGLView_pixelFormat, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenGLView, wantsBestResolutionOpenGLSurface, arginfo_class_NSOpenGLView_wantsBestResolutionOpenGLSurface, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenGLView, setWantsBestResolutionOpenGLSurface, arginfo_class_NSOpenGLView_setWantsBestResolutionOpenGLSurface, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_NSOpenGL_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("NSOpenGLPFAOpenGLProfile", NSOpenGLPFAOpenGLProfile, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSOpenGLProfileVersionLegacy", NSOpenGLProfileVersionLegacy, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSOpenGLProfileVersion3_2Core", NSOpenGLProfileVersion3_2Core, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSOpenGLProfileVersion4_1Core", NSOpenGLProfileVersion4_1Core, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSOpenGLPFAAccelerated", NSOpenGLPFAAccelerated, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSOpenGLPFAColorSize", NSOpenGLPFAColorSize, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSOpenGLPFAAlphaSize", NSOpenGLPFAAlphaSize, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSOpenGLPFADoubleBuffer", NSOpenGLPFADoubleBuffer, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSOpenGLPFADepthSize", NSOpenGLPFADepthSize, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSOpenGLPFAStencilSize", NSOpenGLPFAStencilSize, CONST_PERSISTENT);
}

static zend_class_entry *register_class_NSOpenGLPixelFormat(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSOpenGLPixelFormat", class_NSOpenGLPixelFormat_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSOpenGLContext(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSOpenGLContext", class_NSOpenGLContext_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSOpenGLView(zend_class_entry *class_entry_NSView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSOpenGLView", class_NSOpenGLView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
