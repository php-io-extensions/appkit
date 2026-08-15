#ifndef PHP_APPKIT_NS_TEXTLAYOUTMANAGER_H
#define PHP_APPKIT_NS_TEXTLAYOUTMANAGER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textlayoutmanager_create(void);
uintptr_t ns_textlayoutmanager_wrap(void *manager);
void ns_textlayoutmanager_destroy(uintptr_t manager);
void *ns_textlayoutmanager_nstextlayoutmanager(uintptr_t manager);

int ns_textlayoutmanager_uses_font_leading(uintptr_t manager);
void ns_textlayoutmanager_set_uses_font_leading(uintptr_t manager, int flag);
int ns_textlayoutmanager_limits_layout_for_suspicious_contents(uintptr_t manager);
void ns_textlayoutmanager_set_limits_layout_for_suspicious_contents(uintptr_t manager, int flag);
int ns_textlayoutmanager_uses_hyphenation(uintptr_t manager);
void ns_textlayoutmanager_set_uses_hyphenation(uintptr_t manager, int flag);

void ns_textlayoutmanager_replace_text_content_manager(uintptr_t manager, uintptr_t content_manager);
void ns_textlayoutmanager_set_text_container(uintptr_t manager, uintptr_t container);
uintptr_t ns_textlayoutmanager_get_text_container(uintptr_t manager);
void ns_textlayoutmanager_usage_bounds_for_text_container(uintptr_t manager, double *x, double *y, double *w, double *h);
uintptr_t ns_textlayoutmanager_text_viewport_layout_controller(uintptr_t manager);
void ns_textlayoutmanager_ensure_layout_for_bounds(uintptr_t manager, double x, double y, double w, double h);
void ns_textlayoutmanager_invalidate_layout_for_range(uintptr_t manager, uintptr_t ns_text_range_ptr);
uintptr_t ns_textlayoutmanager_text_layout_fragment_for_position(uintptr_t manager, double x, double y);
int ns_textlayoutmanager_text_selections_count(uintptr_t manager);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTLAYOUTMANAGER_H */
