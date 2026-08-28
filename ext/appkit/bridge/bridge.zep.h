
extern zend_class_entry *appkit_bridge_bridge_ce;

ZEPHIR_INIT_CLASS(AppKit_Bridge_Bridge);

PHP_METHOD(AppKit_Bridge_Bridge, retain);
PHP_METHOD(AppKit_Bridge_Bridge, release);
PHP_METHOD(AppKit_Bridge_Bridge, isValid);
PHP_METHOD(AppKit_Bridge_Bridge, className);
PHP_METHOD(AppKit_Bridge_Bridge, isKindOfClass);
PHP_METHOD(AppKit_Bridge_Bridge, pump);
PHP_METHOD(AppKit_Bridge_Bridge, setAction);
PHP_METHOD(AppKit_Bridge_Bridge, removeAction);
PHP_METHOD(AppKit_Bridge_Bridge, observeNotification);
PHP_METHOD(AppKit_Bridge_Bridge, removeObserver);
PHP_METHOD(AppKit_Bridge_Bridge, delegateNew);
PHP_METHOD(AppKit_Bridge_Bridge, delegateOn);
PHP_METHOD(AppKit_Bridge_Bridge, delegateOff);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_retain, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_release, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_bridge_bridge_classname, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_iskindofclass, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, className, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_pump, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_setaction, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, callable_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_removeaction, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_observenotification, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_INFO(0, callable_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_removeobserver, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, token, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_delegatenew, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, protocolName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_delegateon, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_INFO(0, callable_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_bridge_bridge_delegateoff, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_bridge_bridge_method_entry) {
	PHP_ME(AppKit_Bridge_Bridge, retain, arginfo_appkit_bridge_bridge_retain, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, release, arginfo_appkit_bridge_bridge_release, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, isValid, arginfo_appkit_bridge_bridge_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, className, arginfo_appkit_bridge_bridge_classname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, isKindOfClass, arginfo_appkit_bridge_bridge_iskindofclass, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, pump, arginfo_appkit_bridge_bridge_pump, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, setAction, arginfo_appkit_bridge_bridge_setaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, removeAction, arginfo_appkit_bridge_bridge_removeaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, observeNotification, arginfo_appkit_bridge_bridge_observenotification, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, removeObserver, arginfo_appkit_bridge_bridge_removeobserver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, delegateNew, arginfo_appkit_bridge_bridge_delegatenew, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, delegateOn, arginfo_appkit_bridge_bridge_delegateon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_Bridge_Bridge, delegateOff, arginfo_appkit_bridge_bridge_delegateoff, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
