#ifndef PHP_APPKIT_NS_COLORPANEL_H
#define PHP_APPKIT_NS_COLORPANEL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_colorpanel_shared(void);

void ns_colorpanel_destroy(uintptr_t panel);

void *ns_colorpanel_nscolorpanel(uintptr_t panel);

int ns_colorpanel_shared_exists(void);

void ns_colorpanel_set_picker_mask(unsigned mask);

void ns_colorpanel_set_picker_mode(int mode);

void ns_colorpanel_order_front(void);

int ns_colorpanel_mode(uintptr_t panel);

void ns_colorpanel_set_mode(uintptr_t panel, int mode);

int ns_colorpanel_shows_alpha(uintptr_t panel);

void ns_colorpanel_set_shows_alpha(uintptr_t panel, int shows);

int ns_colorpanel_is_continuous(uintptr_t panel);

void ns_colorpanel_set_continuous(uintptr_t panel, int continuous);

int ns_colorpanel_set_color_rgba(uintptr_t panel, int r, int g, int b, int a);

int ns_colorpanel_get_color_rgba(uintptr_t panel, int *r, int *g, int *b, int *a);

double ns_colorpanel_alpha(uintptr_t panel);

void ns_colorpanel_attach_color_list(uintptr_t panel, uintptr_t list);

void ns_colorpanel_detach_color_list(uintptr_t panel, uintptr_t list);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLORPANEL_H */
