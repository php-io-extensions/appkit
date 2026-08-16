#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-slidertouchbaritem.h"
#import "ns-touchbaritem.h"

static const void *kNSPhpSliderTouchBarItemBoxKey = &kNSPhpSliderTouchBarItemBoxKey;

@interface NSPhpSliderTouchBarItemBox : NSObject
@property (nonatomic, assign) int pendingAction;
@end

@implementation NSPhpSliderTouchBarItemBox
- (void)nsAction:(id)sender { (void)sender; self.pendingAction = 1; }
@end

static NSPhpSliderTouchBarItemBox *ns_slidertouchbaritem_box(NSSliderTouchBarItem *item)
{
    if (!item) {
        return nil;
    }
    NSPhpSliderTouchBarItemBox *box = objc_getAssociatedObject(item, kNSPhpSliderTouchBarItemBoxKey);
    if (!box) {
        box = [NSPhpSliderTouchBarItemBox new];
        item.target = box;
        item.action = @selector(nsAction:);
        objc_setAssociatedObject(item, kNSPhpSliderTouchBarItemBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

static NSSliderTouchBarItem *ns_slidertouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSliderTouchBarItem class]] ? (NSSliderTouchBarItem *)obj : nil;
}

uintptr_t ns_slidertouchbaritem_create(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.slider";
            NSSliderTouchBarItem *item = [[NSSliderTouchBarItem alloc] initWithIdentifier:ident];
            (void) ns_slidertouchbaritem_box(item);
            return ns_retain_obj(item);
        }
        return 0;
    }
}

uintptr_t ns_slidertouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSSliderTouchBarItem *obj = (__bridge NSSliderTouchBarItem *)item;
        if (![obj isKindOfClass:[NSSliderTouchBarItem class]]) {
            return 0;
        }
        (void) ns_slidertouchbaritem_box(obj);
        return ns_retain_obj(obj);
    }
}

void ns_slidertouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_slidertouchbaritem_nsslidertouchbaritem(uintptr_t item)
{
    NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_slidertouchbaritem_set_double_value(uintptr_t item, double value)
{
    @autoreleasepool {
        NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
        if (obj) {
            obj.doubleValue = value;
        }
    }
}

double ns_slidertouchbaritem_get_double_value(uintptr_t item)
{
    @autoreleasepool {
        NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
        return obj ? obj.doubleValue : 0.0;
    }
}

void ns_slidertouchbaritem_set_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
        if (obj) {
            obj.label = label ? [NSString stringWithUTF8String:label] : nil;
        }
    }
}

int ns_slidertouchbaritem_get_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.label, out, out_len) : 0;
    }
}

void ns_slidertouchbaritem_set_minimum_slider_width(uintptr_t item, double width)
{
    @autoreleasepool {
        NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
        if (obj) {
            if (@available(macOS 10.15, *)) {
                obj.minimumSliderWidth = (CGFloat)width;
            }
        }
    }
}

double ns_slidertouchbaritem_get_minimum_slider_width(uintptr_t item)
{
    @autoreleasepool {
        NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
        if (!obj) {
            return 0.0;
        }
        if (@available(macOS 10.15, *)) {
            return (double)obj.minimumSliderWidth;
        }
        return 0.0;
    }
}

void ns_slidertouchbaritem_set_maximum_slider_width(uintptr_t item, double width)
{
    @autoreleasepool {
        NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
        if (obj) {
            if (@available(macOS 10.15, *)) {
                obj.maximumSliderWidth = (CGFloat)width;
            }
        }
    }
}

double ns_slidertouchbaritem_get_maximum_slider_width(uintptr_t item)
{
    @autoreleasepool {
        NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
        if (!obj) {
            return 0.0;
        }
        if (@available(macOS 10.15, *)) {
            return (double)obj.maximumSliderWidth;
        }
        return 0.0;
    }
}

void ns_slidertouchbaritem_set_customization_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
        if (obj) {
            obj.customizationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_slidertouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}

int ns_slidertouchbaritem_poll_action(uintptr_t item)
{
    @autoreleasepool {
        NSSliderTouchBarItem *obj = ns_slidertouchbaritem_from(item);
        NSPhpSliderTouchBarItemBox *box = ns_slidertouchbaritem_box(obj);
        if (!box || !box.pendingAction) {
            return 0;
        }
        box.pendingAction = 0;
        return 1;
    }
}
