#ifndef PHP_APPKIT_NS_TOOLBARITEMGROUP_H
#define PHP_APPKIT_NS_TOOLBARITEMGROUP_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_toolbaritemgroup_create(const char *identifier);
uintptr_t ns_toolbaritemgroup_group_with_titles(const char *identifier, const char **titles, int title_count, int selection_mode, const char **labels, int label_count);
uintptr_t ns_toolbaritemgroup_wrap(void *item);
void ns_toolbaritemgroup_destroy(uintptr_t item);
void *ns_toolbaritemgroup_nstoolbaritemgroup(uintptr_t item);
void ns_toolbaritemgroup_set_subitems(uintptr_t item, const uintptr_t *handles, int count);
int ns_toolbaritemgroup_subitems_count(uintptr_t item);
uintptr_t ns_toolbaritemgroup_subitem_at(uintptr_t item, int index);
void ns_toolbaritemgroup_set_control_representation(uintptr_t item, int representation);
int ns_toolbaritemgroup_get_control_representation(uintptr_t item);
void ns_toolbaritemgroup_set_selection_mode(uintptr_t item, int mode);
int ns_toolbaritemgroup_get_selection_mode(uintptr_t item);
void ns_toolbaritemgroup_set_selected_index(uintptr_t item, int index);
int ns_toolbaritemgroup_get_selected_index(uintptr_t item);
void ns_toolbaritemgroup_set_selected_at_index(uintptr_t item, int index, int flag);
int ns_toolbaritemgroup_is_selected_at_index(uintptr_t item, int index);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOOLBARITEMGROUP_H */
