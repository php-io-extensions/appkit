
extern zend_class_entry *appkit_ns_nssearchfield_nssearchfield_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSearchField_NSSearchField);

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, create);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, destroy);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setStringValue);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, getStringValue);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setRecentSearches);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, getRecentSearches);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setRecentsAutosaveName);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, getRecentsAutosaveName);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setSendsWholeSearchString);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, sendsWholeSearchString);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setMaximumRecents);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, maximumRecents);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setSendsSearchStringImmediately);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, sendsSearchStringImmediately);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_getstringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setrecentsearches, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, searches, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_getrecentsearches, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setrecentsautosavename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_getrecentsautosavename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setsendswholesearchstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_sendswholesearchstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setmaximumrecents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_maximumrecents, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setsendssearchstringimmediately, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_sendssearchstringimmediately, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssearchfield_nssearchfield_method_entry) {
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, create, arginfo_appkit_ns_nssearchfield_nssearchfield_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, destroy, arginfo_appkit_ns_nssearchfield_nssearchfield_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setStringValue, arginfo_appkit_ns_nssearchfield_nssearchfield_setstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, getStringValue, arginfo_appkit_ns_nssearchfield_nssearchfield_getstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setRecentSearches, arginfo_appkit_ns_nssearchfield_nssearchfield_setrecentsearches, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, getRecentSearches, arginfo_appkit_ns_nssearchfield_nssearchfield_getrecentsearches, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setRecentsAutosaveName, arginfo_appkit_ns_nssearchfield_nssearchfield_setrecentsautosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, getRecentsAutosaveName, arginfo_appkit_ns_nssearchfield_nssearchfield_getrecentsautosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setSendsWholeSearchString, arginfo_appkit_ns_nssearchfield_nssearchfield_setsendswholesearchstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, sendsWholeSearchString, arginfo_appkit_ns_nssearchfield_nssearchfield_sendswholesearchstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setMaximumRecents, arginfo_appkit_ns_nssearchfield_nssearchfield_setmaximumrecents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, maximumRecents, arginfo_appkit_ns_nssearchfield_nssearchfield_maximumrecents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setSendsSearchStringImmediately, arginfo_appkit_ns_nssearchfield_nssearchfield_setsendssearchstringimmediately, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, sendsSearchStringImmediately, arginfo_appkit_ns_nssearchfield_nssearchfield_sendssearchstringimmediately, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, pollChange, arginfo_appkit_ns_nssearchfield_nssearchfield_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
