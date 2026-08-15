
extern zend_class_entry *appkit_ns_nsgridcolumn_nsgridcolumn_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSGridColumn_NSGridColumn);

PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, wrap);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, destroy);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, nsGridColumn);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, numberOfCells);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, cellAt);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setXPlacement);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, getXPlacement);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setWidth);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, getWidth);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setLeadingPadding);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, getLeadingPadding);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setTrailingPadding);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, getTrailingPadding);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, setHidden);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, isHidden);
PHP_METHOD(AppKit_NS_NSGridColumn_NSGridColumn, mergeCells);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsGridColumnPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_nsgridcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_numberofcells, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_cellat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setxplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_getxplacement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_getwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setleadingpadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, padding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_getleadingpadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_settrailingpadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, padding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_gettrailingpadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_mergecells, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsgridcolumn_nsgridcolumn_method_entry) {
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, wrap, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, destroy, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, nsGridColumn, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_nsgridcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, numberOfCells, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_numberofcells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, cellAt, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_cellat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, setXPlacement, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setxplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, getXPlacement, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_getxplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, setWidth, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, getWidth, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_getwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, setLeadingPadding, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_setleadingpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, getLeadingPadding, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_getleadingpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, setTrailingPadding, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_settrailingpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, getTrailingPadding, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_gettrailingpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, setHidden, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, isHidden, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridColumn_NSGridColumn, mergeCells, arginfo_appkit_ns_nsgridcolumn_nsgridcolumn_mergecells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
