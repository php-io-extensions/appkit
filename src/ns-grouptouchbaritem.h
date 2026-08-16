#ifndef PHP_APPKIT_NS_GROUPTOUCHBARITEM_H
#define PHP_APPKIT_NS_GROUPTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_grouptouchbaritem_group_item(const char *identifier, const uintptr_t *items, int count);
uintptr_t ns_grouptouchbaritem_alert_style_group_item(const char *identifier);
uintptr_t ns_grouptouchbaritem_wrap(void *item);
void ns_grouptouchbaritem_destroy(uintptr_t item);
void *ns_grouptouchbaritem_nsgrouptouchbaritem(uintptr_t item);
void ns_grouptouchbaritem_set_group_touchbar(uintptr_t item, uintptr_t bar);
uintptr_t ns_grouptouchbaritem_get_group_touchbar(uintptr_t item);
void ns_grouptouchbaritem_set_customization_label(uintptr_t item, const char *label);
int ns_grouptouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);
void ns_grouptouchbaritem_set_prefers_equal_widths(uintptr_t item, int flag);
int ns_grouptouchbaritem_prefers_equal_widths(uintptr_t item);
void ns_grouptouchbaritem_set_preferred_item_width(uintptr_t item, double width);
double ns_grouptouchbaritem_get_preferred_item_width(uintptr_t item);
void ns_grouptouchbaritem_set_group_user_interface_layout_direction(uintptr_t item, int direction);
int ns_grouptouchbaritem_get_group_user_interface_layout_direction(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GROUPTOUCHBARITEM_H */
