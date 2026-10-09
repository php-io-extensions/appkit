/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 7b34e4549d7b53c6c44bca08300045c23a166eb9 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGDisplayMode_getWidth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CGDisplayMode_getHeight arginfo_class_CGDisplayMode_getWidth

#define arginfo_class_CGDisplayMode_getPixelWidth arginfo_class_CGDisplayMode_getWidth

#define arginfo_class_CGDisplayMode_getPixelHeight arginfo_class_CGDisplayMode_getWidth

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGDisplayMode_getRefreshRate, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGDisplayMode_isUsableForDesktopGUI, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_CGDisplay___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CGDisplay_mainDisplayID arginfo_class_CGDisplayMode_getWidth

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGDisplay_getActiveDisplayList, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGDisplay_bounds, 0, 1, NSRect, 0)
	ZEND_ARG_TYPE_INFO(0, display, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGDisplay_copyDisplayMode, 0, 1, CGDisplayMode, 1)
	ZEND_ARG_TYPE_INFO(0, display, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGDisplay_copyAllDisplayModes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, display, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGDisplay_setDisplayMode, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, display, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, mode, CGDisplayMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGDisplay_capture, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, display, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CGDisplay_release arginfo_class_CGDisplay_capture

#define arginfo_class_CGDisplay_shieldingWindowLevel arginfo_class_CGDisplayMode_getWidth

ZEND_METHOD(CGDisplayMode, getWidth);
ZEND_METHOD(CGDisplayMode, getHeight);
ZEND_METHOD(CGDisplayMode, getPixelWidth);
ZEND_METHOD(CGDisplayMode, getPixelHeight);
ZEND_METHOD(CGDisplayMode, getRefreshRate);
ZEND_METHOD(CGDisplayMode, isUsableForDesktopGUI);
ZEND_METHOD(CGDisplay, __construct);
ZEND_METHOD(CGDisplay, mainDisplayID);
ZEND_METHOD(CGDisplay, getActiveDisplayList);
ZEND_METHOD(CGDisplay, bounds);
ZEND_METHOD(CGDisplay, copyDisplayMode);
ZEND_METHOD(CGDisplay, copyAllDisplayModes);
ZEND_METHOD(CGDisplay, setDisplayMode);
ZEND_METHOD(CGDisplay, capture);
ZEND_METHOD(CGDisplay, release);
ZEND_METHOD(CGDisplay, shieldingWindowLevel);

static const zend_function_entry class_CGDisplayMode_methods[] = {
	ZEND_ME(CGDisplayMode, getWidth, arginfo_class_CGDisplayMode_getWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(CGDisplayMode, getHeight, arginfo_class_CGDisplayMode_getHeight, ZEND_ACC_PUBLIC)
	ZEND_ME(CGDisplayMode, getPixelWidth, arginfo_class_CGDisplayMode_getPixelWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(CGDisplayMode, getPixelHeight, arginfo_class_CGDisplayMode_getPixelHeight, ZEND_ACC_PUBLIC)
	ZEND_ME(CGDisplayMode, getRefreshRate, arginfo_class_CGDisplayMode_getRefreshRate, ZEND_ACC_PUBLIC)
	ZEND_ME(CGDisplayMode, isUsableForDesktopGUI, arginfo_class_CGDisplayMode_isUsableForDesktopGUI, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_CGDisplay_methods[] = {
	ZEND_ME(CGDisplay, __construct, arginfo_class_CGDisplay___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(CGDisplay, mainDisplayID, arginfo_class_CGDisplay_mainDisplayID, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGDisplay, getActiveDisplayList, arginfo_class_CGDisplay_getActiveDisplayList, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGDisplay, bounds, arginfo_class_CGDisplay_bounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGDisplay, copyDisplayMode, arginfo_class_CGDisplay_copyDisplayMode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGDisplay, copyAllDisplayModes, arginfo_class_CGDisplay_copyAllDisplayModes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGDisplay, setDisplayMode, arginfo_class_CGDisplay_setDisplayMode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGDisplay, capture, arginfo_class_CGDisplay_capture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGDisplay, release, arginfo_class_CGDisplay_release, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGDisplay, shieldingWindowLevel, arginfo_class_CGDisplay_shieldingWindowLevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static void register_CGDirectDisplay_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("kCGDisplayShowDuplicateLowResolutionModes", appkit_cfstring_constant(kCGDisplayShowDuplicateLowResolutionModes), CONST_PERSISTENT);
}

static zend_class_entry *register_class_CGDisplayMode(zend_class_entry *class_entry_CFType)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CGDisplayMode", class_CGDisplayMode_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_CFType, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_CGDisplay(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CGDisplay", class_CGDisplay_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
