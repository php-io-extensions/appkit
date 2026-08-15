
extern zend_class_entry *appkit_ns_nspopupbutton_nspopupbutton_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPopUpButton_NSPopUpButton);

PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, create);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, destroy);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, addItem);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, removeAll);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, count);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, setSelected);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, getSelected);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, getSelectedTitle);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, popup, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_additem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, popup, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_removeall, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, popup, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, popup, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, popup, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_getselected, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, popup, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_getselectedtitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, popup, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, popup, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspopupbutton_nspopupbutton_method_entry) {
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, create, arginfo_appkit_ns_nspopupbutton_nspopupbutton_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, destroy, arginfo_appkit_ns_nspopupbutton_nspopupbutton_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, addItem, arginfo_appkit_ns_nspopupbutton_nspopupbutton_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, removeAll, arginfo_appkit_ns_nspopupbutton_nspopupbutton_removeall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, count, arginfo_appkit_ns_nspopupbutton_nspopupbutton_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, setSelected, arginfo_appkit_ns_nspopupbutton_nspopupbutton_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, getSelected, arginfo_appkit_ns_nspopupbutton_nspopupbutton_getselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, getSelectedTitle, arginfo_appkit_ns_nspopupbutton_nspopupbutton_getselectedtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, pollChange, arginfo_appkit_ns_nspopupbutton_nspopupbutton_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
