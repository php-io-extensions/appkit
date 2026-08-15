#ifndef PHP_APPKIT_NS_SPLITVIEWCONTROLLER_H
#define PHP_APPKIT_NS_SPLITVIEWCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_splitviewcontroller_create(void);
uintptr_t ns_splitviewcontroller_wrap(void *controller);
void ns_splitviewcontroller_destroy(uintptr_t controller);
void *ns_splitviewcontroller_nssplitviewcontroller(uintptr_t controller);
void ns_splitviewcontroller_add_split_view_item(uintptr_t controller, uintptr_t item);
void ns_splitviewcontroller_remove_split_view_item(uintptr_t controller, uintptr_t item);
int ns_splitviewcontroller_split_view_item_count(uintptr_t controller);
uintptr_t ns_splitviewcontroller_split_view_item_at(uintptr_t controller, int index);
void ns_splitviewcontroller_set_minimum_thickness_for_inline_sidebars(uintptr_t controller, double value);
double ns_splitviewcontroller_get_minimum_thickness_for_inline_sidebars(uintptr_t controller);
uintptr_t ns_splitviewcontroller_split_view(uintptr_t controller);
void ns_splitviewcontroller_toggle_sidebar(uintptr_t controller);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SPLITVIEWCONTROLLER_H */
