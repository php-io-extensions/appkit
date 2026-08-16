#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-sharingservicepickertoolbaritem.h"
#import "ns-toolbaritem.h"

static int ns_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 1;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static const void *kNSPhpSharingServicePickerToolbarItemBoxKey = &kNSPhpSharingServicePickerToolbarItemBoxKey;

@interface NSPhpSharingServicePickerToolbarItemBox : NSObject <NSSharingServicePickerToolbarItemDelegate>
@property (nonatomic, strong) NSMutableArray<NSString *> *shareStrings;
@property (nonatomic, assign) int shareRequested;
@end

@implementation NSPhpSharingServicePickerToolbarItemBox

- (NSArray *)itemsForSharingServicePickerToolbarItem:(NSSharingServicePickerToolbarItem *)pickerToolbarItem
{
    (void)pickerToolbarItem;
    self.shareRequested = 1;
    return [self.shareStrings copy];
}

@end

static NSSharingServicePickerToolbarItem *ns_sharingservicepickertoolbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSharingServicePickerToolbarItem class]] ? (NSSharingServicePickerToolbarItem *)obj : nil;
}

static NSPhpSharingServicePickerToolbarItemBox *ns_sharingservicepickertoolbaritem_box(NSSharingServicePickerToolbarItem *item)
{
    if (!item) {
        return nil;
    }
    NSPhpSharingServicePickerToolbarItemBox *box = objc_getAssociatedObject(item, kNSPhpSharingServicePickerToolbarItemBoxKey);
    if (!box) {
        box = [NSPhpSharingServicePickerToolbarItemBox new];
        box.shareStrings = [NSMutableArray array];
        box.shareRequested = 0;
        if (@available(macOS 10.15, *)) {
            item.delegate = box;
        }
        objc_setAssociatedObject(item, kNSPhpSharingServicePickerToolbarItemBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

uintptr_t ns_sharingservicepickertoolbaritem_create(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.toolbar.share";
            NSSharingServicePickerToolbarItem *item = [[NSSharingServicePickerToolbarItem alloc] initWithItemIdentifier:ident];
            (void) ns_sharingservicepickertoolbaritem_box(item);
            return ns_retain_obj(item);
        }
        return 0;
    }
}

uintptr_t ns_sharingservicepickertoolbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSSharingServicePickerToolbarItem *obj = (__bridge NSSharingServicePickerToolbarItem *)item;
        if (![obj isKindOfClass:[NSSharingServicePickerToolbarItem class]]) {
            return 0;
        }
        (void) ns_sharingservicepickertoolbaritem_box(obj);
        return ns_retain_obj(obj);
    }
}

void ns_sharingservicepickertoolbaritem_destroy(uintptr_t item)
{
    ns_toolbaritem_destroy(item);
}

void *ns_sharingservicepickertoolbaritem_nssharingservicepickertoolbaritem(uintptr_t item)
{
    NSSharingServicePickerToolbarItem *obj = ns_sharingservicepickertoolbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_sharingservicepickertoolbaritem_set_share_strings(uintptr_t item, const char **items, int count)
{
    @autoreleasepool {
        NSSharingServicePickerToolbarItem *obj = ns_sharingservicepickertoolbaritem_from(item);
        NSPhpSharingServicePickerToolbarItemBox *box = ns_sharingservicepickertoolbaritem_box(obj);
        if (!box) {
            return;
        }
        [box.shareStrings removeAllObjects];
        int i;
        for (i = 0; i < count; i++) {
            if (items && items[i]) {
                [box.shareStrings addObject:[NSString stringWithUTF8String:items[i]]];
            }
        }
    }
}

int ns_sharingservicepickertoolbaritem_share_strings_count(uintptr_t item)
{
    @autoreleasepool {
        NSSharingServicePickerToolbarItem *obj = ns_sharingservicepickertoolbaritem_from(item);
        NSPhpSharingServicePickerToolbarItemBox *box = ns_sharingservicepickertoolbaritem_box(obj);
        return box ? (int)box.shareStrings.count : 0;
    }
}

int ns_sharingservicepickertoolbaritem_share_string_at(uintptr_t item, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSSharingServicePickerToolbarItem *obj = ns_sharingservicepickertoolbaritem_from(item);
        NSPhpSharingServicePickerToolbarItemBox *box = ns_sharingservicepickertoolbaritem_box(obj);
        if (!box || index < 0 || index >= (int)box.shareStrings.count) {
            return 0;
        }
        return ns_copy_nsstring(box.shareStrings[(NSUInteger)index], out, out_len);
    }
}

int ns_sharingservicepickertoolbaritem_poll_share_request(uintptr_t item)
{
    @autoreleasepool {
        NSSharingServicePickerToolbarItem *obj = ns_sharingservicepickertoolbaritem_from(item);
        NSPhpSharingServicePickerToolbarItemBox *box = ns_sharingservicepickertoolbaritem_box(obj);
        if (!box || !box.shareRequested) {
            return 0;
        }
        box.shareRequested = 0;
        return 1;
    }
}
