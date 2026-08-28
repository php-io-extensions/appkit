
extern zend_class_entry *appkit_ns_nssearchfield_nssearchfield_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSearchField_NSSearchField);

PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, initWithFrame);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, searchTextBounds);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, searchButtonBounds);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, cancelButtonBounds);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, recentSearches);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setRecentSearches);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, recentsAutosaveName);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setRecentsAutosaveName);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, searchMenuTemplate);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setSearchMenuTemplate);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, sendsWholeSearchString);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setSendsWholeSearchString);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, maximumRecents);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setMaximumRecents);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, sendsSearchStringImmediately);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setSendsSearchStringImmediately);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, delegate);
PHP_METHOD(AppKit_NS_NSSearchField_NSSearchField, setDelegate);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_searchtextbounds, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_searchbuttonbounds, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_cancelbuttonbounds, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_recentsearches, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setrecentsearches, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, recentSearches, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_recentsautosavename, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setrecentsautosavename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, recentsAutosaveName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_searchmenutemplate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setsearchmenutemplate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, searchMenuTemplate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_sendswholesearchstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setsendswholesearchstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sendsWholeSearchString, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_maximumrecents, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setmaximumrecents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximumRecents, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_sendssearchstringimmediately, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setsendssearchstringimmediately, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sendsSearchStringImmediately, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfield_nssearchfield_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssearchfield_nssearchfield_method_entry) {
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, initWithFrame, arginfo_appkit_ns_nssearchfield_nssearchfield_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, searchTextBounds, arginfo_appkit_ns_nssearchfield_nssearchfield_searchtextbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, searchButtonBounds, arginfo_appkit_ns_nssearchfield_nssearchfield_searchbuttonbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, cancelButtonBounds, arginfo_appkit_ns_nssearchfield_nssearchfield_cancelbuttonbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, recentSearches, arginfo_appkit_ns_nssearchfield_nssearchfield_recentsearches, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setRecentSearches, arginfo_appkit_ns_nssearchfield_nssearchfield_setrecentsearches, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, recentsAutosaveName, arginfo_appkit_ns_nssearchfield_nssearchfield_recentsautosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setRecentsAutosaveName, arginfo_appkit_ns_nssearchfield_nssearchfield_setrecentsautosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, searchMenuTemplate, arginfo_appkit_ns_nssearchfield_nssearchfield_searchmenutemplate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setSearchMenuTemplate, arginfo_appkit_ns_nssearchfield_nssearchfield_setsearchmenutemplate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, sendsWholeSearchString, arginfo_appkit_ns_nssearchfield_nssearchfield_sendswholesearchstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setSendsWholeSearchString, arginfo_appkit_ns_nssearchfield_nssearchfield_setsendswholesearchstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, maximumRecents, arginfo_appkit_ns_nssearchfield_nssearchfield_maximumrecents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setMaximumRecents, arginfo_appkit_ns_nssearchfield_nssearchfield_setmaximumrecents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, sendsSearchStringImmediately, arginfo_appkit_ns_nssearchfield_nssearchfield_sendssearchstringimmediately, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setSendsSearchStringImmediately, arginfo_appkit_ns_nssearchfield_nssearchfield_setsendssearchstringimmediately, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, delegate, arginfo_appkit_ns_nssearchfield_nssearchfield_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchField_NSSearchField, setDelegate, arginfo_appkit_ns_nssearchfield_nssearchfield_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
