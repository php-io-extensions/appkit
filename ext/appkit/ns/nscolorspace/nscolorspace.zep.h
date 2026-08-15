
extern zend_class_entry *appkit_ns_nscolorspace_nscolorspace_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSColorSpace_NSColorSpace);

PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, wrap);
PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, destroy);
PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, standard);
PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, model);
PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, numberOfColorComponents);
PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, localizedName);
PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, availableCount);
PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, availableAt);
PHP_METHOD(AppKit_NS_NSColorSpace_NSColorSpace, nsColorSpace);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorspace_nscolorspace_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsColorSpacePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorspace_nscolorspace_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, space, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorspace_nscolorspace_standard, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorspace_nscolorspace_model, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, space, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorspace_nscolorspace_numberofcolorcomponents, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, space, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorspace_nscolorspace_localizedname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, space, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorspace_nscolorspace_availablecount, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorspace_nscolorspace_availableat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorspace_nscolorspace_nscolorspace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, space, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscolorspace_nscolorspace_method_entry) {
	PHP_ME(AppKit_NS_NSColorSpace_NSColorSpace, wrap, arginfo_appkit_ns_nscolorspace_nscolorspace_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorSpace_NSColorSpace, destroy, arginfo_appkit_ns_nscolorspace_nscolorspace_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorSpace_NSColorSpace, standard, arginfo_appkit_ns_nscolorspace_nscolorspace_standard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorSpace_NSColorSpace, model, arginfo_appkit_ns_nscolorspace_nscolorspace_model, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorSpace_NSColorSpace, numberOfColorComponents, arginfo_appkit_ns_nscolorspace_nscolorspace_numberofcolorcomponents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorSpace_NSColorSpace, localizedName, arginfo_appkit_ns_nscolorspace_nscolorspace_localizedname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorSpace_NSColorSpace, availableCount, arginfo_appkit_ns_nscolorspace_nscolorspace_availablecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorSpace_NSColorSpace, availableAt, arginfo_appkit_ns_nscolorspace_nscolorspace_availableat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorSpace_NSColorSpace, nsColorSpace, arginfo_appkit_ns_nscolorspace_nscolorspace_nscolorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
