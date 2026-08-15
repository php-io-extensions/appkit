#ifndef PHP_APPKIT_NS_FONTPANEL_H
#define PHP_APPKIT_NS_FONTPANEL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_fontpanel_wrap(void *panel);

uintptr_t ns_fontpanel_shared(void);

void ns_fontpanel_destroy(uintptr_t panel);

void *ns_fontpanel_nsfontpanel(uintptr_t panel);

int ns_fontpanel_shared_exists(void);

void ns_fontpanel_set_panel_font(uintptr_t panel, uintptr_t font, int is_multiple);

uintptr_t ns_fontpanel_panel_convert_font(uintptr_t panel, uintptr_t font);

int ns_fontpanel_works_when_modal(uintptr_t panel);

void ns_fontpanel_set_works_when_modal(uintptr_t panel, int works);

int ns_fontpanel_is_enabled(uintptr_t panel);

void ns_fontpanel_set_enabled(uintptr_t panel, int enabled);

void ns_fontpanel_reload_default_font_families(uintptr_t panel);

void ns_fontpanel_order_front(uintptr_t panel);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_FONTPANEL_H */
