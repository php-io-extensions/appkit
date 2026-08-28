
extern zend_class_entry *appkit_ns_nstableview_nstableview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableView_NSTableView);

PHP_METHOD(AppKit_NS_NSTableView_NSTableView, initWithFrame);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, dataSource);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDataSource);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, delegate);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDelegate);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, headerView);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setHeaderView);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, cornerView);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setCornerView);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsColumnReordering);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsColumnReordering);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsColumnResizing);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsColumnResizing);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, columnAutoresizingStyle);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setColumnAutoresizingStyle);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, gridStyleMask);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setGridStyleMask);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, intercellSpacing);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setIntercellSpacing);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, usesAlternatingRowBackgroundColors);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setUsesAlternatingRowBackgroundColors);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, backgroundColor);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, gridColor);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setGridColor);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowSizeStyle);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setRowSizeStyle);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, effectiveRowSizeStyle);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowHeight);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setRowHeight);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, noteHeightOfRowsWithIndexesChanged);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, tableColumns);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, numberOfColumns);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, numberOfRows);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, addTableColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, removeTableColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, moveColumnToColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, columnWithIdentifier);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, tableColumnWithIdentifier);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, tile);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, sizeToFit);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, sizeLastColumnToFit);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, scrollRowToVisible);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, scrollColumnToVisible);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, reloadData);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, noteNumberOfRowsChanged);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, reloadDataForRowIndexesColumnIndexes);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, editedColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, editedRow);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, clickedColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, clickedRow);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, doubleAction);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDoubleAction);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, sortDescriptors);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setSortDescriptors);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setIndicatorImageInTableColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, indicatorImageInTableColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, highlightedTableColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setHighlightedTableColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, verticalMotionCanBeginDrag);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setVerticalMotionCanBeginDrag);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, canDragRowsWithIndexesAtPoint);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDraggingSourceOperationMaskForLocal);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDropRowDropOperation);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsMultipleSelection);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsMultipleSelection);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsEmptySelection);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsEmptySelection);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsColumnSelection);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsColumnSelection);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectAll);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, deselectAll);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectColumnIndexesByExtendingSelection);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectRowIndexesByExtendingSelection);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectedColumnIndexes);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectedRowIndexes);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, deselectColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, deselectRow);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectedColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectedRow);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, isColumnSelected);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, isRowSelected);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, numberOfSelectedColumns);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, numberOfSelectedRows);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, allowsTypeSelect);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAllowsTypeSelect);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, style);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setStyle);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, effectiveStyle);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, selectionHighlightStyle);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setSelectionHighlightStyle);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, draggingDestinationFeedbackStyle);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setDraggingDestinationFeedbackStyle);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rectOfColumn);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rectOfRow);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, columnIndexesInRect);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowsInRect);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, columnAtPoint);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowAtPoint);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, frameOfCellAtColumnRow);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, autosaveName);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAutosaveName);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, autosaveTableColumns);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setAutosaveTableColumns);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, editColumnRowWithEventSelect);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, drawRowClipRect);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, highlightSelectionInClipRect);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, drawGridInClipRect);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, drawBackgroundInClipRect);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, viewAtColumnRowMakeIfNecessary);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowViewAtRowMakeIfNecessary);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowForView);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, columnForView);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, makeViewWithIdentifierOwner);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, floatsGroupRows);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setFloatsGroupRows);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, rowActionsVisible);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setRowActionsVisible);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, beginUpdates);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, endUpdates);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, insertRowsAtIndexesWithAnimation);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, removeRowsAtIndexesWithAnimation);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, moveRowAtIndexToIndex);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, hideRowsAtIndexesWithAnimation);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, unhideRowsAtIndexesWithAnimation);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, hiddenRowIndexes);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, registerNibForIdentifier);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, registeredNibsByIdentifier);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, didAddRowViewForRow);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, didRemoveRowViewForRow);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, usesStaticContents);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setUsesStaticContents);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, userInterfaceLayoutDirection);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setUserInterfaceLayoutDirection);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, usesAutomaticRowHeights);
PHP_METHOD(AppKit_NS_NSTableView_NSTableView, setUsesAutomaticRowHeights);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_datasource, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setdatasource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dataSource, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_headerview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setheaderview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_cornerview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setcornerview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cornerView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_allowscolumnreordering, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setallowscolumnreordering, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsColumnReordering, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_allowscolumnresizing, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setallowscolumnresizing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsColumnResizing, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_columnautoresizingstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setcolumnautoresizingstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columnAutoresizingStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_gridstylemask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setgridstylemask, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gridStyleMask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_intercellspacing, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setintercellspacing, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_usesalternatingrowbackgroundcolors, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setusesalternatingrowbackgroundcolors, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesAlternatingRowBackgroundColors, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_gridcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setgridcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gridColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_rowsizestyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setrowsizestyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowSizeStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_effectiverowsizestyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_rowheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setrowheight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_noteheightofrowswithindexeschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexSet, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_tablecolumns, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_numberofcolumns, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_numberofrows, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_addtablecolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableColumn, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_removetablecolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableColumn, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_movecolumntocolumn, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_columnwithidentifier, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_tablecolumnwithidentifier, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_tile, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_sizetofit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_sizelastcolumntofit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_scrollrowtovisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_scrollcolumntovisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_reloaddata, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_notenumberofrowschanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_reloaddataforrowindexescolumnindexes, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowIndexes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columnIndexes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_editedcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_editedrow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_clickedcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_clickedrow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_doubleaction, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setdoubleaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, doubleAction)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_sortdescriptors, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setsortdescriptors, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, sortDescriptors, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setindicatorimageintablecolumn, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableColumn, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_indicatorimageintablecolumn, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableColumn, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_highlightedtablecolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_sethighlightedtablecolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableColumn, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_verticalmotioncanbegindrag, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setverticalmotioncanbegindrag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, verticalMotionCanBeginDrag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_candragrowswithindexesatpoint, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowIndexes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setdraggingsourceoperationmaskforlocal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isLocal, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setdroprowdropoperation, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dropOperation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_allowsmultipleselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setallowsmultipleselection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsMultipleSelection, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_allowsemptyselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setallowsemptyselection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsEmptySelection, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_allowscolumnselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setallowscolumnselection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsColumnSelection, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_selectall, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_deselectall, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_selectcolumnindexesbyextendingselection, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extend, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_selectrowindexesbyextendingselection, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extend, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_selectedcolumnindexes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_selectedrowindexes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_deselectcolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_deselectrow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_selectedcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_selectedrow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_iscolumnselected, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_isrowselected, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_numberofselectedcolumns, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_numberofselectedrows, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_allowstypeselect, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setallowstypeselect, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsTypeSelect, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_style, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_effectivestyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_selectionhighlightstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setselectionhighlightstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionHighlightStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_draggingdestinationfeedbackstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setdraggingdestinationfeedbackstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, draggingDestinationFeedbackStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_rectofcolumn, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_rectofrow, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_columnindexesinrect, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_rowsinrect, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_columnatpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_rowatpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_frameofcellatcolumnrow, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_autosavename, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setautosavename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, autosaveName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_autosavetablecolumns, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setautosavetablecolumns, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autosaveTableColumns, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_editcolumnrowwitheventselect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, select, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_drawrowcliprect, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_highlightselectionincliprect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_drawgridincliprect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_drawbackgroundincliprect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_viewatcolumnrowmakeifnecessary, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, makeIfNecessary, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_rowviewatrowmakeifnecessary, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, makeIfNecessary, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_rowforview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_columnforview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_makeviewwithidentifierowner, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, owner, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_floatsgrouprows, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setfloatsgrouprows, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, floatsGroupRows, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_rowactionsvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setrowactionsvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowActionsVisible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_beginupdates, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_endupdates, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_insertrowsatindexeswithanimation, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animationOptions, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_removerowsatindexeswithanimation, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animationOptions, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_moverowatindextoindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_hiderowsatindexeswithanimation, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowAnimation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_unhiderowsatindexeswithanimation, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexes, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowAnimation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_hiddenrowindexes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_registernibforidentifier, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nib, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_registerednibsbyidentifier, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_didaddrowviewforrow, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowView, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_didremoverowviewforrow, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowView, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_usesstaticcontents, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setusesstaticcontents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesStaticContents, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_userinterfacelayoutdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setuserinterfacelayoutdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, userInterfaceLayoutDirection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_usesautomaticrowheights, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableview_nstableview_setusesautomaticrowheights, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesAutomaticRowHeights, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstableview_nstableview_method_entry) {
	PHP_ME(AppKit_NS_NSTableView_NSTableView, initWithFrame, arginfo_appkit_ns_nstableview_nstableview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, dataSource, arginfo_appkit_ns_nstableview_nstableview_datasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setDataSource, arginfo_appkit_ns_nstableview_nstableview_setdatasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, delegate, arginfo_appkit_ns_nstableview_nstableview_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setDelegate, arginfo_appkit_ns_nstableview_nstableview_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, headerView, arginfo_appkit_ns_nstableview_nstableview_headerview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setHeaderView, arginfo_appkit_ns_nstableview_nstableview_setheaderview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, cornerView, arginfo_appkit_ns_nstableview_nstableview_cornerview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setCornerView, arginfo_appkit_ns_nstableview_nstableview_setcornerview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, allowsColumnReordering, arginfo_appkit_ns_nstableview_nstableview_allowscolumnreordering, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setAllowsColumnReordering, arginfo_appkit_ns_nstableview_nstableview_setallowscolumnreordering, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, allowsColumnResizing, arginfo_appkit_ns_nstableview_nstableview_allowscolumnresizing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setAllowsColumnResizing, arginfo_appkit_ns_nstableview_nstableview_setallowscolumnresizing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, columnAutoresizingStyle, arginfo_appkit_ns_nstableview_nstableview_columnautoresizingstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setColumnAutoresizingStyle, arginfo_appkit_ns_nstableview_nstableview_setcolumnautoresizingstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, gridStyleMask, arginfo_appkit_ns_nstableview_nstableview_gridstylemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setGridStyleMask, arginfo_appkit_ns_nstableview_nstableview_setgridstylemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, intercellSpacing, arginfo_appkit_ns_nstableview_nstableview_intercellspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setIntercellSpacing, arginfo_appkit_ns_nstableview_nstableview_setintercellspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, usesAlternatingRowBackgroundColors, arginfo_appkit_ns_nstableview_nstableview_usesalternatingrowbackgroundcolors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setUsesAlternatingRowBackgroundColors, arginfo_appkit_ns_nstableview_nstableview_setusesalternatingrowbackgroundcolors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, backgroundColor, arginfo_appkit_ns_nstableview_nstableview_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setBackgroundColor, arginfo_appkit_ns_nstableview_nstableview_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, gridColor, arginfo_appkit_ns_nstableview_nstableview_gridcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setGridColor, arginfo_appkit_ns_nstableview_nstableview_setgridcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, rowSizeStyle, arginfo_appkit_ns_nstableview_nstableview_rowsizestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setRowSizeStyle, arginfo_appkit_ns_nstableview_nstableview_setrowsizestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, effectiveRowSizeStyle, arginfo_appkit_ns_nstableview_nstableview_effectiverowsizestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, rowHeight, arginfo_appkit_ns_nstableview_nstableview_rowheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setRowHeight, arginfo_appkit_ns_nstableview_nstableview_setrowheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, noteHeightOfRowsWithIndexesChanged, arginfo_appkit_ns_nstableview_nstableview_noteheightofrowswithindexeschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, tableColumns, arginfo_appkit_ns_nstableview_nstableview_tablecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, numberOfColumns, arginfo_appkit_ns_nstableview_nstableview_numberofcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, numberOfRows, arginfo_appkit_ns_nstableview_nstableview_numberofrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, addTableColumn, arginfo_appkit_ns_nstableview_nstableview_addtablecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, removeTableColumn, arginfo_appkit_ns_nstableview_nstableview_removetablecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, moveColumnToColumn, arginfo_appkit_ns_nstableview_nstableview_movecolumntocolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, columnWithIdentifier, arginfo_appkit_ns_nstableview_nstableview_columnwithidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, tableColumnWithIdentifier, arginfo_appkit_ns_nstableview_nstableview_tablecolumnwithidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, tile, arginfo_appkit_ns_nstableview_nstableview_tile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, sizeToFit, arginfo_appkit_ns_nstableview_nstableview_sizetofit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, sizeLastColumnToFit, arginfo_appkit_ns_nstableview_nstableview_sizelastcolumntofit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, scrollRowToVisible, arginfo_appkit_ns_nstableview_nstableview_scrollrowtovisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, scrollColumnToVisible, arginfo_appkit_ns_nstableview_nstableview_scrollcolumntovisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, reloadData, arginfo_appkit_ns_nstableview_nstableview_reloaddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, noteNumberOfRowsChanged, arginfo_appkit_ns_nstableview_nstableview_notenumberofrowschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, reloadDataForRowIndexesColumnIndexes, arginfo_appkit_ns_nstableview_nstableview_reloaddataforrowindexescolumnindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, editedColumn, arginfo_appkit_ns_nstableview_nstableview_editedcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, editedRow, arginfo_appkit_ns_nstableview_nstableview_editedrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, clickedColumn, arginfo_appkit_ns_nstableview_nstableview_clickedcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, clickedRow, arginfo_appkit_ns_nstableview_nstableview_clickedrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, doubleAction, arginfo_appkit_ns_nstableview_nstableview_doubleaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setDoubleAction, arginfo_appkit_ns_nstableview_nstableview_setdoubleaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, sortDescriptors, arginfo_appkit_ns_nstableview_nstableview_sortdescriptors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setSortDescriptors, arginfo_appkit_ns_nstableview_nstableview_setsortdescriptors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setIndicatorImageInTableColumn, arginfo_appkit_ns_nstableview_nstableview_setindicatorimageintablecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, indicatorImageInTableColumn, arginfo_appkit_ns_nstableview_nstableview_indicatorimageintablecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, highlightedTableColumn, arginfo_appkit_ns_nstableview_nstableview_highlightedtablecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setHighlightedTableColumn, arginfo_appkit_ns_nstableview_nstableview_sethighlightedtablecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, verticalMotionCanBeginDrag, arginfo_appkit_ns_nstableview_nstableview_verticalmotioncanbegindrag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setVerticalMotionCanBeginDrag, arginfo_appkit_ns_nstableview_nstableview_setverticalmotioncanbegindrag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, canDragRowsWithIndexesAtPoint, arginfo_appkit_ns_nstableview_nstableview_candragrowswithindexesatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setDraggingSourceOperationMaskForLocal, arginfo_appkit_ns_nstableview_nstableview_setdraggingsourceoperationmaskforlocal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setDropRowDropOperation, arginfo_appkit_ns_nstableview_nstableview_setdroprowdropoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, allowsMultipleSelection, arginfo_appkit_ns_nstableview_nstableview_allowsmultipleselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setAllowsMultipleSelection, arginfo_appkit_ns_nstableview_nstableview_setallowsmultipleselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, allowsEmptySelection, arginfo_appkit_ns_nstableview_nstableview_allowsemptyselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setAllowsEmptySelection, arginfo_appkit_ns_nstableview_nstableview_setallowsemptyselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, allowsColumnSelection, arginfo_appkit_ns_nstableview_nstableview_allowscolumnselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setAllowsColumnSelection, arginfo_appkit_ns_nstableview_nstableview_setallowscolumnselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, selectAll, arginfo_appkit_ns_nstableview_nstableview_selectall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, deselectAll, arginfo_appkit_ns_nstableview_nstableview_deselectall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, selectColumnIndexesByExtendingSelection, arginfo_appkit_ns_nstableview_nstableview_selectcolumnindexesbyextendingselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, selectRowIndexesByExtendingSelection, arginfo_appkit_ns_nstableview_nstableview_selectrowindexesbyextendingselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, selectedColumnIndexes, arginfo_appkit_ns_nstableview_nstableview_selectedcolumnindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, selectedRowIndexes, arginfo_appkit_ns_nstableview_nstableview_selectedrowindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, deselectColumn, arginfo_appkit_ns_nstableview_nstableview_deselectcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, deselectRow, arginfo_appkit_ns_nstableview_nstableview_deselectrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, selectedColumn, arginfo_appkit_ns_nstableview_nstableview_selectedcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, selectedRow, arginfo_appkit_ns_nstableview_nstableview_selectedrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, isColumnSelected, arginfo_appkit_ns_nstableview_nstableview_iscolumnselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, isRowSelected, arginfo_appkit_ns_nstableview_nstableview_isrowselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, numberOfSelectedColumns, arginfo_appkit_ns_nstableview_nstableview_numberofselectedcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, numberOfSelectedRows, arginfo_appkit_ns_nstableview_nstableview_numberofselectedrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, allowsTypeSelect, arginfo_appkit_ns_nstableview_nstableview_allowstypeselect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setAllowsTypeSelect, arginfo_appkit_ns_nstableview_nstableview_setallowstypeselect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, style, arginfo_appkit_ns_nstableview_nstableview_style, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setStyle, arginfo_appkit_ns_nstableview_nstableview_setstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, effectiveStyle, arginfo_appkit_ns_nstableview_nstableview_effectivestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, selectionHighlightStyle, arginfo_appkit_ns_nstableview_nstableview_selectionhighlightstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setSelectionHighlightStyle, arginfo_appkit_ns_nstableview_nstableview_setselectionhighlightstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, draggingDestinationFeedbackStyle, arginfo_appkit_ns_nstableview_nstableview_draggingdestinationfeedbackstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setDraggingDestinationFeedbackStyle, arginfo_appkit_ns_nstableview_nstableview_setdraggingdestinationfeedbackstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, rectOfColumn, arginfo_appkit_ns_nstableview_nstableview_rectofcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, rectOfRow, arginfo_appkit_ns_nstableview_nstableview_rectofrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, columnIndexesInRect, arginfo_appkit_ns_nstableview_nstableview_columnindexesinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, rowsInRect, arginfo_appkit_ns_nstableview_nstableview_rowsinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, columnAtPoint, arginfo_appkit_ns_nstableview_nstableview_columnatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, rowAtPoint, arginfo_appkit_ns_nstableview_nstableview_rowatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, frameOfCellAtColumnRow, arginfo_appkit_ns_nstableview_nstableview_frameofcellatcolumnrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, autosaveName, arginfo_appkit_ns_nstableview_nstableview_autosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setAutosaveName, arginfo_appkit_ns_nstableview_nstableview_setautosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, autosaveTableColumns, arginfo_appkit_ns_nstableview_nstableview_autosavetablecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setAutosaveTableColumns, arginfo_appkit_ns_nstableview_nstableview_setautosavetablecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, editColumnRowWithEventSelect, arginfo_appkit_ns_nstableview_nstableview_editcolumnrowwitheventselect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, drawRowClipRect, arginfo_appkit_ns_nstableview_nstableview_drawrowcliprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, highlightSelectionInClipRect, arginfo_appkit_ns_nstableview_nstableview_highlightselectionincliprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, drawGridInClipRect, arginfo_appkit_ns_nstableview_nstableview_drawgridincliprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, drawBackgroundInClipRect, arginfo_appkit_ns_nstableview_nstableview_drawbackgroundincliprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, viewAtColumnRowMakeIfNecessary, arginfo_appkit_ns_nstableview_nstableview_viewatcolumnrowmakeifnecessary, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, rowViewAtRowMakeIfNecessary, arginfo_appkit_ns_nstableview_nstableview_rowviewatrowmakeifnecessary, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, rowForView, arginfo_appkit_ns_nstableview_nstableview_rowforview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, columnForView, arginfo_appkit_ns_nstableview_nstableview_columnforview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, makeViewWithIdentifierOwner, arginfo_appkit_ns_nstableview_nstableview_makeviewwithidentifierowner, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, floatsGroupRows, arginfo_appkit_ns_nstableview_nstableview_floatsgrouprows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setFloatsGroupRows, arginfo_appkit_ns_nstableview_nstableview_setfloatsgrouprows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, rowActionsVisible, arginfo_appkit_ns_nstableview_nstableview_rowactionsvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setRowActionsVisible, arginfo_appkit_ns_nstableview_nstableview_setrowactionsvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, beginUpdates, arginfo_appkit_ns_nstableview_nstableview_beginupdates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, endUpdates, arginfo_appkit_ns_nstableview_nstableview_endupdates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, insertRowsAtIndexesWithAnimation, arginfo_appkit_ns_nstableview_nstableview_insertrowsatindexeswithanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, removeRowsAtIndexesWithAnimation, arginfo_appkit_ns_nstableview_nstableview_removerowsatindexeswithanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, moveRowAtIndexToIndex, arginfo_appkit_ns_nstableview_nstableview_moverowatindextoindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, hideRowsAtIndexesWithAnimation, arginfo_appkit_ns_nstableview_nstableview_hiderowsatindexeswithanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, unhideRowsAtIndexesWithAnimation, arginfo_appkit_ns_nstableview_nstableview_unhiderowsatindexeswithanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, hiddenRowIndexes, arginfo_appkit_ns_nstableview_nstableview_hiddenrowindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, registerNibForIdentifier, arginfo_appkit_ns_nstableview_nstableview_registernibforidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, registeredNibsByIdentifier, arginfo_appkit_ns_nstableview_nstableview_registerednibsbyidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, didAddRowViewForRow, arginfo_appkit_ns_nstableview_nstableview_didaddrowviewforrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, didRemoveRowViewForRow, arginfo_appkit_ns_nstableview_nstableview_didremoverowviewforrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, usesStaticContents, arginfo_appkit_ns_nstableview_nstableview_usesstaticcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setUsesStaticContents, arginfo_appkit_ns_nstableview_nstableview_setusesstaticcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, userInterfaceLayoutDirection, arginfo_appkit_ns_nstableview_nstableview_userinterfacelayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setUserInterfaceLayoutDirection, arginfo_appkit_ns_nstableview_nstableview_setuserinterfacelayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, usesAutomaticRowHeights, arginfo_appkit_ns_nstableview_nstableview_usesautomaticrowheights, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableView_NSTableView, setUsesAutomaticRowHeights, arginfo_appkit_ns_nstableview_nstableview_setusesautomaticrowheights, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
