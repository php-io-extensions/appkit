
extern zend_class_entry *appkit_ns_nssharingservice_nssharingservice_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSharingService_NSSharingService);

PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, named);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, wrap);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, destroy);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, nsSharingService);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, getTitle);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, getMenuItemTitle);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, setMenuItemTitle);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, getSubject);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, setSubject);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, setRecipients);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, getRecipients);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, canPerformWithStrings);
PHP_METHOD(AppKit_NS_NSSharingService_NSSharingService, performWithStrings);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_named, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, serviceName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsSharingServicePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, service, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_nssharingservice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_getmenuitemtitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_setmenuitemtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, service, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_getsubject, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_setsubject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, service, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subject, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_setrecipients, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, service, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, recipients, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_getrecipients, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_canperformwithstrings, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, strings, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssharingservice_nssharingservice_performwithstrings, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, service, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, strings, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssharingservice_nssharingservice_method_entry) {
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, named, arginfo_appkit_ns_nssharingservice_nssharingservice_named, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, wrap, arginfo_appkit_ns_nssharingservice_nssharingservice_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, destroy, arginfo_appkit_ns_nssharingservice_nssharingservice_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, nsSharingService, arginfo_appkit_ns_nssharingservice_nssharingservice_nssharingservice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, getTitle, arginfo_appkit_ns_nssharingservice_nssharingservice_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, getMenuItemTitle, arginfo_appkit_ns_nssharingservice_nssharingservice_getmenuitemtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, setMenuItemTitle, arginfo_appkit_ns_nssharingservice_nssharingservice_setmenuitemtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, getSubject, arginfo_appkit_ns_nssharingservice_nssharingservice_getsubject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, setSubject, arginfo_appkit_ns_nssharingservice_nssharingservice_setsubject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, setRecipients, arginfo_appkit_ns_nssharingservice_nssharingservice_setrecipients, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, getRecipients, arginfo_appkit_ns_nssharingservice_nssharingservice_getrecipients, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, canPerformWithStrings, arginfo_appkit_ns_nssharingservice_nssharingservice_canperformwithstrings, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSharingService_NSSharingService, performWithStrings, arginfo_appkit_ns_nssharingservice_nssharingservice_performwithstrings, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
