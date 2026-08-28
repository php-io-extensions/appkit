
extern zend_class_entry *appkit_ns_nsimagerep_nsimagerep_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSImageRep_NSImageRep);

PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, init);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, draw);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, drawAtPoint);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, drawInRect);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, drawInRectFromRectOperationFractionRespectFlippedHints);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, size);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setSize);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, hasAlpha);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setAlpha);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, isOpaque);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setOpaque);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, colorSpaceName);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setColorSpaceName);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, bitsPerSample);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setBitsPerSample);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, pixelsWide);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setPixelsWide);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, pixelsHigh);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setPixelsHigh);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, layoutDirection);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, setLayoutDirection);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageUnfilteredTypes);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageTypes);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, canInitWithPasteboard);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepsWithContentsOfFile);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepWithContentsOfFile);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepsWithContentsOfURL);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepWithContentsOfURL);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepsWithPasteboard);
PHP_METHOD(AppKit_NS_NSImageRep_NSImageRep, imageRepWithPasteboard);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_draw, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_drawatpoint, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_drawinrect, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_drawinrectfromrectoperationfractionrespectflippedhints, 0, 13, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, op, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, requestedAlpha, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, respectFlipped, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, hints, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_setsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_hasalpha, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_setalpha, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_isopaque, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_setopaque, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_colorspacename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_setcolorspacename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorSpaceName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_bitspersample, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_setbitspersample, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bitsPerSample, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_pixelswide, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_setpixelswide, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixelsWide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_pixelshigh, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_setpixelshigh, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixelsHigh, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_layoutdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_setlayoutdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layoutDirection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_imageunfilteredtypes, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_imagetypes, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_caninitwithpasteboard, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepswithcontentsoffile, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepwithcontentsoffile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepswithcontentsofurl, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepwithcontentsofurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepswithpasteboard, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepwithpasteboard, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsimagerep_nsimagerep_method_entry) {
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, init, arginfo_appkit_ns_nsimagerep_nsimagerep_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, draw, arginfo_appkit_ns_nsimagerep_nsimagerep_draw, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, drawAtPoint, arginfo_appkit_ns_nsimagerep_nsimagerep_drawatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, drawInRect, arginfo_appkit_ns_nsimagerep_nsimagerep_drawinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, drawInRectFromRectOperationFractionRespectFlippedHints, arginfo_appkit_ns_nsimagerep_nsimagerep_drawinrectfromrectoperationfractionrespectflippedhints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, size, arginfo_appkit_ns_nsimagerep_nsimagerep_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, setSize, arginfo_appkit_ns_nsimagerep_nsimagerep_setsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, hasAlpha, arginfo_appkit_ns_nsimagerep_nsimagerep_hasalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, setAlpha, arginfo_appkit_ns_nsimagerep_nsimagerep_setalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, isOpaque, arginfo_appkit_ns_nsimagerep_nsimagerep_isopaque, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, setOpaque, arginfo_appkit_ns_nsimagerep_nsimagerep_setopaque, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, colorSpaceName, arginfo_appkit_ns_nsimagerep_nsimagerep_colorspacename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, setColorSpaceName, arginfo_appkit_ns_nsimagerep_nsimagerep_setcolorspacename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, bitsPerSample, arginfo_appkit_ns_nsimagerep_nsimagerep_bitspersample, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, setBitsPerSample, arginfo_appkit_ns_nsimagerep_nsimagerep_setbitspersample, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, pixelsWide, arginfo_appkit_ns_nsimagerep_nsimagerep_pixelswide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, setPixelsWide, arginfo_appkit_ns_nsimagerep_nsimagerep_setpixelswide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, pixelsHigh, arginfo_appkit_ns_nsimagerep_nsimagerep_pixelshigh, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, setPixelsHigh, arginfo_appkit_ns_nsimagerep_nsimagerep_setpixelshigh, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, layoutDirection, arginfo_appkit_ns_nsimagerep_nsimagerep_layoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, setLayoutDirection, arginfo_appkit_ns_nsimagerep_nsimagerep_setlayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, imageUnfilteredTypes, arginfo_appkit_ns_nsimagerep_nsimagerep_imageunfilteredtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, imageTypes, arginfo_appkit_ns_nsimagerep_nsimagerep_imagetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, canInitWithPasteboard, arginfo_appkit_ns_nsimagerep_nsimagerep_caninitwithpasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, imageRepsWithContentsOfFile, arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepswithcontentsoffile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, imageRepWithContentsOfFile, arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepwithcontentsoffile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, imageRepsWithContentsOfURL, arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepswithcontentsofurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, imageRepWithContentsOfURL, arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepwithcontentsofurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, imageRepsWithPasteboard, arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepswithpasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageRep_NSImageRep, imageRepWithPasteboard, arginfo_appkit_ns_nsimagerep_nsimagerep_imagerepwithpasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
