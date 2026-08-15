
extern zend_class_entry *appkit_ns_nsbutton_nsbutton_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSButton_NSButton);

PHP_METHOD(AppKit_NS_NSButton_NSButton, create);
PHP_METHOD(AppKit_NS_NSButton_NSButton, createCheckbox);
PHP_METHOD(AppKit_NS_NSButton_NSButton, createRadio);
PHP_METHOD(AppKit_NS_NSButton_NSButton, destroy);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setTitle);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setChecked);
PHP_METHOD(AppKit_NS_NSButton_NSButton, isChecked);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setSelected);
PHP_METHOD(AppKit_NS_NSButton_NSButton, isSelected);
PHP_METHOD(AppKit_NS_NSButton_NSButton, pollClick);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_create, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_createcheckbox, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_createradio, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setchecked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checked, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_ischecked, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selected, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_isselected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_pollclick, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsbutton_nsbutton_method_entry) {
	PHP_ME(AppKit_NS_NSButton_NSButton, create, arginfo_appkit_ns_nsbutton_nsbutton_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, createCheckbox, arginfo_appkit_ns_nsbutton_nsbutton_createcheckbox, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, createRadio, arginfo_appkit_ns_nsbutton_nsbutton_createradio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, destroy, arginfo_appkit_ns_nsbutton_nsbutton_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setTitle, arginfo_appkit_ns_nsbutton_nsbutton_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setChecked, arginfo_appkit_ns_nsbutton_nsbutton_setchecked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, isChecked, arginfo_appkit_ns_nsbutton_nsbutton_ischecked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setSelected, arginfo_appkit_ns_nsbutton_nsbutton_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, isSelected, arginfo_appkit_ns_nsbutton_nsbutton_isselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, pollClick, arginfo_appkit_ns_nsbutton_nsbutton_pollclick, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
