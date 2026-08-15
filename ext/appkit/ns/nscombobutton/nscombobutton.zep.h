
extern zend_class_entry *appkit_ns_nscombobutton_nscombobutton_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSComboButton_NSComboButton);

PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, createWithTitle);
PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, destroy);
PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, setTitle);
PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, getTitle);
PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, setImage);
PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, setMenu);
PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, getMenu);
PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, setStyle);
PHP_METHOD(AppKit_NS_NSComboButton_NSComboButton, getStyle);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobutton_nscombobutton_createwithtitle, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, menuHandle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobutton_nscombobutton_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobutton_nscombobutton_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobutton_nscombobutton_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobutton_nscombobutton_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, imageHandle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobutton_nscombobutton_setmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menuHandle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobutton_nscombobutton_getmenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobutton_nscombobutton_setstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobutton_nscombobutton_getstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscombobutton_nscombobutton_method_entry) {
	PHP_ME(AppKit_NS_NSComboButton_NSComboButton, createWithTitle, arginfo_appkit_ns_nscombobutton_nscombobutton_createwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboButton_NSComboButton, destroy, arginfo_appkit_ns_nscombobutton_nscombobutton_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboButton_NSComboButton, setTitle, arginfo_appkit_ns_nscombobutton_nscombobutton_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboButton_NSComboButton, getTitle, arginfo_appkit_ns_nscombobutton_nscombobutton_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboButton_NSComboButton, setImage, arginfo_appkit_ns_nscombobutton_nscombobutton_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboButton_NSComboButton, setMenu, arginfo_appkit_ns_nscombobutton_nscombobutton_setmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboButton_NSComboButton, getMenu, arginfo_appkit_ns_nscombobutton_nscombobutton_getmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboButton_NSComboButton, setStyle, arginfo_appkit_ns_nscombobutton_nscombobutton_setstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboButton_NSComboButton, getStyle, arginfo_appkit_ns_nscombobutton_nscombobutton_getstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
