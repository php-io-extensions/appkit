#ifndef PHP_APPKIT_NS_PAGECONTROLLER_H
#define PHP_APPKIT_NS_PAGECONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pagecontroller_create(void);
uintptr_t ns_pagecontroller_wrap(void *controller);
void ns_pagecontroller_destroy(uintptr_t controller);
void *ns_pagecontroller_nspagecontroller(uintptr_t controller);
void ns_pagecontroller_set_transition_style(uintptr_t controller, int style);
int ns_pagecontroller_get_transition_style(uintptr_t controller);
void ns_pagecontroller_set_selected_index(uintptr_t controller, int index);
int ns_pagecontroller_get_selected_index(uintptr_t controller);
int ns_pagecontroller_arranged_object_count(uintptr_t controller);
void ns_pagecontroller_navigate_forward_to_object(uintptr_t controller, const char *object_id);
void ns_pagecontroller_navigate_back(uintptr_t controller);
void ns_pagecontroller_navigate_forward(uintptr_t controller);
void ns_pagecontroller_complete_transition(uintptr_t controller);
uintptr_t ns_pagecontroller_selected_view_controller(uintptr_t controller);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PAGECONTROLLER_H */
