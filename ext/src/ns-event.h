#ifndef PHP_APPKIT_NS_EVENT_H
#define PHP_APPKIT_NS_EVENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * NSEvent / CoreGraphics keyboard + mouse input.
 *
 * Mouse buttons: 0=left, 1=right, 2=middle (NSEvent pressedMouseButtons bits).
 * Key codes: macOS virtual key codes (kVK_*).
 * Scroll deltas accumulate during ns_app_poll and clear at the start of each poll.
 */

/** Clear per-poll scroll deltas. Called at the start of ns_app_poll. */
void ns_event_begin_frame(void);

/**
 * Observe one NSEvent for scroll accumulation.
 * Opaque void* is NSEvent* — pass NULL for no-op.
 */
void ns_event_handle_event(void *nsevent);

/** 1 if the macOS virtual key code is currently down. */
int ns_event_key_down(int keycode);

/** 1 if mouse button is currently down (0=left, 1=right, 2=middle). */
int ns_event_mouse_button_down(int button);

/**
 * Mouse position. window=0 → screen coords (AppKit, origin bottom-left).
 * window!=0 → content-view local coords for that window handle.
 * Returns 1 on success.
 */
int ns_event_mouse_position(uintptr_t window, double *x, double *y);

/**
 * Scroll deltas accumulated since the last ns_event_begin_frame / ns_app_poll.
 * Does not clear (cleared at next begin_frame).
 */
void ns_event_mouse_scroll_delta(double *dx, double *dy);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_EVENT_H */
