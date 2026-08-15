#ifndef PHP_APPKIT_NS_BUTTON_H
#define PHP_APPKIT_NS_BUTTON_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * NSButton in a view-box handle (same shape as ns_view_*).
 * Use ns_view_add_subview to place it. Caller owns until ns_button_destroy.
 */
uintptr_t ns_button_create(double x, double y, double width, double height, const char *title);

/** NSButtonTypeSwitch checkbox. */
uintptr_t ns_button_create_checkbox(double x, double y, double width, double height, const char *title);

/** NSButtonTypeRadio. */
uintptr_t ns_button_create_radio(double x, double y, double width, double height, const char *title);

void ns_button_destroy(uintptr_t button);

/** [button setTitle:] */
void ns_button_set_title(uintptr_t button, const char *title);

/** Checkbox / radio on-state via [button setState:]. */
void ns_button_set_checked(uintptr_t button, int checked);

int ns_button_is_checked(uintptr_t button);

void ns_button_set_selected(uintptr_t button, int selected);

int ns_button_is_selected(uintptr_t button);

/**
 * One-shot click. Returns 1 if the button was clicked since the last poll.
 */
int ns_button_poll_click(uintptr_t button);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BUTTON_H */
