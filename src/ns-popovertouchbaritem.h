#ifndef PHP_APPKIT_NS_POPOVERTOUCHBARITEM_H
#define PHP_APPKIT_NS_POPOVERTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_popovertouchbaritem_create(const char *identifier);
uintptr_t ns_popovertouchbaritem_wrap(void *item);
void ns_popovertouchbaritem_destroy(uintptr_t item);
void *ns_popovertouchbaritem_nspopovertouchbaritem(uintptr_t item);
void ns_popovertouchbaritem_set_popover_touchbar(uintptr_t item, uintptr_t bar);
uintptr_t ns_popovertouchbaritem_get_popover_touchbar(uintptr_t item);
void ns_popovertouchbaritem_set_press_and_hold_touchbar(uintptr_t item, uintptr_t bar);
uintptr_t ns_popovertouchbaritem_get_press_and_hold_touchbar(uintptr_t item);
void ns_popovertouchbaritem_set_customization_label(uintptr_t item, const char *label);
int ns_popovertouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);
void ns_popovertouchbaritem_set_collapsed_representation_label(uintptr_t item, const char *label);
int ns_popovertouchbaritem_get_collapsed_representation_label(uintptr_t item, char *out, int out_len);
void ns_popovertouchbaritem_set_collapsed_representation_image(uintptr_t item, uintptr_t image);
void ns_popovertouchbaritem_set_shows_close_button(uintptr_t item, int flag);
int ns_popovertouchbaritem_shows_close_button(uintptr_t item);
void ns_popovertouchbaritem_show_popover(uintptr_t item);
void ns_popovertouchbaritem_dismiss_popover(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_POPOVERTOUCHBARITEM_H */
