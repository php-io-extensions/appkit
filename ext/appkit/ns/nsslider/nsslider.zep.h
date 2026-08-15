
extern zend_class_entry *appkit_ns_nsslider_nsslider_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSlider_NSSlider);

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, create);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, destroy);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setValue);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, getValue);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, slider, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_setvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, slider, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_getvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, slider, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, slider, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsslider_nsslider_method_entry) {
	PHP_ME(AppKit_NS_NSSlider_NSSlider, create, arginfo_appkit_ns_nsslider_nsslider_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, destroy, arginfo_appkit_ns_nsslider_nsslider_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, setValue, arginfo_appkit_ns_nsslider_nsslider_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, getValue, arginfo_appkit_ns_nsslider_nsslider_getvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, pollChange, arginfo_appkit_ns_nsslider_nsslider_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
