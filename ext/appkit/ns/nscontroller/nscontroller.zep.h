
extern zend_class_entry *appkit_ns_nscontroller_nscontroller_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSController_NSController);

PHP_METHOD(AppKit_NS_NSController_NSController, create);
PHP_METHOD(AppKit_NS_NSController_NSController, wrap);
PHP_METHOD(AppKit_NS_NSController_NSController, destroy);
PHP_METHOD(AppKit_NS_NSController_NSController, nsController);
PHP_METHOD(AppKit_NS_NSController_NSController, discardEditing);
PHP_METHOD(AppKit_NS_NSController_NSController, commitEditing);
PHP_METHOD(AppKit_NS_NSController_NSController, isEditing);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontroller_nscontroller_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontroller_nscontroller_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsControllerPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontroller_nscontroller_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontroller_nscontroller_nscontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontroller_nscontroller_discardediting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontroller_nscontroller_commitediting, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontroller_nscontroller_isediting, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscontroller_nscontroller_method_entry) {
	PHP_ME(AppKit_NS_NSController_NSController, create, arginfo_appkit_ns_nscontroller_nscontroller_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSController_NSController, wrap, arginfo_appkit_ns_nscontroller_nscontroller_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSController_NSController, destroy, arginfo_appkit_ns_nscontroller_nscontroller_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSController_NSController, nsController, arginfo_appkit_ns_nscontroller_nscontroller_nscontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSController_NSController, discardEditing, arginfo_appkit_ns_nscontroller_nscontroller_discardediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSController_NSController, commitEditing, arginfo_appkit_ns_nscontroller_nscontroller_commitediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSController_NSController, isEditing, arginfo_appkit_ns_nscontroller_nscontroller_isediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
