
extern zend_class_entry *appkit_ns_nsgridcell_nsgridcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSGridCell_NSGridCell);

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, wrap);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, destroy);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, nsGridCell);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setContentView);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, contentView);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, row);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, column);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setXPlacement);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, getXPlacement);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setYPlacement);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, getYPlacement);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setRowAlignment);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, getRowAlignment);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsGridCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_nsgridcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_setcontentview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_contentview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_row, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_column, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_setxplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_getxplacement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_setyplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_getyplacement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_setrowalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_getrowalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsgridcell_nsgridcell_method_entry) {
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, wrap, arginfo_appkit_ns_nsgridcell_nsgridcell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, destroy, arginfo_appkit_ns_nsgridcell_nsgridcell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, nsGridCell, arginfo_appkit_ns_nsgridcell_nsgridcell_nsgridcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, setContentView, arginfo_appkit_ns_nsgridcell_nsgridcell_setcontentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, contentView, arginfo_appkit_ns_nsgridcell_nsgridcell_contentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, row, arginfo_appkit_ns_nsgridcell_nsgridcell_row, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, column, arginfo_appkit_ns_nsgridcell_nsgridcell_column, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, setXPlacement, arginfo_appkit_ns_nsgridcell_nsgridcell_setxplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, getXPlacement, arginfo_appkit_ns_nsgridcell_nsgridcell_getxplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, setYPlacement, arginfo_appkit_ns_nsgridcell_nsgridcell_setyplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, getYPlacement, arginfo_appkit_ns_nsgridcell_nsgridcell_getyplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, setRowAlignment, arginfo_appkit_ns_nsgridcell_nsgridcell_setrowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, getRowAlignment, arginfo_appkit_ns_nsgridcell_nsgridcell_getrowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
