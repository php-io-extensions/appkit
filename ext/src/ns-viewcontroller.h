#ifndef PHP_APPKIT_NS_VIEWCONTROLLER_H
#define PHP_APPKIT_NS_VIEWCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** [[NSViewController alloc] init] — caller owns until ns_viewcontroller_destroy. */
uintptr_t ns_viewcontroller_create(void);

/** Create with an existing view-box handle as the controller's view. */
uintptr_t ns_viewcontroller_create_with_view(uintptr_t view);

/** Wrap a borrowed NSViewController*. */
uintptr_t ns_viewcontroller_wrap(void *controller);

void ns_viewcontroller_destroy(uintptr_t controller);

/** Borrowed NSViewController* (0 if invalid). Do not free. */
void *ns_viewcontroller_nsviewcontroller(uintptr_t controller);

/** Assign a view-box handle as the controller's view. */
void ns_viewcontroller_set_view(uintptr_t controller, uintptr_t view);

/** View-box handle for the controller's view, or 0. */
uintptr_t ns_viewcontroller_view(uintptr_t controller);

void ns_viewcontroller_set_title(uintptr_t controller, const char *title);

int ns_viewcontroller_get_title(uintptr_t controller, char *out, int out_len);

int ns_viewcontroller_is_view_loaded(uintptr_t controller);

void ns_viewcontroller_load_view_if_needed(uintptr_t controller);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_VIEWCONTROLLER_H */
