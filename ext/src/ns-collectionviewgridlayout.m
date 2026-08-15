#import <AppKit/AppKit.h>
#import "ns-collectionviewgridlayout.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static NSCollectionViewGridLayout *ns_gridlayout_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCollectionViewGridLayout class]] ? (NSCollectionViewGridLayout *)obj : nil;
}

uintptr_t ns_collectionviewgridlayout_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSCollectionViewGridLayout alloc] init]);
    }
}

uintptr_t ns_collectionviewgridlayout_wrap(void *layout)
{
    if (!layout) {
        return 0;
    }
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = (__bridge NSCollectionViewGridLayout *)layout;
        return [obj isKindOfClass:[NSCollectionViewGridLayout class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_collectionviewgridlayout_destroy(uintptr_t layout)
{
    ns_release_handle(layout);
}

void *ns_collectionviewgridlayout_nscollectionviewgridlayout(uintptr_t layout)
{
    NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_collectionviewgridlayout_set_margins(uintptr_t layout, double top, double left, double bottom, double right)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        if (obj) {
            obj.margins = NSEdgeInsetsMake((CGFloat)top, (CGFloat)left, (CGFloat)bottom, (CGFloat)right);
        }
    }
}

void ns_collectionviewgridlayout_set_minimum_interitem_spacing(uintptr_t layout, double spacing)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        if (obj) {
            obj.minimumInteritemSpacing = (CGFloat)spacing;
        }
    }
}

double ns_collectionviewgridlayout_get_minimum_interitem_spacing(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        return obj ? (double)obj.minimumInteritemSpacing : 0.0;
    }
}

void ns_collectionviewgridlayout_set_minimum_line_spacing(uintptr_t layout, double spacing)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        if (obj) {
            obj.minimumLineSpacing = (CGFloat)spacing;
        }
    }
}

double ns_collectionviewgridlayout_get_minimum_line_spacing(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        return obj ? (double)obj.minimumLineSpacing : 0.0;
    }
}

void ns_collectionviewgridlayout_set_maximum_number_of_rows(uintptr_t layout, int rows)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        if (obj && rows >= 0) {
            obj.maximumNumberOfRows = (NSUInteger)rows;
        }
    }
}

int ns_collectionviewgridlayout_get_maximum_number_of_rows(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        return obj ? (int)obj.maximumNumberOfRows : 0;
    }
}

void ns_collectionviewgridlayout_set_maximum_number_of_columns(uintptr_t layout, int columns)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        if (obj && columns >= 0) {
            obj.maximumNumberOfColumns = (NSUInteger)columns;
        }
    }
}

int ns_collectionviewgridlayout_get_maximum_number_of_columns(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        return obj ? (int)obj.maximumNumberOfColumns : 0;
    }
}

void ns_collectionviewgridlayout_set_minimum_item_size(uintptr_t layout, double width, double height)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        if (obj) {
            obj.minimumItemSize = NSMakeSize((CGFloat)width, (CGFloat)height);
        }
    }
}

int ns_collectionviewgridlayout_get_minimum_item_size(uintptr_t layout, double *width, double *height)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        if (!obj) {
            return 0;
        }
        if (width) {
            *width = (double)obj.minimumItemSize.width;
        }
        if (height) {
            *height = (double)obj.minimumItemSize.height;
        }
        return 1;
    }
}

void ns_collectionviewgridlayout_set_maximum_item_size(uintptr_t layout, double width, double height)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        if (obj) {
            obj.maximumItemSize = NSMakeSize((CGFloat)width, (CGFloat)height);
        }
    }
}

int ns_collectionviewgridlayout_get_maximum_item_size(uintptr_t layout, double *width, double *height)
{
    @autoreleasepool {
        NSCollectionViewGridLayout *obj = ns_gridlayout_from(layout);
        if (!obj) {
            return 0;
        }
        if (width) {
            *width = (double)obj.maximumItemSize.width;
        }
        if (height) {
            *height = (double)obj.maximumItemSize.height;
        }
        return 1;
    }
}
