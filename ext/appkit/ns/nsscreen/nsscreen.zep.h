
extern zend_class_entry *appkit_ns_nsscreen_nsscreen_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSScreen_NSScreen);

PHP_METHOD(AppKit_NS_NSScreen_NSScreen, wrap);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, destroy);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, mainScreen);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, deepestScreen);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, screensCount);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, screenAt);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, screensHaveSeparateSpaces);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, frame);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, visibleFrame);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, backingScaleFactor);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, localizedName);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, depth);
PHP_METHOD(AppKit_NS_NSScreen_NSScreen, nsScreen);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsScreenPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_mainscreen, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_deepestscreen, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_screenscount, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_screenat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_screenshaveseparatespaces, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_frame, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_visibleframe, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_backingscalefactor, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_localizedname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_depth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscreen_nsscreen_nsscreen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsscreen_nsscreen_method_entry) {
	PHP_ME(AppKit_NS_NSScreen_NSScreen, wrap, arginfo_appkit_ns_nsscreen_nsscreen_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, destroy, arginfo_appkit_ns_nsscreen_nsscreen_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, mainScreen, arginfo_appkit_ns_nsscreen_nsscreen_mainscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, deepestScreen, arginfo_appkit_ns_nsscreen_nsscreen_deepestscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, screensCount, arginfo_appkit_ns_nsscreen_nsscreen_screenscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, screenAt, arginfo_appkit_ns_nsscreen_nsscreen_screenat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, screensHaveSeparateSpaces, arginfo_appkit_ns_nsscreen_nsscreen_screenshaveseparatespaces, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, frame, arginfo_appkit_ns_nsscreen_nsscreen_frame, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, visibleFrame, arginfo_appkit_ns_nsscreen_nsscreen_visibleframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, backingScaleFactor, arginfo_appkit_ns_nsscreen_nsscreen_backingscalefactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, localizedName, arginfo_appkit_ns_nsscreen_nsscreen_localizedname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, depth, arginfo_appkit_ns_nsscreen_nsscreen_depth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScreen_NSScreen, nsScreen, arginfo_appkit_ns_nsscreen_nsscreen_nsscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
