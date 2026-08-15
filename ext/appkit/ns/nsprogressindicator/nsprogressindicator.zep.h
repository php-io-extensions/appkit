
extern zend_class_entry *appkit_ns_nsprogressindicator_nsprogressindicator_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSProgressIndicator_NSProgressIndicator);

PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, create);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, destroy);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setIndeterminate);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMin);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMax);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setValue);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, getValue);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, start);
PHP_METHOD(AppKit_NS_NSProgressIndicator_NSProgressIndicator, stop);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setindeterminate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setmin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setmax, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_getvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_start, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_stop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsprogressindicator_nsprogressindicator_method_entry) {
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, create, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, destroy, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setIndeterminate, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setindeterminate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMin, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setmin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setMax, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setmax, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, setValue, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, getValue, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_getvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, start, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProgressIndicator_NSProgressIndicator, stop, arginfo_appkit_ns_nsprogressindicator_nsprogressindicator_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
