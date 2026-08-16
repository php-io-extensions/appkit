
extern zend_class_entry *appkit_ns_nsaccessibility_nsaccessibility_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSAccessibility_NSAccessibility);

PHP_METHOD(AppKit_NS_NSAccessibility_NSAccessibility, attach);
PHP_METHOD(AppKit_NS_NSAccessibility_NSAccessibility, poll);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsaccessibility_nsaccessibility_attach, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsaccessibility_nsaccessibility_poll, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsaccessibility_nsaccessibility_method_entry) {
	PHP_ME(AppKit_NS_NSAccessibility_NSAccessibility, attach, arginfo_appkit_ns_nsaccessibility_nsaccessibility_attach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAccessibility_NSAccessibility, poll, arginfo_appkit_ns_nsaccessibility_nsaccessibility_poll, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
