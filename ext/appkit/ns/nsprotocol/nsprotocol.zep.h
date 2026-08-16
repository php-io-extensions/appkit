
extern zend_class_entry *appkit_ns_nsprotocol_nsprotocol_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSProtocol_NSProtocol);

PHP_METHOD(AppKit_NS_NSProtocol_NSProtocol, attach);
PHP_METHOD(AppKit_NS_NSProtocol_NSProtocol, poll);
PHP_METHOD(AppKit_NS_NSProtocol_NSProtocol, knownCount);
PHP_METHOD(AppKit_NS_NSProtocol_NSProtocol, knownAt);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprotocol_nsprotocol_attach, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, protocolName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprotocol_nsprotocol_poll, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, protocolName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprotocol_nsprotocol_knowncount, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprotocol_nsprotocol_knownat, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsprotocol_nsprotocol_method_entry) {
	PHP_ME(AppKit_NS_NSProtocol_NSProtocol, attach, arginfo_appkit_ns_nsprotocol_nsprotocol_attach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProtocol_NSProtocol, poll, arginfo_appkit_ns_nsprotocol_nsprotocol_poll, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProtocol_NSProtocol, knownCount, arginfo_appkit_ns_nsprotocol_nsprotocol_knowncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSProtocol_NSProtocol, knownAt, arginfo_appkit_ns_nsprotocol_nsprotocol_knownat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
