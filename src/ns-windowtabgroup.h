#ifndef PHP_APPKIT_NS_WINDOWTABGROUP_H
#define PHP_APPKIT_NS_WINDOWTABGROUP_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_windowtabgroup_wrap(void *group);
void ns_windowtabgroup_destroy(uintptr_t group);
void *ns_windowtabgroup_nswindowtabgroup(uintptr_t group);
int ns_windowtabgroup_identifier(uintptr_t group, char *out, int out_len);
int ns_windowtabgroup_windows_count(uintptr_t group);
void *ns_windowtabgroup_window_at(uintptr_t group, int index);
int ns_windowtabgroup_is_overview_visible(uintptr_t group);
void ns_windowtabgroup_set_overview_visible(uintptr_t group, int visible);
int ns_windowtabgroup_is_tab_bar_visible(uintptr_t group);
void *ns_windowtabgroup_selected_window(uintptr_t group);
void ns_windowtabgroup_set_selected_window(uintptr_t group, uintptr_t window);
void ns_windowtabgroup_add_window(uintptr_t group, uintptr_t window);
void ns_windowtabgroup_insert_window(uintptr_t group, uintptr_t window, int index);
void ns_windowtabgroup_remove_window(uintptr_t group, uintptr_t window);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_WINDOWTABGROUP_H */
