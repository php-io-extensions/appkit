#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-sharingservicepicker.h"
#import "ns-view.h"
#import "ns-sharingservice.h"

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

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static const void *kNSPhpSharingServicePickerBoxKey = &kNSPhpSharingServicePickerBoxKey;

@interface NSPhpSharingServicePickerBox : NSObject <NSSharingServicePickerDelegate>
@property (nonatomic, assign) int serviceChosen;
@property (nonatomic, copy) NSString *chosenTitle;
@end

@implementation NSPhpSharingServicePickerBox

- (void)sharingServicePicker:(NSSharingServicePicker *)sharingServicePicker didChooseSharingService:(NSSharingService *)service
{
    (void)sharingServicePicker;
    self.serviceChosen = 1;
    self.chosenTitle = service ? service.title : nil;
}

@end

static NSSharingServicePicker *ns_sharingservicepicker_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSharingServicePicker class]] ? (NSSharingServicePicker *)obj : nil;
}

static NSPhpSharingServicePickerBox *ns_sharingservicepicker_box(NSSharingServicePicker *picker)
{
    if (!picker) {
        return nil;
    }
    NSPhpSharingServicePickerBox *box = objc_getAssociatedObject(picker, kNSPhpSharingServicePickerBoxKey);
    if (!box) {
        box = [NSPhpSharingServicePickerBox new];
        picker.delegate = box;
        objc_setAssociatedObject(picker, kNSPhpSharingServicePickerBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

static NSArray *ns_sharingservicepicker_items(const char **items, int count)
{
    NSMutableArray *array = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
    int i;
    for (i = 0; i < count; i++) {
        if (items && items[i]) {
            [array addObject:[NSString stringWithUTF8String:items[i]]];
        }
    }
    return [array copy];
}

uintptr_t ns_sharingservicepicker_create(const char **items, int count)
{
    @autoreleasepool {
        NSArray *array = ns_sharingservicepicker_items(items, count);
        NSSharingServicePicker *picker = [[NSSharingServicePicker alloc] initWithItems:array];
        (void) ns_sharingservicepicker_box(picker);
        return picker ? ns_retain_obj(picker) : 0;
    }
}

uintptr_t ns_sharingservicepicker_wrap(void *picker)
{
    if (!picker) {
        return 0;
    }
    @autoreleasepool {
        NSSharingServicePicker *obj = (__bridge NSSharingServicePicker *)picker;
        if (![obj isKindOfClass:[NSSharingServicePicker class]]) {
            return 0;
        }
        (void) ns_sharingservicepicker_box(obj);
        return ns_retain_obj(obj);
    }
}

void ns_sharingservicepicker_destroy(uintptr_t picker)
{
    ns_release_handle(picker);
}

void *ns_sharingservicepicker_nssharingservicepicker(uintptr_t picker)
{
    NSSharingServicePicker *obj = ns_sharingservicepicker_from(picker);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_sharingservicepicker_show_relative_to_rect(uintptr_t picker, double x, double y, double w, double h, uintptr_t view, int preferred_edge)
{
    @autoreleasepool {
        NSSharingServicePicker *obj = ns_sharingservicepicker_from(picker);
        NSView *host = (__bridge NSView *)ns_view_nsview(view);
        if (!obj || !host) {
            return;
        }
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)w, (CGFloat)h);
        [obj showRelativeToRect:rect ofView:host preferredEdge:(NSRectEdge)preferred_edge];
    }
}

void ns_sharingservicepicker_close(uintptr_t picker)
{
    @autoreleasepool {
        NSSharingServicePicker *obj = ns_sharingservicepicker_from(picker);
        if (obj) {
            if (@available(macOS 13.0, *)) {
                [obj close];
            }
        }
    }
}

int ns_sharingservicepicker_poll_chosen_service(uintptr_t picker, char *title_out, int title_len)
{
    @autoreleasepool {
        NSSharingServicePicker *obj = ns_sharingservicepicker_from(picker);
        NSPhpSharingServicePickerBox *box = ns_sharingservicepicker_box(obj);
        if (!box || !box.serviceChosen) {
            return 0;
        }
        box.serviceChosen = 0;
        return ns_copy_nsstring(box.chosenTitle, title_out, title_len);
    }
}

uintptr_t ns_sharingservicepicker_standard_share_menu_item(uintptr_t picker)
{
    @autoreleasepool {
        NSSharingServicePicker *obj = ns_sharingservicepicker_from(picker);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 13.0, *)) {
            NSMenuItem *item = obj.standardShareMenuItem;
            return item ? ns_retain_obj(item) : 0;
        }
        return 0;
    }
}
