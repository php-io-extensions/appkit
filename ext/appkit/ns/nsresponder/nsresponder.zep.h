
extern zend_class_entry *appkit_ns_nsresponder_nsresponder_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSResponder_NSResponder);

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, wrap);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, destroy);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, nsResponder);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, acceptsFirstResponder);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, becomeFirstResponder);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, resignFirstResponder);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, nextResponder);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsResponderPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, responder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_nsresponder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, responder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_acceptsfirstresponder, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, responder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_becomefirstresponder, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, responder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_resignfirstresponder, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, responder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_nextresponder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, responder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsresponder_nsresponder_method_entry) {
	PHP_ME(AppKit_NS_NSResponder_NSResponder, wrap, arginfo_appkit_ns_nsresponder_nsresponder_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, destroy, arginfo_appkit_ns_nsresponder_nsresponder_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, nsResponder, arginfo_appkit_ns_nsresponder_nsresponder_nsresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, acceptsFirstResponder, arginfo_appkit_ns_nsresponder_nsresponder_acceptsfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, becomeFirstResponder, arginfo_appkit_ns_nsresponder_nsresponder_becomefirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, resignFirstResponder, arginfo_appkit_ns_nsresponder_nsresponder_resignfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, nextResponder, arginfo_appkit_ns_nsresponder_nsresponder_nextresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
