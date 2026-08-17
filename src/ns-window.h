#ifndef PHP_APPKIT_NS_WINDOW_H
#define PHP_APPKIT_NS_WINDOW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * NSWindow initWithContentRect:styleMask:backing:defer: + setTitle.
 * Does not show, center, activate, or attach Metal.
 * Returns opaque handle (0 on failure). Caller owns until ns_window_destroy.
 */
uintptr_t ns_window_create(const char *title, int width, int height);

void ns_window_destroy(uintptr_t window);

void ns_window_set_title(uintptr_t window, const char *title);

/** [window makeKeyAndOrderFront:] */
void ns_window_show(uintptr_t window);

/** [window orderOut:] */
void ns_window_hide(uintptr_t window);

/** [window center] */
void ns_window_center(uintptr_t window);

/** 1 if the user closed the window. */
int ns_window_should_close(uintptr_t window);

int ns_window_get_width(uintptr_t window);

int ns_window_get_height(uintptr_t window);

/** NSWindow.contentView wrapped as a view handle (cached). */
uintptr_t ns_window_content_view(uintptr_t window);

/** [window setContentView:] */
int ns_window_set_content_view(uintptr_t window, uintptr_t view);

/** [window makeFirstResponder:] */
int ns_window_make_first_responder(uintptr_t window, uintptr_t view);

/**
 * Convert AppKit screen coordinates (origin bottom-left) to content-view local coords.
 * Returns 1 on success.
 */
int ns_window_screen_to_content(uintptr_t window, double screen_x, double screen_y, double *out_x, double *out_y);

/** Borrowed NSWindow* (0 if invalid). Do not free. */
void *ns_window_nswindow(uintptr_t window);

uintptr_t ns_window_tab(uintptr_t window);
uintptr_t ns_window_tab_group(uintptr_t window);
void ns_window_add_titlebar_accessory(uintptr_t window, uintptr_t controller);

/**
 * PHP callable invoked from NSWindowDelegate windowDidResize: (including live resize).
 * callback is a zval*; pass NULL to clear. Implemented in nswindow.zep.c (php.h).
 */
void ns_window_php_set_did_resize(uintptr_t window, void *callback);
void ns_window_php_clear_did_resize(uintptr_t window);
void ns_window_php_invoke_did_resize(uintptr_t window);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_WINDOW_H */
