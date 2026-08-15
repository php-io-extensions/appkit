#ifndef PHP_APPKIT_NS_TOUCH_H
#define PHP_APPKIT_NS_TOUCH_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Wrap a borrowed NSTouch* from an NSEvent. Short-lived — use during event handling.
 */
uintptr_t ns_touch_wrap(void *touch);

void ns_touch_destroy(uintptr_t touch);

/** Borrowed NSTouch* (0 if invalid). Do not free. */
void *ns_touch_nstouch(uintptr_t touch);

/** NSTouchPhase bitfield. */
int ns_touch_phase(uintptr_t touch);

/** NSTouchType: 0 direct, 1 indirect. */
int ns_touch_type(uintptr_t touch);

int ns_touch_is_resting(uintptr_t touch);

int ns_touch_normalized_position(uintptr_t touch, double *x, double *y);

int ns_touch_device_size(uintptr_t touch, double *w, double *h);

int ns_touch_location_in_view(uintptr_t touch, uintptr_t view, double *x, double *y);

int ns_touch_previous_location_in_view(uintptr_t touch, uintptr_t view, double *x, double *y);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOUCH_H */
