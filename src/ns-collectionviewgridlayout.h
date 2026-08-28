#ifndef PHP_APPKIT_NS_COLLECTIONVIEWGRIDLAYOUT_H
#define PHP_APPKIT_NS_COLLECTIONVIEWGRIDLAYOUT_H

/*
 * Faithful 1:1 binding of AppKit NSCollectionViewGridLayout.h.
 * Every member of the class is either bound or reserved. Nothing
 * is omitted. There are no same-file categories and no adopted
 * protocols redeclared here. Inherited NSCollectionViewLayout /
 * NSObject members stay on those classes. This header declares
 * no initializer — construction is synthesized init (allocs
 * NSCollectionViewGridLayout). Nothing is reserved. NSEdgeInsets
 * margins and NSSize min/max item sizes follow the struct
 * convention. CGFloat spacings cross as double. NSUInteger
 * maximumNumberOfRows / maximumNumberOfColumns cross as int.
 * backgroundColors is null_resettable NSArray<NSColor *> —
 * the getter is an array of handles and the setter takes var
 * so null resets.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSCollectionViewGridLayout init() -> int */
zend_long ns_nscollectionviewgridlayout_init(void);

/*@zep NS\NSCollectionViewGridLayout margins(int handle) -> array */
void ns_nscollectionviewgridlayout_margins(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewGridLayout setMargins(int handle, double top, double left, double bottom, double right) -> void */
void ns_nscollectionviewgridlayout_set_margins(zval *handle, zval *top, zval *left, zval *bottom, zval *right);

/*@zep NS\NSCollectionViewGridLayout minimumInteritemSpacing(int handle) -> double */
double ns_nscollectionviewgridlayout_minimum_interitem_spacing(zval *handle);
/*@zep NS\NSCollectionViewGridLayout setMinimumInteritemSpacing(int handle, double minimumInteritemSpacing) -> void */
void ns_nscollectionviewgridlayout_set_minimum_interitem_spacing(zval *handle, zval *minimumInteritemSpacing);

/*@zep NS\NSCollectionViewGridLayout minimumLineSpacing(int handle) -> double */
double ns_nscollectionviewgridlayout_minimum_line_spacing(zval *handle);
/*@zep NS\NSCollectionViewGridLayout setMinimumLineSpacing(int handle, double minimumLineSpacing) -> void */
void ns_nscollectionviewgridlayout_set_minimum_line_spacing(zval *handle, zval *minimumLineSpacing);

/*@zep NS\NSCollectionViewGridLayout maximumNumberOfRows(int handle) -> int */
zend_long ns_nscollectionviewgridlayout_maximum_number_of_rows(zval *handle);
/*@zep NS\NSCollectionViewGridLayout setMaximumNumberOfRows(int handle, int maximumNumberOfRows) -> void */
void ns_nscollectionviewgridlayout_set_maximum_number_of_rows(zval *handle, zval *maximumNumberOfRows);

/*@zep NS\NSCollectionViewGridLayout maximumNumberOfColumns(int handle) -> int */
zend_long ns_nscollectionviewgridlayout_maximum_number_of_columns(zval *handle);
/*@zep NS\NSCollectionViewGridLayout setMaximumNumberOfColumns(int handle, int maximumNumberOfColumns) -> void */
void ns_nscollectionviewgridlayout_set_maximum_number_of_columns(zval *handle, zval *maximumNumberOfColumns);

/*@zep NS\NSCollectionViewGridLayout minimumItemSize(int handle) -> array */
void ns_nscollectionviewgridlayout_minimum_item_size(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewGridLayout setMinimumItemSize(int handle, double width, double height) -> void */
void ns_nscollectionviewgridlayout_set_minimum_item_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSCollectionViewGridLayout maximumItemSize(int handle) -> array */
void ns_nscollectionviewgridlayout_maximum_item_size(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewGridLayout setMaximumItemSize(int handle, double width, double height) -> void */
void ns_nscollectionviewgridlayout_set_maximum_item_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSCollectionViewGridLayout backgroundColors(int handle) -> array */
void ns_nscollectionviewgridlayout_background_colors(zval *return_value, zval *handle);
/*@zep NS\NSCollectionViewGridLayout setBackgroundColors(int handle, var backgroundColors) -> void */
void ns_nscollectionviewgridlayout_set_background_colors(zval *handle, zval *backgroundColors);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEWGRIDLAYOUT_H */
