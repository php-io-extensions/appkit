#import <AppKit/AppKit.h>
#import "ns-rulerview.h"
#import "ns-rulermarker.h"
#import "ns-view.h"

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

static NSRulerView *ns_rulerview_from(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSRulerView class]] ? (NSRulerView *)view : nil;
}

uintptr_t ns_rulerview_create(int orientation)
{
    @autoreleasepool {
        NSRulerView *ruler = [[NSRulerView alloc] initWithScrollView:nil
                                                         orientation:(NSRulerOrientation)orientation];
        return ns_view_wrap((__bridge void *)ruler);
    }
}

uintptr_t ns_rulerview_wrap(void *ruler)
{
    if (!ruler) {
        return 0;
    }
    @autoreleasepool {
        NSRulerView *obj = (__bridge NSRulerView *)ruler;
        return [obj isKindOfClass:[NSRulerView class]] ? ns_view_wrap(ruler) : 0;
    }
}

void ns_rulerview_destroy(uintptr_t ruler)
{
    ns_view_destroy(ruler);
}

void *ns_rulerview_nsrulerview(uintptr_t ruler)
{
    NSRulerView *obj = ns_rulerview_from(ruler);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_rulerview_set_orientation(uintptr_t ruler, int orientation)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        if (obj) {
            obj.orientation = (NSRulerOrientation)orientation;
        }
    }
}

int ns_rulerview_get_orientation(uintptr_t ruler)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        return obj ? (int)obj.orientation : 0;
    }
}

void ns_rulerview_set_rule_thickness(uintptr_t ruler, double thickness)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        if (obj) {
            obj.ruleThickness = (CGFloat)thickness;
        }
    }
}

double ns_rulerview_get_rule_thickness(uintptr_t ruler)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        return obj ? (double)obj.ruleThickness : 0.0;
    }
}

void ns_rulerview_set_measurement_units(uintptr_t ruler, const char *units)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        if (obj) {
            obj.measurementUnits = units ? [NSString stringWithUTF8String:units] : NSRulerViewUnitInches;
        }
    }
}

int ns_rulerview_get_measurement_units(uintptr_t ruler, char *out, int out_len)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.measurementUnits, out, out_len);
    }
}

void ns_rulerview_set_origin_offset(uintptr_t ruler, double offset)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        if (obj) {
            obj.originOffset = (CGFloat)offset;
        }
    }
}

double ns_rulerview_get_origin_offset(uintptr_t ruler)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        return obj ? (double)obj.originOffset : 0.0;
    }
}

void ns_rulerview_set_client_view(uintptr_t ruler, uintptr_t view)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        if (obj) {
            obj.clientView = (__bridge NSView *)ptr;
        }
    }
}

uintptr_t ns_rulerview_client_view(uintptr_t ruler)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        NSView *client = obj ? obj.clientView : nil;
        return client ? ns_view_wrap((__bridge void *)client) : 0;
    }
}

void ns_rulerview_set_accessory_view(uintptr_t ruler, uintptr_t view)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        if (obj) {
            obj.accessoryView = (__bridge NSView *)ptr;
        }
    }
}

uintptr_t ns_rulerview_accessory_view(uintptr_t ruler)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        NSView *accessory = obj ? obj.accessoryView : nil;
        return accessory ? ns_view_wrap((__bridge void *)accessory) : 0;
    }
}

void ns_rulerview_add_marker(uintptr_t ruler, uintptr_t marker)
{
    void *ptr = ns_rulermarker_nsrulermarker(marker);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        if (obj) {
            [obj addMarker:(__bridge NSRulerMarker *)ptr];
        }
    }
}

void ns_rulerview_remove_marker(uintptr_t ruler, uintptr_t marker)
{
    void *ptr = ns_rulermarker_nsrulermarker(marker);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        if (obj) {
            [obj removeMarker:(__bridge NSRulerMarker *)ptr];
        }
    }
}

void ns_rulerview_invalidate_hash_marks(uintptr_t ruler)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        if (obj) {
            [obj invalidateHashMarks];
        }
    }
}

double ns_rulerview_baseline_location(uintptr_t ruler)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        return obj ? (double)obj.baselineLocation : 0.0;
    }
}

double ns_rulerview_required_thickness(uintptr_t ruler)
{
    @autoreleasepool {
        NSRulerView *obj = ns_rulerview_from(ruler);
        return obj ? (double)obj.requiredThickness : 0.0;
    }
}
