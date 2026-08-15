
extern zend_class_entry *appkit_ns_nsviewanimation_nsviewanimation_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSViewAnimation_NSViewAnimation);

PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, createFadeIn);
PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, createFadeOut);
PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, createWithFrames);
PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, wrap);
PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, destroy);
PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, nsViewAnimation);
PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, start);
PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, stop);
PHP_METHOD(AppKit_NS_NSViewAnimation_NSViewAnimation, isAnimating);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewanimation_nsviewanimation_createfadein, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetHandle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isWindow, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, duration, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewanimation_nsviewanimation_createfadeout, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetHandle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isWindow, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, duration, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewanimation_nsviewanimation_createwithframes, 0, 11, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetHandle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isWindow, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, startX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startW, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startH, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endW, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endH, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, duration, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewanimation_nsviewanimation_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsViewAnimationPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewanimation_nsviewanimation_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewanimation_nsviewanimation_nsviewanimation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewanimation_nsviewanimation_start, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewanimation_nsviewanimation_stop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewanimation_nsviewanimation_isanimating, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsviewanimation_nsviewanimation_method_entry) {
	PHP_ME(AppKit_NS_NSViewAnimation_NSViewAnimation, createFadeIn, arginfo_appkit_ns_nsviewanimation_nsviewanimation_createfadein, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewAnimation_NSViewAnimation, createFadeOut, arginfo_appkit_ns_nsviewanimation_nsviewanimation_createfadeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewAnimation_NSViewAnimation, createWithFrames, arginfo_appkit_ns_nsviewanimation_nsviewanimation_createwithframes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewAnimation_NSViewAnimation, wrap, arginfo_appkit_ns_nsviewanimation_nsviewanimation_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewAnimation_NSViewAnimation, destroy, arginfo_appkit_ns_nsviewanimation_nsviewanimation_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewAnimation_NSViewAnimation, nsViewAnimation, arginfo_appkit_ns_nsviewanimation_nsviewanimation_nsviewanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewAnimation_NSViewAnimation, start, arginfo_appkit_ns_nsviewanimation_nsviewanimation_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewAnimation_NSViewAnimation, stop, arginfo_appkit_ns_nsviewanimation_nsviewanimation_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewAnimation_NSViewAnimation, isAnimating, arginfo_appkit_ns_nsviewanimation_nsviewanimation_isanimating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
