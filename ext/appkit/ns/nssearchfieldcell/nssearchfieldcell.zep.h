
extern zend_class_entry *appkit_ns_nssearchfieldcell_nssearchfieldcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell);

PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, initTextCell);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, searchButtonCell);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setSearchButtonCell);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, cancelButtonCell);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setCancelButtonCell);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, resetSearchButtonCell);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, resetCancelButtonCell);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, searchTextRectForBounds);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, searchButtonRectForBounds);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, cancelButtonRectForBounds);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, searchMenuTemplate);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setSearchMenuTemplate);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, sendsWholeSearchString);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setSendsWholeSearchString);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, maximumRecents);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setMaximumRecents);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, recentSearches);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setRecentSearches);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, recentsAutosaveName);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setRecentsAutosaveName);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, sendsSearchStringImmediately);
PHP_METHOD(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setSendsSearchStringImmediately);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_inittextcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_searchbuttoncell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setsearchbuttoncell, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, searchButtonCell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_cancelbuttoncell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setcancelbuttoncell, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cancelButtonCell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_resetsearchbuttoncell, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_resetcancelbuttoncell, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_searchtextrectforbounds, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_searchbuttonrectforbounds, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_cancelbuttonrectforbounds, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_searchmenutemplate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setsearchmenutemplate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, searchMenuTemplate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_sendswholesearchstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setsendswholesearchstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sendsWholeSearchString, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_maximumrecents, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setmaximumrecents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximumRecents, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_recentsearches, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setrecentsearches, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, recentSearches)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_recentsautosavename, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setrecentsautosavename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, recentsAutosaveName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_sendssearchstringimmediately, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setsendssearchstringimmediately, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sendsSearchStringImmediately, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssearchfieldcell_nssearchfieldcell_method_entry) {
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, initTextCell, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_inittextcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, searchButtonCell, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_searchbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setSearchButtonCell, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setsearchbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, cancelButtonCell, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_cancelbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setCancelButtonCell, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setcancelbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, resetSearchButtonCell, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_resetsearchbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, resetCancelButtonCell, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_resetcancelbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, searchTextRectForBounds, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_searchtextrectforbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, searchButtonRectForBounds, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_searchbuttonrectforbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, cancelButtonRectForBounds, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_cancelbuttonrectforbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, searchMenuTemplate, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_searchmenutemplate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setSearchMenuTemplate, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setsearchmenutemplate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, sendsWholeSearchString, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_sendswholesearchstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setSendsWholeSearchString, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setsendswholesearchstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, maximumRecents, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_maximumrecents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setMaximumRecents, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setmaximumrecents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, recentSearches, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_recentsearches, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setRecentSearches, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setrecentsearches, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, recentsAutosaveName, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_recentsautosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setRecentsAutosaveName, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setrecentsautosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, sendsSearchStringImmediately, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_sendssearchstringimmediately, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell, setSendsSearchStringImmediately, arginfo_appkit_ns_nssearchfieldcell_nssearchfieldcell_setsendssearchstringimmediately, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
