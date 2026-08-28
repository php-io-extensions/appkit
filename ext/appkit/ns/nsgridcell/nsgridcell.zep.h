
extern zend_class_entry *appkit_ns_nsgridcell_nsgridcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSGridCell_NSGridCell);

PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, init);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, contentView);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setContentView);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, emptyContentView);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, row);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, column);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, xPlacement);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setXPlacement);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, yPlacement);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setYPlacement);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, rowAlignment);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setRowAlignment);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, customPlacementConstraints);
PHP_METHOD(AppKit_NS_NSGridCell_NSGridCell, setCustomPlacementConstraints);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_contentview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_setcontentview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_emptycontentview, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_row, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_column, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_xplacement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_setxplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xPlacement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_yplacement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_setyplacement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, yPlacement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_rowalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_setrowalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowAlignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_customplacementconstraints, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgridcell_nsgridcell_setcustomplacementconstraints, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, constraints, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsgridcell_nsgridcell_method_entry) {
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, init, arginfo_appkit_ns_nsgridcell_nsgridcell_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, contentView, arginfo_appkit_ns_nsgridcell_nsgridcell_contentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, setContentView, arginfo_appkit_ns_nsgridcell_nsgridcell_setcontentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, emptyContentView, arginfo_appkit_ns_nsgridcell_nsgridcell_emptycontentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, row, arginfo_appkit_ns_nsgridcell_nsgridcell_row, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, column, arginfo_appkit_ns_nsgridcell_nsgridcell_column, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, xPlacement, arginfo_appkit_ns_nsgridcell_nsgridcell_xplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, setXPlacement, arginfo_appkit_ns_nsgridcell_nsgridcell_setxplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, yPlacement, arginfo_appkit_ns_nsgridcell_nsgridcell_yplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, setYPlacement, arginfo_appkit_ns_nsgridcell_nsgridcell_setyplacement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, rowAlignment, arginfo_appkit_ns_nsgridcell_nsgridcell_rowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, setRowAlignment, arginfo_appkit_ns_nsgridcell_nsgridcell_setrowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, customPlacementConstraints, arginfo_appkit_ns_nsgridcell_nsgridcell_customplacementconstraints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGridCell_NSGridCell, setCustomPlacementConstraints, arginfo_appkit_ns_nsgridcell_nsgridcell_setcustomplacementconstraints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
