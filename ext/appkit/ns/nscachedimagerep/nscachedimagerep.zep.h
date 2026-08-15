
extern zend_class_entry *appkit_ns_nscachedimagerep_nscachedimagerep_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSCachedImageRep_NSCachedImageRep);

PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, wrap);
PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, destroy);
PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, nsCachedImageRep);
PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, withWindowRect);
PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, withSize);
PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, window);
PHP_METHOD(AppKit_NS_NSCachedImageRep_NSCachedImageRep, getRect);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsCachedImageRepPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_nscachedimagerep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_withwindowrect, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_withsize, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, depth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, separate, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_window, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_getrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscachedimagerep_nscachedimagerep_method_entry) {
	PHP_ME(AppKit_NS_NSCachedImageRep_NSCachedImageRep, wrap, arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCachedImageRep_NSCachedImageRep, destroy, arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCachedImageRep_NSCachedImageRep, nsCachedImageRep, arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_nscachedimagerep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCachedImageRep_NSCachedImageRep, withWindowRect, arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_withwindowrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCachedImageRep_NSCachedImageRep, withSize, arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_withsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCachedImageRep_NSCachedImageRep, window, arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_window, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCachedImageRep_NSCachedImageRep, getRect, arginfo_appkit_ns_nscachedimagerep_nscachedimagerep_getrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
