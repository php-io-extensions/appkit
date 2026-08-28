
extern zend_class_entry *appkit_ns_nsgridcolumn_nsgridcolumn_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSGridColumn_NSGridColumn);

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, init);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, gridView);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, numberOfCells);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, cellAtIndex);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, xPlacement);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setXPlacement);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, width);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setWidth);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, leadingPadding);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setLeadingPadding);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, trailingPadding);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setTrailingPadding);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, isHidden);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setHidden);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, mergeCellsInRange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_gridview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_numberofcells, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_cellatindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_xplacement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setxplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xPlacement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_width, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_leadingpadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setleadingpadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, leadingPadding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_trailingpadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_settrailingpadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trailingPadding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hidden, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_mergecellsinrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsgridcolumn_nsgridcolumn_method_entry) {
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, init, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, gridView, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_gridview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, numberOfCells, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_numberofcells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, cellAtIndex, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_cellatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, xPlacement, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_xplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, setXPlacement, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setxplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, width, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, setWidth, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, leadingPadding, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_leadingpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, setLeadingPadding, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setleadingpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, trailingPadding, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_trailingpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, setTrailingPadding, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_settrailingpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, isHidden, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, setHidden, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, mergeCellsInRange, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_mergecellsinrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
