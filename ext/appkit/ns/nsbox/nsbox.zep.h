
extern zend_class_entry *appkit_ns_nsbox_nsbox_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSBox_NSBox);

PHP_METHOD(AppKit_NS_NSBox_NSBox, create);
PHP_METHOD(AppKit_NS_NSBox_NSBox, destroy);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setTitle);
PHP_METHOD(AppKit_NS_NSBox_NSBox, addSubview);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, box, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_addsubview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsbox_nsbox_method_entry) {
	PHP_ME(AppKit_NS_NSBox_NSBox, create, arginfo_appkit_ns_nsbox_nsbox_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, destroy, arginfo_appkit_ns_nsbox_nsbox_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setTitle, arginfo_appkit_ns_nsbox_nsbox_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, addSubview, arginfo_appkit_ns_nsbox_nsbox_addsubview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
