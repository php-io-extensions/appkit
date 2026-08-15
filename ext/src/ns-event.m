#import <AppKit/AppKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import "ns-event.h"
#import "ns-window.h"

static double ns_event_scroll_dx = 0.0;
static double ns_event_scroll_dy = 0.0;

void ns_event_begin_frame(void)
{
    ns_event_scroll_dx = 0.0;
    ns_event_scroll_dy = 0.0;
}

void ns_event_handle_event(void *nsevent)
{
    if (!nsevent) {
        return;
    }

    @autoreleasepool {
        NSEvent *event = (__bridge NSEvent *)nsevent;
        if (event.type == NSEventTypeScrollWheel) {
            if (event.hasPreciseScrollingDeltas) {
                ns_event_scroll_dx += (double)event.scrollingDeltaX;
                ns_event_scroll_dy += (double)event.scrollingDeltaY;
            } else {
                ns_event_scroll_dx += (double)event.deltaX;
                ns_event_scroll_dy += (double)event.deltaY;
            }
        }
    }
}

int ns_event_key_down(int keycode)
{
    if (keycode < 0 || keycode > 0xFFFF) {
        return 0;
    }
    return CGEventSourceKeyState(kCGEventSourceStateCombinedSessionState, (CGKeyCode)keycode) ? 1 : 0;
}

int ns_event_mouse_button_down(int button)
{
    if (button < 0 || button > 31) {
        return 0;
    }
    @autoreleasepool {
        NSUInteger mask = [NSEvent pressedMouseButtons];
        return (mask & (1UL << (NSUInteger)button)) ? 1 : 0;
    }
}

int ns_event_mouse_position(uintptr_t window, double *x, double *y)
{
    if (!x || !y) {
        return 0;
    }

    @autoreleasepool {
        NSPoint screen = [NSEvent mouseLocation];
        if (window == 0) {
            *x = (double)screen.x;
            *y = (double)screen.y;
            return 1;
        }
        return ns_window_screen_to_content(window, (double)screen.x, (double)screen.y, x, y);
    }
}

void ns_event_mouse_scroll_delta(double *dx, double *dy)
{
    if (dx) {
        *dx = ns_event_scroll_dx;
    }
    if (dy) {
        *dy = ns_event_scroll_dy;
    }
}
