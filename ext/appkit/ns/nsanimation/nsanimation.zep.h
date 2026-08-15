
extern zend_class_entry *appkit_ns_nsanimation_nsanimation_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSAnimation_NSAnimation);

PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, create);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, wrap);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, destroy);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, nsAnimation);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, start);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, stop);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, isAnimating);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, setCurrentProgress);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getCurrentProgress);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, setDuration);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getDuration);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, setBlockingMode);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getBlockingMode);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, setFrameRate);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getFrameRate);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, setCurve);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getCurve);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, getCurrentValue);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, addProgressMark);
PHP_METHOD(AppKit_NS_NSAnimation_NSAnimation, removeProgressMark);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, duration, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, curve, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsAnimationPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_nsanimation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_start, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_stop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_isanimating, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_setcurrentprogress, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, progress, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_getcurrentprogress, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_setduration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, duration, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_getduration, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_setblockingmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_getblockingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_setframerate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frameRate, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_getframerate, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_setcurve, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, curve, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_getcurve, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_getcurrentvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_addprogressmark, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mark, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsanimation_nsanimation_removeprogressmark, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, animation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mark, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsanimation_nsanimation_method_entry) {
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, create, arginfo_appkit_ns_nsanimation_nsanimation_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, wrap, arginfo_appkit_ns_nsanimation_nsanimation_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, destroy, arginfo_appkit_ns_nsanimation_nsanimation_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, nsAnimation, arginfo_appkit_ns_nsanimation_nsanimation_nsanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, start, arginfo_appkit_ns_nsanimation_nsanimation_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, stop, arginfo_appkit_ns_nsanimation_nsanimation_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, isAnimating, arginfo_appkit_ns_nsanimation_nsanimation_isanimating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, setCurrentProgress, arginfo_appkit_ns_nsanimation_nsanimation_setcurrentprogress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, getCurrentProgress, arginfo_appkit_ns_nsanimation_nsanimation_getcurrentprogress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, setDuration, arginfo_appkit_ns_nsanimation_nsanimation_setduration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, getDuration, arginfo_appkit_ns_nsanimation_nsanimation_getduration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, setBlockingMode, arginfo_appkit_ns_nsanimation_nsanimation_setblockingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, getBlockingMode, arginfo_appkit_ns_nsanimation_nsanimation_getblockingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, setFrameRate, arginfo_appkit_ns_nsanimation_nsanimation_setframerate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, getFrameRate, arginfo_appkit_ns_nsanimation_nsanimation_getframerate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, setCurve, arginfo_appkit_ns_nsanimation_nsanimation_setcurve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, getCurve, arginfo_appkit_ns_nsanimation_nsanimation_getcurve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, getCurrentValue, arginfo_appkit_ns_nsanimation_nsanimation_getcurrentvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, addProgressMark, arginfo_appkit_ns_nsanimation_nsanimation_addprogressmark, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAnimation_NSAnimation, removeProgressMark, arginfo_appkit_ns_nsanimation_nsanimation_removeprogressmark, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
