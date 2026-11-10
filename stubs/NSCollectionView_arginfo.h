/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: a1c5d7b0fdcbba4cb46bb1ab796c458bc6da377e */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSIndexPath_indexPathForItemInSection, 0, 2, NSIndexPath, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSIndexPath_item, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSIndexPath_section arginfo_class_NSIndexPath_item

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionViewLayout_invalidateLayout, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionViewFlowLayout_init, 0, 0, IS_STATIC, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSCollectionViewFlowLayout_itemSize, 0, 0, NSSize, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionViewFlowLayout_setItemSize, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, itemSize, NSSize, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionViewFlowLayout_minimumInteritemSpacing, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionViewFlowLayout_setMinimumInteritemSpacing, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, minimumInteritemSpacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSCollectionViewFlowLayout_minimumLineSpacing arginfo_class_NSCollectionViewFlowLayout_minimumInteritemSpacing

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionViewFlowLayout_setMinimumLineSpacing, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, minimumLineSpacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSCollectionViewFlowLayout_sectionInset, 0, 0, NSEdgeInsets, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionViewFlowLayout_setSectionInset, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, sectionInset, NSEdgeInsets, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSCollectionViewItem_init arginfo_class_NSCollectionViewFlowLayout_init

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSCollectionViewItem_view, 0, 0, NSView, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionViewItem_setView, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionViewItem_isSelected, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSCollectionViewItem_collectionView, 0, 0, NSCollectionView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSCollectionView_collectionViewLayout, 0, 0, NSCollectionViewLayout, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionView_setCollectionViewLayout, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, collectionViewLayout, NSCollectionViewLayout, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSCollectionView_dataSource, 0, 0, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionView_setDataSource, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, dataSource, NSObject, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSCollectionView_delegate arginfo_class_NSCollectionView_dataSource

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionView_setDelegate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, delegate, NSObject, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSCollectionView_reloadData arginfo_class_NSCollectionViewLayout_invalidateLayout

#define arginfo_class_NSCollectionView_numberOfSections arginfo_class_NSIndexPath_item

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionView_numberOfItemsInSection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSCollectionView_isSelectable arginfo_class_NSCollectionViewItem_isSelected

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionView_setSelectable, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selectable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSCollectionView_allowsMultipleSelection arginfo_class_NSCollectionViewItem_isSelected

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionView_setAllowsMultipleSelection, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, allowsMultipleSelection, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionView_registerClassForItemWithIdentifier, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, itemClass, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSCollectionView_makeItemWithIdentifierForIndexPath, 0, 2, NSCollectionViewItem, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, indexPath, NSIndexPath, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSCollectionView_itemAtIndexPath, 0, 1, NSCollectionViewItem, 1)
	ZEND_ARG_OBJ_INFO(0, indexPath, NSIndexPath, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSCollectionView_indexPathForItemAtPoint, 0, 1, NSIndexPath, 1)
	ZEND_ARG_OBJ_INFO(0, point, NSPoint, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionView_insertItemsAtIndexPaths, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, indexPaths, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSCollectionView_deleteItemsAtIndexPaths arginfo_class_NSCollectionView_insertItemsAtIndexPaths

#define arginfo_class_NSCollectionView_reloadItemsAtIndexPaths arginfo_class_NSCollectionView_insertItemsAtIndexPaths

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSCollectionView_scrollToItemsAtIndexPathsScrollPosition, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, indexPaths, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, scrollPosition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSIndexPath, indexPathForItemInSection);
ZEND_METHOD(NSIndexPath, item);
ZEND_METHOD(NSIndexPath, section);
ZEND_METHOD(NSCollectionViewLayout, invalidateLayout);
ZEND_METHOD(NSCollectionViewFlowLayout, init);
ZEND_METHOD(NSCollectionViewFlowLayout, itemSize);
ZEND_METHOD(NSCollectionViewFlowLayout, setItemSize);
ZEND_METHOD(NSCollectionViewFlowLayout, minimumInteritemSpacing);
ZEND_METHOD(NSCollectionViewFlowLayout, setMinimumInteritemSpacing);
ZEND_METHOD(NSCollectionViewFlowLayout, minimumLineSpacing);
ZEND_METHOD(NSCollectionViewFlowLayout, setMinimumLineSpacing);
ZEND_METHOD(NSCollectionViewFlowLayout, sectionInset);
ZEND_METHOD(NSCollectionViewFlowLayout, setSectionInset);
ZEND_METHOD(NSCollectionViewItem, init);
ZEND_METHOD(NSCollectionViewItem, view);
ZEND_METHOD(NSCollectionViewItem, setView);
ZEND_METHOD(NSCollectionViewItem, isSelected);
ZEND_METHOD(NSCollectionViewItem, collectionView);
ZEND_METHOD(NSCollectionView, collectionViewLayout);
ZEND_METHOD(NSCollectionView, setCollectionViewLayout);
ZEND_METHOD(NSCollectionView, dataSource);
ZEND_METHOD(NSCollectionView, setDataSource);
ZEND_METHOD(NSCollectionView, delegate);
ZEND_METHOD(NSCollectionView, setDelegate);
ZEND_METHOD(NSCollectionView, reloadData);
ZEND_METHOD(NSCollectionView, numberOfSections);
ZEND_METHOD(NSCollectionView, numberOfItemsInSection);
ZEND_METHOD(NSCollectionView, isSelectable);
ZEND_METHOD(NSCollectionView, setSelectable);
ZEND_METHOD(NSCollectionView, allowsMultipleSelection);
ZEND_METHOD(NSCollectionView, setAllowsMultipleSelection);
ZEND_METHOD(NSCollectionView, registerClassForItemWithIdentifier);
ZEND_METHOD(NSCollectionView, makeItemWithIdentifierForIndexPath);
ZEND_METHOD(NSCollectionView, itemAtIndexPath);
ZEND_METHOD(NSCollectionView, indexPathForItemAtPoint);
ZEND_METHOD(NSCollectionView, insertItemsAtIndexPaths);
ZEND_METHOD(NSCollectionView, deleteItemsAtIndexPaths);
ZEND_METHOD(NSCollectionView, reloadItemsAtIndexPaths);
ZEND_METHOD(NSCollectionView, scrollToItemsAtIndexPathsScrollPosition);

static const zend_function_entry class_NSIndexPath_methods[] = {
	ZEND_ME(NSIndexPath, indexPathForItemInSection, arginfo_class_NSIndexPath_indexPathForItemInSection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSIndexPath, item, arginfo_class_NSIndexPath_item, ZEND_ACC_PUBLIC)
	ZEND_ME(NSIndexPath, section, arginfo_class_NSIndexPath_section, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSCollectionViewLayout_methods[] = {
	ZEND_ME(NSCollectionViewLayout, invalidateLayout, arginfo_class_NSCollectionViewLayout_invalidateLayout, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSCollectionViewFlowLayout_methods[] = {
	ZEND_ME(NSCollectionViewFlowLayout, init, arginfo_class_NSCollectionViewFlowLayout_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSCollectionViewFlowLayout, itemSize, arginfo_class_NSCollectionViewFlowLayout_itemSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionViewFlowLayout, setItemSize, arginfo_class_NSCollectionViewFlowLayout_setItemSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionViewFlowLayout, minimumInteritemSpacing, arginfo_class_NSCollectionViewFlowLayout_minimumInteritemSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionViewFlowLayout, setMinimumInteritemSpacing, arginfo_class_NSCollectionViewFlowLayout_setMinimumInteritemSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionViewFlowLayout, minimumLineSpacing, arginfo_class_NSCollectionViewFlowLayout_minimumLineSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionViewFlowLayout, setMinimumLineSpacing, arginfo_class_NSCollectionViewFlowLayout_setMinimumLineSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionViewFlowLayout, sectionInset, arginfo_class_NSCollectionViewFlowLayout_sectionInset, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionViewFlowLayout, setSectionInset, arginfo_class_NSCollectionViewFlowLayout_setSectionInset, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSCollectionViewItem_methods[] = {
	ZEND_ME(NSCollectionViewItem, init, arginfo_class_NSCollectionViewItem_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSCollectionViewItem, view, arginfo_class_NSCollectionViewItem_view, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionViewItem, setView, arginfo_class_NSCollectionViewItem_setView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionViewItem, isSelected, arginfo_class_NSCollectionViewItem_isSelected, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionViewItem, collectionView, arginfo_class_NSCollectionViewItem_collectionView, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSCollectionView_methods[] = {
	ZEND_ME(NSCollectionView, collectionViewLayout, arginfo_class_NSCollectionView_collectionViewLayout, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, setCollectionViewLayout, arginfo_class_NSCollectionView_setCollectionViewLayout, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, dataSource, arginfo_class_NSCollectionView_dataSource, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, setDataSource, arginfo_class_NSCollectionView_setDataSource, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, delegate, arginfo_class_NSCollectionView_delegate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, setDelegate, arginfo_class_NSCollectionView_setDelegate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, reloadData, arginfo_class_NSCollectionView_reloadData, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, numberOfSections, arginfo_class_NSCollectionView_numberOfSections, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, numberOfItemsInSection, arginfo_class_NSCollectionView_numberOfItemsInSection, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, isSelectable, arginfo_class_NSCollectionView_isSelectable, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, setSelectable, arginfo_class_NSCollectionView_setSelectable, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, allowsMultipleSelection, arginfo_class_NSCollectionView_allowsMultipleSelection, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, setAllowsMultipleSelection, arginfo_class_NSCollectionView_setAllowsMultipleSelection, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, registerClassForItemWithIdentifier, arginfo_class_NSCollectionView_registerClassForItemWithIdentifier, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, makeItemWithIdentifierForIndexPath, arginfo_class_NSCollectionView_makeItemWithIdentifierForIndexPath, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, itemAtIndexPath, arginfo_class_NSCollectionView_itemAtIndexPath, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, indexPathForItemAtPoint, arginfo_class_NSCollectionView_indexPathForItemAtPoint, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, insertItemsAtIndexPaths, arginfo_class_NSCollectionView_insertItemsAtIndexPaths, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, deleteItemsAtIndexPaths, arginfo_class_NSCollectionView_deleteItemsAtIndexPaths, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, reloadItemsAtIndexPaths, arginfo_class_NSCollectionView_reloadItemsAtIndexPaths, ZEND_ACC_PUBLIC)
	ZEND_ME(NSCollectionView, scrollToItemsAtIndexPathsScrollPosition, arginfo_class_NSCollectionView_scrollToItemsAtIndexPathsScrollPosition, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_NSCollectionView_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("NSCollectionViewScrollPositionNone", NSCollectionViewScrollPositionNone, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSCollectionViewScrollPositionTop", NSCollectionViewScrollPositionTop, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSCollectionViewScrollPositionCenteredVertically", NSCollectionViewScrollPositionCenteredVertically, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSCollectionViewScrollPositionBottom", NSCollectionViewScrollPositionBottom, CONST_PERSISTENT);
}

static zend_class_entry *register_class_NSIndexPath(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSIndexPath", class_NSIndexPath_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSCollectionViewLayout(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSCollectionViewLayout", class_NSCollectionViewLayout_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSCollectionViewFlowLayout(zend_class_entry *class_entry_NSCollectionViewLayout)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSCollectionViewFlowLayout", class_NSCollectionViewFlowLayout_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSCollectionViewLayout, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSCollectionViewItem(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSCollectionViewItem", class_NSCollectionViewItem_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSCollectionView(zend_class_entry *class_entry_NSView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSCollectionView", class_NSCollectionView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
