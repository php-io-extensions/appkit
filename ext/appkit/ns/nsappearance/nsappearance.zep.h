
extern zend_class_entry *appkit_ns_nsappearance_nsappearance_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSAppearance_NSAppearance);

PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, wrap);
PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, destroy);
PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, named);
PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, create);
PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, currentDrawing);
PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, name);
PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, allowsVibrancy);
PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, bestMatch);
PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, nsAppearance);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsappearance_nsappearance_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsAppearancePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsappearance_nsappearance_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, appearance, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsappearance_nsappearance_named, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsappearance_nsappearance_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsappearance_nsappearance_currentdrawing, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsappearance_nsappearance_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, appearance, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsappearance_nsappearance_allowsvibrancy, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, appearance, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsappearance_nsappearance_bestmatch, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, appearance, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, names, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsappearance_nsappearance_nsappearance, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, appearance, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsappearance_nsappearance_method_entry) {
	PHP_ME(AppKit_NS_NSAppearance_NSAppearance, wrap, arginfo_appkit_ns_nsappearance_nsappearance_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAppearance_NSAppearance, destroy, arginfo_appkit_ns_nsappearance_nsappearance_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAppearance_NSAppearance, named, arginfo_appkit_ns_nsappearance_nsappearance_named, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAppearance_NSAppearance, create, arginfo_appkit_ns_nsappearance_nsappearance_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAppearance_NSAppearance, currentDrawing, arginfo_appkit_ns_nsappearance_nsappearance_currentdrawing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAppearance_NSAppearance, name, arginfo_appkit_ns_nsappearance_nsappearance_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAppearance_NSAppearance, allowsVibrancy, arginfo_appkit_ns_nsappearance_nsappearance_allowsvibrancy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAppearance_NSAppearance, bestMatch, arginfo_appkit_ns_nsappearance_nsappearance_bestmatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAppearance_NSAppearance, nsAppearance, arginfo_appkit_ns_nsappearance_nsappearance_nsappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
