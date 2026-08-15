
extern zend_class_entry *appkit_ns_nstokenfield_nstokenfield_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTokenField_NSTokenField);

PHP_METHOD(AppKit_NS_NSTokenField_NSTokenField, create);
PHP_METHOD(AppKit_NS_NSTokenField_NSTokenField, destroy);
PHP_METHOD(AppKit_NS_NSTokenField_NSTokenField, setStringValue);
PHP_METHOD(AppKit_NS_NSTokenField_NSTokenField, getStringValue);
PHP_METHOD(AppKit_NS_NSTokenField_NSTokenField, setTokenStyle);
PHP_METHOD(AppKit_NS_NSTokenField_NSTokenField, getTokenStyle);
PHP_METHOD(AppKit_NS_NSTokenField_NSTokenField, setCompletionDelay);
PHP_METHOD(AppKit_NS_NSTokenField_NSTokenField, getCompletionDelay);
PHP_METHOD(AppKit_NS_NSTokenField_NSTokenField, defaultCompletionDelay);
PHP_METHOD(AppKit_NS_NSTokenField_NSTokenField, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfield_nstokenfield_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfield_nstokenfield_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfield_nstokenfield_setstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfield_nstokenfield_getstringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfield_nstokenfield_settokenstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfield_nstokenfield_gettokenstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfield_nstokenfield_setcompletiondelay, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delay, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfield_nstokenfield_getcompletiondelay, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfield_nstokenfield_defaultcompletiondelay, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfield_nstokenfield_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstokenfield_nstokenfield_method_entry) {
	PHP_ME(AppKit_NS_NSTokenField_NSTokenField, create, arginfo_appkit_ns_nstokenfield_nstokenfield_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenField_NSTokenField, destroy, arginfo_appkit_ns_nstokenfield_nstokenfield_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenField_NSTokenField, setStringValue, arginfo_appkit_ns_nstokenfield_nstokenfield_setstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenField_NSTokenField, getStringValue, arginfo_appkit_ns_nstokenfield_nstokenfield_getstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenField_NSTokenField, setTokenStyle, arginfo_appkit_ns_nstokenfield_nstokenfield_settokenstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenField_NSTokenField, getTokenStyle, arginfo_appkit_ns_nstokenfield_nstokenfield_gettokenstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenField_NSTokenField, setCompletionDelay, arginfo_appkit_ns_nstokenfield_nstokenfield_setcompletiondelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenField_NSTokenField, getCompletionDelay, arginfo_appkit_ns_nstokenfield_nstokenfield_getcompletiondelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenField_NSTokenField, defaultCompletionDelay, arginfo_appkit_ns_nstokenfield_nstokenfield_defaultcompletiondelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenField_NSTokenField, pollChange, arginfo_appkit_ns_nstokenfield_nstokenfield_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
