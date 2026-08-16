#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-pickertouchbaritem.h"
#import "ns-touchbaritem.h"
#import "ns-image.h"

static const void *kNSPhpPickerTouchBarItemBoxKey = &kNSPhpPickerTouchBarItemBoxKey;

@interface NSPhpPickerTouchBarItemBox : NSObject
@property (nonatomic, assign) int pendingAction;
@end

@implementation NSPhpPickerTouchBarItemBox
- (void)nsAction:(id)sender { (void)sender; self.pendingAction = 1; }
@end

static NSPhpPickerTouchBarItemBox *ns_pickertouchbaritem_box(NSPickerTouchBarItem *item)
{
    if (!item) {
        return nil;
    }
    NSPhpPickerTouchBarItemBox *box = objc_getAssociatedObject(item, kNSPhpPickerTouchBarItemBoxKey);
    if (!box) {
        box = [NSPhpPickerTouchBarItemBox new];
        item.target = box;
        item.action = @selector(nsAction:);
        objc_setAssociatedObject(item, kNSPhpPickerTouchBarItemBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

static NSPickerTouchBarItem *ns_pickertouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPickerTouchBarItem class]] ? (NSPickerTouchBarItem *)obj : nil;
}

static uintptr_t ns_pickertouchbaritem_retain(NSPickerTouchBarItem *item)
{
    (void) ns_pickertouchbaritem_box(item);
    return ns_retain_obj(item);
}

uintptr_t ns_pickertouchbaritem_picker_with_labels(const char *identifier, const char **labels, int count, int selectionMode)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.picker";
            return ns_pickertouchbaritem_retain([NSPickerTouchBarItem pickerTouchBarItemWithIdentifier:ident labels:ns_strings_from_c(labels, count) selectionMode:(NSPickerTouchBarItemSelectionMode)selectionMode target:nil action:NULL]);
        }
        return 0;
    }
}

uintptr_t ns_pickertouchbaritem_picker_with_images(const char *identifier, const uintptr_t *images, int count, int selectionMode)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            NSMutableArray<NSImage *> *arr = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
            int i;
            for (i = 0; i < count; i++) {
                void *img = ns_image_nsimage(images[i]);
                if (img) {
                    [arr addObject:(__bridge NSImage *)img];
                }
            }
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.picker";
            return ns_pickertouchbaritem_retain([NSPickerTouchBarItem pickerTouchBarItemWithIdentifier:ident images:arr selectionMode:(NSPickerTouchBarItemSelectionMode)selectionMode target:nil action:NULL]);
        }
        return 0;
    }
}

uintptr_t ns_pickertouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSPickerTouchBarItem *obj = (__bridge NSPickerTouchBarItem *)item;
        return [obj isKindOfClass:[NSPickerTouchBarItem class]] ? ns_pickertouchbaritem_retain(obj) : 0;
    }
}

void ns_pickertouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_pickertouchbaritem_nspickertouchbaritem(uintptr_t item)
{
    NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_pickertouchbaritem_set_control_representation(uintptr_t item, int value)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        if (obj) {
            obj.controlRepresentation = (NSPickerTouchBarItemControlRepresentation)value;
        }
    }
}

int ns_pickertouchbaritem_get_control_representation(uintptr_t item)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        return obj ? (int)obj.controlRepresentation : 0;
    }
}

void ns_pickertouchbaritem_set_collapsed_representation_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        if (obj) {
            obj.collapsedRepresentationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_pickertouchbaritem_get_collapsed_representation_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.collapsedRepresentationLabel, out, out_len) : 0;
    }
}

void ns_pickertouchbaritem_set_selected_index(uintptr_t item, int index)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        if (obj) {
            obj.selectedIndex = index;
        }
    }
}

int ns_pickertouchbaritem_get_selected_index(uintptr_t item)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        return obj ? (int)obj.selectedIndex : -1;
    }
}

void ns_pickertouchbaritem_set_selection_mode(uintptr_t item, int mode)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        if (obj) {
            obj.selectionMode = (NSPickerTouchBarItemSelectionMode)mode;
        }
    }
}

int ns_pickertouchbaritem_get_selection_mode(uintptr_t item)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        return obj ? (int)obj.selectionMode : 0;
    }
}

int ns_pickertouchbaritem_get_number_of_options(uintptr_t item)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        return obj ? (int)obj.numberOfOptions : 0;
    }
}

void ns_pickertouchbaritem_set_label_at_index(uintptr_t item, int index, const char *label)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        if (obj && label) {
            [obj setLabel:[NSString stringWithUTF8String:label] atIndex:index];
        }
    }
}

int ns_pickertouchbaritem_label_at_index(uintptr_t item, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        return obj ? ns_copy_nsstring([obj labelAtIndex:index], out, out_len) : 0;
    }
}

void ns_pickertouchbaritem_set_enabled(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        if (obj) {
            obj.enabled = flag ? YES : NO;
        }
    }
}

int ns_pickertouchbaritem_is_enabled(uintptr_t item)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        return obj && obj.enabled ? 1 : 0;
    }
}

int ns_pickertouchbaritem_poll_action(uintptr_t item)
{
    @autoreleasepool {
        NSPickerTouchBarItem *obj = ns_pickertouchbaritem_from(item);
        NSPhpPickerTouchBarItemBox *box = ns_pickertouchbaritem_box(obj);
        if (!box || !box.pendingAction) {
            return 0;
        }
        box.pendingAction = 0;
        return 1;
    }
}
