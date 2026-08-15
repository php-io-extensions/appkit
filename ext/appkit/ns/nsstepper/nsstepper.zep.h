
extern zend_class_entry *appkit_ns_nsstepper_nsstepper_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStepper_NSStepper);

PHP_METHOD(AppKit_NS_NSStepper_NSStepper, create);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, destroy);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, setValue);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, getValue);
PHP_METHOD(AppKit_NS_NSStepper_NSStepper, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, stepper, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_setvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, stepper, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_getvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, stepper, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstepper_nsstepper_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, stepper, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsstepper_nsstepper_method_entry) {
	PHP_ME(AppKit_NS_NSStepper_NSStepper, create, arginfo_appkit_ns_nsstepper_nsstepper_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, destroy, arginfo_appkit_ns_nsstepper_nsstepper_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, setValue, arginfo_appkit_ns_nsstepper_nsstepper_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, getValue, arginfo_appkit_ns_nsstepper_nsstepper_getvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepper_NSStepper, pollChange, arginfo_appkit_ns_nsstepper_nsstepper_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
