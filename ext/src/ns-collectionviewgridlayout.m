#include "ns-collectionviewgridlayout.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSCollectionViewGridLayout                                             */
/* ====================================================================== */

zend_long ns_nscollectionviewgridlayout_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSCollectionViewGridLayout alloc] init]);
    }
}

void ns_nscollectionviewgridlayout_margins(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        ns_ret_edge_insets(return_value, l != nil ? [l margins] : NSEdgeInsetsZero);
    }
}

void ns_nscollectionviewgridlayout_set_margins(zval *handle, zval *top, zval *left, zval *bottom, zval *right)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        if (l == nil) return;
        [l setMargins:NSEdgeInsetsMake(ns_arg_double(top), ns_arg_double(left), ns_arg_double(bottom), ns_arg_double(right))];
    }
}

double ns_nscollectionviewgridlayout_minimum_interitem_spacing(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        r = l != nil ? (double) [l minimumInteritemSpacing] : 0.0;
    }
    return r;
}

void ns_nscollectionviewgridlayout_set_minimum_interitem_spacing(zval *handle, zval *minimumInteritemSpacing)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        if (l == nil) return;
        [l setMinimumInteritemSpacing:ns_arg_double(minimumInteritemSpacing)];
    }
}

double ns_nscollectionviewgridlayout_minimum_line_spacing(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        r = l != nil ? (double) [l minimumLineSpacing] : 0.0;
    }
    return r;
}

void ns_nscollectionviewgridlayout_set_minimum_line_spacing(zval *handle, zval *minimumLineSpacing)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        if (l == nil) return;
        [l setMinimumLineSpacing:ns_arg_double(minimumLineSpacing)];
    }
}

zend_long ns_nscollectionviewgridlayout_maximum_number_of_rows(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        r = l != nil ? (zend_long) [l maximumNumberOfRows] : 0;
    }
    return r;
}

void ns_nscollectionviewgridlayout_set_maximum_number_of_rows(zval *handle, zval *maximumNumberOfRows)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        if (l == nil) return;
        [l setMaximumNumberOfRows:(NSUInteger) ns_arg_long(maximumNumberOfRows)];
    }
}

zend_long ns_nscollectionviewgridlayout_maximum_number_of_columns(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        r = l != nil ? (zend_long) [l maximumNumberOfColumns] : 0;
    }
    return r;
}

void ns_nscollectionviewgridlayout_set_maximum_number_of_columns(zval *handle, zval *maximumNumberOfColumns)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        if (l == nil) return;
        [l setMaximumNumberOfColumns:(NSUInteger) ns_arg_long(maximumNumberOfColumns)];
    }
}

void ns_nscollectionviewgridlayout_minimum_item_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        ns_ret_size(return_value, l != nil ? [l minimumItemSize] : NSZeroSize);
    }
}

void ns_nscollectionviewgridlayout_set_minimum_item_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        if (l == nil) return;
        [l setMinimumItemSize:ns_arg_size(width, height)];
    }
}

void ns_nscollectionviewgridlayout_maximum_item_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        ns_ret_size(return_value, l != nil ? [l maximumItemSize] : NSZeroSize);
    }
}

void ns_nscollectionviewgridlayout_set_maximum_item_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        if (l == nil) return;
        [l setMaximumItemSize:ns_arg_size(width, height)];
    }
}

void ns_nscollectionviewgridlayout_background_colors(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        ns_ret_object_array(return_value, l != nil ? [l backgroundColors] : nil);
    }
}

void ns_nscollectionviewgridlayout_set_background_colors(zval *handle, zval *backgroundColors)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *l = NS_ARG_AS(NSCollectionViewGridLayout, handle);
        if (l == nil) return;
        zval *z = ns_deref(backgroundColors);
        NSArray *colors = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_object_array(backgroundColors) : nil;
        [l setBackgroundColors:colors];
    }
}
