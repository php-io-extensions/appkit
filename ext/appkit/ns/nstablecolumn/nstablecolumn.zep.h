
extern zend_class_entry *appkit_ns_nstablecolumn_nstablecolumn_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableColumn_NSTableColumn);

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, create);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, wrap);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, destroy);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, nsTableColumn);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setIdentifier);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getIdentifier);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setTitle);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getTitle);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setWidth);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getWidth);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setMinWidth);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getMinWidth);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setMaxWidth);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getMaxWidth);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setHidden);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, isHidden);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setEditable);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, isEditable);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setResizingMask);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, getResizingMask);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_create, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTableColumnPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_nstablecolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_getidentifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_getwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setminwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_getminwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setmaxwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_getmaxwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setresizingmask, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_getresizingmask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstablecolumn_nstablecolumn_method_entry) {
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, create, arginfo_appkit_ns_nstablecolumn_nstablecolumn_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, wrap, arginfo_appkit_ns_nstablecolumn_nstablecolumn_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, destroy, arginfo_appkit_ns_nstablecolumn_nstablecolumn_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, nsTableColumn, arginfo_appkit_ns_nstablecolumn_nstablecolumn_nstablecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setIdentifier, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, getIdentifier, arginfo_appkit_ns_nstablecolumn_nstablecolumn_getidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setTitle, arginfo_appkit_ns_nstablecolumn_nstablecolumn_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, getTitle, arginfo_appkit_ns_nstablecolumn_nstablecolumn_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setWidth, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, getWidth, arginfo_appkit_ns_nstablecolumn_nstablecolumn_getwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setMinWidth, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setminwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, getMinWidth, arginfo_appkit_ns_nstablecolumn_nstablecolumn_getminwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setMaxWidth, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setmaxwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, getMaxWidth, arginfo_appkit_ns_nstablecolumn_nstablecolumn_getmaxwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setHidden, arginfo_appkit_ns_nstablecolumn_nstablecolumn_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, isHidden, arginfo_appkit_ns_nstablecolumn_nstablecolumn_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setEditable, arginfo_appkit_ns_nstablecolumn_nstablecolumn_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, isEditable, arginfo_appkit_ns_nstablecolumn_nstablecolumn_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setResizingMask, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setresizingmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, getResizingMask, arginfo_appkit_ns_nstablecolumn_nstablecolumn_getresizingmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
