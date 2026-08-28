
extern zend_class_entry *appkit_ns_nscollectionview_nscollectionview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionView_NSCollectionView);

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, initWithFrame);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, dataSource);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setDataSource);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, prefetchDataSource);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setPrefetchDataSource);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, content);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setContent);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, reloadData);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, delegate);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setDelegate);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, backgroundView);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setBackgroundView);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, backgroundViewScrollsWithContent);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setBackgroundViewScrollsWithContent);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, collectionViewLayout);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setCollectionViewLayout);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, layoutAttributesForItemAtIndexPath);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, layoutAttributesForSupplementaryElementOfKindAtIndexPath);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, frameForItemAtIndex);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, frameForItemAtIndexWithNumberOfItems);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, backgroundColors);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setBackgroundColors);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, numberOfSections);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, numberOfItemsInSection);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, isFirstResponder);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, isSelectable);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setSelectable);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, allowsEmptySelection);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setAllowsEmptySelection);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, allowsMultipleSelection);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setAllowsMultipleSelection);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, selectionIndexes);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setSelectionIndexes);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, selectionIndexPaths);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setSelectionIndexPaths);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, selectItemsAtIndexPathsScrollPosition);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, deselectItemsAtIndexPaths);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, selectAll);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, deselectAll);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, registerNibForItemWithIdentifier);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, registerNibForSupplementaryViewOfKindWithIdentifier);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, makeItemWithIdentifierForIndexPath);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, makeSupplementaryViewOfKindWithIdentifierForIndexPath);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, itemAtIndex);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, itemAtIndexPath);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, visibleItems);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, indexPathsForVisibleItems);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, indexPathForItem);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, indexPathForItemAtPoint);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, supplementaryViewForElementKindAtIndexPath);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, visibleSupplementaryViewsOfKind);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, indexPathsForVisibleSupplementaryElementsOfKind);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, insertSections);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, deleteSections);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, reloadSections);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, moveSectionToSection);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, insertItemsAtIndexPaths);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, deleteItemsAtIndexPaths);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, reloadItemsAtIndexPaths);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, moveItemAtIndexPathToIndexPath);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, toggleSectionCollapse);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, scrollToItemsAtIndexPathsScrollPosition);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setDraggingSourceOperationMaskForLocal);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_datasource, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setdatasource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dataSource, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_prefetchdatasource, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setprefetchdatasource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prefetchDataSource, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_content, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setcontent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, content, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_reloaddata, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_backgroundview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setbackgroundview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_backgroundviewscrollswithcontent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setbackgroundviewscrollswithcontent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundViewScrollsWithContent, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_collectionviewlayout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setcollectionviewlayout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, collectionViewLayout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_layoutattributesforitematindexpath, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexPath, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_layoutattributesforsupplementaryelementofkindatindexpath, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, indexPath, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_frameforitematindex, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_frameforitematindexwithnumberofitems, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numberOfItems, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_backgroundcolors, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setbackgroundcolors, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, backgroundColors)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_numberofsections, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_numberofitemsinsection, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_isfirstresponder, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_isselectable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setselectable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_allowsemptyselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setallowsemptyselection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsEmptySelection, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_allowsmultipleselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setallowsmultipleselection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsMultipleSelection, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_selectionindexes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setselectionindexes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionIndexes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_selectionindexpaths, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setselectionindexpaths, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, selectionIndexPaths, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_selectitemsatindexpathsscrollposition, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexPaths, 0)
	ZEND_ARG_TYPE_INFO(0, scrollPosition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_deselectitemsatindexpaths, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexPaths, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_selectall, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_deselectall, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_registernibforitemwithidentifier, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nib, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_registernibforsupplementaryviewofkindwithidentifier, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nib, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_makeitemwithidentifierforindexpath, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, indexPath, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_makesupplementaryviewofkindwithidentifierforindexpath, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, elementKind, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, indexPath, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_itematindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_itematindexpath, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexPath, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_visibleitems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_indexpathsforvisibleitems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_indexpathforitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_indexpathforitematpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_supplementaryviewforelementkindatindexpath, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, elementKind, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, indexPath, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_visiblesupplementaryviewsofkind, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, elementKind, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_indexpathsforvisiblesupplementaryelementsofkind, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, elementKind, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_insertsections, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sections, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_deletesections, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sections, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_reloadsections, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sections, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_movesectiontosection, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newSection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_insertitemsatindexpaths, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexPaths, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_deleteitemsatindexpaths, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexPaths, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_reloaditemsatindexpaths, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexPaths, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_moveitematindexpathtoindexpath, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indexPath, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newIndexPath, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_togglesectioncollapse, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_scrolltoitemsatindexpathsscrollposition, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexPaths, 0)
	ZEND_ARG_TYPE_INFO(0, scrollPosition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setdraggingsourceoperationmaskforlocal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dragOperationMask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, localDestination, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscollectionview_nscollectionview_method_entry) {
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, initWithFrame, arginfo_appkit_ns_nscollectionview_nscollectionview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, dataSource, arginfo_appkit_ns_nscollectionview_nscollectionview_datasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setDataSource, arginfo_appkit_ns_nscollectionview_nscollectionview_setdatasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, prefetchDataSource, arginfo_appkit_ns_nscollectionview_nscollectionview_prefetchdatasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setPrefetchDataSource, arginfo_appkit_ns_nscollectionview_nscollectionview_setprefetchdatasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, content, arginfo_appkit_ns_nscollectionview_nscollectionview_content, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setContent, arginfo_appkit_ns_nscollectionview_nscollectionview_setcontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, reloadData, arginfo_appkit_ns_nscollectionview_nscollectionview_reloaddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, delegate, arginfo_appkit_ns_nscollectionview_nscollectionview_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setDelegate, arginfo_appkit_ns_nscollectionview_nscollectionview_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, backgroundView, arginfo_appkit_ns_nscollectionview_nscollectionview_backgroundview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setBackgroundView, arginfo_appkit_ns_nscollectionview_nscollectionview_setbackgroundview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, backgroundViewScrollsWithContent, arginfo_appkit_ns_nscollectionview_nscollectionview_backgroundviewscrollswithcontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setBackgroundViewScrollsWithContent, arginfo_appkit_ns_nscollectionview_nscollectionview_setbackgroundviewscrollswithcontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, collectionViewLayout, arginfo_appkit_ns_nscollectionview_nscollectionview_collectionviewlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setCollectionViewLayout, arginfo_appkit_ns_nscollectionview_nscollectionview_setcollectionviewlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, layoutAttributesForItemAtIndexPath, arginfo_appkit_ns_nscollectionview_nscollectionview_layoutattributesforitematindexpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, layoutAttributesForSupplementaryElementOfKindAtIndexPath, arginfo_appkit_ns_nscollectionview_nscollectionview_layoutattributesforsupplementaryelementofkindatindexpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, frameForItemAtIndex, arginfo_appkit_ns_nscollectionview_nscollectionview_frameforitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, frameForItemAtIndexWithNumberOfItems, arginfo_appkit_ns_nscollectionview_nscollectionview_frameforitematindexwithnumberofitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, backgroundColors, arginfo_appkit_ns_nscollectionview_nscollectionview_backgroundcolors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setBackgroundColors, arginfo_appkit_ns_nscollectionview_nscollectionview_setbackgroundcolors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, numberOfSections, arginfo_appkit_ns_nscollectionview_nscollectionview_numberofsections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, numberOfItemsInSection, arginfo_appkit_ns_nscollectionview_nscollectionview_numberofitemsinsection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, isFirstResponder, arginfo_appkit_ns_nscollectionview_nscollectionview_isfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, isSelectable, arginfo_appkit_ns_nscollectionview_nscollectionview_isselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setSelectable, arginfo_appkit_ns_nscollectionview_nscollectionview_setselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, allowsEmptySelection, arginfo_appkit_ns_nscollectionview_nscollectionview_allowsemptyselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setAllowsEmptySelection, arginfo_appkit_ns_nscollectionview_nscollectionview_setallowsemptyselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, allowsMultipleSelection, arginfo_appkit_ns_nscollectionview_nscollectionview_allowsmultipleselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setAllowsMultipleSelection, arginfo_appkit_ns_nscollectionview_nscollectionview_setallowsmultipleselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, selectionIndexes, arginfo_appkit_ns_nscollectionview_nscollectionview_selectionindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setSelectionIndexes, arginfo_appkit_ns_nscollectionview_nscollectionview_setselectionindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, selectionIndexPaths, arginfo_appkit_ns_nscollectionview_nscollectionview_selectionindexpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setSelectionIndexPaths, arginfo_appkit_ns_nscollectionview_nscollectionview_setselectionindexpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, selectItemsAtIndexPathsScrollPosition, arginfo_appkit_ns_nscollectionview_nscollectionview_selectitemsatindexpathsscrollposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, deselectItemsAtIndexPaths, arginfo_appkit_ns_nscollectionview_nscollectionview_deselectitemsatindexpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, selectAll, arginfo_appkit_ns_nscollectionview_nscollectionview_selectall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, deselectAll, arginfo_appkit_ns_nscollectionview_nscollectionview_deselectall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, registerNibForItemWithIdentifier, arginfo_appkit_ns_nscollectionview_nscollectionview_registernibforitemwithidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, registerNibForSupplementaryViewOfKindWithIdentifier, arginfo_appkit_ns_nscollectionview_nscollectionview_registernibforsupplementaryviewofkindwithidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, makeItemWithIdentifierForIndexPath, arginfo_appkit_ns_nscollectionview_nscollectionview_makeitemwithidentifierforindexpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, makeSupplementaryViewOfKindWithIdentifierForIndexPath, arginfo_appkit_ns_nscollectionview_nscollectionview_makesupplementaryviewofkindwithidentifierforindexpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, itemAtIndex, arginfo_appkit_ns_nscollectionview_nscollectionview_itematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, itemAtIndexPath, arginfo_appkit_ns_nscollectionview_nscollectionview_itematindexpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, visibleItems, arginfo_appkit_ns_nscollectionview_nscollectionview_visibleitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, indexPathsForVisibleItems, arginfo_appkit_ns_nscollectionview_nscollectionview_indexpathsforvisibleitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, indexPathForItem, arginfo_appkit_ns_nscollectionview_nscollectionview_indexpathforitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, indexPathForItemAtPoint, arginfo_appkit_ns_nscollectionview_nscollectionview_indexpathforitematpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, supplementaryViewForElementKindAtIndexPath, arginfo_appkit_ns_nscollectionview_nscollectionview_supplementaryviewforelementkindatindexpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, visibleSupplementaryViewsOfKind, arginfo_appkit_ns_nscollectionview_nscollectionview_visiblesupplementaryviewsofkind, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, indexPathsForVisibleSupplementaryElementsOfKind, arginfo_appkit_ns_nscollectionview_nscollectionview_indexpathsforvisiblesupplementaryelementsofkind, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, insertSections, arginfo_appkit_ns_nscollectionview_nscollectionview_insertsections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, deleteSections, arginfo_appkit_ns_nscollectionview_nscollectionview_deletesections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, reloadSections, arginfo_appkit_ns_nscollectionview_nscollectionview_reloadsections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, moveSectionToSection, arginfo_appkit_ns_nscollectionview_nscollectionview_movesectiontosection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, insertItemsAtIndexPaths, arginfo_appkit_ns_nscollectionview_nscollectionview_insertitemsatindexpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, deleteItemsAtIndexPaths, arginfo_appkit_ns_nscollectionview_nscollectionview_deleteitemsatindexpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, reloadItemsAtIndexPaths, arginfo_appkit_ns_nscollectionview_nscollectionview_reloaditemsatindexpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, moveItemAtIndexPathToIndexPath, arginfo_appkit_ns_nscollectionview_nscollectionview_moveitematindexpathtoindexpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, toggleSectionCollapse, arginfo_appkit_ns_nscollectionview_nscollectionview_togglesectioncollapse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, scrollToItemsAtIndexPathsScrollPosition, arginfo_appkit_ns_nscollectionview_nscollectionview_scrolltoitemsatindexpathsscrollposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setDraggingSourceOperationMaskForLocal, arginfo_appkit_ns_nscollectionview_nscollectionview_setdraggingsourceoperationmaskforlocal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
