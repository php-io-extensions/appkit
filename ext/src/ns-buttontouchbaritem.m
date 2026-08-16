#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-buttontouchbaritem.h"
#import "ns-touchbaritem.h"
#import "ns-image.h"
#import "ns-color.h"

static const void *kNSPhpButtonTouchBarItemBoxKey = &kNSPhpButtonTouchBarItemBoxKey;

@interface NSPhpButtonTouchBarItemBox : NSObject
@property (nonatomic, assign) int pendingAction;
@end

@implementation NSPhpButtonTouchBarItemBox
- (void)nsAction:(id)sender { (void)sender; self.pendingAction = 1; }
@end

static NSPhpButtonTouchBarItemBox *ns_buttontouchbaritem_box(NSButtonTouchBarItem *item)
{
    if (!item) {
        return nil;
    }
    NSPhpButtonTouchBarItemBox *box = objc_getAssociatedObject(item, kNSPhpButtonTouchBarItemBoxKey);
    if (!box) {
        box = [NSPhpButtonTouchBarItemBox new];
        item.target = box;
        item.action = @selector(nsAction:);
        objc_setAssociatedObject(item, kNSPhpButtonTouchBarItemBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

static NSButtonTouchBarItem *ns_buttontouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSButtonTouchBarItem class]] ? (NSButtonTouchBarItem *)obj : nil;
}

static uintptr_t ns_buttontouchbaritem_retain(NSButtonTouchBarItem *item)
{
    (void) ns_buttontouchbaritem_box(item);
    return ns_retain_obj(item);
}

uintptr_t ns_buttontouchbaritem_button_with_title(const char *identifier, const char *title)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.button";
            NSString *t = title ? [NSString stringWithUTF8String:title] : @"";
            return ns_buttontouchbaritem_retain([NSButtonTouchBarItem buttonTouchBarItemWithIdentifier:ident title:t target:nil action:NULL]);
        }
        return 0;
    }
}

uintptr_t ns_buttontouchbaritem_button_with_image(const char *identifier, uintptr_t image)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            void *img = ns_image_nsimage(image);
            if (!img) {
                return 0;
            }
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.button";
            return ns_buttontouchbaritem_retain([NSButtonTouchBarItem buttonTouchBarItemWithIdentifier:ident image:(__bridge NSImage *)img target:nil action:NULL]);
        }
        return 0;
    }
}

uintptr_t ns_buttontouchbaritem_button_with_title_and_image(const char *identifier, const char *title, uintptr_t image)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            void *img = ns_image_nsimage(image);
            if (!img) {
                return 0;
            }
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.button";
            NSString *t = title ? [NSString stringWithUTF8String:title] : @"";
            return ns_buttontouchbaritem_retain([NSButtonTouchBarItem buttonTouchBarItemWithIdentifier:ident title:t image:(__bridge NSImage *)img target:nil action:NULL]);
        }
        return 0;
    }
}

uintptr_t ns_buttontouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSButtonTouchBarItem *obj = (__bridge NSButtonTouchBarItem *)item;
        return [obj isKindOfClass:[NSButtonTouchBarItem class]] ? ns_buttontouchbaritem_retain(obj) : 0;
    }
}

void ns_buttontouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_buttontouchbaritem_nsbuttontouchbaritem(uintptr_t item)
{
    NSButtonTouchBarItem *obj = ns_buttontouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_buttontouchbaritem_set_title(uintptr_t item, const char *title)
{
    @autoreleasepool {
        NSButtonTouchBarItem *obj = ns_buttontouchbaritem_from(item);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_buttontouchbaritem_get_title(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSButtonTouchBarItem *obj = ns_buttontouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_buttontouchbaritem_set_image(uintptr_t item, uintptr_t image)
{
    @autoreleasepool {
        NSButtonTouchBarItem *obj = ns_buttontouchbaritem_from(item);
        void *img = ns_image_nsimage(image);
        if (obj && img) {
            obj.image = (__bridge NSImage *)img;
        }
    }
}

void ns_buttontouchbaritem_set_bezel_color(uintptr_t item, uintptr_t color)
{
    @autoreleasepool {
        NSButtonTouchBarItem *obj = ns_buttontouchbaritem_from(item);
        void *c = ns_color_nscolor(color);
        if (obj && c) {
            obj.bezelColor = (__bridge NSColor *)c;
        }
    }
}

void ns_buttontouchbaritem_set_enabled(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSButtonTouchBarItem *obj = ns_buttontouchbaritem_from(item);
        if (obj) {
            obj.enabled = flag ? YES : NO;
        }
    }
}

int ns_buttontouchbaritem_is_enabled(uintptr_t item)
{
    @autoreleasepool {
        NSButtonTouchBarItem *obj = ns_buttontouchbaritem_from(item);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_buttontouchbaritem_set_customization_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSButtonTouchBarItem *obj = ns_buttontouchbaritem_from(item);
        if (obj) {
            obj.customizationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_buttontouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSButtonTouchBarItem *obj = ns_buttontouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}

int ns_buttontouchbaritem_poll_action(uintptr_t item)
{
    @autoreleasepool {
        NSButtonTouchBarItem *obj = ns_buttontouchbaritem_from(item);
        NSPhpButtonTouchBarItemBox *box = ns_buttontouchbaritem_box(obj);
        if (!box || !box.pendingAction) {
            return 0;
        }
        box.pendingAction = 0;
        return 1;
    }
}
