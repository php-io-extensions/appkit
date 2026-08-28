
extern zend_class_entry *appkit_ns_nstablecolumn_nstablecolumn_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableColumn_NSTableColumn);

PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, initWithIdentifier);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, identifier);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setIdentifier);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, tableView);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setTableView);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, width);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setWidth);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, minWidth);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setMinWidth);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, maxWidth);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setMaxWidth);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, title);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setTitle);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, headerCell);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setHeaderCell);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, isEditable);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setEditable);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, sizeToFit);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, sortDescriptorPrototype);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setSortDescriptorPrototype);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, resizingMask);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setResizingMask);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, headerToolTip);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setHeaderToolTip);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, isHidden);
PHP_METHOD(AppKit_NS_NSTableColumn_NSTableColumn, setHidden);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_initwithidentifier, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_identifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_tableview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_settableview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_width, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_minwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setminwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minWidth, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_maxwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setmaxwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxWidth, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_headercell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setheadercell, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerCell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_sizetofit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_sortdescriptorprototype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setsortdescriptorprototype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sortDescriptorPrototype, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_resizingmask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setresizingmask, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resizingMask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_headertooltip, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_setheadertooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, headerToolTip)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecolumn_nstablecolumn_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hidden, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstablecolumn_nstablecolumn_method_entry) {
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, initWithIdentifier, arginfo_appkit_ns_nstablecolumn_nstablecolumn_initwithidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, identifier, arginfo_appkit_ns_nstablecolumn_nstablecolumn_identifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setIdentifier, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, tableView, arginfo_appkit_ns_nstablecolumn_nstablecolumn_tableview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setTableView, arginfo_appkit_ns_nstablecolumn_nstablecolumn_settableview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, width, arginfo_appkit_ns_nstablecolumn_nstablecolumn_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setWidth, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, minWidth, arginfo_appkit_ns_nstablecolumn_nstablecolumn_minwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setMinWidth, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setminwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, maxWidth, arginfo_appkit_ns_nstablecolumn_nstablecolumn_maxwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setMaxWidth, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setmaxwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, title, arginfo_appkit_ns_nstablecolumn_nstablecolumn_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setTitle, arginfo_appkit_ns_nstablecolumn_nstablecolumn_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, headerCell, arginfo_appkit_ns_nstablecolumn_nstablecolumn_headercell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setHeaderCell, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setheadercell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, isEditable, arginfo_appkit_ns_nstablecolumn_nstablecolumn_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setEditable, arginfo_appkit_ns_nstablecolumn_nstablecolumn_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, sizeToFit, arginfo_appkit_ns_nstablecolumn_nstablecolumn_sizetofit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, sortDescriptorPrototype, arginfo_appkit_ns_nstablecolumn_nstablecolumn_sortdescriptorprototype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setSortDescriptorPrototype, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setsortdescriptorprototype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, resizingMask, arginfo_appkit_ns_nstablecolumn_nstablecolumn_resizingmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setResizingMask, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setresizingmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, headerToolTip, arginfo_appkit_ns_nstablecolumn_nstablecolumn_headertooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setHeaderToolTip, arginfo_appkit_ns_nstablecolumn_nstablecolumn_setheadertooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, isHidden, arginfo_appkit_ns_nstablecolumn_nstablecolumn_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableColumn_NSTableColumn, setHidden, arginfo_appkit_ns_nstablecolumn_nstablecolumn_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
