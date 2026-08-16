#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-accessibilitycustomrotor.h"
#import "ns-protocol.h"

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

static const void *kNSPhpRotorBoxKey = &kNSPhpRotorBoxKey;

@interface NSPhpCustomRotorBox : NSObject <NSAccessibilityCustomRotorItemSearchDelegate>
@property (nonatomic, strong) NSAccessibilityCustomRotorItemResult *nextItem;
@property (nonatomic, assign) int searchPending;
@property (nonatomic, assign) NSInteger lastDirection;
@property (nonatomic, copy) NSString *lastFilter;
@end

@implementation NSPhpCustomRotorBox
- (NSAccessibilityCustomRotorItemResult *)rotor:(NSAccessibilityCustomRotor *)rotor
                      resultForSearchParameters:(NSAccessibilityCustomRotorSearchParameters *)searchParameters
{
    (void)rotor;
    self.searchPending = 1;
    self.lastDirection = searchParameters.searchDirection;
    self.lastFilter = searchParameters.filterString ?: @"";
    ns_protocol_enqueue("NSAccessibilityCustomRotorItemSearchDelegate",
                        "rotor:resultForSearchParameters:",
                        (uintptr_t)(__bridge void *)rotor,
                        (long long)searchParameters.searchDirection,
                        self.lastFilter.UTF8String);
    return self.nextItem;
}
@end

static NSAccessibilityCustomRotor *ns_rotor_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSAccessibilityCustomRotor class]] ? (NSAccessibilityCustomRotor *)obj : nil;
}

static NSAccessibilityCustomRotorItemResult *ns_rotor_item_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSAccessibilityCustomRotorItemResult class]] ? (NSAccessibilityCustomRotorItemResult *)obj : nil;
}

static NSPhpCustomRotorBox *ns_rotor_box(NSAccessibilityCustomRotor *rotor)
{
    if (!rotor) {
        return nil;
    }
    NSPhpCustomRotorBox *box = objc_getAssociatedObject(rotor, kNSPhpRotorBoxKey);
    if (!box) {
        box = [NSPhpCustomRotorBox new];
        rotor.itemSearchDelegate = box;
        objc_setAssociatedObject(rotor, kNSPhpRotorBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

uintptr_t ns_accessibilitycustomrotor_create(const char *label)
{
    @autoreleasepool {
        NSPhpCustomRotorBox *box = [NSPhpCustomRotorBox new];
        NSString *text = label ? [NSString stringWithUTF8String:label] : @"Custom";
        NSAccessibilityCustomRotor *rotor = [[NSAccessibilityCustomRotor alloc] initWithLabel:text itemSearchDelegate:box];
        objc_setAssociatedObject(rotor, kNSPhpRotorBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return rotor ? ns_retain_obj(rotor) : 0;
    }
}

uintptr_t ns_accessibilitycustomrotor_create_with_type(int rotor_type)
{
    @autoreleasepool {
        NSPhpCustomRotorBox *box = [NSPhpCustomRotorBox new];
        NSAccessibilityCustomRotor *rotor = [[NSAccessibilityCustomRotor alloc] initWithRotorType:(NSAccessibilityCustomRotorType)rotor_type
                                                                               itemSearchDelegate:box];
        objc_setAssociatedObject(rotor, kNSPhpRotorBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return rotor ? ns_retain_obj(rotor) : 0;
    }
}

uintptr_t ns_accessibilitycustomrotor_wrap(void *rotor)
{
    if (!rotor) {
        return 0;
    }
    @autoreleasepool {
        NSAccessibilityCustomRotor *obj = (__bridge NSAccessibilityCustomRotor *)rotor;
        if (![obj isKindOfClass:[NSAccessibilityCustomRotor class]]) {
            return 0;
        }
        (void) ns_rotor_box(obj);
        return ns_retain_obj(obj);
    }
}

void ns_accessibilitycustomrotor_destroy(uintptr_t rotor)
{
    if (rotor) {
        CFRelease((void *)rotor);
    }
}

void *ns_accessibilitycustomrotor_nsaccessibilitycustomrotor(uintptr_t rotor)
{
    NSAccessibilityCustomRotor *obj = ns_rotor_from(rotor);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_accessibilitycustomrotor_type(uintptr_t rotor)
{
    @autoreleasepool {
        NSAccessibilityCustomRotor *obj = ns_rotor_from(rotor);
        return obj ? (int)obj.type : 0;
    }
}

void ns_accessibilitycustomrotor_set_type(uintptr_t rotor, int rotor_type)
{
    @autoreleasepool {
        NSAccessibilityCustomRotor *obj = ns_rotor_from(rotor);
        if (obj) {
            obj.type = (NSAccessibilityCustomRotorType)rotor_type;
        }
    }
}

int ns_accessibilitycustomrotor_label(uintptr_t rotor, char *out, int out_len)
{
    @autoreleasepool {
        NSAccessibilityCustomRotor *obj = ns_rotor_from(rotor);
        return obj ? ns_copy_nsstring(obj.label, out, out_len) : 0;
    }
}

void ns_accessibilitycustomrotor_set_label(uintptr_t rotor, const char *label)
{
    @autoreleasepool {
        NSAccessibilityCustomRotor *obj = ns_rotor_from(rotor);
        if (obj) {
            obj.label = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

void ns_accessibilitycustomrotor_set_next_item(uintptr_t rotor, uintptr_t item)
{
    @autoreleasepool {
        NSAccessibilityCustomRotor *obj = ns_rotor_from(rotor);
        NSPhpCustomRotorBox *box = ns_rotor_box(obj);
        if (box) {
            box.nextItem = ns_rotor_item_from(item);
        }
    }
}

int ns_accessibilitycustomrotor_poll_search(uintptr_t rotor, int *direction, char *filter_out, int filter_len)
{
    @autoreleasepool {
        NSAccessibilityCustomRotor *obj = ns_rotor_from(rotor);
        NSPhpCustomRotorBox *box = ns_rotor_box(obj);
        if (!box || !box.searchPending) {
            return 0;
        }
        box.searchPending = 0;
        if (direction) {
            *direction = (int)box.lastDirection;
        }
        ns_copy_nsstring(box.lastFilter, filter_out, filter_len);
        return 1;
    }
}

uintptr_t ns_accessibilitycustomrotoritem_create_with_element(uintptr_t element)
{
    @autoreleasepool {
        if (!element) {
            return 0;
        }
        id target = (__bridge id)(void *)element;
        NSAccessibilityCustomRotorItemResult *item = [[NSAccessibilityCustomRotorItemResult alloc] initWithTargetElement:target];
        return item ? ns_retain_obj(item) : 0;
    }
}

uintptr_t ns_accessibilitycustomrotoritem_create_with_token(const char *token, const char *label)
{
    @autoreleasepool {
        if (!token || !label) {
            return 0;
        }
        NSString *tok = [NSString stringWithUTF8String:token];
        NSString *text = [NSString stringWithUTF8String:label];
        NSAccessibilityCustomRotorItemResult *item = [[NSAccessibilityCustomRotorItemResult alloc] initWithItemLoadingToken:tok customLabel:text];
        return item ? ns_retain_obj(item) : 0;
    }
}

uintptr_t ns_accessibilitycustomrotoritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSAccessibilityCustomRotorItemResult *obj = (__bridge NSAccessibilityCustomRotorItemResult *)item;
        return [obj isKindOfClass:[NSAccessibilityCustomRotorItemResult class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_accessibilitycustomrotoritem_destroy(uintptr_t item)
{
    if (item) {
        CFRelease((void *)item);
    }
}

void *ns_accessibilitycustomrotoritem_nsaccessibilitycustomrotoritem(uintptr_t item)
{
    NSAccessibilityCustomRotorItemResult *obj = ns_rotor_item_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_accessibilitycustomrotoritem_custom_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSAccessibilityCustomRotorItemResult *obj = ns_rotor_item_from(item);
        return obj ? ns_copy_nsstring(obj.customLabel, out, out_len) : 0;
    }
}

void ns_accessibilitycustomrotoritem_set_custom_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSAccessibilityCustomRotorItemResult *obj = ns_rotor_item_from(item);
        if (obj) {
            obj.customLabel = label ? [NSString stringWithUTF8String:label] : nil;
        }
    }
}

void ns_accessibilitycustomrotoritem_set_target_range(uintptr_t item, unsigned long location, unsigned long length)
{
    @autoreleasepool {
        NSAccessibilityCustomRotorItemResult *obj = ns_rotor_item_from(item);
        if (obj) {
            obj.targetRange = NSMakeRange(location, length);
        }
    }
}

int ns_accessibilitycustomrotoritem_target_range(uintptr_t item, unsigned long *location, unsigned long *length)
{
    @autoreleasepool {
        NSAccessibilityCustomRotorItemResult *obj = ns_rotor_item_from(item);
        if (!obj || !location || !length) {
            return 0;
        }
        *location = obj.targetRange.location;
        *length = obj.targetRange.length;
        return 1;
    }
}
