
extern zend_class_entry *appkit_ns_nsdictionary_nsdictionary_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSDictionary_NSDictionary);

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, createMutable);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, wrap);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, destroy);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, nsDictionary);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, count);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, setString);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, getString);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, setInt);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, getInt);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, setDouble);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, getDouble);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, setBool);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, isTrue);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, setDictionary);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, getDictionary);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, hasKey);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, copyImmutable);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, fromArray);
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, toArray);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_createmutable, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsDictionaryPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_nsdictionary, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_setstring, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_getstring, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_setint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_getint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_setdouble, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_getdouble, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_setbool, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_istrue, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_setdictionary, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, valueDictionary, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_getdictionary, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_haskey, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_copyimmutable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_fromarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdictionary_nsdictionary_toarray, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, dictionary, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsdictionary_nsdictionary_method_entry) {
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, createMutable, arginfo_appkit_ns_nsdictionary_nsdictionary_createmutable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, wrap, arginfo_appkit_ns_nsdictionary_nsdictionary_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, destroy, arginfo_appkit_ns_nsdictionary_nsdictionary_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, nsDictionary, arginfo_appkit_ns_nsdictionary_nsdictionary_nsdictionary, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, count, arginfo_appkit_ns_nsdictionary_nsdictionary_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, setString, arginfo_appkit_ns_nsdictionary_nsdictionary_setstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, getString, arginfo_appkit_ns_nsdictionary_nsdictionary_getstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, setInt, arginfo_appkit_ns_nsdictionary_nsdictionary_setint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, getInt, arginfo_appkit_ns_nsdictionary_nsdictionary_getint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, setDouble, arginfo_appkit_ns_nsdictionary_nsdictionary_setdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, getDouble, arginfo_appkit_ns_nsdictionary_nsdictionary_getdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, setBool, arginfo_appkit_ns_nsdictionary_nsdictionary_setbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, isTrue, arginfo_appkit_ns_nsdictionary_nsdictionary_istrue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, setDictionary, arginfo_appkit_ns_nsdictionary_nsdictionary_setdictionary, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, getDictionary, arginfo_appkit_ns_nsdictionary_nsdictionary_getdictionary, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, hasKey, arginfo_appkit_ns_nsdictionary_nsdictionary_haskey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, copyImmutable, arginfo_appkit_ns_nsdictionary_nsdictionary_copyimmutable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, fromArray, arginfo_appkit_ns_nsdictionary_nsdictionary_fromarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDictionary_NSDictionary, toArray, arginfo_appkit_ns_nsdictionary_nsdictionary_toarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
