
extern zend_class_entry *appkit_ns_nssecuretextfield_nssecuretextfield_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSecureTextField_NSSecureTextField);

PHP_METHOD(AppKit_NS_NSSecureTextField_NSSecureTextField, create);
PHP_METHOD(AppKit_NS_NSSecureTextField_NSSecureTextField, destroy);
PHP_METHOD(AppKit_NS_NSSecureTextField_NSSecureTextField, setStringValue);
PHP_METHOD(AppKit_NS_NSSecureTextField_NSSecureTextField, getStringValue);
PHP_METHOD(AppKit_NS_NSSecureTextField_NSSecureTextField, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_setstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_getstringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssecuretextfield_nssecuretextfield_method_entry) {
	PHP_ME(AppKit_NS_NSSecureTextField_NSSecureTextField, create, arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSecureTextField_NSSecureTextField, destroy, arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSecureTextField_NSSecureTextField, setStringValue, arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_setstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSecureTextField_NSSecureTextField, getStringValue, arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_getstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSecureTextField_NSSecureTextField, pollChange, arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
