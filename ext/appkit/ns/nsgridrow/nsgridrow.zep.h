
extern zend_class_entry *appkit_ns_nsgridrow_nsgridrow_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSGridRow_NSGridRow);

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, wrap);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, destroy);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, nsGridRow);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, numberOfCells);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, cellAt);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setYPlacement);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, getYPlacement);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setRowAlignment);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, getRowAlignment);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setHeight);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, getHeight);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setTopPadding);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, getTopPadding);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setBottomPadding);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, getBottomPadding);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setHidden);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, isHidden);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, mergeCells);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsGridRowPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_nsgridrow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_numberofcells, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_cellat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_setyplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_getyplacement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_setrowalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_getrowalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_setheight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_getheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_settoppadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, padding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_gettoppadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_setbottompadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, padding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_getbottompadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_mergecells, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsgridrow_nsgridrow_method_entry) {
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, wrap, arginfo_appkit_ns_nsgridrow_nsgridrow_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, destroy, arginfo_appkit_ns_nsgridrow_nsgridrow_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, nsGridRow, arginfo_appkit_ns_nsgridrow_nsgridrow_nsgridrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, numberOfCells, arginfo_appkit_ns_nsgridrow_nsgridrow_numberofcells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, cellAt, arginfo_appkit_ns_nsgridrow_nsgridrow_cellat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setYPlacement, arginfo_appkit_ns_nsgridrow_nsgridrow_setyplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, getYPlacement, arginfo_appkit_ns_nsgridrow_nsgridrow_getyplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setRowAlignment, arginfo_appkit_ns_nsgridrow_nsgridrow_setrowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, getRowAlignment, arginfo_appkit_ns_nsgridrow_nsgridrow_getrowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setHeight, arginfo_appkit_ns_nsgridrow_nsgridrow_setheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, getHeight, arginfo_appkit_ns_nsgridrow_nsgridrow_getheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setTopPadding, arginfo_appkit_ns_nsgridrow_nsgridrow_settoppadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, getTopPadding, arginfo_appkit_ns_nsgridrow_nsgridrow_gettoppadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setBottomPadding, arginfo_appkit_ns_nsgridrow_nsgridrow_setbottompadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, getBottomPadding, arginfo_appkit_ns_nsgridrow_nsgridrow_getbottompadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setHidden, arginfo_appkit_ns_nsgridrow_nsgridrow_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, isHidden, arginfo_appkit_ns_nsgridrow_nsgridrow_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, mergeCells, arginfo_appkit_ns_nsgridrow_nsgridrow_mergecells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
