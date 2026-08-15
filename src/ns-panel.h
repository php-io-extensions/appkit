#ifndef PHP_APPKIT_NS_PANEL_H
#define PHP_APPKIT_NS_PANEL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * NSPanel initWithContentRect:styleMask:backing:defer: + setTitle.
 * Returns opaque handle (0 on failure). Caller owns until ns_panel_destroy.
 */
uintptr_t ns_panel_create(const char *title, int width, int height);

void ns_panel_destroy(uintptr_t panel);

void ns_panel_set_title(uintptr_t panel, const char *title);

void ns_panel_show(uintptr_t panel);

void ns_panel_hide(uintptr_t panel);

void ns_panel_center(uintptr_t panel);

int ns_panel_should_close(uintptr_t panel);

int ns_panel_get_width(uintptr_t panel);

int ns_panel_get_height(uintptr_t panel);

uintptr_t ns_panel_content_view(uintptr_t panel);

int ns_panel_set_content_view(uintptr_t panel, uintptr_t view);

int ns_panel_make_first_responder(uintptr_t panel, uintptr_t view);

int ns_panel_screen_to_content(uintptr_t panel, double screen_x, double screen_y, double *out_x, double *out_y);

void ns_panel_set_floating_panel(uintptr_t panel, int floating);

int ns_panel_is_floating_panel(uintptr_t panel);

void ns_panel_set_becomes_key_only_if_needed(uintptr_t panel, int flag);

int ns_panel_becomes_key_only_if_needed(uintptr_t panel);

void ns_panel_set_works_when_modal(uintptr_t panel, int flag);

int ns_panel_works_when_modal(uintptr_t panel);

/** Borrowed NSPanel* (0 if invalid). Do not free. */
void *ns_panel_nspanel(uintptr_t panel);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PANEL_H */
