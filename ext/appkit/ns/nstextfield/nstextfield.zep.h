
extern zend_class_entry *appkit_ns_nstextfield_nstextfield_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextField_NSTextField);

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, create);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, createLabel);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, destroy);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, destroyLabel);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setStringValue);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, getStringValue);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setEditable);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_createlabel, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_destroylabel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_getstringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextfield_nstextfield_method_entry) {
	PHP_ME(AppKit_NS_NSTextField_NSTextField, create, arginfo_appkit_ns_nstextfield_nstextfield_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, createLabel, arginfo_appkit_ns_nstextfield_nstextfield_createlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, destroy, arginfo_appkit_ns_nstextfield_nstextfield_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, destroyLabel, arginfo_appkit_ns_nstextfield_nstextfield_destroylabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setStringValue, arginfo_appkit_ns_nstextfield_nstextfield_setstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, getStringValue, arginfo_appkit_ns_nstextfield_nstextfield_getstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setEditable, arginfo_appkit_ns_nstextfield_nstextfield_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, pollChange, arginfo_appkit_ns_nstextfield_nstextfield_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
