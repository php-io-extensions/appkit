
extern zend_class_entry *appkit_ns_nsimage_nsimage_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSImage_NSImage);

PHP_METHOD(AppKit_NS_NSImage_NSImage, wrap);
PHP_METHOD(AppKit_NS_NSImage_NSImage, destroy);
PHP_METHOD(AppKit_NS_NSImage_NSImage, nsImage);
PHP_METHOD(AppKit_NS_NSImage_NSImage, named);
PHP_METHOD(AppKit_NS_NSImage_NSImage, withSystemSymbolName);
PHP_METHOD(AppKit_NS_NSImage_NSImage, withSize);
PHP_METHOD(AppKit_NS_NSImage_NSImage, withContentsOfFile);
PHP_METHOD(AppKit_NS_NSImage_NSImage, withData);
PHP_METHOD(AppKit_NS_NSImage_NSImage, byReferencingFile);
PHP_METHOD(AppKit_NS_NSImage_NSImage, getSize);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setSize);
PHP_METHOD(AppKit_NS_NSImage_NSImage, isValid);
PHP_METHOD(AppKit_NS_NSImage_NSImage, isTemplate);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setTemplate);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setName);
PHP_METHOD(AppKit_NS_NSImage_NSImage, getName);
PHP_METHOD(AppKit_NS_NSImage_NSImage, addRepresentation);
PHP_METHOD(AppKit_NS_NSImage_NSImage, removeRepresentation);
PHP_METHOD(AppKit_NS_NSImage_NSImage, representationCount);
PHP_METHOD(AppKit_NS_NSImage_NSImage, representationAt);
PHP_METHOD(AppKit_NS_NSImage_NSImage, drawInRect);
PHP_METHOD(AppKit_NS_NSImage_NSImage, tiffRepresentation);
PHP_METHOD(AppKit_NS_NSImage_NSImage, cacheMode);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setCacheMode);
PHP_METHOD(AppKit_NS_NSImage_NSImage, getAccessibilityDescription);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setAccessibilityDescription);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsImagePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_nsimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_named, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_withsystemsymbolname, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_withsize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_withcontentsoffile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_withdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_byreferencingfile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_getsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_istemplate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_settemplate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isTemplate, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setname, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_getname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_addrepresentation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_removerepresentation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_representationcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_representationat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_drawinrect, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_tiffrepresentation, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_cachemode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setcachemode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_getaccessibilitydescription, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setaccessibilitydescription, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsimage_nsimage_method_entry) {
	PHP_ME(AppKit_NS_NSImage_NSImage, wrap, arginfo_appkit_ns_nsimage_nsimage_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, destroy, arginfo_appkit_ns_nsimage_nsimage_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, nsImage, arginfo_appkit_ns_nsimage_nsimage_nsimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, named, arginfo_appkit_ns_nsimage_nsimage_named, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, withSystemSymbolName, arginfo_appkit_ns_nsimage_nsimage_withsystemsymbolname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, withSize, arginfo_appkit_ns_nsimage_nsimage_withsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, withContentsOfFile, arginfo_appkit_ns_nsimage_nsimage_withcontentsoffile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, withData, arginfo_appkit_ns_nsimage_nsimage_withdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, byReferencingFile, arginfo_appkit_ns_nsimage_nsimage_byreferencingfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, getSize, arginfo_appkit_ns_nsimage_nsimage_getsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setSize, arginfo_appkit_ns_nsimage_nsimage_setsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, isValid, arginfo_appkit_ns_nsimage_nsimage_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, isTemplate, arginfo_appkit_ns_nsimage_nsimage_istemplate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setTemplate, arginfo_appkit_ns_nsimage_nsimage_settemplate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setName, arginfo_appkit_ns_nsimage_nsimage_setname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, getName, arginfo_appkit_ns_nsimage_nsimage_getname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, addRepresentation, arginfo_appkit_ns_nsimage_nsimage_addrepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, removeRepresentation, arginfo_appkit_ns_nsimage_nsimage_removerepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, representationCount, arginfo_appkit_ns_nsimage_nsimage_representationcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, representationAt, arginfo_appkit_ns_nsimage_nsimage_representationat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, drawInRect, arginfo_appkit_ns_nsimage_nsimage_drawinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, tiffRepresentation, arginfo_appkit_ns_nsimage_nsimage_tiffrepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, cacheMode, arginfo_appkit_ns_nsimage_nsimage_cachemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setCacheMode, arginfo_appkit_ns_nsimage_nsimage_setcachemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, getAccessibilityDescription, arginfo_appkit_ns_nsimage_nsimage_getaccessibilitydescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setAccessibilityDescription, arginfo_appkit_ns_nsimage_nsimage_setaccessibilitydescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
