#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-steppertouchbaritem.h"
#import "ns-touchbaritem.h"

static const void *kNSPhpStepperTouchBarItemBoxKey = &kNSPhpStepperTouchBarItemBoxKey;

@interface NSPhpStepperTouchBarItemBox : NSObject
@property (nonatomic, assign) int pendingAction;
@end

@implementation NSPhpStepperTouchBarItemBox
- (void)nsAction:(id)sender { (void)sender; self.pendingAction = 1; }
@end

static NSPhpStepperTouchBarItemBox *ns_steppertouchbaritem_box(NSStepperTouchBarItem *item)
{
    if (!item) {
        return nil;
    }
    NSPhpStepperTouchBarItemBox *box = objc_getAssociatedObject(item, kNSPhpStepperTouchBarItemBoxKey);
    if (!box) {
        box = [NSPhpStepperTouchBarItemBox new];
        item.target = box;
        item.action = @selector(nsAction:);
        objc_setAssociatedObject(item, kNSPhpStepperTouchBarItemBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

static NSStepperTouchBarItem *ns_steppertouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSStepperTouchBarItem class]] ? (NSStepperTouchBarItem *)obj : nil;
}

uintptr_t ns_steppertouchbaritem_stepper_with_formatter(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.stepper";
            NSNumberFormatter *formatter = [NSNumberFormatter new];
            formatter.numberStyle = NSNumberFormatterDecimalStyle;
            NSStepperTouchBarItem *item = [NSStepperTouchBarItem stepperTouchBarItemWithIdentifier:ident formatter:formatter];
            (void) ns_steppertouchbaritem_box(item);
            return ns_retain_obj(item);
        }
        return 0;
    }
}

uintptr_t ns_steppertouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSStepperTouchBarItem *obj = (__bridge NSStepperTouchBarItem *)item;
        if (![obj isKindOfClass:[NSStepperTouchBarItem class]]) {
            return 0;
        }
        (void) ns_steppertouchbaritem_box(obj);
        return ns_retain_obj(obj);
    }
}

void ns_steppertouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_steppertouchbaritem_nssteppertouchbaritem(uintptr_t item)
{
    NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_steppertouchbaritem_set_max_value(uintptr_t item, double value)
{
    @autoreleasepool {
        NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
        if (obj) {
            obj.maxValue = value;
        }
    }
}

double ns_steppertouchbaritem_get_max_value(uintptr_t item)
{
    @autoreleasepool {
        NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
        return obj ? obj.maxValue : 0.0;
    }
}

void ns_steppertouchbaritem_set_min_value(uintptr_t item, double value)
{
    @autoreleasepool {
        NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
        if (obj) {
            obj.minValue = value;
        }
    }
}

double ns_steppertouchbaritem_get_min_value(uintptr_t item)
{
    @autoreleasepool {
        NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
        return obj ? obj.minValue : 0.0;
    }
}

void ns_steppertouchbaritem_set_increment(uintptr_t item, double value)
{
    @autoreleasepool {
        NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
        if (obj) {
            obj.increment = value;
        }
    }
}

double ns_steppertouchbaritem_get_increment(uintptr_t item)
{
    @autoreleasepool {
        NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
        return obj ? obj.increment : 0.0;
    }
}

void ns_steppertouchbaritem_set_value(uintptr_t item, double value)
{
    @autoreleasepool {
        NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
        if (obj) {
            obj.value = value;
        }
    }
}

double ns_steppertouchbaritem_get_value(uintptr_t item)
{
    @autoreleasepool {
        NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
        return obj ? obj.value : 0.0;
    }
}

void ns_steppertouchbaritem_set_customization_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
        if (obj) {
            obj.customizationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_steppertouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}

int ns_steppertouchbaritem_poll_action(uintptr_t item)
{
    @autoreleasepool {
        NSStepperTouchBarItem *obj = ns_steppertouchbaritem_from(item);
        NSPhpStepperTouchBarItemBox *box = ns_steppertouchbaritem_box(obj);
        if (!box || !box.pendingAction) {
            return 0;
        }
        box.pendingAction = 0;
        return 1;
    }
}
