
extern zend_class_entry *appkit_ns_nsstepper_nsstepper_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStepper_NSStepper);

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, initWithFrame);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, minValue);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setMinValue);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, maxValue);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setMaxValue);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, increment);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setIncrement);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, valueWraps);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setValueWraps);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, autorepeat);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setAutorepeat);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_minvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_setminvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_maxvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_setmaxvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_increment, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_setincrement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, increment, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_valuewraps, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_setvaluewraps, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueWraps, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_autorepeat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_setautorepeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autorepeat, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsstepper_nsstepper_method_entry) {
	PHP_ME(AppKit_NS_NSStepper_NSStepper, initWithFrame, arginfo_appkit_ns_nsstepper_nsstepper_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, minValue, arginfo_appkit_ns_nsstepper_nsstepper_minvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, setMinValue, arginfo_appkit_ns_nsstepper_nsstepper_setminvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, maxValue, arginfo_appkit_ns_nsstepper_nsstepper_maxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, setMaxValue, arginfo_appkit_ns_nsstepper_nsstepper_setmaxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, increment, arginfo_appkit_ns_nsstepper_nsstepper_increment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, setIncrement, arginfo_appkit_ns_nsstepper_nsstepper_setincrement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, valueWraps, arginfo_appkit_ns_nsstepper_nsstepper_valuewraps, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, setValueWraps, arginfo_appkit_ns_nsstepper_nsstepper_setvaluewraps, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, autorepeat, arginfo_appkit_ns_nsstepper_nsstepper_autorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, setAutorepeat, arginfo_appkit_ns_nsstepper_nsstepper_setautorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
