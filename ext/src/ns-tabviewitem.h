#ifndef PHP_APPKIT_NS_TABVIEWITEM_H
#define PHP_APPKIT_NS_TABVIEWITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_tabviewitem_create(const char *identifier);
uintptr_t ns_tabviewitem_create_with_view_controller(uintptr_t viewController);
uintptr_t ns_tabviewitem_wrap(void *item);
void ns_tabviewitem_destroy(uintptr_t item);
void *ns_tabviewitem_nstabviewitem(uintptr_t item);
void ns_tabviewitem_set_label(uintptr_t item, const char *label);
int ns_tabviewitem_get_label(uintptr_t item, char *out, int out_len);
void ns_tabviewitem_set_tool_tip(uintptr_t item, const char *tip);
int ns_tabviewitem_get_tool_tip(uintptr_t item, char *out, int out_len);
void ns_tabviewitem_set_view(uintptr_t item, uintptr_t view);
uintptr_t ns_tabviewitem_view(uintptr_t item);
void ns_tabviewitem_set_view_controller(uintptr_t item, uintptr_t viewController);
uintptr_t ns_tabviewitem_view_controller(uintptr_t item);
int ns_tabviewitem_get_tab_state(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABVIEWITEM_H */
