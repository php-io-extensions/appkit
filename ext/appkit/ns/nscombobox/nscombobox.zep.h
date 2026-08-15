
extern zend_class_entry *appkit_ns_nscombobox_nscombobox_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSComboBox_NSComboBox);

PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, create);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, destroy);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, addItem);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, removeAll);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, setStringValue);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, getStringValue);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, combo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_additem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, combo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_removeall, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, combo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_setstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, combo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_getstringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, combo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, combo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscombobox_nscombobox_method_entry) {
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, create, arginfo_appkit_ns_nscombobox_nscombobox_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, destroy, arginfo_appkit_ns_nscombobox_nscombobox_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, addItem, arginfo_appkit_ns_nscombobox_nscombobox_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, removeAll, arginfo_appkit_ns_nscombobox_nscombobox_removeall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, setStringValue, arginfo_appkit_ns_nscombobox_nscombobox_setstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, getStringValue, arginfo_appkit_ns_nscombobox_nscombobox_getstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, pollChange, arginfo_appkit_ns_nscombobox_nscombobox_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
