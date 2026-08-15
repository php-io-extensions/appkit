
extern zend_class_entry *appkit_ns_nstypesetter_nstypesetter_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTypesetter_NSTypesetter);

PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, sharedSystemTypesetter);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, sharedSystemTypesetterForBehavior);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, defaultTypesetterBehavior);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, wrap);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, destroy);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, usesFontLeading);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, setUsesFontLeading);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, getTypesetterBehavior);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, setTypesetterBehavior);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, getHyphenationFactor);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, setHyphenationFactor);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, getLineFragmentPadding);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, setLineFragmentPadding);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, bidiProcessingEnabled);
PHP_METHOD(AppKit_NS_NSTypesetter_NSTypesetter, setBidiProcessingEnabled);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_sharedsystemtypesetter, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_sharedsystemtypesetterforbehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, behavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_defaulttypesetterbehavior, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTypesetterPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_usesfontleading, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_setusesfontleading, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_gettypesetterbehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_settypesetterbehavior, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, behavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_gethyphenationfactor, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_sethyphenationfactor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_getlinefragmentpadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_setlinefragmentpadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, padding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_bidiprocessingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstypesetter_nstypesetter_setbidiprocessingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, typesetter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstypesetter_nstypesetter_method_entry) {
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, sharedSystemTypesetter, arginfo_appkit_ns_nstypesetter_nstypesetter_sharedsystemtypesetter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, sharedSystemTypesetterForBehavior, arginfo_appkit_ns_nstypesetter_nstypesetter_sharedsystemtypesetterforbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, defaultTypesetterBehavior, arginfo_appkit_ns_nstypesetter_nstypesetter_defaulttypesetterbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, wrap, arginfo_appkit_ns_nstypesetter_nstypesetter_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, destroy, arginfo_appkit_ns_nstypesetter_nstypesetter_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, usesFontLeading, arginfo_appkit_ns_nstypesetter_nstypesetter_usesfontleading, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, setUsesFontLeading, arginfo_appkit_ns_nstypesetter_nstypesetter_setusesfontleading, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, getTypesetterBehavior, arginfo_appkit_ns_nstypesetter_nstypesetter_gettypesetterbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, setTypesetterBehavior, arginfo_appkit_ns_nstypesetter_nstypesetter_settypesetterbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, getHyphenationFactor, arginfo_appkit_ns_nstypesetter_nstypesetter_gethyphenationfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, setHyphenationFactor, arginfo_appkit_ns_nstypesetter_nstypesetter_sethyphenationfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, getLineFragmentPadding, arginfo_appkit_ns_nstypesetter_nstypesetter_getlinefragmentpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, setLineFragmentPadding, arginfo_appkit_ns_nstypesetter_nstypesetter_setlinefragmentpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, bidiProcessingEnabled, arginfo_appkit_ns_nstypesetter_nstypesetter_bidiprocessingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTypesetter_NSTypesetter, setBidiProcessingEnabled, arginfo_appkit_ns_nstypesetter_nstypesetter_setbidiprocessingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
