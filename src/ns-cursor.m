#import <AppKit/AppKit.h>
#import "ns-cursor.h"

static uintptr_t ns_cursor_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSCursor *ns_cursor_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCursor class]] ? (NSCursor *)obj : nil;
}

static uintptr_t ns_cursor_system(NSCursor *cursor)
{
    @autoreleasepool {
        return ns_cursor_retain_obj(cursor);
    }
}

uintptr_t ns_cursor_wrap(void *cursor)
{
    if (!cursor) {
        return 0;
    }
    @autoreleasepool {
        NSCursor *obj = (__bridge NSCursor *)cursor;
        return [obj isKindOfClass:[NSCursor class]] ? ns_cursor_retain_obj(obj) : 0;
    }
}

void ns_cursor_destroy(uintptr_t cursor)
{
    if (!cursor) {
        return;
    }
    CFRelease((void *)cursor);
}

void *ns_cursor_nscursor(uintptr_t cursor)
{
    NSCursor *obj = ns_cursor_from(cursor);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_cursor_hide(void)
{
    [NSCursor hide];
}

void ns_cursor_unhide(void)
{
    [NSCursor unhide];
}

void ns_cursor_set_hidden_until_mouse_moves(int flag)
{
    [NSCursor setHiddenUntilMouseMoves:flag ? YES : NO];
}

void ns_cursor_pop_class(void)
{
    [NSCursor pop];
}

void ns_cursor_push(uintptr_t cursor)
{
    @autoreleasepool {
        NSCursor *obj = ns_cursor_from(cursor);
        if (obj) {
            [obj push];
        }
    }
}

void ns_cursor_set(uintptr_t cursor)
{
    @autoreleasepool {
        NSCursor *obj = ns_cursor_from(cursor);
        if (obj) {
            [obj set];
        }
    }
}

void ns_cursor_pop(uintptr_t cursor)
{
    @autoreleasepool {
        NSCursor *obj = ns_cursor_from(cursor);
        if (obj) {
            [obj pop];
        }
    }
}

int ns_cursor_hot_spot(uintptr_t cursor, double *x, double *y)
{
    if (!x || !y) {
        return 0;
    }
    @autoreleasepool {
        NSCursor *obj = ns_cursor_from(cursor);
        if (!obj) {
            return 0;
        }
        NSPoint pt = obj.hotSpot;
        *x = (double)pt.x;
        *y = (double)pt.y;
        return 1;
    }
}

uintptr_t ns_cursor_current(void)
{
    return ns_cursor_system([NSCursor currentCursor]);
}

uintptr_t ns_cursor_arrow(void)
{
    return ns_cursor_system([NSCursor arrowCursor]);
}

uintptr_t ns_cursor_crosshair(void)
{
    return ns_cursor_system([NSCursor crosshairCursor]);
}

uintptr_t ns_cursor_pointing_hand(void)
{
    return ns_cursor_system([NSCursor pointingHandCursor]);
}

uintptr_t ns_cursor_i_beam(void)
{
    return ns_cursor_system([NSCursor IBeamCursor]);
}

uintptr_t ns_cursor_closed_hand(void)
{
    return ns_cursor_system([NSCursor closedHandCursor]);
}

uintptr_t ns_cursor_open_hand(void)
{
    return ns_cursor_system([NSCursor openHandCursor]);
}

uintptr_t ns_cursor_operation_not_allowed(void)
{
    return ns_cursor_system([NSCursor operationNotAllowedCursor]);
}

uintptr_t ns_cursor_drag_link(void)
{
    return ns_cursor_system([NSCursor dragLinkCursor]);
}

uintptr_t ns_cursor_drag_copy(void)
{
    return ns_cursor_system([NSCursor dragCopyCursor]);
}

uintptr_t ns_cursor_contextual_menu(void)
{
    return ns_cursor_system([NSCursor contextualMenuCursor]);
}
