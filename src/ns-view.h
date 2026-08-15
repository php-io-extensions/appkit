#ifndef PHP_APPKIT_NS_VIEW_H
#define PHP_APPKIT_NS_VIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * NSView initWithFrame — plain AppKit view (no Metal / no CAMetalLayer).
 * Returns opaque handle (0 on failure). Caller owns until ns_view_destroy.
 */
uintptr_t ns_view_create(double x, double y, double width, double height);

/**
 * Wrap an existing NSView* (borrowed from NSWindow.contentView, etc.).
 * Does not take ownership of the native view beyond a retain for the box lifetime.
 */
uintptr_t ns_view_wrap(void *nsview);

/** Underlying NSView* (0 if invalid). Borrowed — do not free. */
void *ns_view_nsview(uintptr_t view);

void ns_view_destroy(uintptr_t view);

/** [parent addSubview:child] */
void ns_view_add_subview(uintptr_t parent, uintptr_t child);

/** [view setFrame:] */
void ns_view_set_frame(uintptr_t view, double x, double y, double width, double height);

int ns_view_get_width(uintptr_t view);

int ns_view_get_height(uintptr_t view);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_VIEW_H */
