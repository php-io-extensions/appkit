
extern zend_class_entry *appkit_ns_nssecuretextfield_nssecuretextfield_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSecureTextField_NSSecureTextField);

PHP_METHOD(AppKit_NS_NSSecureTextField_NSSecureTextField, initWithFrame);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssecuretextfield_nssecuretextfield_method_entry) {
	PHP_ME(AppKit_NS_NSSecureTextField_NSSecureTextField, initWithFrame, arginfo_appkit_ns_nssecuretextfield_nssecuretextfield_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
