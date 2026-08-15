#ifndef PHP_APPKIT_NS_TABVIEWCONTROLLER_H
#define PHP_APPKIT_NS_TABVIEWCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_tabviewcontroller_create(void);
uintptr_t ns_tabviewcontroller_wrap(void *controller);
void ns_tabviewcontroller_destroy(uintptr_t controller);
void *ns_tabviewcontroller_nstabviewcontroller(uintptr_t controller);
void ns_tabviewcontroller_set_tab_style(uintptr_t controller, int style);
int ns_tabviewcontroller_get_tab_style(uintptr_t controller);
void ns_tabviewcontroller_set_selected_tab_view_item_index(uintptr_t controller, int index);
int ns_tabviewcontroller_get_selected_tab_view_item_index(uintptr_t controller);
void ns_tabviewcontroller_add_tab_view_item(uintptr_t controller, uintptr_t item);
void ns_tabviewcontroller_remove_tab_view_item(uintptr_t controller, uintptr_t item);
int ns_tabviewcontroller_tab_view_item_count(uintptr_t controller);
uintptr_t ns_tabviewcontroller_tab_view(uintptr_t controller);
void ns_tabviewcontroller_set_can_propagate_selected_child_view_controller_title(uintptr_t controller, int flag);
int ns_tabviewcontroller_can_propagate_selected_child_view_controller_title(uintptr_t controller);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABVIEWCONTROLLER_H */
