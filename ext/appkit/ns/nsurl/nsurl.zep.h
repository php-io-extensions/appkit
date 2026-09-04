
extern zend_class_entry *appkit_ns_nsurl_nsurl_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSURL_NSURL);

PHP_METHOD(AppKit_NS_NSURL_NSURL, fileURLWithPath);
PHP_METHOD(AppKit_NS_NSURL_NSURL, URLWithString);
PHP_METHOD(AppKit_NS_NSURL_NSURL, absoluteString);
PHP_METHOD(AppKit_NS_NSURL_NSURL, path);
PHP_METHOD(AppKit_NS_NSURL_NSURL, isFileURL);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsurl_nsurl_fileurlwithpath, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsurl_nsurl_urlwithstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsurl_nsurl_absolutestring, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsurl_nsurl_path, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsurl_nsurl_isfileurl, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsurl_nsurl_method_entry) {
	PHP_ME(AppKit_NS_NSURL_NSURL, fileURLWithPath, arginfo_appkit_ns_nsurl_nsurl_fileurlwithpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSURL_NSURL, URLWithString, arginfo_appkit_ns_nsurl_nsurl_urlwithstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSURL_NSURL, absoluteString, arginfo_appkit_ns_nsurl_nsurl_absolutestring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSURL_NSURL, path, arginfo_appkit_ns_nsurl_nsurl_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSURL_NSURL, isFileURL, arginfo_appkit_ns_nsurl_nsurl_isfileurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
