
extern zend_class_entry *appkit_ns_nscustomimagerep_nscustomimagerep_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSCustomImageRep_NSCustomImageRep);

PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, wrap);
PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, destroy);
PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, nsCustomImageRep);
PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, create);
PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, drawSelector);
PHP_METHOD(AppKit_NS_NSCustomImageRep_NSCustomImageRep, delegate);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsCustomImageRepPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_nscustomimagerep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_create, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flipped, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_drawselector, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscustomimagerep_nscustomimagerep_method_entry) {
	PHP_ME(AppKit_NS_NSCustomImageRep_NSCustomImageRep, wrap, arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCustomImageRep_NSCustomImageRep, destroy, arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCustomImageRep_NSCustomImageRep, nsCustomImageRep, arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_nscustomimagerep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCustomImageRep_NSCustomImageRep, create, arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCustomImageRep_NSCustomImageRep, drawSelector, arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_drawselector, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCustomImageRep_NSCustomImageRep, delegate, arginfo_appkit_ns_nscustomimagerep_nscustomimagerep_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
