
extern zend_class_entry *appkit_ns_nsshadow_nsshadow_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSShadow_NSShadow);

PHP_METHOD(AppKit_NS_NSShadow_NSShadow, create);
PHP_METHOD(AppKit_NS_NSShadow_NSShadow, wrap);
PHP_METHOD(AppKit_NS_NSShadow_NSShadow, destroy);
PHP_METHOD(AppKit_NS_NSShadow_NSShadow, nsShadow);
PHP_METHOD(AppKit_NS_NSShadow_NSShadow, setOffset);
PHP_METHOD(AppKit_NS_NSShadow_NSShadow, getOffset);
PHP_METHOD(AppKit_NS_NSShadow_NSShadow, setBlurRadius);
PHP_METHOD(AppKit_NS_NSShadow_NSShadow, getBlurRadius);
PHP_METHOD(AppKit_NS_NSShadow_NSShadow, setColor);
PHP_METHOD(AppKit_NS_NSShadow_NSShadow, getColor);
PHP_METHOD(AppKit_NS_NSShadow_NSShadow, set);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsshadow_nsshadow_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsshadow_nsshadow_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsShadowPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsshadow_nsshadow_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, shadow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsshadow_nsshadow_nsshadow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shadow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsshadow_nsshadow_setoffset, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, shadow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsshadow_nsshadow_getoffset, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, shadow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsshadow_nsshadow_setblurradius, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, shadow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsshadow_nsshadow_getblurradius, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, shadow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsshadow_nsshadow_setcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, shadow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsshadow_nsshadow_getcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shadow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsshadow_nsshadow_set, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, shadow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsshadow_nsshadow_method_entry) {
	PHP_ME(AppKit_NS_NSShadow_NSShadow, create, arginfo_appkit_ns_nsshadow_nsshadow_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSShadow_NSShadow, wrap, arginfo_appkit_ns_nsshadow_nsshadow_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSShadow_NSShadow, destroy, arginfo_appkit_ns_nsshadow_nsshadow_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSShadow_NSShadow, nsShadow, arginfo_appkit_ns_nsshadow_nsshadow_nsshadow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSShadow_NSShadow, setOffset, arginfo_appkit_ns_nsshadow_nsshadow_setoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSShadow_NSShadow, getOffset, arginfo_appkit_ns_nsshadow_nsshadow_getoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSShadow_NSShadow, setBlurRadius, arginfo_appkit_ns_nsshadow_nsshadow_setblurradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSShadow_NSShadow, getBlurRadius, arginfo_appkit_ns_nsshadow_nsshadow_getblurradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSShadow_NSShadow, setColor, arginfo_appkit_ns_nsshadow_nsshadow_setcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSShadow_NSShadow, getColor, arginfo_appkit_ns_nsshadow_nsshadow_getcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSShadow_NSShadow, set, arginfo_appkit_ns_nsshadow_nsshadow_set, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
