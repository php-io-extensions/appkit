#import <AppKit/AppKit.h>
#import "ns-collectionviewcompositionallayout.h"

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

static NSCollectionViewCompositionalLayout *ns_comp_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCollectionViewCompositionalLayout class]] ? (NSCollectionViewCompositionalLayout *)obj : nil;
}

static NSCollectionLayoutSection *ns_comp_list_section(double item_height)
{
    CGFloat height = item_height > 0 ? (CGFloat)item_height : 32.0;
    NSCollectionLayoutSize *itemSize = [NSCollectionLayoutSize
        sizeWithWidthDimension:[NSCollectionLayoutDimension fractionalWidthDimension:1.0]
        heightDimension:[NSCollectionLayoutDimension absoluteDimension:height]];
    NSCollectionLayoutItem *item = [NSCollectionLayoutItem itemWithLayoutSize:itemSize];
    NSCollectionLayoutGroup *group = [NSCollectionLayoutGroup verticalGroupWithLayoutSize:itemSize subitem:item count:1];
    return [NSCollectionLayoutSection sectionWithGroup:group];
}

static NSCollectionLayoutSection *ns_comp_grid_section(int columns, double item_height)
{
    NSInteger cols = columns > 0 ? (NSInteger)columns : 3;
    CGFloat height = item_height > 0 ? (CGFloat)item_height : 96.0;
    NSCollectionLayoutSize *itemSize = [NSCollectionLayoutSize
        sizeWithWidthDimension:[NSCollectionLayoutDimension fractionalWidthDimension:1.0 / (CGFloat)cols]
        heightDimension:[NSCollectionLayoutDimension absoluteDimension:height]];
    NSCollectionLayoutItem *item = [NSCollectionLayoutItem itemWithLayoutSize:itemSize];
    item.contentInsets = NSDirectionalEdgeInsetsMake(4.0, 4.0, 4.0, 4.0);
    NSCollectionLayoutSize *groupSize = [NSCollectionLayoutSize
        sizeWithWidthDimension:[NSCollectionLayoutDimension fractionalWidthDimension:1.0]
        heightDimension:[NSCollectionLayoutDimension absoluteDimension:height]];
    NSCollectionLayoutGroup *group = [NSCollectionLayoutGroup horizontalGroupWithLayoutSize:groupSize subitem:item count:cols];
    return [NSCollectionLayoutSection sectionWithGroup:group];
}

uintptr_t ns_collectionviewcompositionallayout_create_list(double item_height)
{
    @autoreleasepool {
        NSCollectionLayoutSection *section = ns_comp_list_section(item_height);
        return ns_retain_obj([[NSCollectionViewCompositionalLayout alloc] initWithSection:section]);
    }
}

uintptr_t ns_collectionviewcompositionallayout_create_grid(int columns, double item_height)
{
    @autoreleasepool {
        NSCollectionLayoutSection *section = ns_comp_grid_section(columns, item_height);
        return ns_retain_obj([[NSCollectionViewCompositionalLayout alloc] initWithSection:section]);
    }
}

uintptr_t ns_collectionviewcompositionallayout_wrap(void *layout)
{
    if (!layout) {
        return 0;
    }
    @autoreleasepool {
        NSCollectionViewCompositionalLayout *obj = (__bridge NSCollectionViewCompositionalLayout *)layout;
        return [obj isKindOfClass:[NSCollectionViewCompositionalLayout class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_collectionviewcompositionallayout_destroy(uintptr_t layout)
{
    ns_release_handle(layout);
}

void *ns_collectionviewcompositionallayout_nscollectionviewcompositionallayout(uintptr_t layout)
{
    NSCollectionViewCompositionalLayout *obj = ns_comp_from(layout);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_collectionviewcompositionallayout_set_scroll_direction(uintptr_t layout, int direction)
{
    @autoreleasepool {
        NSCollectionViewCompositionalLayout *obj = ns_comp_from(layout);
        if (!obj) {
            return;
        }
        NSCollectionViewCompositionalLayoutConfiguration *config = [obj.configuration copy];
        config.scrollDirection = (NSCollectionViewScrollDirection)direction;
        obj.configuration = config;
    }
}

int ns_collectionviewcompositionallayout_get_scroll_direction(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewCompositionalLayout *obj = ns_comp_from(layout);
        return obj ? (int)obj.configuration.scrollDirection : 0;
    }
}

void ns_collectionviewcompositionallayout_set_inter_section_spacing(uintptr_t layout, double spacing)
{
    @autoreleasepool {
        NSCollectionViewCompositionalLayout *obj = ns_comp_from(layout);
        if (!obj) {
            return;
        }
        NSCollectionViewCompositionalLayoutConfiguration *config = [obj.configuration copy];
        config.interSectionSpacing = (CGFloat)spacing;
        obj.configuration = config;
    }
}

double ns_collectionviewcompositionallayout_get_inter_section_spacing(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewCompositionalLayout *obj = ns_comp_from(layout);
        return obj ? (double)obj.configuration.interSectionSpacing : 0.0;
    }
}
