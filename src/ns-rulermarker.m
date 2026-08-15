#import <AppKit/AppKit.h>
#import "ns-rulermarker.h"
#import "ns-rulerview.h"
#import "ns-view.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSRulerMarker *ns_rulermarker_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSRulerMarker class]] ? (NSRulerMarker *)obj : nil;
}

static NSImage *ns_default_marker_image(void)
{
    NSImage *image = [[NSImage alloc] initWithSize:NSMakeSize(8, 8)];
    [image lockFocus];
    [[NSColor controlAccentColor] setFill];
    NSRectFill(NSMakeRect(0, 0, 8, 8));
    [image unlockFocus];
    return image;
}

uintptr_t ns_rulermarker_create(uintptr_t ruler, double location)
{
    void *rulerPtr = ns_rulerview_nsrulerview(ruler);
    if (!rulerPtr) {
        return 0;
    }
    @autoreleasepool {
        NSRulerView *rulerView = (__bridge NSRulerView *)rulerPtr;
        NSImage *image = ns_default_marker_image();
        NSRulerMarker *marker = [[NSRulerMarker alloc] initWithRulerView:rulerView
                                                          markerLocation:(CGFloat)location
                                                                   image:image
                                                             imageOrigin:NSMakePoint(4, 4)];
        return ns_retain_obj(marker);
    }
}

uintptr_t ns_rulermarker_wrap(void *marker)
{
    if (!marker) {
        return 0;
    }
    @autoreleasepool {
        NSRulerMarker *obj = (__bridge NSRulerMarker *)marker;
        return [obj isKindOfClass:[NSRulerMarker class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_rulermarker_destroy(uintptr_t marker)
{
    if (marker) {
        CFRelease((void *)marker);
    }
}

void *ns_rulermarker_nsrulermarker(uintptr_t marker)
{
    NSRulerMarker *obj = ns_rulermarker_from(marker);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_rulermarker_set_location(uintptr_t marker, double location)
{
    @autoreleasepool {
        NSRulerMarker *obj = ns_rulermarker_from(marker);
        if (obj) {
            obj.markerLocation = (CGFloat)location;
        }
    }
}

double ns_rulermarker_get_location(uintptr_t marker)
{
    @autoreleasepool {
        NSRulerMarker *obj = ns_rulermarker_from(marker);
        return obj ? (double)obj.markerLocation : 0.0;
    }
}

void ns_rulermarker_set_movable(uintptr_t marker, int flag)
{
    @autoreleasepool {
        NSRulerMarker *obj = ns_rulermarker_from(marker);
        if (obj) {
            obj.movable = flag ? YES : NO;
        }
    }
}

int ns_rulermarker_is_movable(uintptr_t marker)
{
    @autoreleasepool {
        NSRulerMarker *obj = ns_rulermarker_from(marker);
        return obj && obj.movable ? 1 : 0;
    }
}

void ns_rulermarker_set_removable(uintptr_t marker, int flag)
{
    @autoreleasepool {
        NSRulerMarker *obj = ns_rulermarker_from(marker);
        if (obj) {
            obj.removable = flag ? YES : NO;
        }
    }
}

int ns_rulermarker_is_removable(uintptr_t marker)
{
    @autoreleasepool {
        NSRulerMarker *obj = ns_rulermarker_from(marker);
        return obj && obj.removable ? 1 : 0;
    }
}

double ns_rulermarker_thickness_required(uintptr_t marker)
{
    @autoreleasepool {
        NSRulerMarker *obj = ns_rulermarker_from(marker);
        return obj ? (double)obj.thicknessRequiredInRuler : 0.0;
    }
}

int ns_rulermarker_is_dragging(uintptr_t marker)
{
    @autoreleasepool {
        NSRulerMarker *obj = ns_rulermarker_from(marker);
        return obj && obj.dragging ? 1 : 0;
    }
}
