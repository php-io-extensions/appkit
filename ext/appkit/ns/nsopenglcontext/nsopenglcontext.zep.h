
extern zend_class_entry *appkit_ns_nsopenglcontext_nsopenglcontext_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSOpenGLContext_NSOpenGLContext);

PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, initWithFormatShareContext);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, initWithCGLContextObj);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelFormat);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, view);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setView);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setFullScreen);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setOffScreenWidthHeightRowbytes);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, clearDrawable);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, update);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, flushBuffer);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, makeCurrentContext);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, clearCurrentContext);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, currentContext);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, copyAttributesFromContextWithMask);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setValuesForParameter);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, getValuesForParameter);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, currentVirtualScreen);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setCurrentVirtualScreen);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, createTextureFromViewInternalFormat);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, CGLContextObj);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setPixelBufferCubeMapFaceMipMapLevelCurrentVirtualScreen);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelBuffer);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelBufferCubeMapFace);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelBufferMipMapLevel);
PHP_METHOD(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setTextureImageToPixelBufferColorBuffer);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_initwithformatsharecontext, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, share, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_initwithcglcontextobj, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_pixelformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_view, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setfullscreen, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setoffscreenwidthheightrowbytes, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseaddr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowbytes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_cleardrawable, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_update, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_flushbuffer, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_makecurrentcontext, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_clearcurrentcontext, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_currentcontext, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_copyattributesfromcontextwithmask, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setvaluesforparameter, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, vals, 0)
	ZEND_ARG_TYPE_INFO(0, param, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_getvaluesforparameter, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, param, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_currentvirtualscreen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setcurrentvirtualscreen, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, currentVirtualScreen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_createtexturefromviewinternalformat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_cglcontextobj, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setpixelbuffercubemapfacemipmaplevelcurrentvirtualscreen, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixelBuffer, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, face, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_pixelbuffer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_pixelbuffercubemapface, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_pixelbuffermipmaplevel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_settextureimagetopixelbuffercolorbuffer, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixelBuffer, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsopenglcontext_nsopenglcontext_method_entry) {
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, initWithFormatShareContext, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_initwithformatsharecontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, initWithCGLContextObj, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_initwithcglcontextobj, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelFormat, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_pixelformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, view, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_view, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setView, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setFullScreen, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setfullscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setOffScreenWidthHeightRowbytes, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setoffscreenwidthheightrowbytes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, clearDrawable, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_cleardrawable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, update, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_update, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, flushBuffer, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_flushbuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, makeCurrentContext, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_makecurrentcontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, clearCurrentContext, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_clearcurrentcontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, currentContext, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_currentcontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, copyAttributesFromContextWithMask, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_copyattributesfromcontextwithmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setValuesForParameter, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setvaluesforparameter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, getValuesForParameter, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_getvaluesforparameter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, currentVirtualScreen, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_currentvirtualscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setCurrentVirtualScreen, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setcurrentvirtualscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, createTextureFromViewInternalFormat, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_createtexturefromviewinternalformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, CGLContextObj, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_cglcontextobj, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setPixelBufferCubeMapFaceMipMapLevelCurrentVirtualScreen, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_setpixelbuffercubemapfacemipmaplevelcurrentvirtualscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelBuffer, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_pixelbuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelBufferCubeMapFace, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_pixelbuffercubemapface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, pixelBufferMipMapLevel, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_pixelbuffermipmaplevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLContext_NSOpenGLContext, setTextureImageToPixelBufferColorBuffer, arginfo_appkit_ns_nsopenglcontext_nsopenglcontext_settextureimagetopixelbuffercolorbuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
