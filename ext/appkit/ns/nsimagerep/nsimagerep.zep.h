
extern zend_class_entry *appkit_ns_nsimagerep_nsimagerep_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSImageRep_NSImageRep);

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, wrap);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, destroy);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, nsImageRep);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, repWithContentsOfFile);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, getSize);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setSize);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, hasAlpha);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, isOpaque);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, pixelsWide);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, pixelsHigh);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, bitsPerSample);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, layoutDirection);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setLayoutDirection);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, draw);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, drawAtPoint);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, drawInRect);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageTypeCount);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageTypeAt);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsImageRepPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_nsimagerep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_repwithcontentsoffile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_getsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_setsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_hasalpha, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_isopaque, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_pixelswide, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_pixelshigh, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_bitspersample, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_layoutdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_setlayoutdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_draw, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_drawatpoint, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_drawinrect, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_imagetypecount, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_imagetypeat, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsimagerep_nsimagerep_method_entry) {
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, wrap, arginfo_appkit_ns_nsimagerep_nsimagerep_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, destroy, arginfo_appkit_ns_nsimagerep_nsimagerep_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, nsImageRep, arginfo_appkit_ns_nsimagerep_nsimagerep_nsimagerep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, repWithContentsOfFile, arginfo_appkit_ns_nsimagerep_nsimagerep_repwithcontentsoffile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, getSize, arginfo_appkit_ns_nsimagerep_nsimagerep_getsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, setSize, arginfo_appkit_ns_nsimagerep_nsimagerep_setsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, hasAlpha, arginfo_appkit_ns_nsimagerep_nsimagerep_hasalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, isOpaque, arginfo_appkit_ns_nsimagerep_nsimagerep_isopaque, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, pixelsWide, arginfo_appkit_ns_nsimagerep_nsimagerep_pixelswide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, pixelsHigh, arginfo_appkit_ns_nsimagerep_nsimagerep_pixelshigh, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, bitsPerSample, arginfo_appkit_ns_nsimagerep_nsimagerep_bitspersample, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, layoutDirection, arginfo_appkit_ns_nsimagerep_nsimagerep_layoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, setLayoutDirection, arginfo_appkit_ns_nsimagerep_nsimagerep_setlayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, draw, arginfo_appkit_ns_nsimagerep_nsimagerep_draw, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, drawAtPoint, arginfo_appkit_ns_nsimagerep_nsimagerep_drawatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, drawInRect, arginfo_appkit_ns_nsimagerep_nsimagerep_drawinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, imageTypeCount, arginfo_appkit_ns_nsimagerep_nsimagerep_imagetypecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, imageTypeAt, arginfo_appkit_ns_nsimagerep_nsimagerep_imagetypeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
