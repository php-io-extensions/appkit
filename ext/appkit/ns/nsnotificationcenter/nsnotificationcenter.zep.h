
extern zend_class_entry *appkit_ns_nsnotificationcenter_nsnotificationcenter_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSNotificationCenter_NSNotificationCenter);

PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, defaultCenter);
PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, postNotification);
PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, postNotificationNameObject);
PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, postNotificationNameObjectUserInfo);
PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, removeObserver);
PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, removeObserverNameObject);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_defaultcenter, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_postnotification, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, notification, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_postnotificationnameobject, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_postnotificationnameobjectuserinfo, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, userInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_removeobserver, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, observer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_removeobservernameobject, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, observer, IS_LONG, 0)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsnotificationcenter_nsnotificationcenter_method_entry) {
	PHP_ME(AppKit_NS_NSNotificationCenter_NSNotificationCenter, defaultCenter, arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_defaultcenter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSNotificationCenter_NSNotificationCenter, postNotification, arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_postnotification, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSNotificationCenter_NSNotificationCenter, postNotificationNameObject, arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_postnotificationnameobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSNotificationCenter_NSNotificationCenter, postNotificationNameObjectUserInfo, arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_postnotificationnameobjectuserinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSNotificationCenter_NSNotificationCenter, removeObserver, arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_removeobserver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSNotificationCenter_NSNotificationCenter, removeObserverNameObject, arginfo_appkit_ns_nsnotificationcenter_nsnotificationcenter_removeobservernameobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
