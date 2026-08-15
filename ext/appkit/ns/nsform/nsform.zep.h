
extern zend_class_entry *appkit_ns_nsform_nsform_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSForm_NSForm);

PHP_METHOD(AppKit_NS_NSForm_NSForm, create);
PHP_METHOD(AppKit_NS_NSForm_NSForm, destroy);
PHP_METHOD(AppKit_NS_NSForm_NSForm, addEntry);
PHP_METHOD(AppKit_NS_NSForm_NSForm, setTitleAt);
PHP_METHOD(AppKit_NS_NSForm_NSForm, getTitleAt);
PHP_METHOD(AppKit_NS_NSForm_NSForm, setValueAt);
PHP_METHOD(AppKit_NS_NSForm_NSForm, getValueAt);
PHP_METHOD(AppKit_NS_NSForm_NSForm, cellAt);
PHP_METHOD(AppKit_NS_NSForm_NSForm, numberOfRows);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsform_nsform_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsform_nsform_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, form, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsform_nsform_addentry, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, form, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsform_nsform_settitleat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, form, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsform_nsform_gettitleat, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, form, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsform_nsform_setvalueat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, form, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsform_nsform_getvalueat, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, form, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsform_nsform_cellat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, form, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsform_nsform_numberofrows, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, form, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsform_nsform_method_entry) {
	PHP_ME(AppKit_NS_NSForm_NSForm, create, arginfo_appkit_ns_nsform_nsform_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSForm_NSForm, destroy, arginfo_appkit_ns_nsform_nsform_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSForm_NSForm, addEntry, arginfo_appkit_ns_nsform_nsform_addentry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSForm_NSForm, setTitleAt, arginfo_appkit_ns_nsform_nsform_settitleat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSForm_NSForm, getTitleAt, arginfo_appkit_ns_nsform_nsform_gettitleat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSForm_NSForm, setValueAt, arginfo_appkit_ns_nsform_nsform_setvalueat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSForm_NSForm, getValueAt, arginfo_appkit_ns_nsform_nsform_getvalueat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSForm_NSForm, cellAt, arginfo_appkit_ns_nsform_nsform_cellat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSForm_NSForm, numberOfRows, arginfo_appkit_ns_nsform_nsform_numberofrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
