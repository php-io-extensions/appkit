#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-colorpickertouchbaritem.h"
#import "ns-touchbaritem.h"
#import "ns-color.h"
#import "ns-image.h"

static const void *kNSPhpColorPickerTouchBarItemBoxKey = &kNSPhpColorPickerTouchBarItemBoxKey;

@interface NSPhpColorPickerTouchBarItemBox : NSObject
@property (nonatomic, assign) int pendingAction;
@end

@implementation NSPhpColorPickerTouchBarItemBox
- (void)nsAction:(id)sender { (void)sender; self.pendingAction = 1; }
@end

static NSPhpColorPickerTouchBarItemBox *ns_colorpickertouchbaritem_box(NSColorPickerTouchBarItem *item)
{
    if (!item) {
        return nil;
    }
    NSPhpColorPickerTouchBarItemBox *box = objc_getAssociatedObject(item, kNSPhpColorPickerTouchBarItemBoxKey);
    if (!box) {
        box = [NSPhpColorPickerTouchBarItemBox new];
        item.target = box;
        item.action = @selector(nsAction:);
        objc_setAssociatedObject(item, kNSPhpColorPickerTouchBarItemBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

static NSColorPickerTouchBarItem *ns_colorpickertouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColorPickerTouchBarItem class]] ? (NSColorPickerTouchBarItem *)obj : nil;
}

static uintptr_t ns_colorpickertouchbaritem_retain(NSColorPickerTouchBarItem *item)
{
    (void) ns_colorpickertouchbaritem_box(item);
    return ns_retain_obj(item);
}

uintptr_t ns_colorpickertouchbaritem_color_picker(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.color";
            return ns_colorpickertouchbaritem_retain([NSColorPickerTouchBarItem colorPickerWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_colorpickertouchbaritem_text_color_picker(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.textcolor";
            return ns_colorpickertouchbaritem_retain([NSColorPickerTouchBarItem textColorPickerWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_colorpickertouchbaritem_stroke_color_picker(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.strokecolor";
            return ns_colorpickertouchbaritem_retain([NSColorPickerTouchBarItem strokeColorPickerWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_colorpickertouchbaritem_color_picker_with_button_image(const char *identifier, uintptr_t image)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            void *nsimg = ns_image_nsimage(image);
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.color";
            if (!nsimg) {
                return ns_colorpickertouchbaritem_color_picker(identifier);
            }
            return ns_colorpickertouchbaritem_retain([NSColorPickerTouchBarItem colorPickerWithIdentifier:ident buttonImage:(__bridge NSImage *)nsimg]);
        }
        return 0;
    }
}

uintptr_t ns_colorpickertouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = (__bridge NSColorPickerTouchBarItem *)item;
        return [obj isKindOfClass:[NSColorPickerTouchBarItem class]] ? ns_colorpickertouchbaritem_retain(obj) : 0;
    }
}

void ns_colorpickertouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_colorpickertouchbaritem_nscolorpickertouchbaritem(uintptr_t item)
{
    NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_colorpickertouchbaritem_set_color(uintptr_t item, uintptr_t color)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        void *c = ns_color_nscolor(color);
        if (obj && c) {
            obj.color = (__bridge NSColor *)c;
        }
    }
}

uintptr_t ns_colorpickertouchbaritem_get_color(uintptr_t item)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        return obj && obj.color ? ns_color_wrap((__bridge void *)obj.color) : 0;
    }
}

void ns_colorpickertouchbaritem_set_shows_alpha(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        if (obj) {
            obj.showsAlpha = flag ? YES : NO;
        }
    }
}

int ns_colorpickertouchbaritem_shows_alpha(uintptr_t item)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        return obj && obj.showsAlpha ? 1 : 0;
    }
}

void ns_colorpickertouchbaritem_set_enabled(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        if (obj) {
            obj.enabled = flag ? YES : NO;
        }
    }
}

int ns_colorpickertouchbaritem_is_enabled(uintptr_t item)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_colorpickertouchbaritem_set_customization_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        if (obj) {
            obj.customizationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_colorpickertouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}

int ns_colorpickertouchbaritem_poll_action(uintptr_t item)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        NSPhpColorPickerTouchBarItemBox *box = ns_colorpickertouchbaritem_box(obj);
        if (!box || !box.pendingAction) {
            return 0;
        }
        box.pendingAction = 0;
        return 1;
    }
}
