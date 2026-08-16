#ifndef PHP_APPKIT_NS_PICKERTOUCHBARITEM_H
#define PHP_APPKIT_NS_PICKERTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pickertouchbaritem_picker_with_labels(const char *identifier, const char **labels, int count, int selectionMode);
uintptr_t ns_pickertouchbaritem_picker_with_images(const char *identifier, const uintptr_t *images, int count, int selectionMode);
uintptr_t ns_pickertouchbaritem_wrap(void *item);
void ns_pickertouchbaritem_destroy(uintptr_t item);
void *ns_pickertouchbaritem_nspickertouchbaritem(uintptr_t item);
void ns_pickertouchbaritem_set_control_representation(uintptr_t item, int value);
int ns_pickertouchbaritem_get_control_representation(uintptr_t item);
void ns_pickertouchbaritem_set_collapsed_representation_label(uintptr_t item, const char *label);
int ns_pickertouchbaritem_get_collapsed_representation_label(uintptr_t item, char *out, int out_len);
void ns_pickertouchbaritem_set_selected_index(uintptr_t item, int index);
int ns_pickertouchbaritem_get_selected_index(uintptr_t item);
void ns_pickertouchbaritem_set_selection_mode(uintptr_t item, int mode);
int ns_pickertouchbaritem_get_selection_mode(uintptr_t item);
int ns_pickertouchbaritem_get_number_of_options(uintptr_t item);
void ns_pickertouchbaritem_set_label_at_index(uintptr_t item, int index, const char *label);
int ns_pickertouchbaritem_label_at_index(uintptr_t item, int index, char *out, int out_len);
void ns_pickertouchbaritem_set_enabled(uintptr_t item, int flag);
int ns_pickertouchbaritem_is_enabled(uintptr_t item);
int ns_pickertouchbaritem_poll_action(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PICKERTOUCHBARITEM_H */
