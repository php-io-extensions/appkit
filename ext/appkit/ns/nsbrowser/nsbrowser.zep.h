
extern zend_class_entry *appkit_ns_nsbrowser_nsbrowser_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSBrowser_NSBrowser);

PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, create);
PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, destroy);
PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, setPath);
PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, getPath);
PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, setMaxVisibleColumns);
PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, getMaxVisibleColumns);
PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, lastColumn);
PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, reloadColumn);
PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, setTakesTitleFromPreviousColumn);
PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, takesTitleFromPreviousColumn);
PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, selectedRowInColumn);
PHP_METHOD(AppKit_NS_NSBrowser_NSBrowser, selectRowInColumn);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_setpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_getpath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_setmaxvisiblecolumns, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_getmaxvisiblecolumns, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_lastcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_reloadcolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_settakestitlefrompreviouscolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_takestitlefrompreviouscolumn, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_selectedrowincolumn, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbrowser_nsbrowser_selectrowincolumn, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsbrowser_nsbrowser_method_entry) {
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, create, arginfo_appkit_ns_nsbrowser_nsbrowser_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, destroy, arginfo_appkit_ns_nsbrowser_nsbrowser_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, setPath, arginfo_appkit_ns_nsbrowser_nsbrowser_setpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, getPath, arginfo_appkit_ns_nsbrowser_nsbrowser_getpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, setMaxVisibleColumns, arginfo_appkit_ns_nsbrowser_nsbrowser_setmaxvisiblecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, getMaxVisibleColumns, arginfo_appkit_ns_nsbrowser_nsbrowser_getmaxvisiblecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, lastColumn, arginfo_appkit_ns_nsbrowser_nsbrowser_lastcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, reloadColumn, arginfo_appkit_ns_nsbrowser_nsbrowser_reloadcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, setTakesTitleFromPreviousColumn, arginfo_appkit_ns_nsbrowser_nsbrowser_settakestitlefrompreviouscolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, takesTitleFromPreviousColumn, arginfo_appkit_ns_nsbrowser_nsbrowser_takestitlefrompreviouscolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, selectedRowInColumn, arginfo_appkit_ns_nsbrowser_nsbrowser_selectedrowincolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBrowser_NSBrowser, selectRowInColumn, arginfo_appkit_ns_nsbrowser_nsbrowser_selectrowincolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
