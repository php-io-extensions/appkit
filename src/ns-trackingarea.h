#ifndef PHP_APPKIT_NS_TRACKINGAREA_H
#define PHP_APPKIT_NS_TRACKINGAREA_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * initWithRect:options:owner:nil userInfo:nil.
 * options is NSTrackingAreaOptions bitfield (int).
 */
uintptr_t ns_trackingarea_create(double x, double y, double width, double height, unsigned options);

void ns_trackingarea_destroy(uintptr_t area);

/** [view addTrackingArea:] */
int ns_trackingarea_add_to_view(uintptr_t area, uintptr_t view);

/** [view removeTrackingArea:] */
void ns_trackingarea_remove_from_view(uintptr_t area, uintptr_t view);

int ns_trackingarea_rect(uintptr_t area, double *x, double *y, double *w, double *h);

unsigned ns_trackingarea_options(uintptr_t area);

/** Borrowed NSTrackingArea* (0 if invalid). Do not free. */
void *ns_trackingarea_nstrackingarea(uintptr_t area);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TRACKINGAREA_H */
