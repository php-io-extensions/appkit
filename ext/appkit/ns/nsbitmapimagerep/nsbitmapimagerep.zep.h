
extern zend_class_entry *appkit_ns_nsbitmapimagerep_nsbitmapimagerep_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep);

PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, wrap);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, destroy);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, nsBitmapImageRep);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, withData);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, repWithContentsOfFile);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, withPixels);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, withCGImage);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, isPlanar);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, samplesPerPixel);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, bitsPerPixel);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, bytesPerRow);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, numberOfPlanes);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, bitmapData);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, tiffRepresentation);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, representationUsingType);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, setColorAt);
PHP_METHOD(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, colorAt);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsBitmapImageRepPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_nsbitmapimagerep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_withdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_repwithcontentsoffile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_withpixels, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hasAlpha, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_withcgimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cgImagePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_isplanar, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_samplesperpixel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_bitsperpixel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_bytesperrow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_numberofplanes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_bitmapdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_tiffrepresentation, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_representationusingtype, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_setcolorat, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_colorat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsbitmapimagerep_nsbitmapimagerep_method_entry) {
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, wrap, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, destroy, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, nsBitmapImageRep, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_nsbitmapimagerep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, withData, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_withdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, repWithContentsOfFile, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_repwithcontentsoffile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, withPixels, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_withpixels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, withCGImage, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_withcgimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, isPlanar, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_isplanar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, samplesPerPixel, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_samplesperpixel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, bitsPerPixel, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_bitsperpixel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, bytesPerRow, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_bytesperrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, numberOfPlanes, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_numberofplanes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, bitmapData, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_bitmapdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, tiffRepresentation, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_tiffrepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, representationUsingType, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_representationusingtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, setColorAt, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_setcolorat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBitmapImageRep_NSBitmapImageRep, colorAt, arginfo_appkit_ns_nsbitmapimagerep_nsbitmapimagerep_colorat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
