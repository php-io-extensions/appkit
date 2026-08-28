
extern zend_class_entry *appkit_ns_nstableheadercell_nstableheadercell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell);

PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, initTextCell);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, drawSortIndicatorWithFrameInViewAscendingPriority);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, sortIndicatorRectForBounds);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_inittextcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_drawsortindicatorwithframeinviewascendingpriority, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, controlView, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ascending, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_sortindicatorrectforbounds, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstableheadercell_nstableheadercell_method_entry) {
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, initTextCell, arginfo_appkit_ns_nstableheadercell_nstableheadercell_inittextcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, drawSortIndicatorWithFrameInViewAscendingPriority, arginfo_appkit_ns_nstableheadercell_nstableheadercell_drawsortindicatorwithframeinviewascendingpriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, sortIndicatorRectForBounds, arginfo_appkit_ns_nstableheadercell_nstableheadercell_sortindicatorrectforbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
