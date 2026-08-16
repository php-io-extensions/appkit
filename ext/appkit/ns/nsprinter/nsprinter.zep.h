
extern zend_class_entry *appkit_ns_nsprinter_nsprinter_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPrinter_NSPrinter);

PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, wrap);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, destroy);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, nsPrinter);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, namesCount);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, nameAt);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, typesCount);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, typeAt);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, withName);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, withType);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, name);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, type);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, languageLevel);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, pageSizeForPaper);
PHP_METHOD(AppKit_NS_NSPrinter_NSPrinter, deviceIsPrinter);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsPrinterPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_nsprinter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_namescount, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_nameat, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_typescount, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_typeat, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_withname, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_withtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_type, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_languagelevel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_pagesizeforpaper, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paperName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprinter_nsprinter_deviceisprinter, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsprinter_nsprinter_method_entry) {
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, wrap, arginfo_appkit_ns_nsprinter_nsprinter_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, destroy, arginfo_appkit_ns_nsprinter_nsprinter_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, nsPrinter, arginfo_appkit_ns_nsprinter_nsprinter_nsprinter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, namesCount, arginfo_appkit_ns_nsprinter_nsprinter_namescount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, nameAt, arginfo_appkit_ns_nsprinter_nsprinter_nameat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, typesCount, arginfo_appkit_ns_nsprinter_nsprinter_typescount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, typeAt, arginfo_appkit_ns_nsprinter_nsprinter_typeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, withName, arginfo_appkit_ns_nsprinter_nsprinter_withname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, withType, arginfo_appkit_ns_nsprinter_nsprinter_withtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, name, arginfo_appkit_ns_nsprinter_nsprinter_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, type, arginfo_appkit_ns_nsprinter_nsprinter_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, languageLevel, arginfo_appkit_ns_nsprinter_nsprinter_languagelevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, pageSizeForPaper, arginfo_appkit_ns_nsprinter_nsprinter_pagesizeforpaper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrinter_NSPrinter, deviceIsPrinter, arginfo_appkit_ns_nsprinter_nsprinter_deviceisprinter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
