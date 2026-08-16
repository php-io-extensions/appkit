#import <AppKit/AppKit.h>
#import "ns-accessibilityelement.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSAccessibilityElement *ns_accessibilityelement_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSAccessibilityElement class]] ? (NSAccessibilityElement *)obj : nil;
}

uintptr_t ns_accessibilityelement_create(const char *role, double x, double y, double width, double height, const char *label, uintptr_t parent)
{
    @autoreleasepool {
        NSString *roleStr = role ? [NSString stringWithUTF8String:role] : NSAccessibilityUnknownRole;
        NSString *labelStr = (label && label[0]) ? [NSString stringWithUTF8String:label] : nil;
        id parentObj = parent ? (__bridge id)(void *)parent : nil;
        NSAccessibilityElement *element = [NSAccessibilityElement accessibilityElementWithRole:roleStr
                                                                                          frame:NSMakeRect(x, y, width, height)
                                                                                          label:labelStr
                                                                                         parent:parentObj];
        return element ? ns_retain_obj(element) : 0;
    }
}

uintptr_t ns_accessibilityelement_wrap(void *element)
{
    if (!element) {
        return 0;
    }
    @autoreleasepool {
        NSAccessibilityElement *obj = (__bridge NSAccessibilityElement *)element;
        return [obj isKindOfClass:[NSAccessibilityElement class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_accessibilityelement_destroy(uintptr_t element)
{
    if (element) {
        CFRelease((void *)element);
    }
}

void *ns_accessibilityelement_nsaccessibilityelement(uintptr_t element)
{
    NSAccessibilityElement *obj = ns_accessibilityelement_from(element);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_accessibilityelement_add_child(uintptr_t element, uintptr_t child)
{
    @autoreleasepool {
        NSAccessibilityElement *obj = ns_accessibilityelement_from(element);
        NSAccessibilityElement *childObj = ns_accessibilityelement_from(child);
        if (obj && childObj) {
            [obj accessibilityAddChildElement:childObj];
        }
    }
}

void ns_accessibilityelement_set_frame_in_parent(uintptr_t element, double x, double y, double width, double height)
{
    @autoreleasepool {
        NSAccessibilityElement *obj = ns_accessibilityelement_from(element);
        if (obj) {
            obj.accessibilityFrameInParentSpace = NSMakeRect(x, y, width, height);
        }
    }
}

int ns_accessibilityelement_frame_in_parent(uintptr_t element, double *x, double *y, double *width, double *height)
{
    @autoreleasepool {
        NSAccessibilityElement *obj = ns_accessibilityelement_from(element);
        if (!obj || !x || !y || !width || !height) {
            return 0;
        }
        NSRect frame = obj.accessibilityFrameInParentSpace;
        *x = frame.origin.x;
        *y = frame.origin.y;
        *width = frame.size.width;
        *height = frame.size.height;
        return 1;
    }
}
