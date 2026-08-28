
extern zend_class_entry *appkit_ns_nsgridrow_nsgridrow_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSGridRow_NSGridRow);

PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, init);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, gridView);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, numberOfCells);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, cellAtIndex);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, yPlacement);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setYPlacement);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, rowAlignment);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setRowAlignment);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, height);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setHeight);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, topPadding);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setTopPadding);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, bottomPadding);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setBottomPadding);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, isHidden);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, setHidden);
PHP_METHOD(AppKit_NS_NSGridRow_NSGridRow, mergeCellsInRange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_gridview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_numberofcells, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_cellatindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_yplacement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_setyplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, yPlacement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_rowalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_setrowalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowAlignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_height, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_setheight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_toppadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_settoppadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topPadding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_bottompadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_setbottompadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottomPadding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_sethidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hidden, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridrow_nsgridrow_mergecellsinrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsgridrow_nsgridrow_method_entry) {
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, init, arginfo_appkit_ns_nsgridrow_nsgridrow_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, gridView, arginfo_appkit_ns_nsgridrow_nsgridrow_gridview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, numberOfCells, arginfo_appkit_ns_nsgridrow_nsgridrow_numberofcells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, cellAtIndex, arginfo_appkit_ns_nsgridrow_nsgridrow_cellatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, yPlacement, arginfo_appkit_ns_nsgridrow_nsgridrow_yplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setYPlacement, arginfo_appkit_ns_nsgridrow_nsgridrow_setyplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, rowAlignment, arginfo_appkit_ns_nsgridrow_nsgridrow_rowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setRowAlignment, arginfo_appkit_ns_nsgridrow_nsgridrow_setrowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, height, arginfo_appkit_ns_nsgridrow_nsgridrow_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setHeight, arginfo_appkit_ns_nsgridrow_nsgridrow_setheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, topPadding, arginfo_appkit_ns_nsgridrow_nsgridrow_toppadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setTopPadding, arginfo_appkit_ns_nsgridrow_nsgridrow_settoppadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, bottomPadding, arginfo_appkit_ns_nsgridrow_nsgridrow_bottompadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setBottomPadding, arginfo_appkit_ns_nsgridrow_nsgridrow_setbottompadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, isHidden, arginfo_appkit_ns_nsgridrow_nsgridrow_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, setHidden, arginfo_appkit_ns_nsgridrow_nsgridrow_sethidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridRow_NSGridRow, mergeCellsInRange, arginfo_appkit_ns_nsgridrow_nsgridrow_mergecellsinrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
