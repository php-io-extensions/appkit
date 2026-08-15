#ifndef PHP_APPKIT_NS_COMBOBOX_H
#define PHP_APPKIT_NS_COMBOBOX_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_combobox_create(double x, double y, double width, double height);

void ns_combobox_destroy(uintptr_t combo);

void ns_combobox_add_item(uintptr_t combo, const char *title);

void ns_combobox_remove_all(uintptr_t combo);

void ns_combobox_set_string(uintptr_t combo, const char *value);

int ns_combobox_get_string(uintptr_t combo, char *out, int out_len);

int ns_combobox_poll_change(uintptr_t combo);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COMBOBOX_H */
