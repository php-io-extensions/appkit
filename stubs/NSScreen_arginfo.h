/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 5f3f9b09f20789101e88b0cc506ab8f1633df887 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSScreen_mainScreen, 0, 0, NSScreen, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSScreen_screens, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSScreen_frame, 0, 0, NSRect, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSScreen_visibleFrame arginfo_class_NSScreen_frame

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSScreen_backingScaleFactor, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSScreen_maximumFramesPerSecond, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSScreen_localizedName, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSScreen_deviceDescription arginfo_class_NSScreen_screens

#define arginfo_class_NSScreen_maximumExtendedDynamicRangeColorComponentValue arginfo_class_NSScreen_backingScaleFactor

#define arginfo_class_NSScreen_maximumPotentialExtendedDynamicRangeColorComponentValue arginfo_class_NSScreen_backingScaleFactor

ZEND_METHOD(NSScreen, mainScreen);
ZEND_METHOD(NSScreen, screens);
ZEND_METHOD(NSScreen, frame);
ZEND_METHOD(NSScreen, visibleFrame);
ZEND_METHOD(NSScreen, backingScaleFactor);
ZEND_METHOD(NSScreen, maximumFramesPerSecond);
ZEND_METHOD(NSScreen, localizedName);
ZEND_METHOD(NSScreen, deviceDescription);
ZEND_METHOD(NSScreen, maximumExtendedDynamicRangeColorComponentValue);
ZEND_METHOD(NSScreen, maximumPotentialExtendedDynamicRangeColorComponentValue);

static const zend_function_entry class_NSScreen_methods[] = {
	ZEND_ME(NSScreen, mainScreen, arginfo_class_NSScreen_mainScreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSScreen, screens, arginfo_class_NSScreen_screens, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSScreen, frame, arginfo_class_NSScreen_frame, ZEND_ACC_PUBLIC)
	ZEND_ME(NSScreen, visibleFrame, arginfo_class_NSScreen_visibleFrame, ZEND_ACC_PUBLIC)
	ZEND_ME(NSScreen, backingScaleFactor, arginfo_class_NSScreen_backingScaleFactor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSScreen, maximumFramesPerSecond, arginfo_class_NSScreen_maximumFramesPerSecond, ZEND_ACC_PUBLIC)
	ZEND_ME(NSScreen, localizedName, arginfo_class_NSScreen_localizedName, ZEND_ACC_PUBLIC)
	ZEND_ME(NSScreen, deviceDescription, arginfo_class_NSScreen_deviceDescription, ZEND_ACC_PUBLIC)
	ZEND_ME(NSScreen, maximumExtendedDynamicRangeColorComponentValue, arginfo_class_NSScreen_maximumExtendedDynamicRangeColorComponentValue, ZEND_ACC_PUBLIC)
	ZEND_ME(NSScreen, maximumPotentialExtendedDynamicRangeColorComponentValue, arginfo_class_NSScreen_maximumPotentialExtendedDynamicRangeColorComponentValue, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSScreen(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSScreen", class_NSScreen_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
