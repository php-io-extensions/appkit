#ifndef PHP_APPKIT_NS_WINDOWCONTROLLER_H
#define PHP_APPKIT_NS_WINDOWCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** initWithWindow: using an existing window-box handle. */
uintptr_t ns_windowcontroller_create(uintptr_t window);

/** initWithWindow:nil */
uintptr_t ns_windowcontroller_create_empty(void);

/** Wrap a borrowed NSWindowController*. */
uintptr_t ns_windowcontroller_wrap(void *controller);

void ns_windowcontroller_destroy(uintptr_t controller);

/** Borrowed NSWindowController* (0 if invalid). Do not free. */
void *ns_windowcontroller_nswindowcontroller(uintptr_t controller);

/** Borrowed NSWindow* from the controller's window property, or 0. */
void *ns_windowcontroller_nswindow(uintptr_t controller);

void ns_windowcontroller_show_window(uintptr_t controller);

void ns_windowcontroller_close(uintptr_t controller);

void ns_windowcontroller_set_content_view_controller(uintptr_t controller, uintptr_t viewController);

int ns_windowcontroller_is_window_loaded(uintptr_t controller);

void ns_windowcontroller_set_should_close_document(uintptr_t controller, int shouldClose);

int ns_windowcontroller_should_close_document(uintptr_t controller);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_WINDOWCONTROLLER_H */
