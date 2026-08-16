#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-sharingservicepickertouchbaritem.h"
#import "ns-touchbaritem.h"
#import "ns-image.h"

static const void *kNSPhpSharingServicePickerTouchBarItemBoxKey = &kNSPhpSharingServicePickerTouchBarItemBoxKey;

@interface NSPhpSharingServicePickerTouchBarItemBox : NSObject <NSSharingServicePickerTouchBarItemDelegate>
@property (nonatomic, strong) NSMutableArray<NSString *> *shareStrings;
@property (nonatomic, assign) int shareRequested;
@end

@implementation NSPhpSharingServicePickerTouchBarItemBox

- (NSArray *)itemsForSharingServicePickerTouchBarItem:(NSSharingServicePickerTouchBarItem *)pickerTouchBarItem
{
    (void)pickerTouchBarItem;
    self.shareRequested = 1;
    return [self.shareStrings copy];
}

@end

static NSSharingServicePickerTouchBarItem *ns_sharingservicepickertouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSharingServicePickerTouchBarItem class]] ? (NSSharingServicePickerTouchBarItem *)obj : nil;
}

static NSPhpSharingServicePickerTouchBarItemBox *ns_sharingservicepickertouchbaritem_box(NSSharingServicePickerTouchBarItem *item)
{
    if (!item) {
        return nil;
    }
    NSPhpSharingServicePickerTouchBarItemBox *box = objc_getAssociatedObject(item, kNSPhpSharingServicePickerTouchBarItemBoxKey);
    if (!box) {
        box = [NSPhpSharingServicePickerTouchBarItemBox new];
        box.shareStrings = [NSMutableArray array];
        box.shareRequested = 0;
        item.delegate = box;
        objc_setAssociatedObject(item, kNSPhpSharingServicePickerTouchBarItemBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

uintptr_t ns_sharingservicepickertouchbaritem_create(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.share";
            NSSharingServicePickerTouchBarItem *item = [[NSSharingServicePickerTouchBarItem alloc] initWithIdentifier:ident];
            (void) ns_sharingservicepickertouchbaritem_box(item);
            return ns_retain_obj(item);
        }
        return 0;
    }
}

uintptr_t ns_sharingservicepickertouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSSharingServicePickerTouchBarItem *obj = (__bridge NSSharingServicePickerTouchBarItem *)item;
        if (![obj isKindOfClass:[NSSharingServicePickerTouchBarItem class]]) {
            return 0;
        }
        (void) ns_sharingservicepickertouchbaritem_box(obj);
        return ns_retain_obj(obj);
    }
}

void ns_sharingservicepickertouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_sharingservicepickertouchbaritem_nssharingservicepickertouchbaritem(uintptr_t item)
{
    NSSharingServicePickerTouchBarItem *obj = ns_sharingservicepickertouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_sharingservicepickertouchbaritem_set_enabled(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSSharingServicePickerTouchBarItem *obj = ns_sharingservicepickertouchbaritem_from(item);
        if (obj) {
            obj.enabled = flag ? YES : NO;
        }
    }
}

int ns_sharingservicepickertouchbaritem_is_enabled(uintptr_t item)
{
    @autoreleasepool {
        NSSharingServicePickerTouchBarItem *obj = ns_sharingservicepickertouchbaritem_from(item);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_sharingservicepickertouchbaritem_set_button_title(uintptr_t item, const char *title)
{
    @autoreleasepool {
        NSSharingServicePickerTouchBarItem *obj = ns_sharingservicepickertouchbaritem_from(item);
        if (obj) {
            obj.buttonTitle = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_sharingservicepickertouchbaritem_get_button_title(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSSharingServicePickerTouchBarItem *obj = ns_sharingservicepickertouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.buttonTitle, out, out_len) : 0;
    }
}

void ns_sharingservicepickertouchbaritem_set_button_image(uintptr_t item, uintptr_t image)
{
    @autoreleasepool {
        NSSharingServicePickerTouchBarItem *obj = ns_sharingservicepickertouchbaritem_from(item);
        void *img = ns_image_nsimage(image);
        if (obj && img) {
            obj.buttonImage = (__bridge NSImage *)img;
        }
    }
}

void ns_sharingservicepickertouchbaritem_set_share_strings(uintptr_t item, const char **items, int count)
{
    @autoreleasepool {
        NSSharingServicePickerTouchBarItem *obj = ns_sharingservicepickertouchbaritem_from(item);
        NSPhpSharingServicePickerTouchBarItemBox *box = ns_sharingservicepickertouchbaritem_box(obj);
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

int ns_sharingservicepickertouchbaritem_share_strings_count(uintptr_t item)
{
    @autoreleasepool {
        NSSharingServicePickerTouchBarItem *obj = ns_sharingservicepickertouchbaritem_from(item);
        NSPhpSharingServicePickerTouchBarItemBox *box = ns_sharingservicepickertouchbaritem_box(obj);
        return box ? (int)box.shareStrings.count : 0;
    }
}

int ns_sharingservicepickertouchbaritem_share_string_at(uintptr_t item, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSSharingServicePickerTouchBarItem *obj = ns_sharingservicepickertouchbaritem_from(item);
        NSPhpSharingServicePickerTouchBarItemBox *box = ns_sharingservicepickertouchbaritem_box(obj);
        if (!box || index < 0 || index >= (int)box.shareStrings.count) {
            return 0;
        }
        return ns_copy_nsstring(box.shareStrings[(NSUInteger)index], out, out_len);
    }
}

int ns_sharingservicepickertouchbaritem_poll_share_request(uintptr_t item)
{
    @autoreleasepool {
        NSSharingServicePickerTouchBarItem *obj = ns_sharingservicepickertouchbaritem_from(item);
        NSPhpSharingServicePickerTouchBarItemBox *box = ns_sharingservicepickertouchbaritem_box(obj);
        if (!box || !box.shareRequested) {
            return 0;
        }
        box.shareRequested = 0;
        return 1;
    }
}
