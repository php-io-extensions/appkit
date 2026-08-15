#ifndef PHP_APPKIT_NS_POPUPBUTTON_H
#define PHP_APPKIT_NS_POPUPBUTTON_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_popupbutton_create(double x, double y, double width, double height);

void ns_popupbutton_destroy(uintptr_t popup);

void ns_popupbutton_add_item(uintptr_t popup, const char *title);

void ns_popupbutton_remove_all(uintptr_t popup);

int ns_popupbutton_count(uintptr_t popup);

void ns_popupbutton_set_selected(uintptr_t popup, int index);

int ns_popupbutton_get_selected(uintptr_t popup);

int ns_popupbutton_get_selected_title(uintptr_t popup, char *out, int out_len);

int ns_popupbutton_poll_change(uintptr_t popup);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_POPUPBUTTON_H */
