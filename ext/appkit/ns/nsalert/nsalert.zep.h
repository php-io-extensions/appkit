
extern zend_class_entry *appkit_ns_nsalert_nsalert_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSAlert_NSAlert);

PHP_METHOD(AppKit_NS_NSAlert_NSAlert, create);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, destroy);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setMessage);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setInfo);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, addButton);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, runModal);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, alert, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_setmessage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, alert, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_setinfo, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, alert, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_addbutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, alert, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_runmodal, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alert, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsalert_nsalert_method_entry) {
	PHP_ME(AppKit_NS_NSAlert_NSAlert, create, arginfo_appkit_ns_nsalert_nsalert_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, destroy, arginfo_appkit_ns_nsalert_nsalert_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, setMessage, arginfo_appkit_ns_nsalert_nsalert_setmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, setInfo, arginfo_appkit_ns_nsalert_nsalert_setinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, addButton, arginfo_appkit_ns_nsalert_nsalert_addbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, runModal, arginfo_appkit_ns_nsalert_nsalert_runmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
