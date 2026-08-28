
extern zend_class_entry *appkit_ns_nsscreen_nsscreen_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSScreen_NSScreen);

PHP_METHOD(AppKit_NS_NSScreen_NSScreen, screens);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, mainScreen);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, deepestScreen);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, screensHaveSeparateSpaces);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, depth);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, frame);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, visibleFrame);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, deviceDescription);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, colorSpace);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, canRepresentDisplayGamut);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, convertRectToBacking);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, convertRectFromBacking);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, backingAlignedRectOptions);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, backingScaleFactor);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, localizedName);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, safeAreaInsets);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, auxiliaryTopLeftArea);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, auxiliaryTopRightArea);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, maximumExtendedDynamicRangeColorComponentValue);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, maximumPotentialExtendedDynamicRangeColorComponentValue);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, maximumReferenceExtendedDynamicRangeColorComponentValue);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, maximumFramesPerSecond);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, minimumRefreshInterval);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, maximumRefreshInterval);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, displayUpdateGranularity);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, lastDisplayUpdateTimestamp);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, displayLinkWithTargetSelector);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_screens, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_mainscreen, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_deepestscreen, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_screenshaveseparatespaces, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_depth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_frame, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_visibleframe, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_devicedescription, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_colorspace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_canrepresentdisplaygamut, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, displayGamut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_convertrecttobacking, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_convertrectfrombacking, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_backingalignedrectoptions, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_backingscalefactor, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_localizedname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_safeareainsets, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_auxiliarytopleftarea, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_auxiliarytoprightarea, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_maximumextendeddynamicrangecolorcomponentvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_maximumpotentialextendeddynamicrangecolorcomponentvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_maximumreferenceextendeddynamicrangecolorcomponentvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_maximumframespersecond, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_minimumrefreshinterval, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_maximumrefreshinterval, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_displayupdategranularity, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_lastdisplayupdatetimestamp, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_displaylinkwithtargetselector, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsscreen_nsscreen_method_entry) {
	PHP_ME(AppKit_NS_NSScreen_NSScreen, screens, arginfo_appkit_ns_nsscreen_nsscreen_screens, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, mainScreen, arginfo_appkit_ns_nsscreen_nsscreen_mainscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, deepestScreen, arginfo_appkit_ns_nsscreen_nsscreen_deepestscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, screensHaveSeparateSpaces, arginfo_appkit_ns_nsscreen_nsscreen_screenshaveseparatespaces, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, depth, arginfo_appkit_ns_nsscreen_nsscreen_depth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, frame, arginfo_appkit_ns_nsscreen_nsscreen_frame, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, visibleFrame, arginfo_appkit_ns_nsscreen_nsscreen_visibleframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, deviceDescription, arginfo_appkit_ns_nsscreen_nsscreen_devicedescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, colorSpace, arginfo_appkit_ns_nsscreen_nsscreen_colorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, canRepresentDisplayGamut, arginfo_appkit_ns_nsscreen_nsscreen_canrepresentdisplaygamut, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, convertRectToBacking, arginfo_appkit_ns_nsscreen_nsscreen_convertrecttobacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, convertRectFromBacking, arginfo_appkit_ns_nsscreen_nsscreen_convertrectfrombacking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, backingAlignedRectOptions, arginfo_appkit_ns_nsscreen_nsscreen_backingalignedrectoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, backingScaleFactor, arginfo_appkit_ns_nsscreen_nsscreen_backingscalefactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, localizedName, arginfo_appkit_ns_nsscreen_nsscreen_localizedname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, safeAreaInsets, arginfo_appkit_ns_nsscreen_nsscreen_safeareainsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, auxiliaryTopLeftArea, arginfo_appkit_ns_nsscreen_nsscreen_auxiliarytopleftarea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, auxiliaryTopRightArea, arginfo_appkit_ns_nsscreen_nsscreen_auxiliarytoprightarea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, maximumExtendedDynamicRangeColorComponentValue, arginfo_appkit_ns_nsscreen_nsscreen_maximumextendeddynamicrangecolorcomponentvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, maximumPotentialExtendedDynamicRangeColorComponentValue, arginfo_appkit_ns_nsscreen_nsscreen_maximumpotentialextendeddynamicrangecolorcomponentvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, maximumReferenceExtendedDynamicRangeColorComponentValue, arginfo_appkit_ns_nsscreen_nsscreen_maximumreferenceextendeddynamicrangecolorcomponentvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, maximumFramesPerSecond, arginfo_appkit_ns_nsscreen_nsscreen_maximumframespersecond, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, minimumRefreshInterval, arginfo_appkit_ns_nsscreen_nsscreen_minimumrefreshinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, maximumRefreshInterval, arginfo_appkit_ns_nsscreen_nsscreen_maximumrefreshinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, displayUpdateGranularity, arginfo_appkit_ns_nsscreen_nsscreen_displayupdategranularity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, lastDisplayUpdateTimestamp, arginfo_appkit_ns_nsscreen_nsscreen_lastdisplayupdatetimestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, displayLinkWithTargetSelector, arginfo_appkit_ns_nsscreen_nsscreen_displaylinkwithtargetselector, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
