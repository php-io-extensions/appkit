#include <objc/runtime.h>
#include "runtime.h"
#include "controls.h"
#include "../stubs/NSCollectionView_arginfo.h"

void appkit_register_NSCollectionView(int module_number)
{
	register_NSCollectionView_symbols(module_number);

	APPKIT_MAP(NSIndexPath, appkit_ce_NSObject);
	APPKIT_MAP(NSCollectionViewLayout, appkit_ce_NSObject);
	APPKIT_MAP(NSCollectionViewFlowLayout, appkit_ce_NSCollectionViewLayout);
	APPKIT_MAP(NSCollectionViewItem, appkit_ce_NSObject);
	APPKIT_MAP(NSCollectionView, appkit_ce_NSView);
}

/* NSIndexPath */
ZEND_METHOD(NSIndexPath, indexPathForItemInSection)
{
	zend_long item, section;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(section)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSIndexPath indexPathForItem:(NSInteger) item inSection:(NSInteger) section]);
	APPKIT_END
}

ANY_LONG_GET(NSIndexPath, NSIndexPath, item, item)
ANY_LONG_GET(NSIndexPath, NSIndexPath, section, section)

/* NSCollectionViewLayout */
ANY_VOID_METHOD(NSCollectionViewLayout, NSCollectionViewLayout, invalidateLayout, invalidateLayout)

/* NSCollectionViewFlowLayout */
ZEND_METHOD(NSCollectionViewFlowLayout, init)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		NSCollectionViewFlowLayout *layout = [[CALLED alloc] init];
		appkit_box_objc(return_value, layout);
		[layout release];
	APPKIT_END
}

ANY_SIZE_GET(NSCollectionViewFlowLayout, NSCollectionViewFlowLayout, itemSize, itemSize)

ZEND_METHOD(NSCollectionViewFlowLayout, setItemSize)
{
	zend_object *size_obj;
	NSSize size;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(size_obj, appkit_ce_NSSize)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_size_from(size_obj, 1, &size)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[SELF(NSCollectionViewFlowLayout) setItemSize:size];
	APPKIT_END
}

ANY_DOUBLE_GET(NSCollectionViewFlowLayout, NSCollectionViewFlowLayout, minimumInteritemSpacing, minimumInteritemSpacing)
ANY_DOUBLE_SET(NSCollectionViewFlowLayout, NSCollectionViewFlowLayout, setMinimumInteritemSpacing, setMinimumInteritemSpacing)
ANY_DOUBLE_GET(NSCollectionViewFlowLayout, NSCollectionViewFlowLayout, minimumLineSpacing, minimumLineSpacing)
ANY_DOUBLE_SET(NSCollectionViewFlowLayout, NSCollectionViewFlowLayout, setMinimumLineSpacing, setMinimumLineSpacing)

ZEND_METHOD(NSCollectionViewFlowLayout, sectionInset)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_return_edge_insets(return_value, [SELF(NSCollectionViewFlowLayout) sectionInset]);
	APPKIT_END
}

ZEND_METHOD(NSCollectionViewFlowLayout, setSectionInset)
{
	zend_object *insets_obj;
	NSEdgeInsets insets;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(insets_obj, appkit_ce_NSEdgeInsets)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_edge_insets_from(insets_obj, 1, &insets)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[SELF(NSCollectionViewFlowLayout) setSectionInset:insets];
	APPKIT_END
}

/* NSCollectionViewItem */
ZEND_METHOD(NSCollectionViewItem, init)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		NSCollectionViewItem *item = [[CALLED alloc] init];
		appkit_box_objc(return_value, item);
		[item release];
	APPKIT_END
}

ANY_OBJ_GET(NSCollectionViewItem, NSCollectionViewItem, view, view)
ANY_OBJ_SET(NSCollectionViewItem, NSCollectionViewItem, setView, setView, appkit_ce_NSView, NSView *)
ANY_BOOL_GET(NSCollectionViewItem, NSCollectionViewItem, isSelected, isSelected)
ANY_OBJ_GET(NSCollectionViewItem, NSCollectionViewItem, collectionView, collectionView)

/* NSCollectionView */
#define THIS_COLLECTION SELF(NSCollectionView)

ANY_OBJ_GET(NSCollectionView, NSCollectionView, collectionViewLayout, collectionViewLayout)
ANY_OBJ_SET_OR_NULL(NSCollectionView, NSCollectionView, setCollectionViewLayout, setCollectionViewLayout, appkit_ce_NSCollectionViewLayout, NSCollectionViewLayout *)
ANY_OBJ_GET(NSCollectionView, NSCollectionView, dataSource, dataSource)
ANY_OBJ_SET_OR_NULL(NSCollectionView, NSCollectionView, setDataSource, setDataSource, appkit_ce_NSObject, id<NSCollectionViewDataSource>)
ANY_OBJ_GET(NSCollectionView, NSCollectionView, delegate, delegate)
ANY_OBJ_SET_OR_NULL(NSCollectionView, NSCollectionView, setDelegate, setDelegate, appkit_ce_NSObject, id<NSCollectionViewDelegate>)
ANY_VOID_METHOD(NSCollectionView, NSCollectionView, reloadData, reloadData)
ANY_LONG_GET(NSCollectionView, NSCollectionView, numberOfSections, numberOfSections)
ANY_BOOL_GET(NSCollectionView, NSCollectionView, isSelectable, isSelectable)
ANY_BOOL_SET(NSCollectionView, NSCollectionView, setSelectable, setSelectable)
ANY_BOOL_GET(NSCollectionView, NSCollectionView, allowsMultipleSelection, allowsMultipleSelection)
ANY_BOOL_SET(NSCollectionView, NSCollectionView, setAllowsMultipleSelection, setAllowsMultipleSelection)

ZEND_METHOD(NSCollectionView, numberOfItemsInSection)
{
	zend_long section;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(section)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_COLLECTION numberOfItemsInSection:(NSInteger) section]);
	APPKIT_END
}

ZEND_METHOD(NSCollectionView, registerClassForItemWithIdentifier)
{
	zend_string *item_class = NULL, *identifier;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR_OR_NULL(item_class)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[THIS_COLLECTION registerClass:(item_class != NULL ? objc_getClass(ZSTR_VAL(item_class)) : Nil)
			forItemWithIdentifier:appkit_nsstring(identifier)];
	APPKIT_END
}

ZEND_METHOD(NSCollectionView, makeItemWithIdentifierForIndexPath)
{
	zend_string *identifier;
	zend_object *path;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(identifier)
		Z_PARAM_OBJ_OF_CLASS(path, appkit_ce_NSIndexPath)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_COLLECTION makeItemWithIdentifier:appkit_nsstring(identifier)
			forIndexPath:(NSIndexPath *) APPKIT_ID(path)]);
	APPKIT_END
}

ZEND_METHOD(NSCollectionView, itemAtIndexPath)
{
	zend_object *path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(path, appkit_ce_NSIndexPath)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_COLLECTION itemAtIndexPath:(NSIndexPath *) APPKIT_ID(path)]);
	APPKIT_END
}

ZEND_METHOD(NSCollectionView, indexPathForItemAtPoint)
{
	zend_object *point_obj;
	NSPoint point;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(point_obj, appkit_ce_NSPoint)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_point_from(point_obj, 1, &point)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_COLLECTION indexPathForItemAtPoint:point]);
	APPKIT_END
}

/* The index-path set calls: the PHP array of NSIndexPath as an NSSet. */
#define INDEX_PATHS_METHOD(name, sel) \
ZEND_METHOD(NSCollectionView, name) \
{ \
	HashTable *paths; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_ARRAY_HT(paths) \
	ZEND_PARSE_PARAMETERS_END(); \
	APPKIT_BEGIN \
		NSArray *array = appkit_object_array(paths, appkit_ce_NSIndexPath, 1); \
		if (array == nil) { \
			RETURN_THROWS(); \
		} \
		[THIS_COLLECTION sel:[NSSet setWithArray:array]]; \
	APPKIT_END \
}

INDEX_PATHS_METHOD(insertItemsAtIndexPaths, insertItemsAtIndexPaths)
INDEX_PATHS_METHOD(deleteItemsAtIndexPaths, deleteItemsAtIndexPaths)
INDEX_PATHS_METHOD(reloadItemsAtIndexPaths, reloadItemsAtIndexPaths)

ZEND_METHOD(NSCollectionView, scrollToItemsAtIndexPathsScrollPosition)
{
	HashTable *paths;
	zend_long position;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ARRAY_HT(paths)
		Z_PARAM_LONG(position)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		NSArray *array = appkit_object_array(paths, appkit_ce_NSIndexPath, 1);
		if (array == nil) {
			RETURN_THROWS();
		}
		[THIS_COLLECTION scrollToItemsAtIndexPaths:[NSSet setWithArray:array] scrollPosition:(NSCollectionViewScrollPosition) position];
	APPKIT_END
}
