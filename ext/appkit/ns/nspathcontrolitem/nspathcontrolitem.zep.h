
extern zend_class_entry *appkit_ns_nspathcontrolitem_nspathcontrolitem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPathControlItem_NSPathControlItem);

PHP_METHOD(AppKit_NS_NSPathControlItem_NSPathControlItem, init);
PHP_METHOD(AppKit_NS_NSPathControlItem_NSPathControlItem, title);
PHP_METHOD(AppKit_NS_NSPathControlItem_NSPathControlItem, setTitle);
PHP_METHOD(AppKit_NS_NSPathControlItem_NSPathControlItem, image);
PHP_METHOD(AppKit_NS_NSPathControlItem_NSPathControlItem, setImage);
PHP_METHOD(AppKit_NS_NSPathControlItem_NSPathControlItem, Url);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_image, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_url, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspathcontrolitem_nspathcontrolitem_method_entry) {
	PHP_ME(AppKit_NS_NSPathControlItem_NSPathControlItem, init, arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControlItem_NSPathControlItem, title, arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControlItem_NSPathControlItem, setTitle, arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControlItem_NSPathControlItem, image, arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_image, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControlItem_NSPathControlItem, setImage, arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControlItem_NSPathControlItem, Url, arginfo_appkit_ns_nspathcontrolitem_nspathcontrolitem_url, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
