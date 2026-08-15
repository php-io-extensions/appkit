
extern zend_class_entry *appkit_ns_nsimageview_nsimageview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSImageView_NSImageView);

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, create);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, destroy);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setPath);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setpath, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsimageview_nsimageview_method_entry) {
	PHP_ME(AppKit_NS_NSImageView_NSImageView, create, arginfo_appkit_ns_nsimageview_nsimageview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, destroy, arginfo_appkit_ns_nsimageview_nsimageview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setPath, arginfo_appkit_ns_nsimageview_nsimageview_setpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
