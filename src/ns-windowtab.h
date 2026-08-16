#ifndef PHP_APPKIT_NS_WINDOWTAB_H
#define PHP_APPKIT_NS_WINDOWTAB_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_windowtab_wrap(void *tab);
void ns_windowtab_destroy(uintptr_t tab);
void *ns_windowtab_nswindowtab(uintptr_t tab);
int ns_windowtab_title(uintptr_t tab, char *out, int out_len);
void ns_windowtab_set_title(uintptr_t tab, const char *title);
int ns_windowtab_tool_tip(uintptr_t tab, char *out, int out_len);
void ns_windowtab_set_tool_tip(uintptr_t tab, const char *tool_tip);
void ns_windowtab_set_accessory_view(uintptr_t tab, uintptr_t view);
uintptr_t ns_windowtab_accessory_view(uintptr_t tab);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_WINDOWTAB_H */
