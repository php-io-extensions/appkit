#import <AppKit/AppKit.h>
#import "ns-collectionviewflowlayout.h"

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

static NSCollectionViewFlowLayout *ns_flow_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCollectionViewFlowLayout class]] ? (NSCollectionViewFlowLayout *)obj : nil;
}

uintptr_t ns_collectionviewflowlayout_create(void)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *layout = [[NSCollectionViewFlowLayout alloc] init];
        layout.itemSize = NSMakeSize(96.0, 32.0);
        layout.minimumInteritemSpacing = 8.0;
        layout.minimumLineSpacing = 8.0;
        return ns_retain_obj(layout);
    }
}

uintptr_t ns_collectionviewflowlayout_wrap(void *layout)
{
    if (!layout) {
        return 0;
    }
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = (__bridge NSCollectionViewFlowLayout *)layout;
        return [obj isKindOfClass:[NSCollectionViewFlowLayout class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_collectionviewflowlayout_destroy(uintptr_t layout)
{
    ns_release_handle(layout);
}

void *ns_collectionviewflowlayout_nscollectionviewflowlayout(uintptr_t layout)
{
    NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_collectionviewflowlayout_set_item_size(uintptr_t layout, double width, double height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj) {
            obj.itemSize = NSMakeSize((CGFloat)width, (CGFloat)height);
        }
    }
}

int ns_collectionviewflowlayout_get_item_size(uintptr_t layout, double *width, double *height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (!obj) {
            return 0;
        }
        if (width) {
            *width = (double)obj.itemSize.width;
        }
        if (height) {
            *height = (double)obj.itemSize.height;
        }
        return 1;
    }
}

void ns_collectionviewflowlayout_set_estimated_item_size(uintptr_t layout, double width, double height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj) {
            obj.estimatedItemSize = NSMakeSize((CGFloat)width, (CGFloat)height);
        }
    }
}

int ns_collectionviewflowlayout_get_estimated_item_size(uintptr_t layout, double *width, double *height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (!obj) {
            return 0;
        }
        if (width) {
            *width = (double)obj.estimatedItemSize.width;
        }
        if (height) {
            *height = (double)obj.estimatedItemSize.height;
        }
        return 1;
    }
}

void ns_collectionviewflowlayout_set_minimum_line_spacing(uintptr_t layout, double spacing)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj) {
            obj.minimumLineSpacing = (CGFloat)spacing;
        }
    }
}

double ns_collectionviewflowlayout_get_minimum_line_spacing(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        return obj ? (double)obj.minimumLineSpacing : 0.0;
    }
}

void ns_collectionviewflowlayout_set_minimum_interitem_spacing(uintptr_t layout, double spacing)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj) {
            obj.minimumInteritemSpacing = (CGFloat)spacing;
        }
    }
}

double ns_collectionviewflowlayout_get_minimum_interitem_spacing(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        return obj ? (double)obj.minimumInteritemSpacing : 0.0;
    }
}

void ns_collectionviewflowlayout_set_scroll_direction(uintptr_t layout, int direction)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj) {
            obj.scrollDirection = (NSCollectionViewScrollDirection)direction;
        }
    }
}

int ns_collectionviewflowlayout_get_scroll_direction(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        return obj ? (int)obj.scrollDirection : 0;
    }
}

void ns_collectionviewflowlayout_set_header_reference_size(uintptr_t layout, double width, double height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj) {
            obj.headerReferenceSize = NSMakeSize((CGFloat)width, (CGFloat)height);
        }
    }
}

int ns_collectionviewflowlayout_get_header_reference_size(uintptr_t layout, double *width, double *height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (!obj) {
            return 0;
        }
        if (width) {
            *width = (double)obj.headerReferenceSize.width;
        }
        if (height) {
            *height = (double)obj.headerReferenceSize.height;
        }
        return 1;
    }
}

void ns_collectionviewflowlayout_set_footer_reference_size(uintptr_t layout, double width, double height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj) {
            obj.footerReferenceSize = NSMakeSize((CGFloat)width, (CGFloat)height);
        }
    }
}

int ns_collectionviewflowlayout_get_footer_reference_size(uintptr_t layout, double *width, double *height)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (!obj) {
            return 0;
        }
        if (width) {
            *width = (double)obj.footerReferenceSize.width;
        }
        if (height) {
            *height = (double)obj.footerReferenceSize.height;
        }
        return 1;
    }
}

void ns_collectionviewflowlayout_set_section_inset(uintptr_t layout, double top, double left, double bottom, double right)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj) {
            obj.sectionInset = NSEdgeInsetsMake((CGFloat)top, (CGFloat)left, (CGFloat)bottom, (CGFloat)right);
        }
    }
}

void ns_collectionviewflowlayout_set_section_headers_pin(uintptr_t layout, int flag)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj) {
            obj.sectionHeadersPinToVisibleBounds = flag ? YES : NO;
        }
    }
}

int ns_collectionviewflowlayout_section_headers_pin(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        return obj && obj.sectionHeadersPinToVisibleBounds ? 1 : 0;
    }
}

void ns_collectionviewflowlayout_set_section_footers_pin(uintptr_t layout, int flag)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj) {
            obj.sectionFootersPinToVisibleBounds = flag ? YES : NO;
        }
    }
}

int ns_collectionviewflowlayout_section_footers_pin(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        return obj && obj.sectionFootersPinToVisibleBounds ? 1 : 0;
    }
}

int ns_collectionviewflowlayout_section_is_collapsed(uintptr_t layout, int section)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (!obj || section < 0) {
            return 0;
        }
        return [obj sectionAtIndexIsCollapsed:(NSUInteger)section] ? 1 : 0;
    }
}

void ns_collectionviewflowlayout_collapse_section(uintptr_t layout, int section)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj && section >= 0) {
            [obj collapseSectionAtIndex:(NSUInteger)section];
        }
    }
}

void ns_collectionviewflowlayout_expand_section(uintptr_t layout, int section)
{
    @autoreleasepool {
        NSCollectionViewFlowLayout *obj = ns_flow_from(layout);
        if (obj && section >= 0) {
            [obj expandSectionAtIndex:(NSUInteger)section];
        }
    }
}
