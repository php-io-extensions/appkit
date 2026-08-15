#ifndef PHP_APPKIT_NS_SPLITVIEWITEM_H
#define PHP_APPKIT_NS_SPLITVIEWITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_splitviewitem_create(uintptr_t viewController);
uintptr_t ns_splitviewitem_create_sidebar(uintptr_t viewController);
uintptr_t ns_splitviewitem_create_content_list(uintptr_t viewController);
uintptr_t ns_splitviewitem_create_inspector(uintptr_t viewController);
uintptr_t ns_splitviewitem_wrap(void *item);
void ns_splitviewitem_destroy(uintptr_t item);
void *ns_splitviewitem_nssplitviewitem(uintptr_t item);
void ns_splitviewitem_set_view_controller(uintptr_t item, uintptr_t viewController);
uintptr_t ns_splitviewitem_view_controller(uintptr_t item);
void ns_splitviewitem_set_collapsed(uintptr_t item, int flag);
int ns_splitviewitem_is_collapsed(uintptr_t item);
void ns_splitviewitem_set_can_collapse(uintptr_t item, int flag);
int ns_splitviewitem_can_collapse(uintptr_t item);
void ns_splitviewitem_set_minimum_thickness(uintptr_t item, double value);
double ns_splitviewitem_get_minimum_thickness(uintptr_t item);
void ns_splitviewitem_set_maximum_thickness(uintptr_t item, double value);
double ns_splitviewitem_get_maximum_thickness(uintptr_t item);
void ns_splitviewitem_set_preferred_thickness_fraction(uintptr_t item, double value);
double ns_splitviewitem_get_preferred_thickness_fraction(uintptr_t item);
void ns_splitviewitem_set_holding_priority(uintptr_t item, double priority);
double ns_splitviewitem_get_holding_priority(uintptr_t item);
void ns_splitviewitem_set_spring_loaded(uintptr_t item, int flag);
int ns_splitviewitem_is_spring_loaded(uintptr_t item);
int ns_splitviewitem_get_behavior(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SPLITVIEWITEM_H */
