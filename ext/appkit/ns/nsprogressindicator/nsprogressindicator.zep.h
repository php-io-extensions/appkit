
extern zend_class_entry *appkit_ns_nsprogressindicator_nsprogressindicator_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSProgressIndicator_NSProgressIndicator);

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, initWithFrame);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, isIndeterminate);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setIndeterminate);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, controlSize);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setControlSize);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, doubleValue);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setDoubleValue);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, incrementBy);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, minValue);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMinValue);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, maxValue);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMaxValue);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, observedProgress);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setObservedProgress);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, usesThreadedAnimation);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setUsesThreadedAnimation);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, startAnimation);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, stopAnimation);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, style);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setStyle);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, sizeToFit);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, isDisplayedWhenStopped);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setDisplayedWhenStopped);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_isindeterminate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setindeterminate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indeterminate, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_controlsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setcontrolsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controlSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_doublevalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setdoublevalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doubleValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_incrementby, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delta, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_minvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setminvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_maxvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setmaxvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_observedprogress, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setobservedprogress, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, observedProgress, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_usesthreadedanimation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setusesthreadedanimation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesThreadedAnimation, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_startanimation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_stopanimation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_style, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_sizetofit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_isdisplayedwhenstopped, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setdisplayedwhenstopped, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, displayedWhenStopped, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsprogressindicator_nsprogressindicator_method_entry) {
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, initWithFrame, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, isIndeterminate, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_isindeterminate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setIndeterminate, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setindeterminate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, controlSize, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_controlsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setControlSize, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setcontrolsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, doubleValue, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_doublevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setDoubleValue, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setdoublevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, incrementBy, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_incrementby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, minValue, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_minvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMinValue, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setminvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, maxValue, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_maxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMaxValue, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setmaxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, observedProgress, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_observedprogress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setObservedProgress, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setobservedprogress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, usesThreadedAnimation, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_usesthreadedanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setUsesThreadedAnimation, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setusesthreadedanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, startAnimation, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_startanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, stopAnimation, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_stopanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, style, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_style, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setStyle, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, sizeToFit, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_sizetofit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, isDisplayedWhenStopped, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_isdisplayedwhenstopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setDisplayedWhenStopped, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setdisplayedwhenstopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
