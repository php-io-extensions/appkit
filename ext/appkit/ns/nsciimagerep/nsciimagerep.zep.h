
extern zend_class_entry *appkit_ns_nsciimagerep_nsciimagerep_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSCIImageRep_NSCIImageRep);

PHP_METHOD(AppKit_NS_NSCIImageRep_NSCIImageRep, wrap);
PHP_METHOD(AppKit_NS_NSCIImageRep_NSCIImageRep, destroy);
PHP_METHOD(AppKit_NS_NSCIImageRep_NSCIImageRep, nsCIImageRep);
PHP_METHOD(AppKit_NS_NSCIImageRep_NSCIImageRep, withCIImage);
PHP_METHOD(AppKit_NS_NSCIImageRep_NSCIImageRep, ciImage);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsciimagerep_nsciimagerep_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsCIImageRepPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsciimagerep_nsciimagerep_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsciimagerep_nsciimagerep_nsciimagerep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsciimagerep_nsciimagerep_withciimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ciImagePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsciimagerep_nsciimagerep_ciimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsciimagerep_nsciimagerep_method_entry) {
	PHP_ME(AppKit_NS_NSCIImageRep_NSCIImageRep, wrap, arginfo_appkit_ns_nsciimagerep_nsciimagerep_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCIImageRep_NSCIImageRep, destroy, arginfo_appkit_ns_nsciimagerep_nsciimagerep_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCIImageRep_NSCIImageRep, nsCIImageRep, arginfo_appkit_ns_nsciimagerep_nsciimagerep_nsciimagerep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCIImageRep_NSCIImageRep, withCIImage, arginfo_appkit_ns_nsciimagerep_nsciimagerep_withciimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCIImageRep_NSCIImageRep, ciImage, arginfo_appkit_ns_nsciimagerep_nsciimagerep_ciimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
