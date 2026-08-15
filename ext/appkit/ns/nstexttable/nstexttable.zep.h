
extern zend_class_entry *appkit_ns_nstexttable_nstexttable_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextTable_NSTextTable);

PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, create);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, wrap);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, destroy);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setNumberOfColumns);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, getNumberOfColumns);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setLayoutAlgorithm);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, getLayoutAlgorithm);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setCollapsesBorders);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, collapsesBorders);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setHidesEmptyCells);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, hidesEmptyCells);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setContentWidth);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, getContentWidth);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, setVerticalAlignment);
PHP_METHOD(AppKit_NS_NSTextTable_NSTextTable, getVerticalAlignment);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextTablePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_setnumberofcolumns, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_getnumberofcolumns, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_setlayoutalgorithm, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, algorithm, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_getlayoutalgorithm, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_setcollapsesborders, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_collapsesborders, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_sethidesemptycells, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_hidesemptycells, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_setcontentwidth, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_getcontentwidth, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_setverticalalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstexttable_nstexttable_getverticalalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstexttable_nstexttable_method_entry) {
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, create, arginfo_appkit_ns_nstexttable_nstexttable_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, wrap, arginfo_appkit_ns_nstexttable_nstexttable_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, destroy, arginfo_appkit_ns_nstexttable_nstexttable_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, setNumberOfColumns, arginfo_appkit_ns_nstexttable_nstexttable_setnumberofcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, getNumberOfColumns, arginfo_appkit_ns_nstexttable_nstexttable_getnumberofcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, setLayoutAlgorithm, arginfo_appkit_ns_nstexttable_nstexttable_setlayoutalgorithm, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, getLayoutAlgorithm, arginfo_appkit_ns_nstexttable_nstexttable_getlayoutalgorithm, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, setCollapsesBorders, arginfo_appkit_ns_nstexttable_nstexttable_setcollapsesborders, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, collapsesBorders, arginfo_appkit_ns_nstexttable_nstexttable_collapsesborders, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, setHidesEmptyCells, arginfo_appkit_ns_nstexttable_nstexttable_sethidesemptycells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, hidesEmptyCells, arginfo_appkit_ns_nstexttable_nstexttable_hidesemptycells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, setContentWidth, arginfo_appkit_ns_nstexttable_nstexttable_setcontentwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, getContentWidth, arginfo_appkit_ns_nstexttable_nstexttable_getcontentwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, setVerticalAlignment, arginfo_appkit_ns_nstexttable_nstexttable_setverticalalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextTable_NSTextTable, getVerticalAlignment, arginfo_appkit_ns_nstexttable_nstexttable_getverticalalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
