#import <AppKit/AppKit.h>
#import "ns-draggingsession.h"
#import "ns-pasteboard.h"

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

static NSDraggingSession *ns_draggingsession_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSDraggingSession class]] ? (NSDraggingSession *)obj : nil;
}

uintptr_t ns_draggingsession_wrap(void *session)
{
    if (!session) {
        return 0;
    }
    @autoreleasepool {
        NSDraggingSession *obj = (__bridge NSDraggingSession *)session;
        return [obj isKindOfClass:[NSDraggingSession class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_draggingsession_destroy(uintptr_t session)
{
    ns_release_handle(session);
}

void *ns_draggingsession_nsdraggingsession(uintptr_t session)
{
    NSDraggingSession *obj = ns_draggingsession_from(session);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_draggingsession_get_dragging_formation(uintptr_t session)
{
    @autoreleasepool {
        NSDraggingSession *obj = ns_draggingsession_from(session);
        return obj ? (int)obj.draggingFormation : 0;
    }
}

void ns_draggingsession_set_dragging_formation(uintptr_t session, int formation)
{
    @autoreleasepool {
        NSDraggingSession *obj = ns_draggingsession_from(session);
        if (obj) {
            obj.draggingFormation = (NSDraggingFormation)formation;
        }
    }
}

int ns_draggingsession_get_animates_to_starting_positions(uintptr_t session)
{
    @autoreleasepool {
        NSDraggingSession *obj = ns_draggingsession_from(session);
        return obj && obj.animatesToStartingPositionsOnCancelOrFail ? 1 : 0;
    }
}

void ns_draggingsession_set_animates_to_starting_positions(uintptr_t session, int value)
{
    @autoreleasepool {
        NSDraggingSession *obj = ns_draggingsession_from(session);
        if (obj) {
            obj.animatesToStartingPositionsOnCancelOrFail = value ? YES : NO;
        }
    }
}

long long ns_draggingsession_get_dragging_leader_index(uintptr_t session)
{
    @autoreleasepool {
        NSDraggingSession *obj = ns_draggingsession_from(session);
        return obj ? (long long)obj.draggingLeaderIndex : 0;
    }
}

void ns_draggingsession_set_dragging_leader_index(uintptr_t session, long long index)
{
    @autoreleasepool {
        NSDraggingSession *obj = ns_draggingsession_from(session);
        if (obj) {
            obj.draggingLeaderIndex = (NSInteger)index;
        }
    }
}

uintptr_t ns_draggingsession_dragging_pasteboard(uintptr_t session)
{
    @autoreleasepool {
        NSDraggingSession *obj = ns_draggingsession_from(session);
        return obj && obj.draggingPasteboard ? ns_pasteboard_wrap((__bridge void *)obj.draggingPasteboard) : 0;
    }
}

long long ns_draggingsession_dragging_sequence_number(uintptr_t session)
{
    @autoreleasepool {
        NSDraggingSession *obj = ns_draggingsession_from(session);
        return obj ? (long long)obj.draggingSequenceNumber : 0;
    }
}

void ns_draggingsession_dragging_location(uintptr_t session, double *x, double *y)
{
    @autoreleasepool {
        NSDraggingSession *obj = ns_draggingsession_from(session);
        if (!obj) {
            if (x) {
                *x = 0;
            }
            if (y) {
                *y = 0;
            }
            return;
        }
        NSPoint pt = obj.draggingLocation;
        if (x) {
            *x = (double)pt.x;
        }
        if (y) {
            *y = (double)pt.y;
        }
    }
}
