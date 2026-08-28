
extern zend_class_entry *appkit_ns_nsoutlineview_nsoutlineview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSOutlineView_NSOutlineView);

PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, initWithFrame);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, delegate);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setDelegate);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, dataSource);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setDataSource);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, outlineTableColumn);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setOutlineTableColumn);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, isExpandable);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, numberOfChildrenOfItem);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, childOfItem);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, expandItemExpandChildren);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, expandItem);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, collapseItemCollapseChildren);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, collapseItem);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, reloadItemReloadChildren);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, reloadItem);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, parentForItem);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, childIndexForItem);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, itemAtRow);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, rowForItem);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, levelForItem);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, levelForRow);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, isItemExpanded);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, indentationPerLevel);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setIndentationPerLevel);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, indentationMarkerFollowsCell);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setIndentationMarkerFollowsCell);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, autoresizesOutlineColumn);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setAutoresizesOutlineColumn);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, frameOfOutlineCellAtRow);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setDropItemDropChildIndex);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, shouldCollapseAutoExpandedItemsForDeposited);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, autosaveExpandedItems);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setAutosaveExpandedItems);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, insertItemsAtIndexesInParentWithAnimation);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, removeItemsAtIndexesInParentWithAnimation);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, moveItemAtIndexInParentToIndexInParent);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, userInterfaceLayoutDirection);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setUserInterfaceLayoutDirection);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, stronglyReferencesItems);
PHP_METHOD(AppKit_NS_NSOutlineView_NSOutlineView, setStronglyReferencesItems);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_datasource, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_setdatasource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dataSource, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_outlinetablecolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_setoutlinetablecolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, outlineTableColumn, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_isexpandable, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_numberofchildrenofitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_childofitem, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_expanditemexpandchildren, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, expandChildren, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_expanditem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_collapseitemcollapsechildren, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, collapseChildren, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_collapseitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_reloaditemreloadchildren, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, reloadChildren, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_reloaditem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_parentforitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_childindexforitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_itematrow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_rowforitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_levelforitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_levelforrow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_isitemexpanded, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_indentationperlevel, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_setindentationperlevel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indentationPerLevel, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_indentationmarkerfollowscell, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_setindentationmarkerfollowscell, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indentationMarkerFollowsCell, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_autoresizesoutlinecolumn, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_setautoresizesoutlinecolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autoresizesOutlineColumn, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_frameofoutlinecellatrow, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_setdropitemdropchildindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_shouldcollapseautoexpandeditemsfordeposited, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, deposited, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_autosaveexpandeditems, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_setautosaveexpandeditems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autosaveExpandedItems, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_insertitemsatindexesinparentwithanimation, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animationOptions, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_removeitemsatindexesinparentwithanimation, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animationOptions, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_moveitematindexinparenttoindexinparent, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fromIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newParent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_userinterfacelayoutdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_setuserinterfacelayoutdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, userInterfaceLayoutDirection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_stronglyreferencesitems, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsoutlineview_nsoutlineview_setstronglyreferencesitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stronglyReferencesItems, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsoutlineview_nsoutlineview_method_entry) {
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, initWithFrame, arginfo_appkit_ns_nsoutlineview_nsoutlineview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, delegate, arginfo_appkit_ns_nsoutlineview_nsoutlineview_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, setDelegate, arginfo_appkit_ns_nsoutlineview_nsoutlineview_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, dataSource, arginfo_appkit_ns_nsoutlineview_nsoutlineview_datasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, setDataSource, arginfo_appkit_ns_nsoutlineview_nsoutlineview_setdatasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, outlineTableColumn, arginfo_appkit_ns_nsoutlineview_nsoutlineview_outlinetablecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, setOutlineTableColumn, arginfo_appkit_ns_nsoutlineview_nsoutlineview_setoutlinetablecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, isExpandable, arginfo_appkit_ns_nsoutlineview_nsoutlineview_isexpandable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, numberOfChildrenOfItem, arginfo_appkit_ns_nsoutlineview_nsoutlineview_numberofchildrenofitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, childOfItem, arginfo_appkit_ns_nsoutlineview_nsoutlineview_childofitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, expandItemExpandChildren, arginfo_appkit_ns_nsoutlineview_nsoutlineview_expanditemexpandchildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, expandItem, arginfo_appkit_ns_nsoutlineview_nsoutlineview_expanditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, collapseItemCollapseChildren, arginfo_appkit_ns_nsoutlineview_nsoutlineview_collapseitemcollapsechildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, collapseItem, arginfo_appkit_ns_nsoutlineview_nsoutlineview_collapseitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, reloadItemReloadChildren, arginfo_appkit_ns_nsoutlineview_nsoutlineview_reloaditemreloadchildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, reloadItem, arginfo_appkit_ns_nsoutlineview_nsoutlineview_reloaditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, parentForItem, arginfo_appkit_ns_nsoutlineview_nsoutlineview_parentforitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, childIndexForItem, arginfo_appkit_ns_nsoutlineview_nsoutlineview_childindexforitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, itemAtRow, arginfo_appkit_ns_nsoutlineview_nsoutlineview_itematrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, rowForItem, arginfo_appkit_ns_nsoutlineview_nsoutlineview_rowforitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, levelForItem, arginfo_appkit_ns_nsoutlineview_nsoutlineview_levelforitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, levelForRow, arginfo_appkit_ns_nsoutlineview_nsoutlineview_levelforrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, isItemExpanded, arginfo_appkit_ns_nsoutlineview_nsoutlineview_isitemexpanded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, indentationPerLevel, arginfo_appkit_ns_nsoutlineview_nsoutlineview_indentationperlevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, setIndentationPerLevel, arginfo_appkit_ns_nsoutlineview_nsoutlineview_setindentationperlevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, indentationMarkerFollowsCell, arginfo_appkit_ns_nsoutlineview_nsoutlineview_indentationmarkerfollowscell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, setIndentationMarkerFollowsCell, arginfo_appkit_ns_nsoutlineview_nsoutlineview_setindentationmarkerfollowscell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, autoresizesOutlineColumn, arginfo_appkit_ns_nsoutlineview_nsoutlineview_autoresizesoutlinecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, setAutoresizesOutlineColumn, arginfo_appkit_ns_nsoutlineview_nsoutlineview_setautoresizesoutlinecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, frameOfOutlineCellAtRow, arginfo_appkit_ns_nsoutlineview_nsoutlineview_frameofoutlinecellatrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, setDropItemDropChildIndex, arginfo_appkit_ns_nsoutlineview_nsoutlineview_setdropitemdropchildindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, shouldCollapseAutoExpandedItemsForDeposited, arginfo_appkit_ns_nsoutlineview_nsoutlineview_shouldcollapseautoexpandeditemsfordeposited, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, autosaveExpandedItems, arginfo_appkit_ns_nsoutlineview_nsoutlineview_autosaveexpandeditems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, setAutosaveExpandedItems, arginfo_appkit_ns_nsoutlineview_nsoutlineview_setautosaveexpandeditems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, insertItemsAtIndexesInParentWithAnimation, arginfo_appkit_ns_nsoutlineview_nsoutlineview_insertitemsatindexesinparentwithanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, removeItemsAtIndexesInParentWithAnimation, arginfo_appkit_ns_nsoutlineview_nsoutlineview_removeitemsatindexesinparentwithanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, moveItemAtIndexInParentToIndexInParent, arginfo_appkit_ns_nsoutlineview_nsoutlineview_moveitematindexinparenttoindexinparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, userInterfaceLayoutDirection, arginfo_appkit_ns_nsoutlineview_nsoutlineview_userinterfacelayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, setUserInterfaceLayoutDirection, arginfo_appkit_ns_nsoutlineview_nsoutlineview_setuserinterfacelayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, stronglyReferencesItems, arginfo_appkit_ns_nsoutlineview_nsoutlineview_stronglyreferencesitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOutlineView_NSOutlineView, setStronglyReferencesItems, arginfo_appkit_ns_nsoutlineview_nsoutlineview_setstronglyreferencesitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
