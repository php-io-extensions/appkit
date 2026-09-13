
extern zend_class_entry *appkit_ns_nsopenglview_nsopenglview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSOpenGLView_NSOpenGLView);

PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, defaultPixelFormat);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, initWithFramePixelFormat);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, openGLContext);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, setOpenGLContext);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, clearGLContext);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, update);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, reshape);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, pixelFormat);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, setPixelFormat);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, prepareOpenGL);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, wantsBestResolutionOpenGLSurface);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, setWantsBestResolutionOpenGLSurface);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, wantsExtendedDynamicRangeOpenGLSurface);
PHP_METHOD(AppKit_NS_NSOpenGLView_NSOpenGLView, setWantsExtendedDynamicRangeOpenGLSurface);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_defaultpixelformat, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_initwithframepixelformat, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_openglcontext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_setopenglcontext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, openGLContext, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_clearglcontext, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_update, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_reshape, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_pixelformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_setpixelformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixelFormat, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_prepareopengl, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_wantsbestresolutionopenglsurface, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_setwantsbestresolutionopenglsurface, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wantsBestResolutionOpenGLSurface, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_wantsextendeddynamicrangeopenglsurface, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenglview_nsopenglview_setwantsextendeddynamicrangeopenglsurface, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wantsExtendedDynamicRangeOpenGLSurface, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsopenglview_nsopenglview_method_entry) {
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, defaultPixelFormat, arginfo_appkit_ns_nsopenglview_nsopenglview_defaultpixelformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, initWithFramePixelFormat, arginfo_appkit_ns_nsopenglview_nsopenglview_initwithframepixelformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, openGLContext, arginfo_appkit_ns_nsopenglview_nsopenglview_openglcontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, setOpenGLContext, arginfo_appkit_ns_nsopenglview_nsopenglview_setopenglcontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, clearGLContext, arginfo_appkit_ns_nsopenglview_nsopenglview_clearglcontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, update, arginfo_appkit_ns_nsopenglview_nsopenglview_update, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, reshape, arginfo_appkit_ns_nsopenglview_nsopenglview_reshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, pixelFormat, arginfo_appkit_ns_nsopenglview_nsopenglview_pixelformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, setPixelFormat, arginfo_appkit_ns_nsopenglview_nsopenglview_setpixelformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, prepareOpenGL, arginfo_appkit_ns_nsopenglview_nsopenglview_prepareopengl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, wantsBestResolutionOpenGLSurface, arginfo_appkit_ns_nsopenglview_nsopenglview_wantsbestresolutionopenglsurface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, setWantsBestResolutionOpenGLSurface, arginfo_appkit_ns_nsopenglview_nsopenglview_setwantsbestresolutionopenglsurface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, wantsExtendedDynamicRangeOpenGLSurface, arginfo_appkit_ns_nsopenglview_nsopenglview_wantsextendeddynamicrangeopenglsurface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenGLView_NSOpenGLView, setWantsExtendedDynamicRangeOpenGLSurface, arginfo_appkit_ns_nsopenglview_nsopenglview_setwantsextendeddynamicrangeopenglsurface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
